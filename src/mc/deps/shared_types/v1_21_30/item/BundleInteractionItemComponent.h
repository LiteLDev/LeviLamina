#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct BundleInteractionItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8f26da;
    // NOLINTEND

public:
    // prevent constructor by default
    BundleInteractionItemComponent& operator=(BundleInteractionItemComponent const&);
    BundleInteractionItemComponent(BundleInteractionItemComponent const&);
    BundleInteractionItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
