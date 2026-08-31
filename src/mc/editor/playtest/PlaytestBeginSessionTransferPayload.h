#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PlaytestBeginSessionTransferPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PlaytestBeginSessionTransferPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfb666b;
    ::ll::UntypedStorage<8, 32> mUnkbd2004;
    ::ll::UntypedStorage<8, 32> mUnk5e1fbe;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaytestBeginSessionTransferPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlaytestBeginSessionTransferPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlaytestBeginSessionTransferPayload(::Editor::Network::PlaytestBeginSessionTransferPayload const&);

    MCNAPI ::Editor::Network::PlaytestBeginSessionTransferPayload&
    operator=(::Editor::Network::PlaytestBeginSessionTransferPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::PlaytestBeginSessionTransferPayload const&);
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
