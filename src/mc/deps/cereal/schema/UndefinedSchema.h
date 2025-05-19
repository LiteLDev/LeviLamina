#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
// clang-format on

namespace cereal::internal {

class UndefinedSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::SerializerContext& context
    ) const /*override*/;

    // vIndex: 9
    virtual ::cereal::SchemaDescription
    makeDescription(::cereal::ReflectionCtx const&, ::cereal::internal::BasicSchema::DescriptionMode) const
        /*override*/;

    // vIndex: 0
    virtual ~UndefinedSchema() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::SerializerContext& context
    ) const;

    MCNAPI ::cereal::SchemaDescription
    $makeDescription(::cereal::ReflectionCtx const&, ::cereal::internal::BasicSchema::DescriptionMode) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal::internal
