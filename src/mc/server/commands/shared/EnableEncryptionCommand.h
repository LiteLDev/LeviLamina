#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class EnableEncryptionCommand : public ::Command {

public:
    // prevent constructor by default
    EnableEncryptionCommand& operator=(EnableEncryptionCommand const&) = delete;
    EnableEncryptionCommand(EnableEncryptionCommand const&)            = delete;
    EnableEncryptionCommand()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@EnableEncryptionCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@EnableEncryptionCommand\@\@SAXAEAVCommandRegistry\@\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class IMinecraftApp&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mApp\@EnableEncryptionCommand\@\@0PEAVIMinecraftApp\@\@EA
     */
    MCAPI static class IMinecraftApp* mApp;
    // NOLINTEND
};
