#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushClientResponsePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushClientResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk1e5ea4;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushClientResponsePayload& operator=(NativeBrushClientResponsePayload const&);
    NativeBrushClientResponsePayload(NativeBrushClientResponsePayload const&);
    NativeBrushClientResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushClientResponsePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
