#include <MC/CommandOutput.hpp>
#include <string>
using namespace std;

void CommandOutput::addMessage(std::string str) {
    addMessage(str, {}, (CommandOutputMessageType)0);
}

void CommandOutput::success(const string& str) {
    return success(str, {});
}

void CommandOutput::error(const string& str) {
    return error(str, {});
}