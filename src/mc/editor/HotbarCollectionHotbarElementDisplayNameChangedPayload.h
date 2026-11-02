#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionHotbarElementDisplayNameChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf431a8;
    ::ll::UntypedStorage<8, 48> mUnk6fedc1;
    ::ll::UntypedStorage<8, 8>  mUnk5d5dbf;
    ::ll::UntypedStorage<8, 32> mUnkd3c6ee;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionHotbarElementDisplayNameChangedPayload&
    operator=(HotbarCollectionHotbarElementDisplayNameChangedPayload const&);
    HotbarCollectionHotbarElementDisplayNameChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionHotbarElementDisplayNameChangedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HotbarCollectionHotbarElementDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&);
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

} // namespace Editor::Network
