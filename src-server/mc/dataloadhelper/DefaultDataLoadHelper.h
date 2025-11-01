#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/dataloadhelper/DataLoadHelperType.h"
#include "mc/versionless/util/Mirror.h"
#include "mc/versionless/util/Rotation.h"
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
    virtual ::Mirror loadMirror(::Mirror mirror) /*override*/;

    // vIndex: 13
    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID id) /*override*/;

    // vIndex: 14
    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID id) /*override*/;

    // vIndex: 15
    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry, ::std::string const& componentName) /*override*/;

    // vIndex: 17
    virtual bool shouldResetTime() /*override*/;

    // vIndex: 16
    virtual ::DataLoadHelperType getType() const /*override*/;

    // vIndex: 0
    virtual ~DefaultDataLoadHelper() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Vec3 $loadPosition(::Vec3 const& position);

    MCFOLD ::BlockPos $loadBlockPosition(::BlockPos const& blockPos);

    MCFOLD ::BlockPos $loadBlockPositionOffset(::BlockPos const& blockPosOffset);

    MCFOLD float $loadRotationDegreesX(float x);

    MCFOLD float $loadRotationDegreesY(float y);

    MCFOLD float $loadRotationRadiansX(float x);

    MCFOLD float $loadRotationRadiansY(float y);

    MCFOLD uchar $loadFacingID(uchar facing);

    MCFOLD ::Vec3 $loadDirection(::Vec3 const& direction);

    MCFOLD ::Direction::Type $loadDirection(::Direction::Type direction);

    MCFOLD ::Rotation $loadRotation(::Rotation rotation);

    MCFOLD ::Mirror $loadMirror(::Mirror mirror);

    MCFOLD ::ActorUniqueID $loadActorUniqueID(::ActorUniqueID id);

    MCFOLD ::ActorUniqueID $loadOwnerID(::ActorUniqueID id);

    MCAPI ::InternalComponentRegistry::ComponentInfo const* $loadActorInternalComponentInfo(::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry, ::std::string const& componentName);

    MCFOLD bool $shouldResetTime();

    MCFOLD ::DataLoadHelperType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
