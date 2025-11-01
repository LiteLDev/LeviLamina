#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/AnimationMode.h"
#include "mc/versionless/util/Mirror.h"
#include "mc/versionless/util/Rotation.h"
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
// clang-format on

class StructureSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPaletteName;
    ::ll::TypedStorage<1, 1, bool> mIgnoreEntities;
    ::ll::TypedStorage<1, 1, bool> mReloadActorEquipment;
    ::ll::TypedStorage<1, 1, bool> mIgnoreBlocks;
    ::ll::TypedStorage<1, 1, bool> mIsWaterLogged;
    ::ll::TypedStorage<1, 1, bool> mIgnoreJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool> mAllowNonTickingPlayerAndTickingAreaChunks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastTouchedByPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos> mStructureSize;
    ::ll::TypedStorage<4, 12, ::BlockPos> mStructureOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mPivot;
    ::ll::TypedStorage<1, 1, ::Mirror> mMirror;
    ::ll::TypedStorage<1, 1, ::Rotation> mRotation;
    ::ll::TypedStorage<1, 1, ::AnimationMode> mAnimationMode;
    ::ll::TypedStorage<4, 4, float> mAnimationSeconds;
    ::ll::TypedStorage<4, 4, float> mIntegrityValue;
    ::ll::TypedStorage<4, 4, uint> mIntegritySeed;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSettings(StructureSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureSettings();

    MCAPI ::BoundingBox getTransformedBoundBox() const;

    MCAPI ::StructureSettings& operator=(::StructureSettings const&);

    MCAPI bool operator==(::StructureSettings const& rhs) const;

    MCAPI void setPaletteName(::std::string paletteName);

    MCAPI void setPivotFromBoundedUnitVector(::Vec3 const& boundedUnitVector);

    MCAPI ~StructureSettings();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockPos const& DEFAULT_STRUCTURE_OFFSET();

    MCAPI static ::BlockPos const& DEFAULT_STRUCTURE_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
