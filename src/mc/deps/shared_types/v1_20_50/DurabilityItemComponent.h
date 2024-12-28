#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct DurabilityItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk3e346e;
    ::ll::UntypedStorage<4, 4> mUnk29f573;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilityItemComponent& operator=(DurabilityItemComponent const&);
    DurabilityItemComponent(DurabilityItemComponent const&);
    DurabilityItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
