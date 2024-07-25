#include <iostream>
#include <queue>

template<class T> class Supermarkt{
private:
    std::queue<T> q;
public:
    void anstellen(T t) {
        q.push(t);
    }
    void kassieren() {
        if(!q.empty()) {
            std::cout << q.front() << " wurde kassiert.\n";
            q.pop();
        }
        else {
            std::cout << "Schlange ist leer." << std::endl;
        }
    }
};