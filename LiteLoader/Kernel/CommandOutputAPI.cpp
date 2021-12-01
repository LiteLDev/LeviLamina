#include <MC/CommandOutput.hpp>
#include <string>
using namespace std;

void CommandOutput::addMessage(std::string str) {
    SymCall("?addMessage@CommandOutput@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@W4CommandOutputMessageType@@@Z",
        void, void*, std::string const&, std::vector<CommandOutputParameter> const&, int)
        (this, str, {}, 0);
}

void CommandOutput::success(const string& str) {
    return success(str, {});
}

void CommandOutput::error(const string& str) {
    return error(str, {});
}