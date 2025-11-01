#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"

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
    ::ll::UntypedStorage<8, 112> mUnkab84fe;
    ::ll::UntypedStorage<1, 1> mUnke16cbe;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicLoader& operator=(BasicLoader const&);
    BasicLoader(BasicLoader const&);
    BasicLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicLoader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool loadImpl(::cereal::SchemaReader& reader, ::entt::meta_handle handle, ::entt::meta_any const& loadContext, ::cereal::internal::BasicSchema const& fallback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
