#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class MoveActorAbsoluteData {
public:
    // MoveActorAbsoluteData inner types define
    union Header {
    public:
        // member variables
        // NOLINTBEGIN
        bool                            mForceCompletion      : 1;
        bool                            mForceMove            : 1;
        bool                            mForceMoveLocalEntity : 1;
        bool                            mIsOnGround           : 1;
        ::ll::TypedStorage<1, 1, uchar> mRaw;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mRuntimeId;
    ::ll::TypedStorage<1, 1, ::MoveActorAbsoluteData::Header> mHeader;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mPos;
    ::ll::TypedStorage<1, 1, schar>                           mRotX;
    ::ll::TypedStorage<1, 1, schar>                           mRotY;
    ::ll::TypedStorage<1, 1, schar>                           mRotYHead;
    ::ll::TypedStorage<1, 1, schar>                           mRotYBody;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveActorAbsoluteData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MoveActorAbsoluteData(::Actor const& entity);

    MCAPI bool isDifferenceSignificant(::MoveActorAbsoluteData const& old, ::Vec3 const& velocity) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& entity);
    // NOLINTEND
};
