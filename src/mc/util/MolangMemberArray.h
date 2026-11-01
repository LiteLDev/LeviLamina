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
#include "mc/util/MolangStruct_Z.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Vec2;
class Vec3;
struct MolangMemberVariable;
struct MolangScriptArg;
namespace mce { class Color; }
// clang-format on

struct MolangMemberArray {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangMemberVariable>> mMembers;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangMemberArray();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangMemberArray(::MolangStruct_RGB, ::mce::Color const& color);

    MCAPI MolangMemberArray(::MolangStruct_RGBA, ::mce::Color const& color);

    MCAPI MolangMemberArray(::MolangStruct_XY, ::Vec2 const& vec);

    MCAPI MolangMemberArray(::MolangStruct_XYZ, ::Vec3 const& vec);

#ifdef LL_PLAT_C
    MCNAPI MolangMemberArray(::MolangStruct_Z, float z);
#endif

    MCNAPI MolangMemberArray(::MolangStruct_BaseAndPattern, int base, int pattern);

    MCNAPI MolangMemberArray(::MolangStruct_MinAndMax, ::MolangMemberArray&& min, ::MolangMemberArray&& max);

    MCNAPI MolangMemberArray(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);

    MCNAPI MolangMemberArray(::MolangStruct_RotYAndPosY, float rotY, float posY);

    MCNAPI MolangMemberArray(::MolangStruct_SpeedAndDirection, float speed, ::Vec3 const& direction);

    MCNAPI MolangMemberArray(::MolangStruct_TentacleAngleAndSwimRotation, float tentacleAngle, float swimRotation);

    MCNAPI MolangMemberArray(::MolangStruct_UV, float u, float v);

    MCNAPI MolangMemberArray(
        ::MolangStruct_TRS,
        ::MolangMemberArray&& translation,
        ::MolangMemberArray&& rotation,
        ::MolangMemberArray&& scale
    );

    MCNAPI void add(::HashedString const& name, ::MolangScriptArg const& value);

    MCNAPI ::MolangScriptArg& getOrAdd(::HashedString const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangStruct_RGB, ::mce::Color const& color);

    MCAPI void* $ctor(::MolangStruct_RGBA, ::mce::Color const& color);

    MCAPI void* $ctor(::MolangStruct_XY, ::Vec2 const& vec);

    MCAPI void* $ctor(::MolangStruct_XYZ, ::Vec3 const& vec);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::MolangStruct_Z, float z);
#endif

    MCNAPI void* $ctor(::MolangStruct_BaseAndPattern, int base, int pattern);

    MCNAPI void* $ctor(::MolangStruct_MinAndMax, ::MolangMemberArray&& min, ::MolangMemberArray&& max);

    MCNAPI void* $ctor(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);

    MCNAPI void* $ctor(::MolangStruct_RotYAndPosY, float rotY, float posY);

    MCNAPI void* $ctor(::MolangStruct_SpeedAndDirection, float speed, ::Vec3 const& direction);

    MCNAPI void* $ctor(::MolangStruct_TentacleAngleAndSwimRotation, float tentacleAngle, float swimRotation);

    MCNAPI void* $ctor(::MolangStruct_UV, float u, float v);

    MCNAPI void* $ctor(
        ::MolangStruct_TRS,
        ::MolangMemberArray&& translation,
        ::MolangMemberArray&& rotation,
        ::MolangMemberArray&& scale
    );
    // NOLINTEND
};
