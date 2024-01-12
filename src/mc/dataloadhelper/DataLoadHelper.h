#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/DataLoadHelperType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"

class Vec3;
class BlockPos;
struct ActorUniqueID;
class HashedString;

class DataLoadHelper {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataLoadHelper() = default;

    // vIndex: 1
    virtual class Vec3 loadPosition(class Vec3 const&) = 0;

    // vIndex: 2
    virtual class BlockPos loadBlockPosition(class BlockPos const&) = 0;

    // vIndex: 3
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const&) = 0;

    // vIndex: 4
    virtual float loadRotationDegreesX(float) = 0;

    // vIndex: 5
    virtual float loadRotationDegreesY(float) = 0;

    // vIndex: 6
    virtual float loadRotationRadiansX(float) = 0;

    // vIndex: 7
    virtual float loadRotationRadiansY(float) = 0;

    // vIndex: 8
    virtual uchar loadFacingID(uchar) = 0;

    // vIndex: 9
    virtual class Vec3 loadDirection(class Vec3 const&) = 0;

    // vIndex: 10
    virtual ::Direction::Type loadDirection(::Direction::Type) = 0;

    // vIndex: 11
    virtual ::Rotation loadRotation(::Rotation) = 0;

    // vIndex: 12
    virtual ::Mirror loadMirror(::Mirror) = 0;

    // vIndex: 13
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID) = 0;

    // vIndex: 14
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID) = 0;

    // vIndex: 15
    virtual struct InternalComponentRegistry::ComponentInfo const*
    loadActorInternalComponentInfo(std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const&, std::string const&) = 0;

    // vIndex: 16
    virtual ::DataLoadHelperType getType() const = 0;

    // vIndex: 17
    virtual bool shouldResetTime() = 0;
    // NOLINTEND
};
