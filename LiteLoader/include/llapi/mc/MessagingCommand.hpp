/**
 * @file  MC/MessagingCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MessagingCommand.
 *
 */
class MessagingCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MESSAGINGCOMMAND
public:
    class MessagingCommand& operator=(class MessagingCommand const &) = delete;
    MessagingCommand(class MessagingCommand const &) = delete;
    MessagingCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MessagingCommand();

//protected:
    /**
     * @hash   1609629971
     * @symbol ??0MessagingCommand@@IEAA@_N0@Z
     */
    MCAPI MessagingCommand(bool, bool);
    /**
     * @hash   28979953
     * @symbol ?checkChatPermissions@MessagingCommand@@IEBA_NAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI bool checkChatPermissions(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1953969857
     * @symbol ?checkMutedAndSendToastIfMuted@MessagingCommand@@IEBAXAEBUCommandOriginIdentity@@AEBVLevel@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI void checkMutedAndSendToastIfMuted(struct CommandOriginIdentity const &, class Level const &, std::vector<std::string> const &) const;
    /**
     * @hash   127307101
     * @symbol ?checkMutedAndSendToastIfMuted@MessagingCommand@@IEBAXAEBVPlayer@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI void checkMutedAndSendToastIfMuted(class Player const &, std::vector<std::string> const &) const;
    /**
     * @hash   1494289458
     * @symbol ?tryToSIFTText@MessagingCommand@@IEBA_NAEBVCommandOrigin@@AEAVCommandOutput@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$function@$$A6AXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@0@Z@5@@Z
     */
    MCAPI bool tryToSIFTText(class CommandOrigin const &, class CommandOutput &, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<std::string> const &)>) const;

protected:

};