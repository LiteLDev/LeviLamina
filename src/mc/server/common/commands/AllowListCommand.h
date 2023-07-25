#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class AllowListCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLISTCOMMAND
public:
    AllowListCommand& operator=(AllowListCommand const&) = delete;
    AllowListCommand(AllowListCommand const&)            = delete;
    AllowListCommand()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@AllowListCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@AllowListCommand\@\@SAXAEAVCommandRegistry\@\@AEAVAllowListFile\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class AllowListFile&);

    // private:

private:
    /**
     * @symbol ?mAllowListFile\@AllowListCommand\@\@0PEAVAllowListFile\@\@EA
     */
    MCAPI static class AllowListFile* mAllowListFile;
};
