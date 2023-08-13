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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@AllowListCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@AllowListCommand\@\@SAXAEAVCommandRegistry\@\@AEAVAllowListFile\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class AllowListFile&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mAllowListFile\@AllowListCommand\@\@0PEAVAllowListFile\@\@EA
     */
    MCAPI static class AllowListFile* mAllowListFile;
    // NOLINTEND
};
