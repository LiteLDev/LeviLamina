#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlatformStoreIconModel {
public:
    // PlatformStoreIconModel inner types declare
    // clang-format off
    struct PlatformStoreIconVisibility;
    // clang-format on

    // PlatformStoreIconModel inner types define
    struct PlatformStoreIconVisibility {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka858a6;
        ::ll::UntypedStorage<1, 1> mUnk53ae1c;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlatformStoreIconVisibility& operator=(PlatformStoreIconVisibility const&);
        PlatformStoreIconVisibility(PlatformStoreIconVisibility const&);
        PlatformStoreIconVisibility();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk37455c;
    ::ll::UntypedStorage<8, 8> mUnk419a9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformStoreIconModel& operator=(PlatformStoreIconModel const&);
    PlatformStoreIconModel(PlatformStoreIconModel const&);
    PlatformStoreIconModel();
};
