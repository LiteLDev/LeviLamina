#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RequestDownloadWorldPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RequestDownloadWorldPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc6d953;
    ::ll::UntypedStorage<4, 4>  mUnkbce38a;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestDownloadWorldPayload(RequestDownloadWorldPayload const&);
    RequestDownloadWorldPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RequestDownloadWorldPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::RequestDownloadWorldPayload&
    operator=(::Editor::Network::RequestDownloadWorldPayload const&);
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
