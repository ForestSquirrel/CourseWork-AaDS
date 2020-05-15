#include "pch.h"
#include "CppUnitTest.h"
#include"../Ford_Fulkerson/NetworkFlow.h"
#include<fstream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FordFulkersonAlgoTests
{
	TEST_CLASS(FordFulkersonAlgoTests)
	{
	public:

		TEST_METHOD(TestMethod_Ñorrect_output_for_6_vertexes)
		{
			ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input1.txt");
			NetworkFlow Flows(input);
			Assert::AreEqual(Flows.max_flow(), 5);
		}
		TEST_METHOD(TestMethod_Exception_entering_the_first_character) {
			try {
				ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input2.txt");
				NetworkFlow Flows(input);
			}
			catch (exception& ex) {
				Assert::AreEqual(ex.what(), "Error entering the first character in the string or missing a space after it. Check the correctness of the input in the file and correct these errors in the line under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Exception_entering_the_second_character) {
			try {
				ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input3.txt");
				NetworkFlow Flows(input);
			}
			catch (exception& ex) {
				Assert::AreEqual(ex.what(), "Error entering the second character in the string or missing a space after it. Check the correctness of the input in the file and correct these errors in the line under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Exception_entering_the_third_number_Flows) {
			try {
				ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input4.txt");
				NetworkFlow Flows(input);
			}
			catch (exception& ex) {
				Assert::AreEqual(ex.what(), "Error entering the third character (bandwidth) in the string or the presence of a space after it.Please note that the bandwidth cannot be negative. Check that you entered the file correctly and correct these errors in the line number: 2");
			}
		}
		TEST_METHOD(TestMethod_Exception_empty_string) {
			try {
				ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input5.txt");
				NetworkFlow Flows(input);
			}
			catch (exception& ex) {
				Assert::AreEqual(ex.what(), "A data-entry error. Check the correctness of the input in the file and correct these errors in the line under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Ñorrect_output_for_6_vertexes_and_edge_from_source_to_sink)
		{
			ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input6.txt");
			NetworkFlow Flows(input);
			Assert::AreEqual(Flows.max_flow(), 25);
		}
		TEST_METHOD(TestMethod_Ñorrect_output_for_2_vertexes_edges_from_source_to_sink)
		{
			ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input7.txt");
			NetworkFlow Flows(input);
			Assert::AreEqual(Flows.max_flow(), 20);
		}
		TEST_METHOD(TestMethod_Exception_there_is_a_path_from_the_vertex_to_itself) {
			try
			{
				ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input8.txt");
				NetworkFlow Flows(input);
			}
			catch (exception& ex) {
				Assert::AreEqual(ex.what(), "The path from the vertex to itself is impossible in the string under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Ñorrect_output_for_20_vertexes)
		{
			ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input9.txt");
			NetworkFlow Flows(input);
			Assert::AreEqual(Flows.max_flow(), 19);
		}
		TEST_METHOD(TestMethod_Exception_missing_source) {
			try
			{
				ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input10.txt");
				NetworkFlow Flows(input);
			}
			catch (exception& ex) {
				Assert::AreEqual(ex.what(), "Source is missing");
			}
		}
		TEST_METHOD(TestMethod_Exception_missing_sink) {
			try
			{
				ifstream input("C:\\Users\\Squirrel\\Desktop\\FordFulkersonAlgoTests\\Input11.txt");
				NetworkFlow Flows(input);
			}
			catch (exception& ex) {
				Assert::AreEqual(ex.what(), "Sink is missing");
			}
		}TEST_METHOD(TestMethod_MinFunctionMin){
			int a = 1;
			int b = 2;
			int m = min(a, b);
			Assert::AreEqual(m, 1);
		}TEST_METHOD(TestMethod_Exception_MinFunctionEqual) {
			int a = 1;
			int b = 1;
			int m = min(a, b);
			Assert::AreEqual(m, 1);
		}
	};
}
