#include "llapi/mc/CommandOutput.hpp"

void CommandOutput::addMessage(const std::string& str) {
    this->addMessage(str, {}, (CommandOutputMessageType)0);
}

void CommandOutput::success(const std::string& str) {
    this->success(str, {});
}

void CommandOutput::error(const std::string& str) {
    this->error(str, {});
}
