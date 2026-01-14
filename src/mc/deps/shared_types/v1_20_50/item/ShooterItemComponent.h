#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ShooterItemComponent {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    struct Ammunition;
    // clang-format on

    // ShooterItemComponent inner types define
    struct Ammunition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mItem;
        ::ll::TypedStorage<1, 1, bool>                                   mUseOffhand;
        ::ll::TypedStorage<1, 1, bool>                                   mSearchInventory;
        ::ll::TypedStorage<1, 1, bool>                                   mUseInCreative;
        // NOLINTEND

    public:
        // prevent constructor by default
        Ammunition& operator=(Ammunition const&);
        Ammunition(Ammunition const&);
        Ammunition();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_20_50::ShooterItemComponent::Ammunition&
        operator=(::SharedTypes::v1_20_50::ShooterItemComponent::Ammunition&&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_50::ShooterItemComponent::Ammunition>> mAmmunition;
    ::ll::TypedStorage<4, 4, float> mMaxDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mChargeOnDraw;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
