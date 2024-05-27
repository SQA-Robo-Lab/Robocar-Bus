#include <I2cCustomLib.hpp>

I2cReceiver rcv = {
    "debug",
    nullptr,
};

char *message = "trololol";

void setup()
{
    i2cCommunication_setup(1);
    initAndRegisterI2cReceiver(&rcv,
                               rcv.messageTypeName,
                               10,
                               50,
                               false);
    sendI2cMessage(0,
                   rcv.messageTypeName,
                   (byte *)message,
                   8);
}

void loop()
{
}