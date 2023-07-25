#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class RideCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDECOMMAND
public:
    RideCommand& operator=(RideCommand const&) = delete;
    RideCommand(RideCommand const&)            = delete;
    RideCommand()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@RideCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@RideCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol ?evictPassengers\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void evictPassengers(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?startRiding\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void startRiding(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?stopRiding\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void stopRiding(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?summonPassenger\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void summonPassenger(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?summonVehicle\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void summonVehicle(class CommandOrigin const&, class CommandOutput&) const;

private:
};
