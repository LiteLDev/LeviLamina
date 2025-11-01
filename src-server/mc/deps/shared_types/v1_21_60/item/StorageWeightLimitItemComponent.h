#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct StorageWeightLimitItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7c1012;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageWeightLimitItemComponent& operator=(StorageWeightLimitItemComponent const&);
    StorageWeightLimitItemComponent(StorageWeightLimitItemComponent const&);
    StorageWeightLimitItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
