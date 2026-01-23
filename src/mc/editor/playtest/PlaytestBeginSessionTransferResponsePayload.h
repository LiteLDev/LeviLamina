#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PlaytestBeginSessionTransferResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PlaytestBeginSessionTransferResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkea5f85;
    ::ll::UntypedStorage<4, 4>  mUnka29b34;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaytestBeginSessionTransferResponsePayload(PlaytestBeginSessionTransferResponsePayload const&);
    PlaytestBeginSessionTransferResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~PlaytestBeginSessionTransferResponsePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~PlaytestBeginSessionTransferResponsePayload() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::PlaytestBeginSessionTransferResponsePayload&
    operator=(::Editor::Network::PlaytestBeginSessionTransferResponsePayload const&);
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
