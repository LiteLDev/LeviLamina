#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureCopyToClipboardPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureCopyToClipboardPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk80d2a8;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureCopyToClipboardPayload(StructureCopyToClipboardPayload const&);
    StructureCopyToClipboardPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureCopyToClipboardPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Editor::Network::StructureCopyToClipboardPayload&
    operator=(::Editor::Network::StructureCopyToClipboardPayload const&);
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
