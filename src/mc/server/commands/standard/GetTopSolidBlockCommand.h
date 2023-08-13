#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetTopSolidBlockCommand : public ::Command {

public:
    // prevent constructor by default
    GetTopSolidBlockCommand& operator=(GetTopSolidBlockCommand const&) = delete;
    GetTopSolidBlockCommand(GetTopSolidBlockCommand const&)            = delete;
    GetTopSolidBlockCommand()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@GetTopSolidBlockCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@GetTopSolidBlockCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND
};
