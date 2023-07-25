#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class VolumeAreaCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEAREACOMMAND
public:
    VolumeAreaCommand& operator=(VolumeAreaCommand const&) = delete;
    VolumeAreaCommand(VolumeAreaCommand const&)            = delete;
    VolumeAreaCommand()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@VolumeAreaCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@VolumeAreaCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol
     * ?_add\@VolumeAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBVDimension\@\@AEAVVolumeEntityManagerServer\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI void
    _add(class CommandOrigin const&, class CommandOutput&, class Dimension const&, class VolumeEntityManagerServer&, class PacketSender&)
        const;
    /**
     * @symbol
     * ?_list\@VolumeAreaCommand\@\@AEBAXAEAVCommandOutput\@\@AEBVLevel\@\@AEBVDimension\@\@AEBVVolumeEntityManagerServer\@\@\@Z
     */
    MCAPI void
    _list(class CommandOutput&, class Level const&, class Dimension const&, class VolumeEntityManagerServer const&)
        const;
    /**
     * @symbol
     * ?_remove\@VolumeAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBVDimension\@\@AEAVVolumeEntityManagerServer\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI void
    _remove(class CommandOrigin const&, class CommandOutput&, class Dimension const&, class VolumeEntityManagerServer&, class PacketSender&)
        const;
    /**
     * @symbol
     * ?_removeAll\@VolumeAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBVDimension\@\@AEAVVolumeEntityManagerServer\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI void
    _removeAll(class CommandOrigin const&, class CommandOutput&, class Dimension const&, class VolumeEntityManagerServer&, class PacketSender&)
        const;

private:
};
