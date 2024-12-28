#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRuntimeID;
class MoveActorDeltaData;
class Vec2;
class Vec3;
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
    MoveActorAbsoluteData& operator=(MoveActorAbsoluteData const&);
    MoveActorAbsoluteData(MoveActorAbsoluteData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveActorAbsoluteData();

    MCAPI explicit MoveActorAbsoluteData(::Actor const& entity);

    MCAPI ::MoveActorDeltaData calculateDelta(::MoveActorAbsoluteData const& previousAbsoluteMoveData) const;

    MCAPI ::Vec2 getRot() const;

    MCAPI float getYBodyRot() const;

    MCAPI float getYHeadRot() const;

    MCAPI bool isDifferenceSignificant(::MoveActorAbsoluteData const& old, ::Vec3 const& velocity) const;

    MCAPI void setRot(::Vec2 const& rot);

    MCAPI void setYBodyRot(float rot);

    MCAPI void setYHeadRot(float rot);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Actor const& entity);
    // NOLINTEND
};
