#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct FoodItemComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7545a6;
    ::ll::UntypedStorage<4, 4>  mUnk3dbd09;
    ::ll::UntypedStorage<8, 16> mUnk7c1b29;
    ::ll::UntypedStorage<1, 1>  mUnk84e887;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentData_v1_20_30();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FoodItemComponentData_v1_20_30(::FoodItemComponentData_v1_20_30 const&);

    MCAPI ::FoodItemComponentData_v1_20_30& operator=(::FoodItemComponentData_v1_20_30 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FoodItemComponentData_v1_20_30 const&);
    // NOLINTEND
};
