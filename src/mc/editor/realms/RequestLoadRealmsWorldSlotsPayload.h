#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RequestLoadRealmsWorldSlotsPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RequestLoadRealmsWorldSlotsPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk25f716;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestLoadRealmsWorldSlotsPayload(RequestLoadRealmsWorldSlotsPayload const&);
    RequestLoadRealmsWorldSlotsPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RequestLoadRealmsWorldSlotsPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::RequestLoadRealmsWorldSlotsPayload&
    operator=(::Editor::Network::RequestLoadRealmsWorldSlotsPayload const&);
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
