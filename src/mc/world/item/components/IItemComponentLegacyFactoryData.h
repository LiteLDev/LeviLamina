#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IItemComponentLegacyFactoryData {
public:
    // IItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // IItemComponentLegacyFactoryData inner types define
    struct Components {
    public:
        // prevent constructor by default
        Components(Components const&);
        Components();

    public:
        // NOLINTBEGIN
        MCAPI struct IItemComponentLegacyFactoryData::Components&
        operator=(struct IItemComponentLegacyFactoryData::Components&&);

        MCAPI struct IItemComponentLegacyFactoryData::Components&
        operator=(struct IItemComponentLegacyFactoryData::Components const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    IItemComponentLegacyFactoryData& operator=(IItemComponentLegacyFactoryData const&);
    IItemComponentLegacyFactoryData(IItemComponentLegacyFactoryData const&);
    IItemComponentLegacyFactoryData();
};
