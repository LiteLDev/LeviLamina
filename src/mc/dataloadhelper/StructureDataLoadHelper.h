#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/dataloadhelper/DataLoadHelperType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Level;
// clang-format on

class StructureDataLoadHelper : public ::DataLoadHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mStructurePlacementLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mStructureWorldOrigin;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                 mPivot;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                         mOwner;
    ::ll::TypedStorage<1, 1, ::Rotation>                                              mRotation;
    ::ll::TypedStorage<1, 1, ::Mirror>                                                mMirror;
    ::ll::TypedStorage<8, 8, ::Level*>                                                mLevel;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ActorUniqueID>> mOldIDToNewID;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataLoadHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Vec3 loadPosition(::Vec3 const& position) /*override*/;

    virtual ::BlockPos loadBlockPosition(::BlockPos const& blockPos) /*override*/;

    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const& blockPosOffset) /*override*/;

    virtual float loadRotationDegreesX(float x) /*override*/;

    virtual float loadRotationDegreesY(float y) /*override*/;

    virtual float loadRotationRadiansX(float x) /*override*/;

    virtual float loadRotationRadiansY(float y) /*override*/;

    virtual uchar loadFacingID(uchar facing) /*override*/;

    virtual ::Vec3 loadDirection(::Vec3 const& direction) /*override*/;

    virtual ::Direction::Type loadDirection(::Direction::Type direction) /*override*/;

    virtual ::Rotation loadRotation(::Rotation rotation) /*override*/;

    virtual ::Mirror loadMirror(::Mirror) /*override*/;

    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID id) /*override*/;

    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID id) /*override*/;

    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    ) /*override*/;

    virtual bool shouldResetTime() /*override*/;

    virtual ::DataLoadHelperType getType() const /*override*/;

    virtual ::ActorUniqueID _generateNewID();

    virtual ~StructureDataLoadHelper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureDataLoadHelper(
        ::BlockPos const& structurePlacementLocation,
        ::BlockPos const& structureWorldOrigin,
        ::Vec3 const&     rotationPivot,
        ::ActorUniqueID   ownerID,
        ::Rotation        rotation,
        ::Mirror          mirror,
        ::Level&          level
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockPos const& structurePlacementLocation,
        ::BlockPos const& structureWorldOrigin,
        ::Vec3 const&     rotationPivot,
        ::ActorUniqueID   ownerID,
        ::Rotation        rotation,
        ::Mirror          mirror,
        ::Level&          level
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Vec3 $loadPosition(::Vec3 const& position);

    MCNAPI ::BlockPos $loadBlockPosition(::BlockPos const& blockPos);

    MCNAPI ::BlockPos $loadBlockPositionOffset(::BlockPos const& blockPosOffset);

    MCNAPI float $loadRotationDegreesX(float x);

    MCNAPI float $loadRotationDegreesY(float y);

    MCNAPI float $loadRotationRadiansX(float x);

    MCNAPI float $loadRotationRadiansY(float y);

    MCNAPI uchar $loadFacingID(uchar facing);

    MCNAPI ::Vec3 $loadDirection(::Vec3 const& direction);

    MCNAPI ::Direction::Type $loadDirection(::Direction::Type direction);

    MCNAPI ::Rotation $loadRotation(::Rotation rotation);

    MCNAPI ::ActorUniqueID $loadActorUniqueID(::ActorUniqueID id);

    MCNAPI ::ActorUniqueID $loadOwnerID(::ActorUniqueID id);

    MCNAPI ::InternalComponentRegistry::ComponentInfo const* $loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    );

    MCNAPI bool $shouldResetTime();

    MCNAPI ::DataLoadHelperType $getType() const;

    MCNAPI ::ActorUniqueID $_generateNewID();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
