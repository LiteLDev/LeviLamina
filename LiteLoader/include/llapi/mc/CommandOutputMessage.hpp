/**
 * @file  MC/CommandOutputMessage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   213572255
     * @symbol ??0CommandOutputMessage@@QEAA@W4CommandOutputMessageType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI CommandOutputMessage(enum CommandOutputMessageType, std::string const &, std::vector<std::string> &&);
    /**
     * @hash   245399105
     * @symbol ??0CommandOutputMessage@@QEAA@AEBV0@@Z
     */
    MCAPI CommandOutputMessage(class CommandOutputMessage const &);
    /**
     * @hash   -1285975409
     * @symbol ??0CommandOutputMessage@@QEAA@$$QEAV0@@Z
     */
    MCAPI CommandOutputMessage(class CommandOutputMessage &&);
    /**
     * @hash   -1169381058
     * @symbol ?getMessageId@CommandOutputMessage@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getMessageId() const;
    /**
     * @hash   -467417131
     * @symbol ?getParams@CommandOutputMessage@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> const & getParams() const;
    /**
     * @hash   1988996440
     * @symbol ?getType@CommandOutputMessage@@QEBA?AW4CommandOutputMessageType@@XZ
     */
    MCAPI enum CommandOutputMessageType getType() const;
    /**
     * @hash   -2002429086
     * @symbol ?getUserMessage@CommandOutputMessage@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getUserMessage() const;
    /**
     * @hash   1545944277
     * @symbol ??1CommandOutputMessage@@QEAA@XZ
     */
    MCAPI ~CommandOutputMessage();

};