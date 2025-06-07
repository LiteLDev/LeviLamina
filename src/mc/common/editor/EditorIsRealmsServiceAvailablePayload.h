#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class EditorIsRealmsServiceAvailablePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::EditorIsRealmsServiceAvailablePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk97a66f;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorIsRealmsServiceAvailablePayload& operator=(EditorIsRealmsServiceAvailablePayload const&);
    EditorIsRealmsServiceAvailablePayload(EditorIsRealmsServiceAvailablePayload const&);
    EditorIsRealmsServiceAvailablePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorIsRealmsServiceAvailablePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
