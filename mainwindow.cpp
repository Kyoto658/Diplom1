#include "mainwindow.h"
#include "ui_mainwindow.h"
extern void utilAssert(int e, const char* file, int line);

#define ASSERT(e) utilAssert(!!(e), __FILE__, __LINE__)

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->radioButton_9->setVisible(false);
    ui->radioButton_10->setVisible(false);
    ui->radioButton_11->setVisible(false);
    ui->comboBox->setVisible(false);
    ui->label->setStyleSheet("image: url(:/img/CryptoEtalon.png);");
    ui->textBrowser_3->setVisible(false);
    ui->lineEdit->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString hash(QString str,  octet hash[32])
{
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }


    typedef err_t (*beltHashType)(octet *, const void *, size_t);

    beltHashType beltHash = reinterpret_cast<beltHashType>(lib.resolve("beltHash"));
    QByteArray msg;
    msg = QByteArray::fromHex( "B194BAC8 0A08F53B 366D008E 58 ");
    qDebug() << "msg.size="<< msg.size();
    if (beltHash) {

        err_t t = beltHash(hash, msg, msg.size());

        if (t == ERR_OK) {
            QByteArray hexData = QByteArray::fromRawData((const char *)hash, 32).toHex();
            QString str = QString::fromLocal8Bit(hexData);
            qDebug() << str;
            return str;
        }
    } else {
        str = "Произошла ошибка";
        return str;
    }

}

QString hashing(QString str, int i)
{
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }


    typedef err_t (*beltHashType)(octet *, const void *, size_t);

    beltHashType beltHash = reinterpret_cast<beltHashType>(lib.resolve("beltHash"));

    QByteArray msg;




    if (i == 1) {
        msg = QByteArray::fromHex(

            "B194BAC8 0A08F53B 366D008E 58 "

            "");

    } else if (i == 2) {
        msg = QByteArray::fromHex(

            "B194BAC8 0A08F53B 366D008E 584A5DE4 8504FA9D 1BB6C7AC 252E72C2 02FDCE0D "

            "");
    } else if (i == 3) {
        msg = QByteArray::fromHex(

            "B194BAC8 0A08F53B 366D008E 584A5DE4 8504FA9D 1BB6C7AC 252E72C2 02FDCE0D "

            "5BE3D612 17B96181 FE6786AD 716B890B");
    }
    octet hash[32];
    qDebug() << msg.size();
    if (beltHash) {

        err_t t = beltHash(hash, msg, msg.size());

        if (t == ERR_OK) {

            //qDebug() << QByteArray::fromRawData((const char *)hash, 32).toHex();
            QByteArray hexData = QByteArray::fromRawData((const char *)hash, 32).toHex();
            QString str = QString::fromLocal8Bit(hexData);
            qDebug() << str;

            return str;
            //emit sendData(hexData);


        }

    } else {

        qDebug() << "Функция не найдена в библиотеке";

    }
}

typedef struct
{
    const octet* X;		/*< дополнительное слово */
    size_t count;		/*< размер X в октетах */
    size_t offset;		/*< текущее смещение в X */
    octet state_ex[];	/*< состояние brngCTR */
} brng_ctrx_st;

typedef struct
{
    size_t l;		/*!< уровень стойкости (128, 192 или 256) */
    octet p[64];	/*!< модуль p */
    octet a[64];	/*!< коэффициент a */
    octet b[64];	/*!< коэффициент b */
    octet q[64];	/*!< порядок q */
    octet yG[64];	/*!< y-координата точки G */
    octet seed[8];  /*!< параметр seed */
} bign_params;

bool_t memIsValid(const void* buf, size_t count)
{
    return count == 0 || buf != 0;
}

void utilAssert(int b, const char* file, int line)
{
    if (!b)
    {
        fprintf(stderr, "Assertion in %s::%d\n", file, line);
        abort();
    }
}
bool_t memIsDisjoint(const void* buf1, const void* buf2, size_t count)
{
    ASSERT(memIsValid(buf1, count));
    ASSERT(memIsValid(buf2, count));
    return count == 0 || (const octet*)buf1 + count <= (const octet*)buf2 ||
           (const octet*)buf1 >= (const octet*)buf2 + count;
}

void memCopy(void* dest, const void* src, size_t count)
{
    ASSERT(memIsDisjoint(src, dest, count));
    if (count)
        memcpy(dest, src, count);
}

static void brngCTRXStart(const octet key[32], const octet iv[32],
                          const void* X, size_t count, void* state)
{
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }

    typedef void (*brngCTRStartType)(
        void* state,			/*!< [out] состояние */
        const octet key[32],	/*!< [in] ключ */
        const octet iv[32]		/*!< [in] синхропосылка */
        );

    brngCTRStartType brngCTRStart = reinterpret_cast<brngCTRStartType>(lib.resolve("brngCTRStart"));
    qDebug()<<"brngCTRStart.resolve="<<lib.resolve("brngCTRStart");

    typedef size_t (*brngCTR_keepType)();
    brngCTR_keepType brngCTR_keep = reinterpret_cast<brngCTR_keepType>(lib.resolve("brngCTR_keep"));
    qDebug()<<"brngCTR_keep=" <<lib.resolve("brngCTR_keep");

    brng_ctrx_st* s = (brng_ctrx_st*)state;
    ASSERT(memIsValid(s, sizeof(brng_ctrx_st)));
    ASSERT(count > 0);
    ASSERT(memIsValid(s->state_ex, brngCTR_keep()));
    brngCTRStart(s->state_ex, key, iv);
    s->X = (const octet*)X;
    s->count = count;
    s->offset = 0;
}


static void brngCTRXStepR(void* buf, size_t count, void* stack)
{
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }

    typedef void (*brngCTRStepRType)(
        void* buf,			/*!< [in,out] дополн. / псевдослучайные данные */
        size_t count,		/*!< [in] число октетов buf */
        void* state			/*!< [in,out] состояние */
        );

    brngCTRStepRType brngCTRStepR = reinterpret_cast<brngCTRStepRType>(lib.resolve("brngCTRStepR"));
    qDebug()<<"brngCTRStepR.resolve="<<lib.resolve("brngCTRStepR");

    brng_ctrx_st* s = (brng_ctrx_st*)stack;
    octet* buf1 = (octet*)buf;
    size_t count1 = count;
    ASSERT(memIsValid(s, sizeof(brng_ctrx_st)));
    // заполнить buf
    while (count1)
        if (count1 < s->count - s->offset)
        {
            memCopy(buf1, s->X + s->offset, count1);
            s->offset += count1;
            count1 = 0;
        }
        else
        {
            memCopy(buf1, s->X + s->offset, s->count - s->offset);
            buf1 += s->count - s->offset;
            count1 -= s->count - s->offset;
            s->offset = 0;
        }
    // сгенерировать
    // qDebug()<<count;
    count = 0;
    brngCTRStepR(buf, count, s->state_ex);
}

bign_params params ()
{
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }

    typedef err_t (*bignParamsType)(bign_params* params,	/*!< [out] стандартные параметры */
                                    const char* name		/*!< [in] имя параметров */);

    bignParamsType bignParamsStd = reinterpret_cast<bignParamsType>(lib.resolve("bignParamsStd"));
    qDebug()<<lib.resolve("bignParamsStd");

    const char* name = "1.2.112.0.2.0.34.101.45.3.1";

    bign_params a;
    bign_params *params = &a;

    err_t t = bignParamsStd(params, name);

    // qDebug()<<"params not params:";
    // qDebug() << params->l;
    // qDebug() << params->seed;
    // qDebug() <<QByteArray::fromRawData((const char *)params->seed, 8).toHex();
    // qDebug() <<QByteArray::fromRawData((const char *)params->p, 32).toHex();
    // qDebug() <<QByteArray::fromRawData((const char *)params->b, 32).toHex();
    // qDebug() <<QByteArray::fromRawData((const char *)a.seed, 8).toHex();

    return a;
}



void key_gen (const bign_params* paramets, octet privkey[64], octet pubkey[128])
{
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }

    typedef err_t (*bignKeypairGenType)(
        octet privkey[],			/*!< [out] личный ключ */
        octet pubkey[],				/*!< [out] открытый ключ */
        const bign_params* params,	/*!< [in] долговременные параметры */
        gen_i rng,				/*!< [in] генератор случайных чисел */
        void* rng_state				/*!< [in,out] состояние генератора */
        );

    typedef void (*brngCTRStepRType)(
        void* buf,			/*!< [in,out] дополн. / псевдослучайные данные */
        size_t count,		/*!< [in] число октетов buf */
        void* state			/*!< [in,out] состояние */
        );

    typedef err_t (*bignKeypairValType)(
        const bign_params* params,	/*!< [in] долговременные параметры */
        const octet privkey[],		/*!< [in] личный ключ */
        const octet pubkey[]		/*!< [in] открытый ключ */
        );

    typedef const octet* (*beltHType)();

    brngCTRStepRType brngCTRStepR = reinterpret_cast<brngCTRStepRType>(lib.resolve("brngCTRStepR"));
    qDebug()<<"brngCTRStepR.resolve="<<lib.resolve("brngCTRStepR");

    bignKeypairGenType bignKeypairGen = reinterpret_cast<bignKeypairGenType>(lib.resolve("bignKeypairGen"));
    qDebug()<<"bignKeypairGen.resolve=" <<lib.resolve("bignKeypairGen");

    beltHType beltH = reinterpret_cast<beltHType>(lib.resolve("beltH"));
    qDebug()<<"beltH.resolve=" <<lib.resolve("beltH");

    bignKeypairValType bignKeypairVal = reinterpret_cast<bignKeypairValType>(lib.resolve("bignKeypairVal"));
    qDebug()<<"bignKeypairVal.resolve=" <<lib.resolve("bignKeypairVal");

    octet brng_state[1024];

    qDebug()<<"state before start  " << brng_state;

    brngCTRXStart(beltH() + 128, beltH() + 128 + 64, beltH(), 8 * 32, brng_state);

    //qDebug() <<"До функции:"<< QByteArray::fromRawData((const char *)privkey, 32).toHex();
    //qDebug() << QByteArray::fromRawData((const char *)pubkey, 32).toHex();

    qDebug()<<"state before step   " << brng_state;

    err_t v = bignKeypairGen (privkey, pubkey, paramets,  brngCTRXStepR, brng_state);

    if (v==ERR_OK)
    {
        qDebug()<<"key pair gen OK";
    }
    else
        qDebug()<<"v="<<v;

    qDebug()<<"state = " << brng_state;

    qDebug() <<"после функции:"<< QByteArray::fromRawData((const char *)privkey, 32).toHex();
    qDebug() << QByteArray::fromRawData((const char *)pubkey, 32).toHex();

    err_t t = bignKeypairVal(paramets,privkey,pubkey);

    if (t==ERR_OK)
    {
        qDebug()<<"key pair is valid";
    }
    else
        qDebug()<<"t="<<t;
}


QString Sign (octet sig[], const bign_params* paramets)
{
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }


    typedef err_t  (*bignSignType)(
        octet sig[],    /*!< [out] подпись */
        const bign_params* params, /*!< [in] долговременные параметры */
        const octet oid_der[],  /*!< [in] идентификатор хэш-алгоритма */
        size_t oid_len,    /*!< [in] длина oid_der в октетах */
        const octet hash[],   /*!< [in] хэш-значение */
        const octet privkey[],  /*!< [in] личный ключ */
        gen_i rng,     /*!< [in] генератор случайных чисел */
        void* rng_state    /*!< [in,out] состояние генератора */
        );

    bignSignType bignSign = reinterpret_cast<bignSignType>(lib.resolve("bignSign"));

    qDebug() << "bignSign.resolve="<<lib.resolve("bignSign");

    typedef err_t (*bignOidToDERType)(
        octet der[],  /*!< [out] DER-код идентификатора */
        size_t* count,  /*!< [in,out] длина буфера der / длина DER-кода */
        const char* oid  /*!< [in] строковое представление идентификатора */
        );

    bignOidToDERType bignOidToDER = reinterpret_cast<bignOidToDERType>(lib.resolve("bignOidToDER"));

    qDebug() << "bignOidToDER.resolve="<<lib.resolve("bignOidToDER");
    octet der[16];
    size_t* count;
    size_t count1 = 32;
    count = &count1;
    qDebug()<<"der="<< QByteArray::fromRawData((const char *)der, 32).toHex();;
    const char* oid = "1 2 112 0 2 0 34 101 31 81";

    err_t v = bignOidToDER (der, count, oid);
    if (v==ERR_OK)
    {
        qDebug()<<"key pair gen OK";
    }
    else
        qDebug()<<"v="<<v;

    octet brng_state[1024];


    bign_params parametrs= params();
    paramets=&parametrs;
    octet privkey[32];
    octet pubkey[64];

    key_gen(paramets, privkey, pubkey);


    QString str;
    octet hash1[32];

    hash(str, hash1);

    qDebug() << str;



    err_t t = bignSign(sig, paramets,der, 64, hash1, privkey, brngCTRXStepR, brng_state);

    qDebug() << t;

    QByteArray hexData = QByteArray::fromRawData((const char *)sig, 32).toHex();
    str = QString::fromLocal8Bit(hexData);
    qDebug() << str;
    return str;

}




QString hashing1(QString str, int l, int m, int x){
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }


    typedef err_t (*bashHashType)(octet *,size_t, const void *, size_t);

    bashHashType bashHash = reinterpret_cast<bashHashType>(lib.resolve("bashHash"));

    QByteArray msg;

        msg = QByteArray::fromHex(

            "B194BAC80A08F53B 366D008E584A5DE4 8504FA9D1BB6C7AC 252E72C202FDCE0D "
            "5BE3D61217B96181 FE6786AD716B890B 5CB0C0FF33C356B8 35C405AED8E07F99 "
            "E12BDC1AE28257EC 703FCCF095EE8DF1 C1AB76389FE678CA F7C6F860D5BB9C4F "
            "F33C657B637C306A DD4EA7799EB23D31 3E98B56E27D3BCCF 591E181F4C5AB793 "
            "E9DEE72C8F0C0FA6 2DDB49F46F739647 06075316ED247A37 39CBA38303A98BF6 "
            "92BD9B1CE5D14101 5445FBC95E4D0EF2 682080AA227D642F 2687F93490405511");

    octet hash[x];


    if (bashHash) {

        err_t t = bashHash(hash, l, msg, m);

        if (t == ERR_OK) {

            //qDebug() << QByteArray::fromRawData((const char *)hash, 32).toHex();
            QByteArray hexData = QByteArray::fromRawData((const char *)hash, x).toHex();
            QString str = QString::fromLocal8Bit(hexData);
            qDebug() << str;

            return str;

            //emit sendData(hexData);


        }

    } else {

        qDebug() << "Функция не найдена в библиотеке";

    }
}

QString bels(QString str, int l, int m){
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }


    typedef err_t (*belsShare3Type)(octet *,size_t,size_t,size_t, const void *);

    belsShare3Type belsShare3 = reinterpret_cast<belsShare3Type>(lib.resolve("belsShare3"));

    QByteArray msg;

    msg = QByteArray::fromHex(

        "B194BAC8 0A08F53B 366D008E 584A5DE4"
        );

    octet hash[192];
    const octet msg1[]="B194BAC80A08F53B366D008E584A5DE4";
    qDebug() << QByteArray::fromRawData((const char *)msg1, 33).constData();


    if (belsShare3) {

        err_t t = belsShare3 (hash, 5, 3, 32, msg);

        if (t == ERR_OK) {

            //qDebug() << QByteArray::fromRawData((const char *)hash, 32).toHex();
            QByteArray hexData = QByteArray::fromRawData((const char *)hash, 192).toHex();
            QString str = QString::fromLocal8Bit(hexData);
            qDebug() << str;

            return str;

            //emit sendData(hexData);


        }

    } else {

        qDebug() << "Функция не найдена в библиотеке";

    }
}

QString belt(QString str, int l, int m){
    QString pwd = "E:\\Bee2\\bee2-master\\win\\vs15\\distrib\\Debug64\\bee2.dll";

    QLibrary lib(pwd);

    lib.load();

    if (!lib.isLoaded()) {

        qDebug() << "Выполнение невозможно: библиотека bee2.dll не была "

                    "загружена!\n Причина ошибки: " +

                        lib.errorString();

        exit(1);

    }
    else{
        qDebug() << "Библиотека была удачно загружена!";
    }


    typedef err_t (*beltMACType)(octet *, const void *, size_t, const void *, size_t);

    beltMACType beltMAC = reinterpret_cast<beltMACType>(lib.resolve("beltMAC"));

    QByteArray msgMAC;
    msgMAC = QByteArray::fromHex(

        "B194BAC8 0A08F53B 366D008E 58 ");
    QByteArray key = QByteArray::fromHex("E9DEE72C 8F0C0FA6 2DDB49F4 6F739647 06075316 ED247A37 39CBA383 03A98BF6");
    octet mac[8];

    if (beltMAC) {

        err_t v = beltMAC(mac, msgMAC, msgMAC.size(), key, 32);

        if (v == ERR_OK) {

            QByteArray hexData = QByteArray::fromRawData((const char *)mac, 8).toHex();
            QString str = QString::fromLocal8Bit(hexData);
            qDebug() << str;

            return str;
        }

    } else {

        qDebug() << "Функция не найдена в библиотеке";

    }
}

void MainWindow::on_radioButton_2_clicked()
{

}


void MainWindow::on_radioButton_11_clicked()
{
    QString i= hashing("", 1);
    ui->textBrowser_3->setVisible(true);
    ui->textBrowser_3->setText(i);;

    ui->statusbar->showMessage(i);
}

void MainWindow::on_radioButton_9_clicked()
{
    QString i= belt("", 2,3);
    ui->statusbar->showMessage(i);
    ui->textBrowser_3->setVisible(true);
    ui->textBrowser_3->setText(i);
}


void MainWindow::on_radioButton_10_clicked()
{
    QString i= bels("", 3,3);
    ui->statusbar->showMessage(i);
    ui->textBrowser_3->setVisible(true);
    ui->textBrowser_3->setText(i);

}


void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    ui->radioButton_9->setVisible(false);
    ui->radioButton_10->setVisible(false);
    ui->radioButton_11->setVisible(false);
    ui->textBrowser->setVisible(false);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->comboBox->setVisible(false);
    ui->textBrowser_3->setVisible(false);
    ui->lineEdit->setVisible(false);
    if (item->text(0)=="Хеширование (beltHash)"){
        ui->radioButton_9->setVisible(true);
        ui->radioButton_10->setVisible(true);
        ui->radioButton_11->setVisible(true);

    }
    if (item->text(0)=="Хеширование (bashHash)"){
    ui->comboBox->setVisible(true);
        ui->label_2->setVisible(true);
        ui->label_3->setVisible(true);
        ui->lineEdit->setVisible(true);
    ui->label_2->setText("Ввод данных");
    ui->label_3->setText("Выберите уровень стойкости: L = ");
    }
    if (item->text(0)=="Выработка и проверка ЭЦП"){
        octet sig[32];
        const bign_params* paramets;
        QString i= Sign(sig, paramets);
        ui->textBrowser_3->setVisible(true);
        ui->textBrowser_3->setText(i);;

        ui->statusbar->showMessage(i);
    }


}





void MainWindow::on_comboBox_activated(int index)
{
    if (index == 0){
        QString i= hashing1("", 128,127,32);
        ui->textBrowser_3->setVisible(true);
        ui->textBrowser_3->setText(i);
    }
    if (index == 1){
        QString i= hashing1("", 192,95,48);
        ui->textBrowser_3->setVisible(true);
        ui->textBrowser_3->setText(i);
    }
    if (index == 2){

        QString i= hashing1("", 256,63,64);
        ui->textBrowser_3->setVisible(true);
        ui->textBrowser_3->setText(i);

    }

}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    qDebug() << arg1;
}




