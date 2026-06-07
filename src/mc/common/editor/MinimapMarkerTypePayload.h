#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapMarkerTypePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapMarkerTypePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7a0853;
    ::ll::UntypedStorage<8, 64> mUnkaa93b2;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapMarkerTypePayload& operator=(MinimapMarkerTypePayload const&);
    MinimapMarkerTypePayload(MinimapMarkerTypePayload const&);
    MinimapMarkerTypePayload();

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
