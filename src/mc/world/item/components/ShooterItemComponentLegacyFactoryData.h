#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

struct ShooterItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // ShooterItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponentLegacyFactoryData inner types define
    struct ShooterAmmunitionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ItemDescriptor> itemDesc;
        ::ll::TypedStorage<1, 1, bool>              useOffhand;
        ::ll::TypedStorage<1, 1, bool>              searchInventory;
        ::ll::TypedStorage<1, 1, bool>              useInCreative;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry>>
                                    mAmmunition;
    ::ll::TypedStorage<4, 4, float> mDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mChargeOnDraw;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
