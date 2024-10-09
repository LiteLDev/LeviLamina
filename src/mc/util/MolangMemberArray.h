#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangStruct_BaseAndPattern.h"
#include "mc/util/MolangStruct_MinAndMax.h"
#include "mc/util/MolangStruct_PoseIndexAndHurtTime.h"
#include "mc/util/MolangStruct_RGB.h"
#include "mc/util/MolangStruct_RGBA.h"
#include "mc/util/MolangStruct_RotYAndPosY.h"
#include "mc/util/MolangStruct_SpeedAndDirection.h"
#include "mc/util/MolangStruct_TRS.h"
#include "mc/util/MolangStruct_TentacleAngleAndSwimRotation.h"
#include "mc/util/MolangStruct_UV.h"
#include "mc/util/MolangStruct_XY.h"
#include "mc/util/MolangStruct_XYZ.h"

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

public:
    // NOLINTBEGIN
    MCAPI MolangMemberArray();

    MCAPI MolangMemberArray(struct MolangMemberArray const&);

    MCAPI MolangMemberArray(::MolangStruct_RGB, class mce::Color const& color);

    MCAPI MolangMemberArray(::MolangStruct_RGBA, class mce::Color const& color);

    MCAPI MolangMemberArray(::MolangStruct_XY, class Vec2 const& vec);

    MCAPI MolangMemberArray(::MolangStruct_XYZ, class Vec3 const& vec);

    MCAPI MolangMemberArray(::MolangStruct_BaseAndPattern, int base, int pattern);

    MCAPI MolangMemberArray(::MolangStruct_MinAndMax, struct MolangMemberArray&& min, struct MolangMemberArray&& max);

    MCAPI MolangMemberArray(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);

    MCAPI MolangMemberArray(::MolangStruct_RotYAndPosY, float rotY, float posY);

    MCAPI MolangMemberArray(::MolangStruct_SpeedAndDirection, float speed, class Vec3 const& direction);

    MCAPI MolangMemberArray(::MolangStruct_TentacleAngleAndSwimRotation, float tentacleAngle, float swimRotation);

    MCAPI MolangMemberArray(::MolangStruct_UV, float u, float v);

    MCAPI MolangMemberArray(
        ::MolangStruct_TRS,
        struct MolangMemberArray&& translation,
        struct MolangMemberArray&& rotation,
        struct MolangMemberArray&& scale
    );

    MCAPI struct MolangScriptArg const* get(class HashedString const& name) const;

    MCAPI struct MolangScriptArg& getOrAdd(class HashedString const& name);

    MCAPI bool operator==(struct MolangMemberArray const& rhs) const;

    MCAPI ~MolangMemberArray();

    // NOLINTEND
};
