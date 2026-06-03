#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/SaverConfig.h"
#include "mc/deps/cereal/schema/Schema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicSaver : public ::cereal::BasicContextOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::cereal::internal::Schema> mSchema;
    ::ll::TypedStorage<1, 2, ::cereal::SaverConfig>        mConfig;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicSaver();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool saveImpl(
        ::cereal::SchemaWriter&                writer,
        ::entt::meta_handle                    handle,
        ::cereal::internal::BasicSchema const& fallback,
        ::cereal::SaverConfig const&           config
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
