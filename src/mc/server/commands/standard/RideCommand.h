#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class RideCommand : public ::Command {
public:
    // prevent constructor by default
    RideCommand& operator=(RideCommand const&);
    RideCommand(RideCommand const&);
    RideCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RideCommand() = default;

    // vIndex: 2, symbol: ?execute@RideCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@RideCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?evictPassengers@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void evictPassengers(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?startRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void startRiding(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?stopRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void stopRiding(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?summonPassenger@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void summonPassenger(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?summonVehicle@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void summonVehicle(class CommandOrigin const&, class CommandOutput&) const;

    // NOLINTEND
};
