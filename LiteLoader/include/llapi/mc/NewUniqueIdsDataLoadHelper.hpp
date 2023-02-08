/**
 * @file  NewUniqueIdsDataLoadHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "InternalComponentRegistry.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NewUniqueIdsDataLoadHelper.
 *
 */
class NewUniqueIdsDataLoadHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEWUNIQUEIDSDATALOADHELPER
public:
    class NewUniqueIdsDataLoadHelper& operator=(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NewUniqueIdsDataLoadHelper();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   -1811635979
     * @vftbl  13
     * @symbol  ?loadActorUniqueID\@NewUniqueIdsDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @hash   -1052734488
     * @vftbl  14
     * @symbol  ?loadOwnerID\@NewUniqueIdsDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @hash   301711647
     * @vftbl  15
     * @symbol  ?loadActorInternalComponentInfo\@NewUniqueIdsDataLoadHelper\@\@UEAAPEBUComponentInfo\@InternalComponentRegistry\@\@AEBV?$unordered_map\@VHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@\@std\@\@\@5\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@\@Z
     */
    virtual struct InternalComponentRegistry::ComponentInfo const * loadActorInternalComponentInfo(class std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct InternalComponentRegistry::ComponentInfo>>> const &, std::string const &);
    /**
     * @hash   -1364163181
     * @vftbl  16
     * @symbol  ?getType\@NewUniqueIdsDataLoadHelper\@\@UEBA?AW4DataLoadHelperType\@\@XZ
     */
    virtual enum class DataLoadHelperType getType() const;
    /**
     * @hash   -1552490883
     * @vftbl  17
     * @symbol  ?shouldResetTime\@NewUniqueIdsDataLoadHelper\@\@UEAA_NXZ
     */
    virtual bool shouldResetTime();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEWUNIQUEIDSDATALOADHELPER
    /**
     * @hash   1407665510
     * @symbol  ?loadBlockPosition\@NewUniqueIdsDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const &);
    /**
     * @hash   1949945587
     * @symbol  ?loadBlockPositionOffset\@NewUniqueIdsDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /**
     * @hash   898345479
     * @symbol  ?loadDirection\@NewUniqueIdsDataLoadHelper\@\@UEAA?AW4Type\@Direction\@\@W423\@\@Z
     */
    MCVAPI enum class Direction::Type loadDirection(enum class Direction::Type);
    /**
     * @hash   -1014930307
     * @symbol  ?loadDirection\@NewUniqueIdsDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    MCVAPI class Vec3 loadDirection(class Vec3 const &);
    /**
     * @hash   -1788286323
     * @symbol  ?loadFacingID\@NewUniqueIdsDataLoadHelper\@\@UEAAEE\@Z
     */
    MCVAPI unsigned char loadFacingID(unsigned char);
    /**
     * @hash   64300259
     * @symbol  ?loadMirror\@NewUniqueIdsDataLoadHelper\@\@UEAA?AW4Mirror\@\@W42\@\@Z
     */
    MCVAPI enum class Mirror loadMirror(enum class Mirror);
    /**
     * @hash   -1891104313
     * @symbol  ?loadPosition\@NewUniqueIdsDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    MCVAPI class Vec3 loadPosition(class Vec3 const &);
    /**
     * @hash   -1651509916
     * @symbol  ?loadRotation\@NewUniqueIdsDataLoadHelper\@\@UEAA?AW4Rotation\@\@W42\@\@Z
     */
    MCVAPI enum class Rotation loadRotation(enum class Rotation);
    /**
     * @hash   -711741885
     * @symbol  ?loadRotationDegreesX\@NewUniqueIdsDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @hash   27007682
     * @symbol  ?loadRotationDegreesY\@NewUniqueIdsDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationDegreesY(float);
    /**
     * @hash   1289820846
     * @symbol  ?loadRotationRadiansX\@NewUniqueIdsDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationRadiansX(float);
    /**
     * @hash   2028570413
     * @symbol  ?loadRotationRadiansY\@NewUniqueIdsDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationRadiansY(float);
#endif
    /**
     * @hash   -434773150
     * @symbol  ??0NewUniqueIdsDataLoadHelper\@\@QEAA\@AEAVILevel\@\@\@Z
     */
    MCAPI NewUniqueIdsDataLoadHelper(class ILevel &);

};