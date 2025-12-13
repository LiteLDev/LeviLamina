#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class UndefinedSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const& state
    ) const /*override*/;

    virtual void
    doSave(::cereal::SchemaWriter&, ::entt::meta_any const& any, ::cereal::internal::SaveState const& state) const
        /*override*/;

    virtual ::cereal::SchemaDescription
    makeDescription(::entt::meta_ctx const&, ::cereal::internal::BasicSchema::DescriptionMode) const /*override*/;

    virtual ~UndefinedSchema() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const& state
    ) const;

    MCNAPI void
    $doSave(::cereal::SchemaWriter&, ::entt::meta_any const& any, ::cereal::internal::SaveState const& state) const;

    MCNAPI ::cereal::SchemaDescription
    $makeDescription(::entt::meta_ctx const&, ::cereal::internal::BasicSchema::DescriptionMode) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal::internal
