#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushFlattenPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushFlattenPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk835495;
    ::ll::UntypedStorage<4, 8> mUnkb3fdd8;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushFlattenPayload& operator=(NativeBrushFlattenPayload const&);
    NativeBrushFlattenPayload(NativeBrushFlattenPayload const&);
    NativeBrushFlattenPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushFlattenPayload() /*override*/ = default;
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
