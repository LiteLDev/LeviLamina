#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DefaultCompositeSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

struct GenericCompositeSchema : public ::cereal::internal::DefaultCompositeSchema {
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
    virtual ~GenericCompositeSchema() /*override*/ = default;
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
