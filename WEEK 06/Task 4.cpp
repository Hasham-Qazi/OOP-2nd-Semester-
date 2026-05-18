#include <iostream>
using namespace std;

class Device {
protected:
    string deviceName;
    int deviceID;
    int *data;

public:
    Device(string name, int id) {
        deviceName = name;
        deviceID = id;

        data = new int;
       *data = 100;

        cout << "Device Constructor Called\n";
    }

    ~Device() {
        delete data;
        cout << "Device Destructor Called\n";
    }
};

class Sensor : public Device {
private:
    string sensorType;
    double *sensorValue;

public:
    Sensor(string name, int id, string type, double val)
        : Device(name, id) {

        sensorType = type;
        sensorValue = new double;
        *sensorValue = val;

        cout << "Sensor Constructor Called\n";
    }

    ~Sensor() {
        delete sensorValue;
        cout << "Sensor Destructor Called\n";
    }
};

int main() {
    Sensor *s = new Sensor("TempDevice", 101, "Temperature", 36.5);

    delete s;

    return 0;
}

