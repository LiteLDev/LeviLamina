#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct IconItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka82701;
    // NOLINTEND

public:
    // prevent constructor by default
    IconItemComponent(IconItemComponent const&);
    IconItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_50::IconItemComponent& operator=(::SharedTypes::v1_20_50::IconItemComponent&&);

    MCAPI ::SharedTypes::v1_20_50::IconItemComponent& operator=(::SharedTypes::v1_20_50::IconItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
