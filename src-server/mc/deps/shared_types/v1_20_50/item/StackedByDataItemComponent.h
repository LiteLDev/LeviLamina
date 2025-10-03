#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct StackedByDataItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk915076;
    // NOLINTEND

public:
    // prevent constructor by default
    StackedByDataItemComponent& operator=(StackedByDataItemComponent const&);
    StackedByDataItemComponent(StackedByDataItemComponent const&);
    StackedByDataItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
