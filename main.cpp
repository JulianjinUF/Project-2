// CPSC 323 - Project 2
// LL(1 Predictive Parser
#include <iostream>
#include <string>
# include <vector>
#include <unordered_map>

using TableKey = std::string;
using ProductionRHS = std::string;

// Below this is a helper functions to build a map key for terminal and nonterminal
TableKey makeKey (char nonterminal, char terminal){
    std::string key;
    key.push_back(nonterminal);
    key.push_back(' ');
    key.pushback(terminal);
    return key
}
// This will be the predictive parser class
class PredictiveParser{
public:
// This one here is the Constructor. Sets up the stack and the parsing tabele
PredictiveParser(){
        parsingStack.push_back('$');
        parsingStack.push_back('E');

        intParsingTable(); // TODO: I will leave this to someeone to do take the parsing table from the PDF and the convert the rows and columns into key-value mappings.
    }
bool parse(const std::string &input);
private:

// Data member sections

// This will be for the LL(1) parsing where we get the top of the stack = last element in the vector
std::vector<char> parsingStack;

// Parsing table: (Nonterminal, lookahead terminal) 
// TODO: Someone wukk fill this table in intParsingTable().
std::unordered_map<TableKey, Production RHS> parsingTable;




}
