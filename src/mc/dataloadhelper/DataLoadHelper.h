#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class DataLoadHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataLoadHelper() = default;

    virtual ::Vec3 loadPosition(::Vec3 const&) = 0;

    virtual ::BlockPos loadBlockPosition(::BlockPos const&) = 0;

    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const&) = 0;

    virtual float loadRotationDegreesX(float) = 0;

    virtual float loadRotationDegreesY(float) = 0;

    virtual float loadRotationRadiansX(float) = 0;

    virtual float loadRotationRadiansY(float) = 0;

    virtual uchar loadFacingID(uchar) = 0;

    virtual ::Vec3 loadDirection(::Vec3 const&) = 0;

    virtual ::Direction::Type loadDirection(::Direction::Type) = 0;

    virtual ::Rotation loadRotation(::Rotation) = 0;

    virtual ::Mirror loadMirror(::Mirror) = 0;

    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID) = 0;

    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID) = 0;

    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const&,
        ::std::string const&
    ) = 0;

    virtual ::DataLoadHelperType getType() const = 0;

    virtual bool shouldResetTime() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
