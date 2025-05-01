#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureReplaceFromClipboardPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureReplaceFromClipboardPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk71ead3;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureReplaceFromClipboardPayload(StructureReplaceFromClipboardPayload const&);
    StructureReplaceFromClipboardPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureReplaceFromClipboardPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::StructureReplaceFromClipboardPayload&
    operator=(::Editor::Network::StructureReplaceFromClipboardPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
