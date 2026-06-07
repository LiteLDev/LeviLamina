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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ThemeSettingsChangedPayload& operator=(ThemeSettingsChangedPayload const&);
    ThemeSettingsChangedPayload(ThemeSettingsChangedPayload const&);
    ThemeSettingsChangedPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ThemeSettingsChangedPayload& operator=(ThemeSettingsChangedPayload const&);
    ThemeSettingsChangedPayload(ThemeSettingsChangedPayload const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThemeSettingsChangedPayload();
#endif

    MCNAPI explicit ThemeSettingsChangedPayload(::Editor::Settings::ThemeProps const& props);

    MCNAPI ::Editor::Settings::ThemeProps const& getThemeSettingsProps() const;
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

    MCNAPI void* $ctor(::Editor::Settings::ThemeProps const& props);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
