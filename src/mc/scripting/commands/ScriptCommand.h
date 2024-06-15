#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptCommand {
public:
    // prevent constructor by default
    ScriptCommand& operator=(ScriptCommand const&);
    ScriptCommand(ScriptCommand const&);
    ScriptCommand();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptCommand@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ScriptCommand(std::string const& commandString);

    // symbol: ?getMessages@ScriptCommand@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getMessages() const;

    // symbol: ?getSuccessCount@ScriptCommand@@QEBAHXZ
    MCAPI int getSuccessCount() const;

    // symbol: ?setOutput@ScriptCommand@@QEAAXH$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setOutput(int successCount, std::string&& messages);

    // NOLINTEND
};
