#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IItemComponentLegacyFactoryData {
public:
    // IItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // IItemComponentLegacyFactoryData inner types define
    struct Components {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnka5adbd;
        // NOLINTEND

    public:
        // prevent constructor by default
        Components& operator=(Components const&);
        Components(Components const&);
        Components();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemComponentLegacyFactoryData() = default;
    // NOLINTEND
};
