#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/UseModifiersItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct UseModifiersItemComponent : public ::SharedTypes::v1_20_50::UseModifiersItemComponent {
public:
    // UseModifiersItemComponent inner types define
    enum class StartUsing : uchar {
        IfFirst = 0,
        Always  = 1,
        Size    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_30::UseModifiersItemComponent::StartUsing> mStartUsing;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
