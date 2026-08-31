#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/LoaderConfig.h"
#include "mc/deps/cereal/schema/Schema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaReader; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicLoader : public ::cereal::BasicContextOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 704, ::cereal::internal::Schema> mSchema;
    ::ll::TypedStorage<1, 1, ::cereal::LoaderConfig>       mConfig;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicLoader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool loadImpl(
        ::cereal::SchemaReader&                reader,
        ::entt::meta_handle                    handle,
        ::entt::meta_any const&                loadContext,
        ::cereal::internal::BasicSchema const& fallback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
