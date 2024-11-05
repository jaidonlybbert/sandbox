#include "Input.h"
#include "Types.h"
using namespace sbx::schema;

int main() {
	flatbuffers::FlatBufferBuilder builder(1024);
	Vec2 cursor = Vec2(0.1f, 0.1f);	
	float forward = 0.1f;
	float backward = 0.1f;
	float left = 0.1f;
	float right = 0.1f;
	auto input = CreateInput(builder, &cursor, forward, backward, left, right);
	return 0;
}
