#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionStartHandshakeResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionStartHandshakeResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdc0e0d;
    ::ll::UntypedStorage<8, 48> mUnk155e93;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionStartHandshakeResponsePayload& operator=(HotbarCollectionStartHandshakeResponsePayload const&);
    HotbarCollectionStartHandshakeResponsePayload(HotbarCollectionStartHandshakeResponsePayload const&);
    HotbarCollectionStartHandshakeResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionStartHandshakeResponsePayload() /*override*/;
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
