#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushShapeVisiblePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushShapeVisiblePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk529182;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushShapeVisiblePayload& operator=(NativeBrushShapeVisiblePayload const&);
    NativeBrushShapeVisiblePayload(NativeBrushShapeVisiblePayload const&);
    NativeBrushShapeVisiblePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushShapeVisiblePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
