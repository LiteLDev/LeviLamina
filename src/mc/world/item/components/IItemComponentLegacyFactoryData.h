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
        ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::shared_ptr<::IItemComponentLegacyFactoryData>>> mMap;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemComponentLegacyFactoryData() = default;
    // NOLINTEND
};
