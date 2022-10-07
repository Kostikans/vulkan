#include "internal/pkg/app.h"

int main() {
    App app = App(800,600,"Project");
    app.Loop();

    return 0;
}