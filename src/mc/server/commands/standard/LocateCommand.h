#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class LocateCommand : public ::Command {

public:
    // prevent constructor by default
    LocateCommand& operator=(LocateCommand const&) = delete;
    LocateCommand(LocateCommand const&)            = delete;
    LocateCommand()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@LocateCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@LocateCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_executeLocateBiome\@LocateCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeLocateBiome(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?_executeLocateStructure\@LocateCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeLocateStructure(class CommandOrigin const&, class CommandOutput&) const; // NOLINT

private:
};
