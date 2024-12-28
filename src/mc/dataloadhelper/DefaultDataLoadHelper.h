#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/dataloadhelper/DataLoadHelperType.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class Vec3;
struct ActorUniqueID;
// clang-format on

class DefaultDataLoadHelper : public ::DataLoadHelper {
public:
    // prevent constructor by default
    DefaultDataLoadHelper& operator=(DefaultDataLoadHelper const&);
    DefaultDataLoadHelper(DefaultDataLoadHelper const&);
    DefaultDataLoadHelper();

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
    virtual ::Rotation loadRotation(::Rotation) /*override*/;

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

    // vIndex: 0
    virtual ~DefaultDataLoadHelper() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Vec3 $loadPosition(::Vec3 const& position);

    MCAPI ::BlockPos $loadBlockPosition(::BlockPos const& blockPos);

    MCAPI ::BlockPos $loadBlockPositionOffset(::BlockPos const& blockPosOffset);

    MCAPI float $loadRotationDegreesX(float x);

    MCAPI float $loadRotationDegreesY(float y);

    MCAPI float $loadRotationRadiansX(float x);

    MCAPI float $loadRotationRadiansY(float y);

    MCAPI uchar $loadFacingID(uchar facing);

    MCAPI ::Vec3 $loadDirection(::Vec3 const& direction);

    MCAPI ::Direction::Type $loadDirection(::Direction::Type direction);

    MCAPI ::Rotation $loadRotation(::Rotation);

    MCAPI ::Mirror $loadMirror(::Mirror);

    MCAPI ::ActorUniqueID $loadActorUniqueID(::ActorUniqueID id);

    MCAPI ::ActorUniqueID $loadOwnerID(::ActorUniqueID id);

    MCAPI ::InternalComponentRegistry::ComponentInfo const* $loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    );

    MCAPI bool $shouldResetTime();

    MCAPI ::DataLoadHelperType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
