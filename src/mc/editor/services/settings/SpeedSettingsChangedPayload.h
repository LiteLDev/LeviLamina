#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class SpeedSettingsChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SpeedSettingsChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk224c84;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeedSettingsChangedPayload& operator=(SpeedSettingsChangedPayload const&);
    SpeedSettingsChangedPayload(SpeedSettingsChangedPayload const&);
    SpeedSettingsChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpeedSettingsChangedPayload() /*override*/ = default;
    // NOLINTEND

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
