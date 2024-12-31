#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct SpeedProps; }
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
    // vIndex: 0
    virtual ~SpeedSettingsChangedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SpeedSettingsChangedPayload(::Editor::Settings::SpeedProps const& props);

    MCAPI ::Editor::Settings::SpeedProps const& getSpeedSettingsProps() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Settings::SpeedProps const& props);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
