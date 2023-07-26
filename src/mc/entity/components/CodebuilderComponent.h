#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilderExecutionState { enum class CodeStatus; }
// clang-format on

class CodebuilderComponent {

public:
    // prevent constructor by default
    CodebuilderComponent& operator=(CodebuilderComponent const&) = delete;
    CodebuilderComponent(CodebuilderComponent const&)            = delete;
    CodebuilderComponent()                                       = delete;

public:
    /**
     * @symbol ?getCodeStatus\@CodebuilderComponent\@\@QEBA?AW4CodeStatus\@CodeBuilderExecutionState\@\@XZ
     */
    MCAPI enum class CodeBuilderExecutionState::CodeStatus getCodeStatus() const; // NOLINT
    /**
     * @symbol ?resetCodeStatus\@CodebuilderComponent\@\@QEAAXXZ
     */
    MCAPI void resetCodeStatus(); // NOLINT
    /**
     * @symbol
     * ?setCodeStatus\@CodebuilderComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCodeStatus(std::string const&); // NOLINT
    /**
     * @symbol
     * ?stringToCodeStatus\@CodebuilderComponent\@\@QEBA?AW4CodeStatus\@CodeBuilderExecutionState\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CodeBuilderExecutionState::CodeStatus stringToCodeStatus(std::string const&) const; // NOLINT
};
