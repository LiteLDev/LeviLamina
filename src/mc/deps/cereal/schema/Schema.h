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
    ::ll::TypedStorage<8, 136, ::cereal::SerializerContext>          mContext;
    ::ll::TypedStorage<8, 8, ::cereal::internal::BasicSchema const*> mSchema;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool load(
        ::cereal::SchemaReader&       reader,
        ::entt::meta_handle           data,
        ::entt::meta_any const&       loadContext,
        ::cereal::LoaderConfig const& config
    );

    MCAPI void loadImpl(
        ::cereal::SchemaReader&       reader,
        ::entt::meta_any              instance,
        ::entt::meta_any const&       udata,
        ::cereal::LoaderConfig const& config
    );

    MCAPI bool save(::cereal::SchemaWriter& writer, ::entt::meta_handle data, ::cereal::SaverConfig const& config);

    MCAPI ~Schema();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
