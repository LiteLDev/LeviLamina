#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapUIVisibilityPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapUIVisibilityPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk778c00;
    ::ll::UntypedStorage<1, 1>  mUnk1103d0;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapUIVisibilityPayload& operator=(MinimapUIVisibilityPayload const&);
    MinimapUIVisibilityPayload(MinimapUIVisibilityPayload const&);
    MinimapUIVisibilityPayload();

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
