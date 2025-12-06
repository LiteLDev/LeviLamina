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
    // vIndex: 1
    virtual ::Vec3 loadPosition(::Vec3 const& position) /*override*/;

    // vIndex: 2
    virtual ::BlockPos loadBlockPosition(::BlockPos const& blockPos) /*override*/;

    // vIndex: 3
    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const& blockPosOffset) /*override*/;

    // vIndex: 4
    virtual float loadRotationDegreesX(float x) /*override*/;

    // vIndex: 5
    virtual float loadRotationDegreesY(float y) /*override*/;

    // vIndex: 6
    virtual float loadRotationRadiansX(float x) /*override*/;

    // vIndex: 7
    virtual float loadRotationRadiansY(float y) /*override*/;

    // vIndex: 8
    virtual uchar loadFacingID(uchar facing) /*override*/;

    // vIndex: 10
    virtual ::Vec3 loadDirection(::Vec3 const& direction) /*override*/;

    // vIndex: 9
    virtual ::Direction::Type loadDirection(::Direction::Type direction) /*override*/;

    // vIndex: 11
    virtual ::Rotation loadRotation(::Rotation rotation) /*override*/;

    // vIndex: 12
    virtual ::Mirror loadMirror(::Mirror) /*override*/;

    // vIndex: 13
    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID id) /*override*/;

    // vIndex: 14
    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID id) /*override*/;

    // vIndex: 15
    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    ) /*override*/;

    // vIndex: 17
    virtual bool shouldResetTime() /*override*/;

    // vIndex: 16
    virtual ::DataLoadHelperType getType() const /*override*/;

    // vIndex: 18
    virtual ::ActorUniqueID _generateNewID();

    // vIndex: 0
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
