#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/dataloadhelper/DataLoadHelperType.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"

class StructureDataLoadHelper : public ::DataLoadHelper {
public:
    BlockPos                                         mStructurePlacementLocation;
    BlockPos                                         mStructureWorldOrigin;
    Vec3                                             mPivot;
    ActorUniqueID                                    mOwner;
    Rotation                                         mRotation;
    Mirror                                           mMirror;
    Level*                                           mLevel;
    std::unordered_map<ActorUniqueID, ActorUniqueID> mOldIDToNewID;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureDataLoadHelper();

    // vIndex: 1
    virtual class Vec3 loadPosition(class Vec3 const& position);

    // vIndex: 2
    virtual class BlockPos loadBlockPosition(class BlockPos const& blockPos);

    // vIndex: 3
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const& blockPosOffset);

    // vIndex: 4
    virtual float loadRotationDegreesX(float x);

    // vIndex: 5
    virtual float loadRotationDegreesY(float y);

    // vIndex: 6
    virtual float loadRotationRadiansX(float x);

    // vIndex: 7
    virtual float loadRotationRadiansY(float y);

    // vIndex: 8
    virtual uchar loadFacingID(uchar facing);

    // vIndex: 9
    virtual class Vec3 loadDirection(class Vec3 const& direction);

    // vIndex: 10
    virtual ::Direction::Type loadDirection(::Direction::Type direction);

    // vIndex: 11
    virtual ::Rotation loadRotation(::Rotation rotation);

    // vIndex: 12
    virtual ::Mirror loadMirror(::Mirror mirror);

    // vIndex: 13
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID id);

    // vIndex: 14
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID id);

    // vIndex: 15
    virtual struct InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const& registry,
        std::string const&                                                                             componentName
    );

    // vIndex: 16
    virtual ::DataLoadHelperType getType() const;

    // vIndex: 17
    virtual bool shouldResetTime();

    // vIndex: 18
    virtual struct ActorUniqueID _generateNewID();

    MCAPI StructureDataLoadHelper(
        class BlockPos const& structurePlacementLocation,
        class BlockPos const& structureWorldOrigin,
        class Vec3 const&     rotationPivot,
        struct ActorUniqueID  ownerID,
        ::Rotation            rotation,
        ::Mirror              mirror,
        class Level&          level
    );

    // NOLINTEND
};
