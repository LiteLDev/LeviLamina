#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/server/commands/ServerCommand.h"
#include "mc/util/rotation_command_utils/FacingResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class SummonCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const*>   mActorId;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                       mEventName;
    ::ll::TypedStorage<8, 32, ::std::string>                       mActorName;
    ::ll::TypedStorage<1, 1, bool>                                 mNameSet;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mYRot;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mXRot;
    ::ll::TypedStorage<1, 1, bool>                                 mIsUsingRotation;
    ::ll::TypedStorage<1, 1, bool>                                 mFacingIsPosition;
    ::ll::TypedStorage<4, 4, ::RotationCommandUtils::FacingResult> mHaveFacing;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mFacingEntity;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mFacingPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual void postExecute(::Actor&) const;

    virtual ~SummonCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SummonCommand();

    MCAPI ::RotationCommandUtils::FacingResult
    _getFacingDirection(::CommandOrigin const& origin, ::CommandOutput& output, ::Vec3& faceTarget) const;
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

    MCFOLD void $postExecute(::Actor&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
