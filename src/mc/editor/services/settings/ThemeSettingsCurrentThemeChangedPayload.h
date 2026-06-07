#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ThemeSettingsCurrentThemeChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsCurrentThemeChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkac1088;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ThemeSettingsCurrentThemeChangedPayload& operator=(ThemeSettingsCurrentThemeChangedPayload const&);
    ThemeSettingsCurrentThemeChangedPayload(ThemeSettingsCurrentThemeChangedPayload const&);
    ThemeSettingsCurrentThemeChangedPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ThemeSettingsCurrentThemeChangedPayload& operator=(ThemeSettingsCurrentThemeChangedPayload const&);
    ThemeSettingsCurrentThemeChangedPayload(ThemeSettingsCurrentThemeChangedPayload const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThemeSettingsCurrentThemeChangedPayload();
#endif

    MCNAPI explicit ThemeSettingsCurrentThemeChangedPayload(::std::string const& themeId);

    MCNAPI ::std::string const& getThemeId() const;
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

    MCNAPI void* $ctor(::std::string const& themeId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
