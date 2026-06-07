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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SpeedSettingsChangedPayload& operator=(SpeedSettingsChangedPayload const&);
    SpeedSettingsChangedPayload(SpeedSettingsChangedPayload const&);
    SpeedSettingsChangedPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    SpeedSettingsChangedPayload& operator=(SpeedSettingsChangedPayload const&);
    SpeedSettingsChangedPayload(SpeedSettingsChangedPayload const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI SpeedSettingsChangedPayload();
#endif

    MCNAPI explicit SpeedSettingsChangedPayload(::Editor::Settings::SpeedProps const& props);

    MCNAPI ::Editor::Settings::SpeedProps const& getSpeedSettingsProps() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif

    MCNAPI void* $ctor(::Editor::Settings::SpeedProps const& props);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
