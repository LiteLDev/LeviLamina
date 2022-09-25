/**
 * @file  StructureDataLoadHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~StructureDataLoadHelper();
    /**
     * @hash   262874371
     * @vftbl  1
     * @symbol ?loadPosition@StructureDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     */
    virtual class Vec3 loadPosition(class Vec3 const &);
    /**
     * @hash   -690399134
     * @vftbl  2
     * @symbol ?loadBlockPosition@StructureDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     */
    virtual class BlockPos loadBlockPosition(class BlockPos const &);
    /**
     * @hash   -209489489
     * @vftbl  3
     * @symbol ?loadBlockPositionOffset@StructureDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     */
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   2060883742
     * @vftbl  5
     * @symbol ?loadRotationDegreesY@StructureDataLoadHelper@@UEAAMM@Z
     */
    virtual float loadRotationDegreesY(float);
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -1341612727
     * @vftbl  7
     * @symbol ?loadRotationRadiansY@StructureDataLoadHelper@@UEAAMM@Z
     */
    virtual float loadRotationRadiansY(float);
    /**
     * @hash   -45452919
     * @vftbl  8
     * @symbol ?loadFacingID@StructureDataLoadHelper@@UEAAEE@Z
     */
    virtual unsigned char loadFacingID(unsigned char);
    /**
     * @hash   1854092841
     * @vftbl  9
     * @symbol ?loadDirection@StructureDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     */
    virtual class Vec3 loadDirection(class Vec3 const &);
    /**
     * @hash   -1866330013
     * @vftbl  10
     * @symbol ?loadDirection@StructureDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
     */
    virtual enum Direction::Type loadDirection(enum Direction::Type);
    /**
     * @hash   129180960
     * @vftbl  11
     * @symbol ?loadRotation@StructureDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
     */
    virtual enum Rotation loadRotation(enum Rotation);
    /**
     * @hash   -357159169
     * @vftbl  12
     * @symbol ?loadMirror@StructureDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
     */
    virtual enum Mirror loadMirror(enum Mirror);
    /**
     * @hash   1810333265
     * @vftbl  13
     * @symbol ?loadActorUniqueID@StructureDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @hash   85440596
     * @vftbl  14
     * @symbol ?loadOwnerID@StructureDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @hash   -1149407821
     * @vftbl  15
     * @symbol ?loadActorInternalComponentInfo@StructureDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
     */
    virtual struct InternalComponentRegistry::ComponentInfo const * loadActorInternalComponentInfo(class std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct InternalComponentRegistry::ComponentInfo>>> const &, std::string const &);
    /**
     * @hash   94589719
     * @vftbl  16
     * @symbol ?getType@StructureDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
     */
    virtual enum DataLoadHelperType getType() const;
    /**
     * @hash   772184273
     * @vftbl  17
     * @symbol ?shouldResetTime@StructureDataLoadHelper@@UEAA_NXZ
     */
    virtual bool shouldResetTime();
    /**
     * @hash   705172233
     * @vftbl  18
     * @symbol ?_generateNewID@StructureDataLoadHelper@@MEAA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID _generateNewID();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREDATALOADHELPER
    /**
     * @hash   -1643557313
     * @symbol ?loadRotationDegreesX@StructureDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @hash   -751209494
     * @symbol ?loadRotationRadiansX@StructureDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationRadiansX(float);
#endif
    /**
     * @hash   614809903
     * @symbol ??0StructureDataLoadHelper@@QEAA@AEBVBlockPos@@0AEBVVec3@@UActorUniqueID@@W4Rotation@@W4Mirror@@AEAVLevel@@@Z
     */
    MCAPI StructureDataLoadHelper(class BlockPos const &, class BlockPos const &, class Vec3 const &, struct ActorUniqueID, enum Rotation, enum Mirror, class Level &);

};