#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct IconItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_60 {

struct IconItemComponent {
public:
    // prevent constructor by default
    IconItemComponent();

public:
    // NOLINTBEGIN
    MCAPI IconItemComponent(struct Puv::v1_20_60::IconItemComponent&&);

    MCAPI IconItemComponent(struct Puv::v1_20_60::IconItemComponent const&);

    MCAPI struct Puv::v1_20_60::IconItemComponent& operator=(struct Puv::v1_20_60::IconItemComponent&&);

    MCAPI struct Puv::v1_20_60::IconItemComponent& operator=(struct Puv::v1_20_60::IconItemComponent const&);

    MCAPI ~IconItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        std::optional<struct Puv::v1_20_50::IconItemComponent>& oldDefinition,
        std::optional<struct Puv::v1_20_60::IconItemComponent>& newDefinition
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::v1_20_60
