#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapFreeCenterPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapFreeCenterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk12a050;
    ::ll::UntypedStorage<4, 8>  mUnk5a1a1d;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapFreeCenterPayload& operator=(MinimapFreeCenterPayload const&);
    MinimapFreeCenterPayload(MinimapFreeCenterPayload const&);
    MinimapFreeCenterPayload();

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
