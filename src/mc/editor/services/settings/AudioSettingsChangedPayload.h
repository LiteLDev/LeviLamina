#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
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

public:
    // prevent constructor by default
    AudioSettingsChangedPayload& operator=(AudioSettingsChangedPayload const&);
    AudioSettingsChangedPayload(AudioSettingsChangedPayload const&);
    AudioSettingsChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AudioSettingsChangedPayload() /*override*/ = default;
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
