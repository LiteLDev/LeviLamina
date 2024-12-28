#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct RopeParams {
public:
    // RopeParams inner types define
    enum class Flags : int {
        // bitfield representation
        None             = 0,
        DynamicResize    = 1 << 1,
        DynamicStretch   = 1 << 2,
        CollisionEnabled = 1 << 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf4a723;
    ::ll::UntypedStorage<4, 4>  mUnkc7baa0;
    ::ll::UntypedStorage<4, 4>  mUnk78d532;
    ::ll::UntypedStorage<4, 4>  mUnk860abb;
    ::ll::UntypedStorage<4, 4>  mUnkefe7eb;
    ::ll::UntypedStorage<4, 4>  mUnkb82663;
    ::ll::UntypedStorage<4, 4>  mUnk946de8;
    ::ll::UntypedStorage<4, 4>  mUnkb4d863;
    ::ll::UntypedStorage<4, 12> mUnk357fdc;
    ::ll::UntypedStorage<4, 12> mUnk1a6433;
    ::ll::UntypedStorage<8, 8>  mUnkb608e1;
    ::ll::UntypedStorage<8, 8>  mUnk6faeff;
    ::ll::UntypedStorage<4, 4>  mUnk41af79;
    ::ll::UntypedStorage<4, 4>  mUnk88464a;
    ::ll::UntypedStorage<4, 4>  mUnkedc8bd;
    // NOLINTEND

public:
    // prevent constructor by default
    RopeParams& operator=(RopeParams const&);
    RopeParams(RopeParams const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RopeParams();

    MCAPI RopeParams(::Vec3 const& startPin, ::Vec3 const& endPin, float length);

    MCAPI void leadInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Vec3 const& startPin, ::Vec3 const& endPin, float length);
    // NOLINTEND
};
