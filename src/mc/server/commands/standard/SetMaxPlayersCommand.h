#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SetMaxPlayersCommand : public ::Command {

public:
    // prevent constructor by default
    SetMaxPlayersCommand& operator=(SetMaxPlayersCommand const&) = delete;
    SetMaxPlayersCommand(SetMaxPlayersCommand const&)            = delete;
    SetMaxPlayersCommand()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@SetMaxPlayersCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@SetMaxPlayersCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND
};
