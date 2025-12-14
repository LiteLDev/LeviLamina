#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct FoodItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  mNutrition;
    ::ll::TypedStorage<4, 4, float>                mSaturationModifier;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>    mUsingConvertsTo;
    ::ll::TypedStorage<1, 1, bool>                 mCanAlwaysEat;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnConsume;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentLegacyFactoryData& operator=(FoodItemComponentLegacyFactoryData const&);
    FoodItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FoodItemComponentLegacyFactoryData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FoodItemComponentLegacyFactoryData(::FoodItemComponentLegacyFactoryData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FoodItemComponentLegacyFactoryData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
