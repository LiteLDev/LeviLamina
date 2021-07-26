#pragma once

#include "../Math/Direction.h"

class DataLoadHelper {
public:
    virtual ~DataLoadHelper();
    virtual class Vec3              loadPosition(class Vec3 const&);
    virtual class BlockPos          loadBlockPosition(class BlockPos const&);
    virtual class BlockPos          loadBlockPositionOffset(class BlockPos const&);
    virtual float                   loadRotationDegreesX(float);
    virtual float                   loadRotationDegreesY(float);
    virtual float                   loadRotationRadiansX(float);
    virtual float                   loadRotationRadiansY(float);
    virtual unsigned char           loadFacingID(unsigned char);
    virtual class Vec3              loadDirection(class Vec3 const&);
    virtual enum Direction::Type    loadDirection(enum Direction::Type);
    virtual enum Rotation           loadRotation(enum Rotation);
    virtual enum Mirror             loadMirror(enum Mirror);
    virtual struct ActorUniqueID    loadActorUniqueID(struct ActorUniqueID);
    virtual struct ActorUniqueID    loadOwnerID(struct ActorUniqueID);
    virtual enum DataLoadHelperType getType(void) const;
    virtual bool                    shouldResetTime(void);
};