/**
 * @file  MessagingCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MESSAGINGCOMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MessagingCommand();
#endif

//protected:
    /**
     * @symbol ??0MessagingCommand\@\@IEAA\@_N0\@Z
     */
    MCAPI MessagingCommand(bool, bool);
    /**
     * @symbol ?checkChatPermissions\@MessagingCommand\@\@IEBA_NAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool checkChatPermissions(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?checkMutedAndSendToastIfMuted\@MessagingCommand\@\@KAXAEBUCommandOriginIdentity\@\@AEBVLevel\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void checkMutedAndSendToastIfMuted(struct CommandOriginIdentity const &, class Level const &, std::vector<enum class Safety::TextFilteringEvent> const &);
    /**
     * @symbol ?checkMutedAndSendToastIfMuted\@MessagingCommand\@\@KAXAEBVPlayer\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void checkMutedAndSendToastIfMuted(class Player const &, std::vector<enum class Safety::TextFilteringEvent> const &);

protected:

};
