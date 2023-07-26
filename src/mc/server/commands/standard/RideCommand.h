#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class RideCommand : public ::Command {

public:
    // prevent constructor by default
    RideCommand& operator=(RideCommand const&) = delete;
    RideCommand(RideCommand const&)            = delete;
    RideCommand()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@RideCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@RideCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?evictPassengers\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void evictPassengers(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?startRiding\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void startRiding(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?stopRiding\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void stopRiding(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?summonPassenger\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void summonPassenger(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?summonVehicle\@RideCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void summonVehicle(class CommandOrigin const&, class CommandOutput&) const; // NOLINT

private:
};
