/**
 * @file  CommandOutputMessage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandOutputMessage.
 *
 */
class CommandOutputMessage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTMESSAGE
public:
    class CommandOutputMessage& operator=(class CommandOutputMessage const &) = delete;
    CommandOutputMessage() = delete;
#endif

public:
    /**
     * @hash   -501288737
     * @symbol  ??0CommandOutputMessage\@\@QEAA\@W4CommandOutputMessageType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI CommandOutputMessage(enum class CommandOutputMessageType, std::string const &, std::vector<std::string> &&);
    /**
     * @hash   -469461887
     * @symbol  ??0CommandOutputMessage\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandOutputMessage(class CommandOutputMessage const &);
    /**
     * @hash   -2000836401
     * @symbol  ??0CommandOutputMessage\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CommandOutputMessage(class CommandOutputMessage &&);
    /**
     * @hash   -1072758274
     * @symbol  ?getMessageId\@CommandOutputMessage\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getMessageId() const;
    /**
     * @hash   -214174411
     * @symbol  ?getParams\@CommandOutputMessage\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const & getParams() const;
    /**
     * @hash   -2054957656
     * @symbol  ?getType\@CommandOutputMessage\@\@QEBA?AW4CommandOutputMessageType\@\@XZ
     */
    MCAPI enum class CommandOutputMessageType getType() const;
    /**
     * @hash   1577692594
     * @symbol  ?getUserMessage\@CommandOutputMessage\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getUserMessage() const;
    /**
     * @hash   310493461
     * @symbol  ??1CommandOutputMessage\@\@QEAA\@XZ
     */
    MCAPI ~CommandOutputMessage();

};