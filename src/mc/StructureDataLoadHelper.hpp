/**
 * @file  StructureDataLoadHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Direction.hpp"
#include "InternalComponentRegistry.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureDataLoadHelper.
 *
 */
class StructureDataLoadHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREDATALOADHELPER
public:
    class StructureDataLoadHelper& operator=(class StructureDataLoadHelper const &) = delete;
    StructureDataLoadHelper(class StructureDataLoadHelper const &) = delete;
    StructureDataLoadHelper() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureDataLoadHelper();
    /**
     * @vftbl  1
     * @symbol  ?loadPosition\@StructureDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    virtual class Vec3 loadPosition(class Vec3 const &);
    /**
     * @vftbl  2
     * @symbol  ?loadBlockPosition\@StructureDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class BlockPos loadBlockPosition(class BlockPos const &);
    /**
     * @vftbl  3
     * @symbol  ?loadBlockPositionOffset\@StructureDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?loadRotationDegreesY\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    virtual float loadRotationDegreesY(float);
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?loadRotationRadiansY\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    virtual float loadRotationRadiansY(float);
    /**
     * @vftbl  8
     * @symbol  ?loadFacingID\@StructureDataLoadHelper\@\@UEAAEE\@Z
     */
    virtual unsigned char loadFacingID(unsigned char);
    /**
     * @vftbl  9
     * @symbol  ?loadDirection\@StructureDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    virtual class Vec3 loadDirection(class Vec3 const &);
    /**
     * @vftbl  10
     * @symbol  ?loadDirection\@StructureDataLoadHelper\@\@UEAA?AW4Type\@Direction\@\@W423\@\@Z
     */
    virtual enum class Direction::Type loadDirection(enum class Direction::Type);
    /**
     * @vftbl  11
     * @symbol  ?loadRotation\@StructureDataLoadHelper\@\@UEAA?AW4Rotation\@\@W42\@\@Z
     */
    virtual enum class Rotation loadRotation(enum class Rotation);
    /**
     * @vftbl  12
     * @symbol  ?loadMirror\@StructureDataLoadHelper\@\@UEAA?AW4Mirror\@\@W42\@\@Z
     */
    virtual enum class Mirror loadMirror(enum class Mirror);
    /**
     * @vftbl  13
     * @symbol  ?loadActorUniqueID\@StructureDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @vftbl  14
     * @symbol  ?loadOwnerID\@StructureDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @vftbl  15
     * @symbol  ?loadActorInternalComponentInfo\@StructureDataLoadHelper\@\@UEAAPEBUComponentInfo\@InternalComponentRegistry\@\@AEBV?$unordered_map\@VHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@\@std\@\@\@5\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@\@Z
     */
    virtual struct InternalComponentRegistry::ComponentInfo const * loadActorInternalComponentInfo(class std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct InternalComponentRegistry::ComponentInfo>>> const &, std::string const &);
    /**
     * @vftbl  16
     * @symbol  ?getType\@StructureDataLoadHelper\@\@UEBA?AW4DataLoadHelperType\@\@XZ
     */
    virtual enum class DataLoadHelperType getType() const;
    /**
     * @vftbl  17
     * @symbol  ?shouldResetTime\@StructureDataLoadHelper\@\@UEAA_NXZ
     */
    virtual bool shouldResetTime();
    /**
     * @vftbl  18
     * @symbol  ?_generateNewID\@StructureDataLoadHelper\@\@MEAA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID _generateNewID();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREDATALOADHELPER
    /**
     * @symbol  ?loadRotationDegreesX\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @symbol  ?loadRotationRadiansX\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationRadiansX(float);
#endif
    /**
     * @symbol  ??0StructureDataLoadHelper\@\@QEAA\@AEBVBlockPos\@\@0AEBVVec3\@\@UActorUniqueID\@\@W4Rotation\@\@W4Mirror\@\@AEAVLevel\@\@\@Z
     */
    MCAPI StructureDataLoadHelper(class BlockPos const &, class BlockPos const &, class Vec3 const &, struct ActorUniqueID, enum class Rotation, enum class Mirror, class Level &);

};