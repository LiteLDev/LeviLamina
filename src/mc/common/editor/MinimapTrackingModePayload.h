#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapTrackingModePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapTrackingModePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk98b378;
    ::ll::UntypedStorage<4, 4>  mUnka775af;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapTrackingModePayload& operator=(MinimapTrackingModePayload const&);
    MinimapTrackingModePayload(MinimapTrackingModePayload const&);
    MinimapTrackingModePayload();

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
