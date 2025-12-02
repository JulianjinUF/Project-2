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

        intParsingTable();  TODO: I will leave this to someeone to do take the parsing table from the PDF and the convert the rows and columns into key-value mappings.
    }
bool parse(const std::string &input);
private:

// Data member sections

// This will be for the LL(1) parsing where we get the top of the stack = last element in the vector
std::vector<char> parsingStack;

// Parsing table: (Nonterminal, lookahead terminal) 
 TODO: Someone will fill this table in intParsingTable().
std::unordered_map<TableKey, Production RHS> parsingTable;

TODO: Initialize parsingTable with entires from the pdf
void initParsingTable();

// this is to push a sring onto the stack
void pushRHS(const std::string &rhs);

TODO: Print current stack state for tracing
void printStack() const;

//checking to see if the symbol is a NONTerminal
bool isNonTerminal(char X) const{
    retrun (X == 'E' || X == 'Q' || X == 'T' || X == 'R' || X == 'F');
    }

// Last one is to check if its empty or epsilon
bool isEpsilon(const std::string &rhs) const{
    return (rhs.empty() || rhs == "e" || rhs == "ε");
    }

};

TODO: Initialize the parsing table based on the table in the pdf
// this is just the skeleton delete this comment after you finish
void PredictiveParser::initParsingTable(){
    
}

// This is for the pushRHS where we push a production RHS to the stack
void PredictivetveParser::pushRHS(const std::string &rhs){
    if (isEpsilon(rhs)){
        return;
    }
    for (int i = static_Cast<int>(rhs.size()) - 1; i >= 0; --i){
        parsingStack.push_back(rhs[i]);
    }
}

TODO: printStack show current stack contents for tracing
//below is the skeleton delete this message once you finish 
void PredictiveParser::printStack() const {
    
}

TODO:: Assume input already ends with $ implements the predictive parsing algorithm using parsing table and calls printStack after each match or rule
// also the skeleton just delete this message
bool PredictiveParser::parse(const std::string &input){
    //This one should be a bit long as you need to call printstack and if the top is a terminal or $ 
    //pop and avance input else return false
    // if top is a non-terminal look up productions RHS in parsingtable
    // if there is no entry at all it should return false, if not pop non-terminal, then push RHS
    // if both stack top and lookahead are $ it would accept and return true

    return false;
}
int main(){
PredictiveParser parser;

std::string input;

std::cout << "Enter input string ending with $: ";
std::getline(std::cin, input);
    
bool accepted = parser.parse(input);

if (accepted){
    std::cout << "String is accepted / valid.\n";
} else {
        std::cout << "String is not accepted / invalid\n";
    }
    return 0;
}    


