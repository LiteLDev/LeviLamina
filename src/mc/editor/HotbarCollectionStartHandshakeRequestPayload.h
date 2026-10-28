#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionStartHandshakeRequestPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionStartHandshakeRequestPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk39630d;
    ::ll::UntypedStorage<8, 48> mUnke406f1;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionStartHandshakeRequestPayload& operator=(HotbarCollectionStartHandshakeRequestPayload const&);
    HotbarCollectionStartHandshakeRequestPayload(HotbarCollectionStartHandshakeRequestPayload const&);
    HotbarCollectionStartHandshakeRequestPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionStartHandshakeRequestPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
