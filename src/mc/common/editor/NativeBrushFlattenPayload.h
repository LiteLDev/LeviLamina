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
    ::ll::UntypedStorage<4, 8> mUnkb4e71a;
    ::ll::UntypedStorage<4, 8> mUnk649b0a;
    ::ll::UntypedStorage<1, 2> mUnkf16fdf;
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
