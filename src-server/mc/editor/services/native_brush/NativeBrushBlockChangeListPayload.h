#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushBlockChangeListPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushBlockChangeListPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk498d75;
    ::ll::UntypedStorage<8, 24> mUnk6cf873;
    ::ll::UntypedStorage<1, 1> mUnk29149f;
    ::ll::UntypedStorage<4, 12> mUnkd964fb;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushBlockChangeListPayload& operator=(NativeBrushBlockChangeListPayload const&);
    NativeBrushBlockChangeListPayload(NativeBrushBlockChangeListPayload const&);
    NativeBrushBlockChangeListPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushBlockChangeListPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
