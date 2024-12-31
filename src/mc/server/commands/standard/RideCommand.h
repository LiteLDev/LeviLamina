#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class RideCommand : public ::Command {
public:
    // RideCommand inner types define
    enum class VehicleAction : uchar {
        StartRiding     = 0,
        StopRiding      = 1,
        EvictPassengers = 2,
        SummonPassenger = 3,
        SummonVehicle   = 4,
    };

    enum class TeleportRules : uchar {
        TeleportPassenger = 0,
        TeleportVehicle   = 1,
    };

    enum class VehicleFillType : uchar {
        UntilFull   = 0,
        IfGroupFits = 1,
    };

    enum class RideRules : uchar {
        NoVehicleChange  = 0,
        ReassignVehicles = 1,
        SkipPassengers   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnkc2b620;
    ::ll::UntypedStorage<8, 200> mUnk5a030e;
    ::ll::UntypedStorage<1, 1>   mUnkbe452b;
    ::ll::UntypedStorage<1, 1>   mUnk545e58;
    ::ll::UntypedStorage<1, 1>   mUnk8a36dd;
    ::ll::UntypedStorage<1, 1>   mUnk11d7ca;
    ::ll::UntypedStorage<8, 8>   mUnk6855a5;
    ::ll::UntypedStorage<8, 32>  mUnk26871e;
    ::ll::UntypedStorage<8, 32>  mUnkecafca;
    ::ll::UntypedStorage<1, 1>   mUnk524573;
    // NOLINTEND

public:
    // prevent constructor by default
    RideCommand& operator=(RideCommand const&);
    RideCommand(RideCommand const&);
    RideCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~RideCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void evictPassengers(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void startRiding(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void stopRiding(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void summonPassenger(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void summonVehicle(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
