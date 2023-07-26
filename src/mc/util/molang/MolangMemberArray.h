#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

struct MolangMemberArray {

public:
    // prevent constructor by default
    MolangMemberArray& operator=(MolangMemberArray const&) = delete;
    MolangMemberArray(MolangMemberArray const&)            = delete;
    MolangMemberArray()                                    = delete;

public:
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_TentacleAngleAndSwimRotation\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TentacleAngleAndSwimRotation, float, float); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_BaseAndPattern\@\@HH\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_BaseAndPattern, int, int); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RGB\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGB, class mce::Color const&); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_XYZ\@\@AEBVVec3\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XYZ, class Vec3 const&); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RGBA\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGBA, class mce::Color const&); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_SpeedAndDirection\@\@MAEBVVec3\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_SpeedAndDirection, float, class Vec3 const&); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_RotYAndPosY\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RotYAndPosY, float, float); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_TRS\@\@$$QEAU0\@11\@Z
     */
    MCAPI
    MolangMemberArray(enum class MolangStruct_TRS, struct MolangMemberArray&&, struct MolangMemberArray&&, struct MolangMemberArray&&); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_XY\@\@AEBVVec2\@\@\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XY, class Vec2 const&); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_MinAndMax\@\@$$QEAU0\@1\@Z
     */
    MCAPI
    MolangMemberArray(enum class MolangStruct_MinAndMax, struct MolangMemberArray&&, struct MolangMemberArray&&); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_PoseIndexAndHurtTime\@\@HH\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_PoseIndexAndHurtTime, int, int); // NOLINT
    /**
     * @symbol ??0MolangMemberArray\@\@QEAA\@W4MolangStruct_UV\@\@MM\@Z
     */
    MCAPI MolangMemberArray(enum class MolangStruct_UV, float, float); // NOLINT
    /**
     * @symbol ?add\@MolangMemberArray\@\@QEAAXAEBVHashedString\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void add(class HashedString const&, struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol ?get\@MolangMemberArray\@\@QEBAPEBUMolangScriptArg\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct MolangScriptArg const* get(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?getOrAdd\@MolangMemberArray\@\@QEAAAEAUMolangScriptArg\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct MolangScriptArg& getOrAdd(class HashedString const&); // NOLINT
    /**
     * @symbol ??8MolangMemberArray\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct MolangMemberArray const&) const; // NOLINT
    /**
     * @symbol ??1MolangMemberArray\@\@QEAA\@XZ
     */
    MCAPI ~MolangMemberArray(); // NOLINT
};
