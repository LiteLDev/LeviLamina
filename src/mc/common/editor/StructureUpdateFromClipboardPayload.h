#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class StructureUpdateFromClipboardPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureUpdateFromClipboardPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e96f6;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureUpdateFromClipboardPayload& operator=(StructureUpdateFromClipboardPayload const&);
    StructureUpdateFromClipboardPayload(StructureUpdateFromClipboardPayload const&);
    StructureUpdateFromClipboardPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureUpdateFromClipboardPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
