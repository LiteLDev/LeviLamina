#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CameraShakeCommand : public ::Command {

public:
    // prevent constructor by default
    CameraShakeCommand& operator=(CameraShakeCommand const&) = delete;
    CameraShakeCommand(CameraShakeCommand const&)            = delete;
    CameraShakeCommand()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@CameraShakeCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@CameraShakeCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_executeAdd\@CameraShakeCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeAdd(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?_executeStop\@CameraShakeCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeStop(class CommandOrigin const&, class CommandOutput&) const; // NOLINT

private:
};
