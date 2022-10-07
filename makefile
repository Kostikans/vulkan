CFLAGS = -std=c++20 -O2 
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 

Engine: main.cpp
	g++ $(CFLAGS) -o Engine main.cpp internal/pkg/rendering/window/window.cpp  internal/pkg/app.cpp internal/pkg/rendering/rendering.cpp internal/pkg/rendering/instance/instance.cpp $(LDFLAGS)

.PHONY: build clean

build: Engine
	mkdir Build
	cp -R ./Engine Build
	rm -f Engine
	./build/Engine
	 $(MAKE) clean

clean: 
	rm -rf Build