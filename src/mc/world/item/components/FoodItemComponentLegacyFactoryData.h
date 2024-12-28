#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct FoodItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk31717e;
    ::ll::UntypedStorage<4, 4>   mUnkda2c2f;
    ::ll::UntypedStorage<8, 16>  mUnkd22262;
    ::ll::UntypedStorage<1, 1>   mUnk82f616;
    ::ll::UntypedStorage<8, 256> mUnk178e77;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentLegacyFactoryData& operator=(FoodItemComponentLegacyFactoryData const&);
    FoodItemComponentLegacyFactoryData(FoodItemComponentLegacyFactoryData const&);
    FoodItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FoodItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
