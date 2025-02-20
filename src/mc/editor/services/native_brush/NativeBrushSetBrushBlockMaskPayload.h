#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushSetBrushBlockMaskPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushSetBrushBlockMaskPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8d0e0b;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushSetBrushBlockMaskPayload& operator=(NativeBrushSetBrushBlockMaskPayload const&);
    NativeBrushSetBrushBlockMaskPayload(NativeBrushSetBrushBlockMaskPayload const&);
    NativeBrushSetBrushBlockMaskPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushSetBrushBlockMaskPayload() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
