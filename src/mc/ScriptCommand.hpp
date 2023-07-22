/**
 * @file  ScriptCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptCommand.
 *
 */
class ScriptCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCOMMAND
public:
    class ScriptCommand& operator=(class ScriptCommand const &) = delete;
    ScriptCommand(class ScriptCommand const &) = delete;
    ScriptCommand() = delete;
#endif

public:
    /**
     * @symbol  ??0ScriptCommand\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ScriptCommand(std::string const &);
    /**
     * @symbol  ?getMessages\@ScriptCommand\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getMessages() const;
    /**
     * @symbol  ?getSuccessCount\@ScriptCommand\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const;
    /**
     * @symbol  ?serializeJsonOutput\@ScriptCommand\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string serializeJsonOutput() const;
    /**
     * @symbol  ?setJsonOutput\@ScriptCommand\@\@QEAAX$$QEAVValue\@Json\@\@\@Z
     */
    MCAPI void setJsonOutput(class Json::Value &&);
    /**
     * @symbol  ?setOutput\@ScriptCommand\@\@QEAAXH$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setOutput(int, std::string &&);

};