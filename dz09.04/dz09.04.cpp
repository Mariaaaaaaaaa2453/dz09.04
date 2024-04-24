#include <iostream>

using namespace std;

class WorkerInterface {
public:
    virtual void performWork() = 0;
    virtual void receiveSalary() = 0;
    virtual void resignJob() = 0;
    virtual ~WorkerInterface() = default;
};

class WarehouseOperations {
public:
    virtual void addItem() = 0;
    virtual void deleteItem() = 0;
    virtual void modifyItem() = 0;
    virtual ~WarehouseOperations() = default;
};

class WarehouseManagement {
public:
    virtual void reviewItems() = 0;
    virtual void controlInventory() = 0;
    virtual ~WarehouseManagement() = default;
};

class WarehouseMerchandise {
public:
    virtual void reviewItems() = 0;
    virtual void tagItems() = 0;
    virtual ~WarehouseMerchandise() = default;
};

class WarehouseTransport {
public:
    virtual void packItems() = 0;
    virtual void unpackItems() = 0;
    virtual ~WarehouseTransport() = default;
};

class WarehouseInspection {
public:
    virtual void evaluateItems() = 0;
    virtual void categorizeItems() = 0;
    virtual ~WarehouseInspection() = default;
};

class OperationsStaff : public WarehouseOperations, public WorkerInterface {
public:
    void performWork() override {
        cout << "Operations staff is engaged in work\n";
    }

    void addItem() override {
        cout << "Operations staff is adding an item\n";
    }

    void deleteItem() override {
        cout << "Operations staff is removing an item\n";
    }

    void modifyItem() override {
        cout << "Operations staff is modifying an item\n";
    }
};

class ManagementStaff : public WarehouseManagement, public WorkerInterface {
public:
    void performWork() override {
        cout << "Management staff is engaged in work\n";
    }

    void receiveSalary() override {
        cout << "Management staff is receiving salary\n";
    }

    void resignJob() override {
        cout << "Management staff is resigning from the job\n";
    }

    void reviewItems() override {
        cout << "Management staff is reviewing items\n";
    }

    void controlInventory() override {
        cout << "Management staff is overseeing inventory\n";
    }
};

class MerchandiseStaff : public WarehouseMerchandise, public WorkerInterface {
public:
    void performWork() override {
        cout << "Merchandise staff is engaged in work\n";
    }

    void receiveSalary() override {
        cout << "Merchandise staff is receiving salary\n";
    }

    void resignJob() override {
        cout << "Merchandise staff is leaving the position\n";
    }

    void reviewItems() override {
        cout << "Merchandise staff is reviewing items\n";
    }

    void tagItems() override {
        cout << "Merchandise staff is marking items\n";
    }
};

class TransportStaff : public WarehouseTransport, public WorkerInterface {
public:
    void performWork() override {
        cout << "Transport staff is engaged in work\n";
    }

    void receiveSalary() override {
        cout << "Transport staff is receiving salary\n";
    }

    void resignJob() override {
        cout << "Transport staff is leaving the position\n";
    }

    void packItems() override {
        cout << "Transport staff is packing items\n";
    }

    void unpackItems() override {
        cout << "Transport staff is unpacking items\n";
    }
};

class InspectionStaff : public WarehouseInspection, public WorkerInterface {
public:
    void performWork() override {
        cout << "Inspection staff is engaged in work\n";
    }

    void receiveSalary() override {
        cout << "Inspection staff is receiving salary\n";
    }

    void resignJob() override {
        cout << "Inspection staff is leaving the position\n";
    }

    void evaluateItems() override {
        cout << "Inspection staff is inspecting items\n";
    }

    void categorizeItems() override {
        cout << "Inspection staff is sorting items\n";
    }
};

int main() {
    WarehouseTransport* transportWorker = new TransportStaff;
    transportWorker->packItems();

    delete transportWorker;
    return 0;
}
