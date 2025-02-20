#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ClipboardItemDeletePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ClipboardItemDeletePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk752a91;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardItemDeletePayload& operator=(ClipboardItemDeletePayload const&);
    ClipboardItemDeletePayload(ClipboardItemDeletePayload const&);
    ClipboardItemDeletePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClipboardItemDeletePayload() /*override*/ = default;
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
