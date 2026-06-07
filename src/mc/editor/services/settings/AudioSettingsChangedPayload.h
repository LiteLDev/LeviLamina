#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct AudioProps; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class AudioSettingsChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::AudioSettingsChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk1c9c84;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AudioSettingsChangedPayload& operator=(AudioSettingsChangedPayload const&);
    AudioSettingsChangedPayload(AudioSettingsChangedPayload const&);
    AudioSettingsChangedPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AudioSettingsChangedPayload& operator=(AudioSettingsChangedPayload const&);
    AudioSettingsChangedPayload(AudioSettingsChangedPayload const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI AudioSettingsChangedPayload();
#endif

    MCNAPI explicit AudioSettingsChangedPayload(::Editor::Settings::AudioProps const& props);

    MCNAPI ::Editor::Settings::AudioProps const& getAudioSettingsProps() const;
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

    MCNAPI void* $ctor(::Editor::Settings::AudioProps const& props);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
