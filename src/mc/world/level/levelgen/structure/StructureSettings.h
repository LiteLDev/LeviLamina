#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class Vec3;
struct ActorUniqueID;
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

    MCAPI StructureSettings(::StructureSettings const&);

    MCAPI ::AnimationMode getAnimationMode() const;

    MCAPI float getAnimationSeconds() const;

    MCAPI uint getAnimationTicks() const;

    MCFOLD bool getIgnoreBlocks() const;

    MCFOLD bool getIgnoreEntities() const;

    MCFOLD bool getIgnoreJigsawBlocks() const;

    MCFOLD uint getIntegritySeed() const;

    MCAPI float getIntegrityValue() const;

    MCFOLD bool getIsWaterLogged() const;

    MCFOLD ::Mirror getMirror() const;

    MCFOLD ::std::string const& getPaletteName() const;

    MCAPI ::Rotation getRotation() const;

    MCAPI ::BlockPos const& getStructureOffset() const;

    MCFOLD ::BlockPos const& getStructureSize() const;

    MCAPI ::BoundingBox getTransformedBoundBox() const;

    MCAPI ::BlockPos getTransformedBoundPosition(::BlockPos const& originalPos) const;

    MCAPI bool isAnimated() const;

    MCAPI ::StructureSettings& operator=(::StructureSettings const&);

    MCFOLD void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonTickingPlayerAndTickingAreaChunks);

    MCAPI void setAnimationMode(::AnimationMode animationMode);

    MCAPI void setAnimationSeconds(float seconds);

    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    MCFOLD void setIgnoreEntities(bool ignoreEntities);

    MCFOLD void setIgnoreJigsawBlocks(bool ignoreJigsawBlocks);

    MCAPI void setIntegritySeed(uint integritySeed);

    MCAPI void setIntegrityValue(float integrityValue);

    MCAPI void setIsWaterLogged(bool waterLogged);

    MCFOLD void setMirror(::Mirror mirror);

    MCAPI void setPivot(::Vec3 const& pivot);

    MCAPI void setPivotFromBoundedUnitVector(::Vec3 const& boundedUnitVector);

    MCAPI void setPivotFromStructureSize();

    MCAPI void setReloadActorEquipment(bool reloadActorEquipment);

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setStructureOffset(::BlockPos const& offset);

    MCAPI void setStructureSize(::BlockPos const& size);

    MCFOLD bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;

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

    MCAPI void* $ctor(::StructureSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
