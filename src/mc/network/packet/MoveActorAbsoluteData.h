#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MoveActorDeltaData;
// clang-format on

class MoveActorAbsoluteData {
public:
    // MoveActorAbsoluteData inner types define
    union Header {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk1384a9;
        ::ll::UntypedStorage<1, 1> mUnkc935f2;
        ::ll::UntypedStorage<1, 1> mUnke80ecf;
        ::ll::UntypedStorage<1, 1> mUnk482754;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mRuntimeId;
    ::ll::TypedStorage<1, 1, ::MoveActorAbsoluteData::Header> mHeader;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mPos;
    ::ll::TypedStorage<1, 1, char>                            mRotX;
    ::ll::TypedStorage<1, 1, char>                            mRotY;
    ::ll::TypedStorage<1, 1, char>                            mRotYHead;
    ::ll::TypedStorage<1, 1, char>                            mRotYBody;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveActorAbsoluteData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MoveActorAbsoluteData(::Actor const& entity);

    MCNAPI ::MoveActorDeltaData calculateDelta(::MoveActorAbsoluteData const& previousAbsoluteMoveData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const& entity);
    // NOLINTEND
};
