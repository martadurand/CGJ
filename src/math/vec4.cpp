#include "vec4.hpp"

math::vec4::vec4() : {} //assim vazio mm?

math::vec4::vec4(const float k) : x(k), y(k), z(k), w(k) {} //needed?

math::vec4::vec4(const float x, const float y, const float z, const float w) : x(x), y(y), z(z), w(w) {}

math::vec4::vec4(const vec4& v) : x(v.x), y(v.y), z(v.z), w(1) {} //ou w=1

math::vec4::~vec4() {}

void math::vec4::clean() {
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 0.0f;
}

float* math::vec4::data() { //what is thissss
	return nullptr;
}

const float math::vec3::quadrance() const {
	return x * x + y * y + z * z;
}

const float math::vec4::magnitude() const {
	return sqrt(magnitude());
}

float math::vec4::dotProduct(vec4 v1, vec4 v2) {
	return v1.x*v2.x + v1.y*v2.y + v1.z + v2.z;
}

const vec4 math::vec4::operator-() const {
	return vec4(-x, -y, -z, -w); //-w?
}

vec4& math::vec4::operator=(const vec4& v) {
	x = v.x;
	y = v.y;
	z = v.z;
	w = v.w;
	return *this;
}

vec4& math::vec4::operator+=(const vec4& v) {
	// TODO: insert return statement here
}

vec4& math::vec4::operator-=(const vec4& v) {
	// TODO: insert return statement here
}

vec4& math::vec4::operator*=(const vec4& v) {
	// TODO: insert return statement here
}

const vec4 math::normalize(const vec4& v) {
	return vec4();
}

const vec4 math::operator+(const vec4& v1, const vec4& v2) {
	return vec4();
}

const vec4 math::operator-(const vec4& v1, const vec4& v2) {
	return vec4();
}

const vec4 math::operator*(const vec4& v, const float k) {
	return vec4();
}

const vec4 math::operator*(const float k, const vec4& v) {
	return vec4();
}

const bool math::operator==(const vec4& v1, const vec4& v2) {
	if (v1.x == v2.x && v1.y == v2.y && v1.z == v2.z && v1.w == v2.w)
		return true;
	else
		return false;
}

const bool math::operator!=(const vec4& v1, const vec4& v2) {
	if (v1.x != v2.x || v1.y != v2.y || v1.z != v2.z || v1.w != v2.w)
		return true;
	else
		return false; //ou s� return !operator==(v1,v2);
}

std::ostream& math::operator<<(std::ostream& os, const vec4& v) {
	os << "vec4[" << v.x << "," << v.y << "," << v.z << "," << v.w << "]";
	return os;
}

std::istream& math::operator>>(std::istream& is, vec4& v) {
	is >> v.x;
	is >> v.y;
	is >> v.z;
	is >> v.w;
	return is;
}