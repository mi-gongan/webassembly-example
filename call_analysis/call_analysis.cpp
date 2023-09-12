/*

[ 컴파일 및 디버깅 방법 ]
	emcc -lembind -o call_analysis.js call_analysis.cpp
	python -m http.server 8080
	
*/

#include <emscripten/bind.h>

using namespace emscripten;

float my_analysis(float a, float b, float c) 
{
    return a + b * c;
}

EMSCRIPTEN_BINDINGS(my_module) 
{
    emscripten::function("analysis", &my_analysis);
}



