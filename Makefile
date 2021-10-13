CXX = g++
LIB = -L/data/protobuf/2.5.0_x64/lib/
INC = -I ./
CXXFLAGS = -DSNACC_DEEP_COPY -DHAVE_VARIABLE_SIZED_AUTOMATIC_ARRAYS -Wno-deprecated  -fPIC
 
TARGET = main
 
SRC=$(wildcard ./*.cpp)
 
OBJ=$(patsubst %.cpp, %.o, $(SRC))
 
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIB) -ljsoncpp
 
$(OBJ):%.o: %.cpp
	$(CXX) $(CXXFLAGS)  $(INC) -o $@ -c $<
 
clean:
	rm -f *.o
	rm -f $(TARGET)
	rm -f *.json