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
    // vIndex: 0, symbol: __gen_??1RideCommand@@UEAA@XZ
    virtual ~RideCommand() = default;

    // vIndex: 2, symbol: ?execute@RideCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@RideCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?evictPassengers@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void evictPassengers(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?startRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void startRiding(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?stopRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void stopRiding(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?summonPassenger@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void summonPassenger(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?summonVehicle@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void summonVehicle(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
