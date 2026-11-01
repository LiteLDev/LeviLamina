#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct LoaderConfig; }
namespace cereal { struct SaverConfig; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

struct Schema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 696, ::cereal::SerializerContext>          mContext;
    ::ll::TypedStorage<8, 8, ::cereal::internal::BasicSchema const*> mSchema;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool load(
        ::cereal::SchemaReader&       reader,
        ::entt::meta_handle           data,
        ::entt::meta_any const&       loadContext,
        ::cereal::LoaderConfig const& config
    );

    MCNAPI bool save(::cereal::SchemaWriter& writer, ::entt::meta_handle data, ::cereal::SaverConfig const& config);
    // NOLINTEND
};

} // namespace cereal::internal
