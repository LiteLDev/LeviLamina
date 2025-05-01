#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

class DefaultCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void doLoad(
        ::cereal::SchemaReader&      value,
        ::entt::meta_any&            any,
        ::entt::meta_any const&      udata,
        ::cereal::SerializerContext& context
    ) const /*override*/;

    // vIndex: 7
    virtual void
    doSave(::cereal::SchemaWriter& writer, ::entt::meta_any const& any, ::cereal::SerializerContext& context) const
        /*override*/;

    // vIndex: 0
    virtual ~DefaultCompositeSchema() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    constraintDescriptionIfAny(::cereal::SchemaDescription& description, ::cereal::Constraint const* constraint) const;

    MCNAPI ::cereal::internal::VariantPriorityLevel
    findMinVariantPriorityLevel(::cereal::ReflectionCtx const& ctx, ::entt::meta_type const& type) const;

    MCNAPI bool isGreedyCheck(::cereal::ReflectionCtx const& ctx, ::entt::meta_type const& type) const;

    MCNAPI void iterateMembers(
        ::cereal::ReflectionCtx const&                 ctx,
        ::entt::meta_type const&                       type,
        ::std::function<void(uint, ::entt::meta_data)> cb
    ) const;

    MCNAPI ::cereal::SchemaDescription makeDescriptionForType(
        ::cereal::ReflectionCtx const&                   ctx,
        ::entt::meta_type const&                         type,
        ::cereal::internal::BasicSchema::DescriptionMode mode
    ) const;

    MCNAPI ::cereal::internal::BasicSchema::MemberDescriptor const*
    memberDescriptor(::entt::meta_type const& type, uint memberId) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doLoad(
        ::cereal::SchemaReader&      value,
        ::entt::meta_any&            any,
        ::entt::meta_any const&      udata,
        ::cereal::SerializerContext& context
    ) const;

    MCNAPI void
    $doSave(::cereal::SchemaWriter& writer, ::entt::meta_any const& any, ::cereal::SerializerContext& context) const;
    // NOLINTEND
};

} // namespace cereal::internal
