#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DefaultCompositeSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

struct ComponentStorageCompositeSchema : public ::cereal::internal::DefaultCompositeSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const /*override*/;

    // vIndex: 7
    virtual void doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const /*override*/;

    // vIndex: 0
    virtual ~ComponentStorageCompositeSchema() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;

    MCNAPI void $doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const;
    // NOLINTEND
};

} // namespace cereal::internal
