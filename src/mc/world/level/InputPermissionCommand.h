#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class InputPermissionCommand : public ::Command {

public:
    // prevent constructor by default
    InputPermissionCommand& operator=(InputPermissionCommand const&) = delete;
    InputPermissionCommand(InputPermissionCommand const&)            = delete;
    InputPermissionCommand()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@InputPermissionCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@InputPermissionCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_executeQuery\@InputPermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeQuery(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?_executeQueryVerbose\@InputPermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeQueryVerbose(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?_executeSet\@InputPermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeSet(class CommandOrigin const&, class CommandOutput&) const;
    // NOLINTEND
};
