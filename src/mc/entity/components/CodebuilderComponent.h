#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/CodeStatus.h"

class CodebuilderComponent {
public:
    // prevent constructor by default
    CodebuilderComponent& operator=(CodebuilderComponent const&);
    CodebuilderComponent(CodebuilderComponent const&);
    CodebuilderComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getCodeStatus@CodebuilderComponent@@QEBA?AW4CodeStatus@CodeBuilderExecutionState@@XZ
    MCAPI ::CodeBuilderExecutionState::CodeStatus getCodeStatus() const;

    // symbol: ?resetCodeStatus@CodebuilderComponent@@QEAAXXZ
    MCAPI void resetCodeStatus();

    // symbol:
    // ?setCodeStatus@CodebuilderComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCodeStatus(std::string const& status);

    // symbol:
    // ?stringToCodeStatus@CodebuilderComponent@@QEBA?AW4CodeStatus@CodeBuilderExecutionState@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::CodeBuilderExecutionState::CodeStatus stringToCodeStatus(std::string const& status) const;

    // NOLINTEND
};
