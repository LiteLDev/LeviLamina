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
    MCAPI MolangMemberArray(::MolangStruct_RGB, ::mce::Color const& color);

    MCAPI MolangMemberArray(::MolangStruct_RGBA, ::mce::Color const& color);

    MCAPI MolangMemberArray(::MolangStruct_XY, ::Vec2 const& vec);

    MCAPI MolangMemberArray(::MolangStruct_XYZ, ::Vec3 const& vec);

    MCAPI MolangMemberArray(::MolangStruct_BaseAndPattern, int base, int pattern);

    MCAPI MolangMemberArray(::MolangStruct_MinAndMax, ::MolangMemberArray&& min, ::MolangMemberArray&& max);

    MCAPI MolangMemberArray(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);

    MCAPI MolangMemberArray(::MolangStruct_RotYAndPosY, float rotY, float posY);

    MCAPI MolangMemberArray(::MolangStruct_SpeedAndDirection, float speed, ::Vec3 const& direction);

    MCAPI MolangMemberArray(::MolangStruct_TentacleAngleAndSwimRotation, float tentacleAngle, float swimRotation);

    MCAPI MolangMemberArray(::MolangStruct_UV, float u, float v);

    MCAPI MolangMemberArray(
        ::MolangStruct_TRS,
        ::MolangMemberArray&& translation,
        ::MolangMemberArray&& rotation,
        ::MolangMemberArray&& scale
    );

    MCAPI void add(::HashedString const& name, ::MolangScriptArg const& value);

    MCAPI ::MolangScriptArg& getOrAdd(::HashedString const& name);

    MCAPI ~MolangMemberArray();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MolangStruct_RGB, ::mce::Color const& color);

    MCAPI void* $ctor(::MolangStruct_RGBA, ::mce::Color const& color);

    MCAPI void* $ctor(::MolangStruct_XY, ::Vec2 const& vec);

    MCAPI void* $ctor(::MolangStruct_XYZ, ::Vec3 const& vec);

    MCAPI_C void* $ctor(::MolangStruct_Z, float z);

    MCAPI void* $ctor(::MolangStruct_BaseAndPattern, int base, int pattern);

    MCAPI void* $ctor(::MolangStruct_MinAndMax, ::MolangMemberArray&& min, ::MolangMemberArray&& max);

    MCAPI void* $ctor(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);

    MCAPI void* $ctor(::MolangStruct_RotYAndPosY, float rotY, float posY);

    MCAPI void* $ctor(::MolangStruct_SpeedAndDirection, float speed, ::Vec3 const& direction);

    MCAPI void* $ctor(::MolangStruct_TentacleAngleAndSwimRotation, float tentacleAngle, float swimRotation);

    MCAPI void* $ctor(::MolangStruct_UV, float u, float v);

    MCAPI void* $ctor(
        ::MolangStruct_TRS,
        ::MolangMemberArray&& translation,
        ::MolangMemberArray&& rotation,
        ::MolangMemberArray&& scale
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
