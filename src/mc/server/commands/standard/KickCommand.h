#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class KickCommand : public ::Command {

public:
    // prevent constructor by default
    KickCommand& operator=(KickCommand const&) = delete;
    KickCommand(KickCommand const&)            = delete;
    KickCommand()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@KickCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@KickCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_canKickPlayerOrGenerateFailureOutput\@KickCommand\@\@AEBA_NAEBVPlayer\@\@AEAVCommandOutput\@\@PEAVLevel\@\@\@Z
     */
    MCAPI bool
    _canKickPlayerOrGenerateFailureOutput(class Player const&, class CommandOutput&, class Level*) const; // NOLINT
    /**
     * @symbol
     * ?_findTarget\@KickCommand\@\@AEBAPEBVPlayer\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@33\@Z
     */
    MCAPI class Player const*
    _findTarget(class CommandOrigin const&, class CommandOutput&, class Level&, std::string const&, std::string const&, std::string const&)
        const; // NOLINT
    /**
     * @symbol
     * ?_generateSuccessOutput\@KickCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI void _generateSuccessOutput(class CommandOutput&, std::string const&, std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?_loopPlayers\@KickCommand\@\@AEBAPEBVPlayer\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@3V?$function\@$$A6A_NPEBVPlayer\@\@\@Z\@7\@\@Z
     */
    MCAPI class Player const*
    _loopPlayers(class CommandOrigin const&, class CommandOutput&, class Level&, std::string const&, std::string const&, class std::function<bool(class Player const*)>)
        const; // NOLINT
    /**
     * @symbol
     * ?_kickPlayer\@KickCommand\@\@CAXPEAVMinecraft\@\@AEBVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void _kickPlayer(class Minecraft*, class Player const&, std::string const&); // NOLINT

private:
};
