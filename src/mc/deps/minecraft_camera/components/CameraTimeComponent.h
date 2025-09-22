#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraTimeComponent {
public:
    // CameraTimeComponent inner types declare
    // clang-format off
    struct DeltaTime;
    struct ElapsedTime;
    // clang-format on

    // CameraTimeComponent inner types define
    struct ElapsedTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk247a34;
        // NOLINTEND

    public:
        // prevent constructor by default
        ElapsedTime& operator=(ElapsedTime const&);
        ElapsedTime(ElapsedTime const&);
        ElapsedTime();
    };

    struct DeltaTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk1bf191;
        ::ll::UntypedStorage<4, 8> mUnk1b6a1b;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeltaTime& operator=(DeltaTime const&);
        DeltaTime(DeltaTime const&);
        DeltaTime();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mUpdatedAt;
    ::ll::TypedStorage<4, 4, float> mDeltaTime;
    // NOLINTEND
};
