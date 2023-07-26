/**
 * @file  MolangMemberArray.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_XYZ\@\@AEBVVec3\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XYZ, class Vec3 const &);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_XY\@\@AEBVVec2\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XY, class Vec2 const &);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_UV\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_UV, float, float);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_TentacleAngleAndSwimRotation\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TentacleAngleAndSwimRotation, float, float);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_TRS\@\@$$QEAU0\@11\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TRS, struct MolangMemberArray &&, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_SpeedAndDirection\@\@MAEBVVec3\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_SpeedAndDirection, float, class Vec3 const &);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RotYAndPosY\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RotYAndPosY, float, float);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RGBA\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGBA, class mce::Color const &);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RGB\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGB, class mce::Color const &);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_PoseIndexAndHurtTime\@\@HH\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_PoseIndexAndHurtTime, int, int);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_MinAndMax\@\@$$QEAU0\@1\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_MinAndMax, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_BaseAndPattern\@\@HH\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_BaseAndPattern, int, int);
    /**
     * @symbol  ??0MolangMemberArray\@\@QEAA\@XZ
     */
    MCAPI MolangMemberArray();
    /**
     * @symbol  ?add\@MolangMemberArray\@\@QEAAXAEBVHashedString\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void add(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol  ?get\@MolangMemberArray\@\@QEBAPEBUMolangScriptArg\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct MolangScriptArg const * get(class HashedString const &) const;
    /**
     * @symbol  ?getMembers\@MolangMemberArray\@\@QEBAPEBV?$vector\@UMolangMemberVariable\@\@V?$allocator\@UMolangMemberVariable\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MolangMemberVariable> const * getMembers() const;
    /**
     * @symbol  ?getOrAdd\@MolangMemberArray\@\@QEAAAEAUMolangScriptArg\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct MolangScriptArg & getOrAdd(class HashedString const &);
    /**
     * @symbol  ??8MolangMemberArray\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct MolangMemberArray const &) const;
    /**
     * @symbol  ??1MolangMemberArray\@\@QEAA\@XZ
     */
    MCAPI ~MolangMemberArray();

};