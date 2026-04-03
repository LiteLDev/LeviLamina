#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct SchemaDescription; }
namespace cereal::internal { struct ReflectionContext; }
// clang-format on

namespace cereal::internal {

class DefaultCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultCompositeSchema() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void constraintDescriptionIfAny(
        ::cereal::SchemaDescription& description,
        ::cereal::Constraint const*  constraint,
        ::cereal::DescriptionConfig  config
    ) const;

    MCNAPI ::cereal::internal::VariantPriorityLevel
    findMinVariantPriorityLevel(::entt::meta_ctx const& ctx, ::entt::meta_type const& type) const;

    MCNAPI bool isGreedyCheck(::entt::meta_ctx const& ctx, ::entt::meta_type const& type) const;

    MCNAPI ::cereal::SchemaDescription makeDescriptionForType(
        ::cereal::internal::ReflectionContext const& ctx,
        ::entt::meta_type const&                     type,
        ::cereal::DescriptionConfig                  config
    ) const;
    // NOLINTEND
};

} // namespace cereal::internal
