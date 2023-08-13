#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ResourceUriCommand : public ::Command {

public:
    // prevent constructor by default
    ResourceUriCommand& operator=(ResourceUriCommand const&) = delete;
    ResourceUriCommand(ResourceUriCommand const&)            = delete;
    ResourceUriCommand()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@ResourceUriCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ResourceUriCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_executeClear\@ResourceUriCommand\@\@AEBAXAEAVLevel\@\@PEAVPlayer\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeClear(class Level&, class Player*, class CommandOutput&) const;
    /**
     * @symbol ?_executeNamed\@ResourceUriCommand\@\@AEBAXAEAVLevel\@\@PEAVPlayer\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeNamed(class Level&, class Player*, class CommandOutput&) const;
    /**
     * @symbol ?_executeUriOnly\@ResourceUriCommand\@\@AEBAXAEAVLevel\@\@PEAVPlayer\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeUriOnly(class Level&, class Player*, class CommandOutput&) const;
    // NOLINTEND
};
