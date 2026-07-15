#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapMarkerSyncPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapMarkerSyncPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkedeb78;
    ::ll::UntypedStorage<4, 4>  mUnk744d15;
    ::ll::UntypedStorage<8, 32> mUnk336d8d;
    ::ll::UntypedStorage<8, 24> mUnkf756d9;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapMarkerSyncPayload& operator=(MinimapMarkerSyncPayload const&);
    MinimapMarkerSyncPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinimapMarkerSyncPayload(::Editor::Network::MinimapMarkerSyncPayload const&);

    MCNAPI ::Editor::Network::MinimapMarkerSyncPayload& operator=(::Editor::Network::MinimapMarkerSyncPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MinimapMarkerSyncPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
