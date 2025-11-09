#include "pch.h"
#include "CppUnitTest.h"
// Обов'язково змініть шлях на шлях до вашого нового .cpp файлу
#include "../Lab 5.1/Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab51 // Назвіть цей namespace відповідно до вашого проєкту
{
	TEST_CLASS(UnitTestLab51) // І цей клас так само
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Тестуємо: h(a, b) = a*a - b*b
			// Візьмемо прості значення: a = 3.0, b = 2.0

			double a = 3.0;
			double b = 2.0;

			// Очікуваний результат: (3.0 * 3.0) - (2.0 * 2.0) = 9.0 - 4.0 = 5.0
			double expected = 5.0;

			// Виклик функції
			double actual = h(a, b);

			// Перевірка, чи збігаються результати
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}