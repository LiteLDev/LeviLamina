#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class CursorServiceChangeStatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServiceChangeStatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 60> mUnk3217ad;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServiceChangeStatePayload& operator=(CursorServiceChangeStatePayload const&);
    CursorServiceChangeStatePayload(CursorServiceChangeStatePayload const&);
    CursorServiceChangeStatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CursorServiceChangeStatePayload() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
