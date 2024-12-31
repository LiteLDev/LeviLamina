#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
// clang-format on

namespace cereal::internal {

class UndefinedSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    UndefinedSchema& operator=(UndefinedSchema const&);
    UndefinedSchema(UndefinedSchema const&);
    UndefinedSchema();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void
    doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::SerializerContext& context)
        const /*override*/;

    // vIndex: 10
    virtual ::cereal::SchemaDescription makeDescription(::cereal::internal::BasicSchema::DescriptionMode) const
        /*override*/;

    // vIndex: 0
    virtual ~UndefinedSchema() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cereal::internal::UndefinedSchema const& instance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::SerializerContext& context)
        const;

    MCAPI ::cereal::SchemaDescription $makeDescription(::cereal::internal::BasicSchema::DescriptionMode) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal::internal
