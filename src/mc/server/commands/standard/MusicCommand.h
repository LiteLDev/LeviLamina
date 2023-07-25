#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class MusicCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICCOMMAND
public:
    MusicCommand& operator=(MusicCommand const&) = delete;
    MusicCommand(MusicCommand const&)            = delete;
    MusicCommand()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@MusicCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@MusicCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol ?_handleActionQueueOrPlay\@MusicCommand\@\@AEBAXAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleActionQueueOrPlay(class CompoundTag&, class CommandOutput&) const;
    /**
     * @symbol ?_handleActionStop\@MusicCommand\@\@AEBAXAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleActionStop(class CompoundTag&, class CommandOutput&) const;
    /**
     * @symbol ?_handleActionVolume\@MusicCommand\@\@AEBAXAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleActionVolume(class CompoundTag&, class CommandOutput&) const;

private:
};
