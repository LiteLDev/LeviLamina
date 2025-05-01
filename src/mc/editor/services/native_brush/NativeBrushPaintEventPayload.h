#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushPaintEventPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushPaintEventPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk8948d6;
    ::ll::UntypedStorage<1, 2> mUnk8c1768;
    ::ll::UntypedStorage<1, 2> mUnk1f0fa4;
    ::ll::UntypedStorage<1, 2> mUnkfde51c;
    ::ll::UntypedStorage<1, 2> mUnkdd3ca7;
    ::ll::UntypedStorage<1, 2> mUnke8ed25;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushPaintEventPayload& operator=(NativeBrushPaintEventPayload const&);
    NativeBrushPaintEventPayload(NativeBrushPaintEventPayload const&);
    NativeBrushPaintEventPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushPaintEventPayload() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
