#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class BlockPaletteRemovedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteRemovedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk17340a;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteRemovedPayload(BlockPaletteRemovedPayload const&);
    BlockPaletteRemovedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPaletteRemovedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::BlockPaletteRemovedPayload&
    operator=(::Editor::Network::BlockPaletteRemovedPayload const&);
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
