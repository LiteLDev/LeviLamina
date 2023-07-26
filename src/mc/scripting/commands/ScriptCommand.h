#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptCommand {

public:
    // prevent constructor by default
    ScriptCommand& operator=(ScriptCommand const&) = delete;
    ScriptCommand(ScriptCommand const&)            = delete;
    ScriptCommand()                                = delete;

public:
    /**
     * @symbol ??0ScriptCommand\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ScriptCommand(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getMessages\@ScriptCommand\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getMessages() const; // NOLINT
    /**
     * @symbol ?getSuccessCount\@ScriptCommand\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const; // NOLINT
    /**
     * @symbol
     * ?serializeJsonOutput\@ScriptCommand\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string serializeJsonOutput() const; // NOLINT
    /**
     * @symbol ?setJsonOutput\@ScriptCommand\@\@QEAAX$$QEAVValue\@Json\@\@\@Z
     */
    MCAPI void setJsonOutput(class Json::Value&&); // NOLINT
    /**
     * @symbol
     * ?setOutput\@ScriptCommand\@\@QEAAXH$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setOutput(int, std::string&&); // NOLINT
};
