#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"

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
    ::ll::UntypedStorage<8, 72> mUnke6b1a6;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicSaver& operator=(BasicSaver const&);
    BasicSaver(BasicSaver const&);
    BasicSaver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicSaver();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool saveImpl(
        ::cereal::SchemaWriter&                writer,
        ::entt::meta_handle                    handle,
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
