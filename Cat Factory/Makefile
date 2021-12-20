CXX = g++
CXXFLAGS = -std=c++17 -g -Wall
NAME = "main"
BUILD_DIR = build
SRCS = $(wildcard *.cpp) $(wildcard */*.cpp) $(wildcard */*/*.cpp)
OBJECTS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o) 

all: clean make_directories executable
	./main

executable: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^
	
$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

make_directories:
	@mkdir -p $(BUILD_DIR)

clean:
	$(RM) *.o *.exe $(NAME)
	$(RM) -rf $(BUILD_DIR)