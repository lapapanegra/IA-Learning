#include <iostream>
#include <vector>

using vi = std::vector<int>;
using vf = std::vector<float>;
using vd = std::vector<double>;

template<typename T>
void print(const std::vector<T>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i){
        std::cout << vec[i];
        if (i < vec.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

template<typename T>
void print(T x) {
    std::cout << x << std::endl;
}

class Neuron{
    public:
        int inputs;
        int outputs;

        Neuron(int x, int y) :
            inputs(x),
            outputs(y) 
            {

            };

        void coso() {
            print(inputs);
            print(outputs);
        }
};

int main() {
    Neuron NLS(5, 5);
    NLS.coso();
    
    return 0;
}