#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class BlockPaletteSelectedIndexChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteSelectedIndexChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk30033c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteSelectedIndexChangedPayload& operator=(BlockPaletteSelectedIndexChangedPayload const&);
    BlockPaletteSelectedIndexChangedPayload(BlockPaletteSelectedIndexChangedPayload const&);
    BlockPaletteSelectedIndexChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPaletteSelectedIndexChangedPayload() /*override*/ = default;
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
