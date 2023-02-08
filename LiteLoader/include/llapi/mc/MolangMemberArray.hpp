/**
 * @file  MolangMemberArray.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangMemberArray.
 *
 */
struct MolangMemberArray {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGMEMBERARRAY
public:
    struct MolangMemberArray& operator=(struct MolangMemberArray const &) = delete;
    MolangMemberArray(struct MolangMemberArray const &) = delete;
#endif

public:
    /**
     * @hash   -1431607875
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_XYZ\@\@AEBVVec3\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XYZ, class Vec3 const &);
    /**
     * @hash   1232308725
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_XY\@\@AEBVVec2\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XY, class Vec2 const &);
    /**
     * @hash   1410109018
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_UV\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_UV, float, float);
    /**
     * @hash   -1879153532
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_TentacleAngleAndSwimRotation\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TentacleAngleAndSwimRotation, float, float);
    /**
     * @hash   1733672832
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_TRS\@\@$$QEAU0\@11\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TRS, struct MolangMemberArray &&, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @hash   -1908847578
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_SpeedAndDirection\@\@MAEBVVec3\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_SpeedAndDirection, float, class Vec3 const &);
    /**
     * @hash   -1556732290
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RotYAndPosY\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RotYAndPosY, float, float);
    /**
     * @hash   1863966931
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RGBA\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGBA, class mce::Color const &);
    /**
     * @hash   -1150750897
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RGB\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGB, class mce::Color const &);
    /**
     * @hash   -1533572280
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_PoseIndexAndHurtTime\@\@HH\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_PoseIndexAndHurtTime, int, int);
    /**
     * @hash   1924211625
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_MinAndMax\@\@$$QEAU0\@1\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_MinAndMax, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @hash   -874656136
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_BaseAndPattern\@\@HH\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_BaseAndPattern, int, int);
    /**
     * @hash   -1138066933
     * @symbol  ??0MolangMemberArray\@\@QEAA\@XZ
     */
    MCAPI MolangMemberArray();
    /**
     * @hash   -1304354931
     * @symbol  ?add\@MolangMemberArray\@\@QEAAXAEBVHashedString\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void add(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @hash   2048447100
     * @symbol  ?get\@MolangMemberArray\@\@QEBAPEBUMolangScriptArg\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct MolangScriptArg const * get(class HashedString const &) const;
    /**
     * @hash   2015968081
     * @symbol  ?getMembers\@MolangMemberArray\@\@QEBAPEBV?$vector\@UMolangMemberVariable\@\@V?$allocator\@UMolangMemberVariable\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MolangMemberVariable> const * getMembers() const;
    /**
     * @hash   -2065803867
     * @symbol  ?getOrAdd\@MolangMemberArray\@\@QEAAAEAUMolangScriptArg\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct MolangScriptArg & getOrAdd(class HashedString const &);
    /**
     * @hash   -2116938612
     * @symbol  ??8MolangMemberArray\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct MolangMemberArray const &) const;
    /**
     * @hash   94524363
     * @symbol  ??1MolangMemberArray\@\@QEAA\@XZ
     */
    MCAPI ~MolangMemberArray();

};