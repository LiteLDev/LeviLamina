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
    ::ll::UntypedStorage<8, 32> mUnk14a669;
    ::ll::UntypedStorage<4, 4>  mUnka29b34;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaytestBeginSessionTransferResponsePayload& operator=(PlaytestBeginSessionTransferResponsePayload const&);
    PlaytestBeginSessionTransferResponsePayload(PlaytestBeginSessionTransferResponsePayload const&);
    PlaytestBeginSessionTransferResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlaytestBeginSessionTransferResponsePayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
