#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct TagsItemComponent {
public:
    // prevent constructor by default
    TagsItemComponent& operator=(TagsItemComponent const&);
    TagsItemComponent();

public:
    // NOLINTBEGIN
    MCAPI TagsItemComponent(struct Puv::v1_20_50::TagsItemComponent const&);

    MCAPI ~TagsItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
