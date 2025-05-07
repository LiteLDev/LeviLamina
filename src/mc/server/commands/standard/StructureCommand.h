#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/standard/StructureActionType.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class DimensionHeightRange;
// clang-format on

class StructureCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StructureActionType>       mAction;
    ::ll::TypedStorage<1, 1, ::StructureRedstoneSaveMode> mSaveMode;
    ::ll::TypedStorage<1, 1, ::Rotation>                  mRotation;
    ::ll::TypedStorage<1, 1, ::Mirror>                    mMirror;
    ::ll::TypedStorage<1, 1, ::AnimationMode>             mAnimationMode;
    ::ll::TypedStorage<4, 4, float>                       mAnimationTimeSeconds;
    ::ll::TypedStorage<8, 32, ::std::string>              mName;
    ::ll::TypedStorage<8, 32, ::std::string>              mSeed;
    ::ll::TypedStorage<4, 16, ::CommandPosition>          mFrom;
    ::ll::TypedStorage<4, 16, ::CommandPosition>          mTo;
    ::ll::TypedStorage<4, 4, float>                       mIntegrity;
    ::ll::TypedStorage<1, 1, bool>                        mSeedSpecified;
    ::ll::TypedStorage<1, 1, bool>                        mIncludeEntities;
    ::ll::TypedStorage<1, 1, bool>                        mIncludeBlocks;
    ::ll::TypedStorage<1, 1, bool>                        mWaterlogged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~StructureCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _delete(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI ::std::string _getFullName() const;

    MCAPI bool
    _isValidSize(::BlockPos const& size, ::DimensionHeightRange const& heightRange, ::CommandOutput& output) const;

    MCAPI void _load(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _save(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
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
