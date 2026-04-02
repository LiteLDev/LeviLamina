#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
struct ActorDefinitionIdentifier;
// clang-format on

class RideCommand : public ::Command {
public:
    // RideCommand inner types define
    enum class RideRules : uchar {
        NoVehicleChange  = 0,
        ReassignVehicles = 1,
        SkipPassengers   = 2,
    };

    enum class TeleportRules : uchar {
        TeleportPassenger = 0,
        TeleportVehicle   = 1,
    };

    enum class VehicleAction : uchar {
        StartRiding     = 0,
        StopRiding      = 1,
        EvictPassengers = 2,
        SummonPassenger = 3,
        SummonVehicle   = 4,
    };

    enum class VehicleFillType : uchar {
        UntilFull   = 0,
        IfGroupFits = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>       mTargets;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>       mVehicle;
    ::ll::TypedStorage<1, 1, ::RideCommand::VehicleAction>       mAction;
    ::ll::TypedStorage<1, 1, ::RideCommand::TeleportRules>       mTeleportRules;
    ::ll::TypedStorage<1, 1, ::RideCommand::VehicleFillType>     mFillType;
    ::ll::TypedStorage<1, 1, ::RideCommand::RideRules>           mRideRules;
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const*> mActorId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mEventName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mActorName;
    ::ll::TypedStorage<1, 1, bool>                               mNameSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~RideCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RideCommand();

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
