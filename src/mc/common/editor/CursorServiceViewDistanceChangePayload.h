#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class CursorServiceViewDistanceChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServiceViewDistanceChangePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka7e6a9;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServiceViewDistanceChangePayload& operator=(CursorServiceViewDistanceChangePayload const&);
    CursorServiceViewDistanceChangePayload(CursorServiceViewDistanceChangePayload const&);
    CursorServiceViewDistanceChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CursorServiceViewDistanceChangePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
