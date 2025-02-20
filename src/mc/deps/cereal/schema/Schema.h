#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

struct Schema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5ed1d2;
    ::ll::UntypedStorage<8, 8>  mUnk75bb3d;
    // NOLINTEND

public:
    // prevent constructor by default
    Schema& operator=(Schema const&);
    Schema(Schema const&);
    Schema();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool load(::cereal::SchemaReader& reader, ::entt::meta_handle data, ::entt::meta_any const& loadContext);

    MCAPI void loadImpl(::cereal::SchemaReader& reader, ::entt::meta_any instance, ::entt::meta_any const& udata);

    MCAPI ::cereal::internal::Schema& operator=(::cereal::internal::Schema&&);

    MCAPI bool save(::cereal::SchemaWriter& writer, ::entt::meta_handle data);

    MCAPI ~Schema();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
