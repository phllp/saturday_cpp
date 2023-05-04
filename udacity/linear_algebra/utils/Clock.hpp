#include<ctime>

class Clock {

    clock_t startTime;
    clock_t endTime;
    double timeUsed;

    public:
        void start();
        void stop();
        void printDelta();
};

void Clock::start() {
    startTime = clock();
}

void Clock::stop() {
    endTime = clock();
    timeUsed = (endTime - startTime) / CLOCKS_PER_SEC;
}

void Clock::printDelta() {
    std::cout << "Tempo decorrido: " << timeUsed << " segundos." << std::endl;
}

