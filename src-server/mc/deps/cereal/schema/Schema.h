#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct LoaderConfig; }
namespace cereal { struct SaverConfig; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

struct Schema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk5ed1d2;
    ::ll::UntypedStorage<8, 8> mUnk75bb3d;
    // NOLINTEND

public:
    // prevent constructor by default
    Schema& operator=(Schema const&);
    Schema(Schema const&);
    Schema();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool load(::cereal::SchemaReader& reader, ::entt::meta_handle data, ::entt::meta_any const& loadContext, ::cereal::LoaderConfig const& config);

    MCNAPI void loadImpl(::cereal::SchemaReader& reader, ::entt::meta_any instance, ::entt::meta_any const& udata, ::cereal::LoaderConfig const& config);

    MCNAPI bool save(::cereal::SchemaWriter& writer, ::entt::meta_handle data, ::cereal::SaverConfig const& config);

    MCNAPI ~Schema();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
