#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct ThemeProps; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ThemeSettingsChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkd67276;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsChangedPayload& operator=(ThemeSettingsChangedPayload const&);
    ThemeSettingsChangedPayload(ThemeSettingsChangedPayload const&);
    ThemeSettingsChangedPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ThemeSettingsChangedPayload(::Editor::Settings::ThemeProps const& props);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Settings::ThemeProps const& props);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
