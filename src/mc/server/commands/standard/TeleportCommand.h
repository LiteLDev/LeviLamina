#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/util/rotation_command_utils/FacingResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandArea;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Dimension;
class TeleportTarget;
class Vec3;
namespace RotationCommandUtils { class RotationData; }
// clang-format on

class TeleportCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(
            ::Actor&,
            ::Vec3,
            ::Vec3*,
            ::DimensionType,
            ::std::optional<::RotationCommandUtils::RotationData> const&,
            int
        )>>
                                                                   mApplyTeleport;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mTargets;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mDestinationEntity;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mDestinationPos;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mFacingEntity;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mFacingPos;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mYRot;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mXRot;
    ::ll::TypedStorage<4, 4, ::RotationCommandUtils::FacingResult> mHaveFacing;
    ::ll::TypedStorage<1, 1, bool>                                 mDestinationIsPosition;
    ::ll::TypedStorage<1, 1, bool>                                 mIsUsingRotation;
    ::ll::TypedStorage<1, 1, bool>                                 mFacingIsPosition;
    ::ll::TypedStorage<1, 1, bool>                                 mCheckForBlocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~TeleportCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TeleportCommand();

    MCAPI void doArmorStandTeleportBackwardCompability(::Actor& target, ::Actor const* destinationEntity) const;

    MCAPI ::RotationCommandUtils::FacingResult getFacingDirection(
        ::CommandOrigin const& origin,
        ::CommandOutput&       output,
        ::Vec3&                faceTarget,
        ::Actor*               destinationEntity
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void applyTarget(::Actor& victim, ::TeleportTarget target, bool keepVelocity);

    MCAPI static ::TeleportTarget computeTarget(
        ::Actor&                                                     victim,
        ::Vec3                                                       destination,
        ::Vec3*                                                      facePosition,
        ::DimensionType                                              destinationDimension,
        ::std::optional<::RotationCommandUtils::RotationData> const& rotationData,
        int                                                          commandVersion
    );

    MCAPI static ::std::unique_ptr<::CommandArea> getCommandAreaForTargets(
        ::CommandOrigin const&                   origin,
        ::CommandSelectorResults<::Actor> const& targets,
        ::Vec3                                   destination,
        int                                      commandVersion,
        bool                                     allowUnloadedChunks
    );

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
