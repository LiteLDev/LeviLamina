#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushSetBrushShapeOffsetsPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushSetBrushShapeOffsetsPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk709284;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushSetBrushShapeOffsetsPayload& operator=(NativeBrushSetBrushShapeOffsetsPayload const&);
    NativeBrushSetBrushShapeOffsetsPayload(NativeBrushSetBrushShapeOffsetsPayload const&);
    NativeBrushSetBrushShapeOffsetsPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NativeBrushSetBrushShapeOffsetsPayload() /*override*/;
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
