#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/DefaultCompositeSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class ComponentStorageCompositeSchema : public ::cereal::internal::DefaultCompositeSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void doLoad(::cereal::SchemaReader& reader, ::entt::meta_any& any, ::entt::meta_any const& udata, ::cereal::internal::LoadState const& state) const /*override*/;

    // vIndex: 7
    virtual void doSave(::cereal::SchemaWriter& writer, ::entt::meta_any const& any, ::cereal::internal::SaveState const& state) const /*override*/;

    // vIndex: 0
    virtual ~ComponentStorageCompositeSchema() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::SchemaDescription makeDescriptionForComponents(::entt::meta_ctx const& ctx, ::entt::meta_type const& type, ::cereal::internal::BasicSchema::DescriptionMode mode) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::entt::meta_data findComponentData(::entt::meta_type const& type, uint componentId, bool serializeDeprecated);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doLoad(::cereal::SchemaReader& reader, ::entt::meta_any& any, ::entt::meta_any const& udata, ::cereal::internal::LoadState const& state) const;

    MCNAPI void $doSave(::cereal::SchemaWriter& writer, ::entt::meta_any const& any, ::cereal::internal::SaveState const& state) const;
    // NOLINTEND

};

}
