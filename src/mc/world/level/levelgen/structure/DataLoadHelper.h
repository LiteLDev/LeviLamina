#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DataLoadHelper {

public:
    /**
     * @vftbl 0

     */
    virtual ~DataLoadHelper() = default;
    /**
     * @vftbl 1

     */
    virtual class Vec3 loadPosition(class Vec3 const&) = 0;
    /**
     * @vftbl 2

     */
    virtual class BlockPos loadBlockPosition(class BlockPos const&) = 0;
    /**
     * @vftbl 3

     */
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const&) = 0;
    /**
     * @vftbl 4

     */
    virtual float loadRotationDegreesX(float) = 0;
    /**
     * @vftbl 5

     */
    virtual float loadRotationDegreesY(float) = 0;
    /**
     * @vftbl 6

     */
    virtual float loadRotationRadiansX(float) = 0;
    /**
     * @vftbl 7

     */
    virtual float loadRotationRadiansY(float) = 0;
    /**
     * @vftbl 8

     */
    virtual uint8_t loadFacingID(uint8_t) = 0;
    /**
     * @vftbl 9

     */
    virtual class Vec3 loadDirection(class Vec3 const&) = 0;
    /**
     * @vftbl 10

     */
    virtual enum class Direction::Type loadDirection(enum class Direction::Type) = 0;
    /**
     * @vftbl 11

     */
    virtual enum class Rotation loadRotation(enum class Rotation) = 0;
    /**
     * @vftbl 12

     */
    virtual enum class Mirror loadMirror(enum class Mirror) = 0;
    /**
     * @vftbl 13

     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID) = 0;
    /**
     * @vftbl 14

     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID) = 0;
    /**
     * @vftbl 15

     */
    virtual struct InternalComponentRegistry::ComponentInfo const*
    loadActorInternalComponentInfo(std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const&, std::string const&) = 0;
    /**
     * @vftbl 16

     */
    virtual enum class DataLoadHelperType getType() const = 0;
    /**
     * @vftbl 17

     */
    virtual bool shouldResetTime() = 0;
};
