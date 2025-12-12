#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class BlockPaletteChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 736> mUnk4efe59;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteChangedPayload& operator=(BlockPaletteChangedPayload const&);
    BlockPaletteChangedPayload(BlockPaletteChangedPayload const&);
    BlockPaletteChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPaletteChangedPayload() /*override*/;
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
