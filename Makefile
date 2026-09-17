RAYLIB_PREFIX := $(shell brew --prefix raylib 2>/dev/null)

CXX := clang++
CXXFLAGS := -std=c++17 -Wall -I$(RAYLIB_PREFIX)/include
LDFLAGS := -L$(RAYLIB_PREFIX)/lib -lraylib \
	-framework CoreVideo -framework IOKit -framework Cocoa \
	-framework GLUT -framework OpenGL

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
TARGET := program

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
