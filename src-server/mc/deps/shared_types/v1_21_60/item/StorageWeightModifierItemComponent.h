#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct StorageWeightModifierItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkeefe4b;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageWeightModifierItemComponent& operator=(StorageWeightModifierItemComponent const&);
    StorageWeightModifierItemComponent(StorageWeightModifierItemComponent const&);
    StorageWeightModifierItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
