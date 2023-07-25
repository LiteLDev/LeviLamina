#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ReloadConfigCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELOADCONFIGCOMMAND
public:
    ReloadConfigCommand& operator=(ReloadConfigCommand const&) = delete;
    ReloadConfigCommand(ReloadConfigCommand const&)            = delete;
    ReloadConfigCommand()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ReloadConfigCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ReloadConfigCommand\@\@SAXAEAVCommandRegistry\@\@AEAUScriptSettings\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, struct ScriptSettings&);

    // private:

private:
    /**
     * @symbol ?sScriptSettings\@ReloadConfigCommand\@\@0PEAUScriptSettings\@\@EA
     */
    MCAPI static struct ScriptSettings* sScriptSettings;
};
