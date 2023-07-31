#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CloseWebSocketCommand : public ::Command {

public:
    // prevent constructor by default
    CloseWebSocketCommand& operator=(CloseWebSocketCommand const&) = delete;
    CloseWebSocketCommand(CloseWebSocketCommand const&)            = delete;
    CloseWebSocketCommand()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@CloseWebSocketCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@CloseWebSocketCommand\@\@SAXAEAVCommandRegistry\@\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class IMinecraftApp&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mApp\@CloseWebSocketCommand\@\@0PEAVIMinecraftApp\@\@EA
     */
    MCAPI static class IMinecraftApp* mApp;
    // NOLINTEND
};
