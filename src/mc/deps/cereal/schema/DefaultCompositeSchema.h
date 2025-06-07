#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { struct SchemaDescription; }
// clang-format on

namespace cereal::internal {

class DefaultCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefaultCompositeSchema() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    constraintDescriptionIfAny(::cereal::SchemaDescription& description, ::cereal::Constraint const* constraint) const;

    MCNAPI ::cereal::internal::VariantPriorityLevel
    findMinVariantPriorityLevel(::entt::meta_ctx const& ctx, ::entt::meta_type const& type) const;

    MCNAPI bool isGreedyCheck(::entt::meta_ctx const& ctx, ::entt::meta_type const& type) const;

    MCNAPI void iterateMembers(
        ::entt::meta_ctx const&                        ctx,
        ::entt::meta_type const&                       type,
        ::std::function<void(uint, ::entt::meta_data)> cb
    ) const;

    MCNAPI ::cereal::SchemaDescription makeDescriptionForType(
        ::entt::meta_ctx const&                          ctx,
        ::entt::meta_type const&                         type,
        ::cereal::internal::BasicSchema::DescriptionMode mode
    ) const;

    MCNAPI ::cereal::internal::BasicSchema::MemberDescriptor const*
    memberDescriptor(::entt::meta_type const& type, uint memberId) const;
    // NOLINTEND
};

} // namespace cereal::internal
