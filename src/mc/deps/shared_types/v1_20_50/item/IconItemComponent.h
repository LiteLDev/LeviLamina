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
    ::ll::UntypedStorage<8, 32> mUnk90d1f0;
    // NOLINTEND

public:
    // prevent constructor by default
    IconItemComponent(IconItemComponent const&);
    IconItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_50::IconItemComponent& operator=(::SharedTypes::v1_20_50::IconItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::IconItemComponent& operator=(::SharedTypes::v1_20_50::IconItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
