#include "vector_unit_tests.hpp"
#include <ctime>

////////// VECTOR 2 TESTS //////////
void vec2_tests() {	
	std::cout << "***VECTOR 2 TESTS*** \n" << std::endl;
	
	math::vec2 v1 = math::vec2(1, 0);
	math::vec2 v2 = math::vec2(0, 2);
	
	// test sum //
	std::cout << "Sum:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 + v2 = " << v1 + v2 << "\n" << std::endl;

	// test subtraction //
	std::cout << "Subtraction:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 - v2 = " << v1 - v2 << "\n" << std::endl;

	// test multiplication
	std::cout << "Multiplication:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v1 * 3 = " << v1 * 3 << "\n" << std::endl;

	// test division
	std::cout << "Division:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v1 / 2 = " << v1 / 2 << "\n" << std::endl;

	// test normalization (which also tests magnitude and quadrance)
	std::cout << "Normalization:" << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v2 normalized = " << v2.normalize() << "\n" << std::endl;

	//test dot product
	std::cout << "Dot Product:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 dot v2 = " << math::vec2::dotProduct(v1, v2) << "\n \n" << std::endl;

}

////////// VECTOR 3 TESTS //////////
void vec3_tests() {
	std::cout << "***VECTOR 3 TESTS*** \n" << std::endl;

	math::vec3 v1 = math::vec3(1, 0, 0);
	math::vec3 v2 = math::vec3(0, 2, 0);
	math::vec3 v3 = math::vec3(0, 0, 3);

	// test sum //
	std::cout << "Sum:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v3: " << v3 << std::endl;
	std::cout << "v1 + v2 + v3 = " << v1 + v2 + v3 << "\n" << std::endl;

	// test subtraction //
	std::cout << "Subtraction:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v3: " << v3 << std::endl;
	std::cout << "v1 - v2 - v3 = " << v1 - v2 - v3 << "\n" << std::endl;

	// test multiplication
	std::cout << "Multiplication:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v1 * 3 = " << v1 * 3 << "\n" << std::endl;

	// test division
	std::cout << "Division:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v1 / 2 = " << v1 / 2 << "\n" << std::endl;

	// test normalization (which also tests magnitude and quadrance)
	std::cout << "Normalization:" << std::endl;
	std::cout << "v3: " << v3 << std::endl;
	std::cout << "v3 normalized = " << v3.normalize() << "\n" << std::endl;

	//test dot product
	std::cout << "Dot Product:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 dot v2 = " << math::vec3::dotProduct(v1, v2) << "\n" << std::endl;

	//test cross product
	std::cout << "Cross Product:" << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v3: " << v3 << std::endl;
	std::cout << "v2 x v3 = " << math::vec3::crossProduct(v2, v3) << "\n \n" << std::endl;

}

////////// VECTOR 4 TESTS //////////
void vec4_tests() {
	std::cout << "***VECTOR 4 TESTS*** \n" << std::endl;

	math::vec4 v1 = math::vec4(1, 0, 0, 0);
	math::vec4 v2 = math::vec4(0, 2, 0, 1);
	math::vec4 v3 = math::vec4(2, 3, 1, 0);

	// test sum //
	std::cout << "Sum:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 + v2 = " << v1 + v2 << "\n" << std::endl;

	// test subtraction //
	std::cout << "Subtraction:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 - v2 = " << v1 - v2 << "\n" << std::endl;

	// test multiplication
	std::cout << "Multiplication:" << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v2 * 3 = " << v2 * 3 << "\n" << std::endl;

	// test division
	std::cout << "Division:" << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v2 / 2 = " << v2 / 2 << "\n" << std::endl;

	// test normalization (which also tests magnitude and quadrance)
	std::cout << "Normalization:" << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v2 normalized = " << v2.normalize() << "\n" << std::endl;

	//test dot product
	std::cout << "Dot Product:" << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 dot v2 = " << math::vec4::dotProduct(v1, v2) << "\n" << std::endl;

	//test cross product
	std::cout << "Cross Product:" << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v3: " << v3 << std::endl;
	std::cout << "v2 x v3 = " << math::vec4::crossProduct(v2, v3) << "\n \n" << std::endl;
}

inline float random_float_1() {
	return static_cast<float>(rand()) / static_cast<float>(RAND_MAX / 2.0f) - 1.0f;
}

void aula01() {
	std::cout << "***TESTE AULA***" << std::endl; //vector triple product

	srand(static_cast<unsigned> (time(0)));
	math::vec3 i;
	math::vec3 j;
	math::vec3 k;

	for (int m = 0; m < 9; m++) {
		i = math::vec3(random_float_1(), random_float_1(), random_float_1());
		j = math::vec3(random_float_1(), random_float_1(), random_float_1());
		k = math::vec3(random_float_1(), random_float_1(), random_float_1());

		std::cout << "Test " << m + 1 << ":" << std::endl;
		std::cout << "i: " << i << std::endl;
		std::cout << "j: " << j << std::endl;
		std::cout << "k: " << k << std::endl;
		std::cout << "i x (j x k) == j * (i dot k) - k * (i dot j)  " << 
			(math::vec3::crossProduct(i, math::vec3::crossProduct(j, k)) == (j * (math::vec3::dotProduct(i, k))) - (k * (math::vec3::dotProduct(i, j)))) << "\n" << std::endl;
	}
	
	i = math::vec3(0, 0, 0);
	j = math::vec3(0, 0, 0);
	k = math::vec3(0, 0, 0);

	std::cout << "Test null vector: " << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "j: " << j << std::endl;
	std::cout << "k: " << k << std::endl;
	std::cout << "i x (j x k) == j * (i dot k) - k * (i dot j)  " <<
		(math::vec3::crossProduct(i, math::vec3::crossProduct(j, k)) == (j * (math::vec3::dotProduct(i, k))) - (k * (math::vec3::dotProduct(i, j)))) << "\n" << std::endl;

}