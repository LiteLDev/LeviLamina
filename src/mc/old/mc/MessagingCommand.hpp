/**
 * @file  MessagingCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~MessagingCommand();

//protected:
    /**
     * @symbol  ??0MessagingCommand\@\@IEAA\@_N0\@Z
     */
    MCAPI MessagingCommand(bool, bool);
    /**
     * @symbol  ?checkChatPermissions\@MessagingCommand\@\@IEBA_NAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool checkChatPermissions(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?checkMutedAndSendToastIfMuted\@MessagingCommand\@\@IEBAXAEBUCommandOriginIdentity\@\@AEBVLevel\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void checkMutedAndSendToastIfMuted(struct CommandOriginIdentity const &, class Level const &, std::vector<std::string> const &) const;
    /**
     * @symbol  ?checkMutedAndSendToastIfMuted\@MessagingCommand\@\@IEBAXAEBVPlayer\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void checkMutedAndSendToastIfMuted(class Player const &, std::vector<std::string> const &) const;

protected:

};