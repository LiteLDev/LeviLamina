#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ChangeSettingCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGESETTINGCOMMAND
public:
    ChangeSettingCommand& operator=(ChangeSettingCommand const&) = delete;
    ChangeSettingCommand(ChangeSettingCommand const&)            = delete;
    ChangeSettingCommand()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ChangeSettingCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ChangeSettingCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
