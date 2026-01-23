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

    virtual ::Mirror loadMirror(::Mirror mirror) /*override*/;

    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID id) /*override*/;

    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID id) /*override*/;

    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    ) /*override*/;

    virtual bool shouldResetTime() /*override*/;

    virtual ::DataLoadHelperType getType() const /*override*/;

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

    MCAPI ::InternalComponentRegistry::ComponentInfo const* $loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    );

    MCFOLD bool $shouldResetTime();

    MCFOLD ::DataLoadHelperType $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
