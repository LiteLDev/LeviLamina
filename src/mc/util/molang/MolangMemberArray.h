#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangStruct_BaseAndPattern.h"
#include "mc/util/molang/MolangStruct_MinAndMax.h"
#include "mc/util/molang/MolangStruct_PoseIndexAndHurtTime.h"
#include "mc/util/molang/MolangStruct_RGB.h"
#include "mc/util/molang/MolangStruct_RGBA.h"
#include "mc/util/molang/MolangStruct_RotYAndPosY.h"
#include "mc/util/molang/MolangStruct_SpeedAndDirection.h"
#include "mc/util/molang/MolangStruct_TRS.h"
#include "mc/util/molang/MolangStruct_TentacleAngleAndSwimRotation.h"
#include "mc/util/molang/MolangStruct_UV.h"
#include "mc/util/molang/MolangStruct_XY.h"
#include "mc/util/molang/MolangStruct_XYZ.h"

struct MolangScriptArg;
struct MolangMemberVariable;

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

struct MolangMemberArray {
public:
    std::vector<MolangMemberVariable> mMembers;

public:
    // prevent constructor by default
    MolangMemberArray& operator=(MolangMemberArray const&);
    MolangMemberArray();

public:
    // NOLINTBEGIN
    // symbol: ??0MolangMemberArray@@QEAA@AEBU0@@Z
    MCAPI MolangMemberArray(struct MolangMemberArray const&);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_RGB@@AEBVColor@mce@@@Z
    MCAPI MolangMemberArray(::MolangStruct_RGB, class mce::Color const& color);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_RGBA@@AEBVColor@mce@@@Z
    MCAPI MolangMemberArray(::MolangStruct_RGBA, class mce::Color const& color);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_XY@@AEBVVec2@@@Z
    MCAPI MolangMemberArray(::MolangStruct_XY, class Vec2 const& vec);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_XYZ@@AEBVVec3@@@Z
    MCAPI MolangMemberArray(::MolangStruct_XYZ, class Vec3 const& vec);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_BaseAndPattern@@HH@Z
    MCAPI MolangMemberArray(::MolangStruct_BaseAndPattern, int base, int pattern);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_MinAndMax@@$$QEAU0@1@Z
    MCAPI MolangMemberArray(::MolangStruct_MinAndMax, struct MolangMemberArray&& min, struct MolangMemberArray&& max);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_PoseIndexAndHurtTime@@HH@Z
    MCAPI MolangMemberArray(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_RotYAndPosY@@MM@Z
    MCAPI MolangMemberArray(::MolangStruct_RotYAndPosY, float rotY, float posY);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_SpeedAndDirection@@MAEBVVec3@@@Z
    MCAPI MolangMemberArray(::MolangStruct_SpeedAndDirection, float speed, class Vec3 const& direction);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_TentacleAngleAndSwimRotation@@MM@Z
    MCAPI MolangMemberArray(::MolangStruct_TentacleAngleAndSwimRotation, float, float);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_UV@@MM@Z
    MCAPI MolangMemberArray(::MolangStruct_UV, float u, float v);

    // symbol: ??0MolangMemberArray@@QEAA@W4MolangStruct_TRS@@$$QEAU0@11@Z
    MCAPI MolangMemberArray(
        ::MolangStruct_TRS,
        struct MolangMemberArray&& translation,
        struct MolangMemberArray&& rotation,
        struct MolangMemberArray&& scale
    );

    // symbol: ?get@MolangMemberArray@@QEBAPEBUMolangScriptArg@@AEBVHashedString@@@Z
    MCAPI struct MolangScriptArg const* get(class HashedString const& name) const;

    // symbol: ?getOrAdd@MolangMemberArray@@QEAAAEAUMolangScriptArg@@AEBVHashedString@@@Z
    MCAPI struct MolangScriptArg& getOrAdd(class HashedString const& name);

    // symbol: ??8MolangMemberArray@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct MolangMemberArray const& rhs) const;

    // symbol: ??1MolangMemberArray@@QEAA@XZ
    MCAPI ~MolangMemberArray();

    // NOLINTEND
};
