#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushElevationPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushElevationPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkf6ea27;
    ::ll::UntypedStorage<4, 8> mUnk64f59c;
    ::ll::UntypedStorage<4, 8> mUnk894b60;
    ::ll::UntypedStorage<4, 8> mUnk9dc84e;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushElevationPayload& operator=(NativeBrushElevationPayload const&);
    NativeBrushElevationPayload(NativeBrushElevationPayload const&);
    NativeBrushElevationPayload();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
