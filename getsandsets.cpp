#include <iostream>

class SmartBulb{
    private:
        bool status;
        std::string colour;
        double powerOutput;
    public:
        bool getStatus(){
            return status;
        }
        void setStatus(bool status){
            this->status = status;
        }

        std::string getColour(){
            return colour;
        }
        void setColour(std::string colour){
            this->colour = colour;
        }

        double getPowerOutput(){
            return powerOutput;
        }
        void setPowerOutput(double powerOutput){
            if (powerOutput > 0){
                this->powerOutput = powerOutput;
            } else{
                this->powerOutput = 0;
            }
        }

        SmartBulb(bool status, std::string colour, double powerOutput){
            setStatus(status);
            setColour(colour);
            setPowerOutput(powerOutput);
        }
};

int main(){
    SmartBulb smartBulb1 (1, "Pink", -67);
    std::cout << "Status: " << smartBulb1.getStatus() << '\n';
    std::cout << "Colour: " << smartBulb1.getColour() << '\n';
    std::cout << "Power Output: " << smartBulb1.getPowerOutput() << '\n';

    return 0;
}