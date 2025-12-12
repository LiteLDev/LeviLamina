#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class BlockPaletteActivePaletteChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteActivePaletteChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk5a23a1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteActivePaletteChangedPayload& operator=(BlockPaletteActivePaletteChangedPayload const&);
    BlockPaletteActivePaletteChangedPayload(BlockPaletteActivePaletteChangedPayload const&);
    BlockPaletteActivePaletteChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPaletteActivePaletteChangedPayload() /*override*/;
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
