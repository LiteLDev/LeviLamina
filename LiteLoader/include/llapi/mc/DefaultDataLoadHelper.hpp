/**
 * @file  MC/DefaultDataLoadHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "InternalComponentRegistry.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefaultDataLoadHelper.
 *
 */
class DefaultDataLoadHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTDATALOADHELPER
public:
    class DefaultDataLoadHelper& operator=(class DefaultDataLoadHelper const &) = delete;
    DefaultDataLoadHelper(class DefaultDataLoadHelper const &) = delete;
    DefaultDataLoadHelper() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DefaultDataLoadHelper();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   247690693
     * @vftbl  15
     * @symbol ?loadActorInternalComponentInfo@DefaultDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
     */
    virtual struct InternalComponentRegistry::ComponentInfo const * loadActorInternalComponentInfo(class std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct InternalComponentRegistry::ComponentInfo>>> const &, std::string const &);
    /**
     * @hash   -111619463
     * @vftbl  16
     * @symbol ?getType@DefaultDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
     */
    virtual enum DataLoadHelperType getType() const;
    /**
     * @hash   1343481443
     * @vftbl  17
     * @symbol ?shouldResetTime@DefaultDataLoadHelper@@UEAA_NXZ
     */
    virtual bool shouldResetTime();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFAULTDATALOADHELPER
    /**
     * @hash   1494172831
     * @symbol ?loadActorUniqueID@DefaultDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     */
    MCVAPI struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @hash   1229667792
     * @symbol ?loadBlockPosition@DefaultDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     */
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const &);
    /**
     * @hash   -486515043
     * @symbol ?loadBlockPositionOffset@DefaultDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     */
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /**
     * @hash   -1647382873
     * @symbol ?loadDirection@DefaultDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     */
    MCVAPI class Vec3 loadDirection(class Vec3 const &);
    /**
     * @hash   2039899185
     * @symbol ?loadDirection@DefaultDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
     */
    MCVAPI enum Direction::Type loadDirection(enum Direction::Type);
    /**
     * @hash   -1083459529
     * @symbol ?loadFacingID@DefaultDataLoadHelper@@UEAAEE@Z
     */
    MCVAPI unsigned char loadFacingID(unsigned char);
    /**
     * @hash   1118592269
     * @symbol ?loadMirror@DefaultDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
     */
    MCVAPI enum Mirror loadMirror(enum Mirror);
    /**
     * @hash   5269074
     * @symbol ?loadOwnerID@DefaultDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     */
    MCVAPI struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @hash   1365679857
     * @symbol ?loadPosition@DefaultDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     */
    MCVAPI class Vec3 loadPosition(class Vec3 const &);
    /**
     * @hash   213078350
     * @symbol ?loadRotation@DefaultDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
     */
    MCVAPI enum Rotation loadRotation(enum Rotation);
    /**
     * @hash   709231213
     * @symbol ?loadRotationDegreesX@DefaultDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @hash   -420324564
     * @symbol ?loadRotationDegreesY@DefaultDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationDegreesY(float);
    /**
     * @hash   60575768
     * @symbol ?loadRotationRadiansX@DefaultDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationRadiansX(float);
    /**
     * @hash   -1068980009
     * @symbol ?loadRotationRadiansY@DefaultDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationRadiansY(float);
#endif

};