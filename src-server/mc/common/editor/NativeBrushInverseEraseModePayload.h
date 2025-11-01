#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushInverseEraseModePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushInverseEraseModePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkc463f8;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushInverseEraseModePayload& operator=(NativeBrushInverseEraseModePayload const&);
    NativeBrushInverseEraseModePayload(NativeBrushInverseEraseModePayload const&);
    NativeBrushInverseEraseModePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushInverseEraseModePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
