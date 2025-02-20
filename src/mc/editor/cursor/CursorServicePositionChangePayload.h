#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class CursorServicePositionChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServicePositionChangePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnk53742e;
    ::ll::UntypedStorage<4, 20> mUnkc71f1e;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServicePositionChangePayload& operator=(CursorServicePositionChangePayload const&);
    CursorServicePositionChangePayload(CursorServicePositionChangePayload const&);
    CursorServicePositionChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CursorServicePositionChangePayload() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
