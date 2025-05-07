#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class NativeBrushParameterChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushParameterChangePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk19ee05;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushParameterChangePayload& operator=(NativeBrushParameterChangePayload const&);
    NativeBrushParameterChangePayload(NativeBrushParameterChangePayload const&);
    NativeBrushParameterChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushParameterChangePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
