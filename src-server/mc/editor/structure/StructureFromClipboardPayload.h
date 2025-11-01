#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureFromClipboardPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureFromClipboardPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk45890b;
    ::ll::UntypedStorage<8, 40> mUnkf1b1d8;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureFromClipboardPayload(StructureFromClipboardPayload const&);
    StructureFromClipboardPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureFromClipboardPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::StructureFromClipboardPayload&
    operator=(::Editor::Network::StructureFromClipboardPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
