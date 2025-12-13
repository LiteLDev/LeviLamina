#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushTerrainPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushTerrainPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8d8b87;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushTerrainPayload& operator=(NativeBrushTerrainPayload const&);
    NativeBrushTerrainPayload(NativeBrushTerrainPayload const&);
    NativeBrushTerrainPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NativeBrushTerrainPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
