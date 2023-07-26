#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class AllowListCommand : public ::Command {

public:
    // prevent constructor by default
    AllowListCommand& operator=(AllowListCommand const&) = delete;
    AllowListCommand(AllowListCommand const&)            = delete;
    AllowListCommand()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@AllowListCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@AllowListCommand\@\@SAXAEAVCommandRegistry\@\@AEAVAllowListFile\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class AllowListFile&); // NOLINT

    // private:

private:
    /**
     * @symbol ?mAllowListFile\@AllowListCommand\@\@0PEAVAllowListFile\@\@EA
     */
    MCAPI static class AllowListFile* mAllowListFile; // NOLINT
};
