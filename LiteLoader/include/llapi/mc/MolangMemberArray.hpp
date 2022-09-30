/**
 * @file  MolangMemberArray.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    MolangMemberArray() = delete;
#endif

public:
    /**
     * @hash   -380842787
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_XYZ@@AEBVVec3@@@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XYZ, class Vec3 const &);
    /**
     * @hash   -2011862731
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_XY@@AEBVVec2@@@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XY, class Vec2 const &);
    /**
     * @hash   -1834047062
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_UV@@MM@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_UV, float, float);
    /**
     * @hash   -828326940
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_TentacleAngleAndSwimRotation@@MM@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TentacleAngleAndSwimRotation, float, float);
    /**
     * @hash   -1510467872
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_TRS@@$$QEAU0@11@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TRS, struct MolangMemberArray &&, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @hash   -857990234
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_SpeedAndDirection@@MAEBVVec3@@@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_SpeedAndDirection, float, class Vec3 const &);
    /**
     * @hash   -505859570
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_RotYAndPosY@@MM@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RotYAndPosY, float, float);
    /**
     * @hash   -1380112269
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_RGBA@@AEBVColor@mce@@@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGBA, class mce::Color const &);
    /**
     * @hash   -99847425
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_RGB@@AEBVColor@mce@@@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGB, class mce::Color const &);
    /**
     * @hash   -482638056
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_PoseIndexAndHurtTime@@HH@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_PoseIndexAndHurtTime, int, int);
    /**
     * @hash   -1319821447
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_MinAndMax@@$$QEAU0@1@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_MinAndMax, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @hash   176308840
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_BaseAndPattern@@HH@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_BaseAndPattern, int, int);
    /**
     * @hash   -253605219
     * @symbol ?add@MolangMemberArray@@QEAAXAEBVHashedString@@AEBUMolangScriptArg@@@Z
     */
    MCAPI void add(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @hash   -1195785860
     * @symbol ?get@MolangMemberArray@@QEBAPEBUMolangScriptArg@@AEBVHashedString@@@Z
     */
    MCAPI struct MolangScriptArg const * get(class HashedString const &) const;
    /**
     * @hash   1883011809
     * @symbol ?getMembers@MolangMemberArray@@QEBAPEBV?$vector@UMolangMemberVariable@@V?$allocator@UMolangMemberVariable@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct MolangMemberVariable> const * getMembers() const;
    /**
     * @hash   -1015069531
     * @symbol ?getOrAdd@MolangMemberArray@@QEAAAEAUMolangScriptArg@@AEBVHashedString@@@Z
     */
    MCAPI struct MolangScriptArg & getOrAdd(class HashedString const &);
    /**
     * @hash   -1066188900
     * @symbol ??8MolangMemberArray@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct MolangMemberArray const &) const;
    /**
     * @hash   -109822677
     * @symbol ??1MolangMemberArray@@QEAA@XZ
     */
    MCAPI ~MolangMemberArray();

};