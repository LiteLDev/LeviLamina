#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class ExplodeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk19c889;
    ::ll::UntypedStorage<4, 4> mUnk99d116;
    ::ll::UntypedStorage<4, 4> mUnk62a77f;
    ::ll::UntypedStorage<4, 4> mUnkb32111;
    ::ll::UntypedStorage<1, 1> mUnk5ddf5d;
    ::ll::UntypedStorage<1, 1> mUnk8a65b7;
    ::ll::UntypedStorage<4, 4> mUnkd971d3;
    ::ll::UntypedStorage<1, 1> mUnk25b64a;
    ::ll::UntypedStorage<1, 1> mUnk89afe7;
    ::ll::UntypedStorage<1, 1> mUnk1207e7;
    ::ll::UntypedStorage<1, 1> mUnkea255f;
    ::ll::UntypedStorage<1, 1> mUnk9a50a6;
    ::ll::UntypedStorage<1, 1> mUnk3c0b59;
    ::ll::UntypedStorage<4, 4> mUnka3f423;
    ::ll::UntypedStorage<2, 2> mUnkec48ae;
    ::ll::UntypedStorage<4, 4> mUnkfb9442;
    ::ll::UntypedStorage<1, 1> mUnk2ce52b;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplodeComponent& operator=(ExplodeComponent const&);
    ExplodeComponent(ExplodeComponent const&);
    ExplodeComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void explode(::Actor& actor, ::Vec3 const& explosionPosition);
    // NOLINTEND
};
