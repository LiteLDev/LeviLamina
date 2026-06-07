#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
// clang-format on

class StructureSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  mPaletteName;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreEntities;
    ::ll::TypedStorage<1, 1, bool>            mReloadActorEquipment;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreBlocks;
    ::ll::TypedStorage<1, 1, bool>            mIsWaterLogged;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool>            mAllowNonTickingPlayerAndTickingAreaChunks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastTouchedByPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mStructureSize;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mStructureOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>         mPivot;
    ::ll::TypedStorage<1, 1, ::Mirror>        mMirror;
    ::ll::TypedStorage<1, 1, ::Rotation>      mRotation;
    ::ll::TypedStorage<1, 1, ::AnimationMode> mAnimationMode;
    ::ll::TypedStorage<4, 4, float>           mAnimationSeconds;
    ::ll::TypedStorage<4, 4, float>           mIntegrityValue;
    ::ll::TypedStorage<4, 4, uint>            mIntegritySeed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureSettings();

    MCFOLD ::AnimationMode getAnimationMode() const;

    MCFOLD float getAnimationSeconds() const;

    MCAPI uint getAnimationTicks() const;

    MCFOLD bool getIgnoreBlocks() const;

    MCFOLD bool getIgnoreEntities() const;

    MCFOLD bool getIgnoreJigsawBlocks() const;

    MCFOLD uint getIntegritySeed() const;

    MCAPI float getIntegrityValue() const;

    MCFOLD bool getIsWaterLogged() const;

    MCFOLD ::ActorUniqueID getLastTouchedByPlayerID() const;

    MCFOLD ::Mirror getMirror() const;

    MCFOLD ::std::string const& getPaletteName() const;

    MCFOLD ::Vec3 const& getPivot() const;

    MCFOLD ::Rotation getRotation() const;

    MCFOLD ::BlockPos const& getStructureOffset() const;

    MCFOLD ::BlockPos const& getStructureSize() const;

    MCAPI ::BoundingBox getTransformedBoundBox() const;

    MCAPI ::BlockPos getTransformedBoundPosition(::BlockPos const& originalPos) const;

    MCAPI bool isAnimated() const;

    MCAPI bool operator==(::StructureSettings const& rhs) const;

    MCFOLD void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonTickingPlayerAndTickingAreaChunks);

    MCFOLD void setAnimationMode(::AnimationMode animationMode);

    MCAPI void setAnimationSeconds(float seconds);

    MCAPI void setAnimationTicks(uint ticks);

    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    MCFOLD void setIgnoreEntities(bool ignoreEntities);

    MCFOLD void setIgnoreJigsawBlocks(bool ignoreJigsawBlocks);

    MCFOLD void setIntegritySeed(uint integritySeed);

    MCAPI void setIntegrityValue(float integrityValue);

    MCAPI void setIsWaterLogged(bool waterLogged);

    MCFOLD void setLastTouchedByPlayerID(::ActorUniqueID lastTouchedByPlayerID);

    MCAPI void setMirror(::Mirror mirror);

    MCFOLD void setPaletteName(::std::string paletteName);

    MCAPI void setPivot(::Vec3 const& pivot);

    MCAPI void setPivotFromBoundedUnitVector(::Vec3 const& boundedUnitVector);

    MCAPI void setPivotFromStructureSize();

    MCAPI void setReloadActorEquipment(bool reloadActorEquipment);

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setStructureOffset(::BlockPos const& offset);

    MCFOLD void setStructureSize(::BlockPos const& size);

    MCFOLD bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;

    MCAPI ~StructureSettings();
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
