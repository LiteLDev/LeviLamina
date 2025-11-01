#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class PushableComponent {
public:
    // PushableComponent inner types define
    using PushVectors = ::std::pair<::Vec3, ::Vec3>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsPushable;
    ::ll::TypedStorage<1, 1, bool> mIsPushableByPiston;
    ::ll::TypedStorage<4, 4, float> mPushThrough;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::pair<::Vec3, ::Vec3> _calculatePushVectorBoat(::Actor& owner, ::Actor& other, bool pushSelfOnly);

    MCAPI ::std::pair<::Vec3, ::Vec3> _calculatePushVectorMinecart(::Actor& owner, ::Actor& other, bool pushSelfOnly);

    MCAPI void push(::Actor& owner, ::Vec3 const& vec);

    MCAPI void push(::Actor& owner, ::Actor& other, bool pushSelfOnly);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void pullToRide(::Actor& owner, ::Actor& other);

    MCAPI static bool skipPush(::Actor& owner, ::Actor& other);
    // NOLINTEND

};
