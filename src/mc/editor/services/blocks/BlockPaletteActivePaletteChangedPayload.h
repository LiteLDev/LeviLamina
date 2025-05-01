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
    BlockPaletteActivePaletteChangedPayload(BlockPaletteActivePaletteChangedPayload const&);
    BlockPaletteActivePaletteChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPaletteActivePaletteChangedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::BlockPaletteActivePaletteChangedPayload&
    operator=(::Editor::Network::BlockPaletteActivePaletteChangedPayload const&);
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
