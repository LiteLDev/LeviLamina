/**
 * @file  ScriptCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @hash   29295109
     * @symbol  ??0ScriptCommand\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ScriptCommand(std::string const &);
    /**
     * @hash   -1135658212
     * @symbol  ?getMessages\@ScriptCommand\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getMessages() const;
    /**
     * @hash   1806421196
     * @symbol  ?getSuccessCount\@ScriptCommand\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const;
    /**
     * @hash   -1439915812
     * @symbol  ?serializeJsonOutput\@ScriptCommand\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string serializeJsonOutput() const;
    /**
     * @hash   -1215510844
     * @symbol  ?setJsonOutput\@ScriptCommand\@\@QEAAX$$QEAVValue\@Json\@\@\@Z
     */
    MCAPI void setJsonOutput(class Json::Value &&);
    /**
     * @hash   1788238317
     * @symbol  ?setOutput\@ScriptCommand\@\@QEAAXH$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setOutput(int, std::string &&);

};