#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "ExprDriver.h"

using namespace antlr4;
using namespace std;

int main(int argc, const char* argv[]) {
	std::ifstream stream;
	stream.open(argv[1]);

	ANTLRInputStream input(stream);
	ExprLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	ExprParser parser(&tokens);

	tree::ParseTree* tree = parser.prog();
	ExprDriver* driver = new ExprDriver();
	driver->visit(tree);
	delete driver;

	return 0;
}