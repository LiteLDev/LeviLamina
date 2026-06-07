#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

namespace Editor::Network {

class ThemeSettingsThemeColorUpdatedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsThemeColorUpdatedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb77ec1;
    ::ll::UntypedStorage<4, 4>  mUnk325b30;
    ::ll::UntypedStorage<4, 16> mUnk577ff8;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ThemeSettingsThemeColorUpdatedPayload& operator=(ThemeSettingsThemeColorUpdatedPayload const&);
    ThemeSettingsThemeColorUpdatedPayload(ThemeSettingsThemeColorUpdatedPayload const&);
    ThemeSettingsThemeColorUpdatedPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ThemeSettingsThemeColorUpdatedPayload& operator=(ThemeSettingsThemeColorUpdatedPayload const&);
    ThemeSettingsThemeColorUpdatedPayload(ThemeSettingsThemeColorUpdatedPayload const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThemeSettingsThemeColorUpdatedPayload();
#endif

    MCNAPI ThemeSettingsThemeColorUpdatedPayload(
        ::std::string const&                      themeId,
        ::Editor::Settings::ThemeSettingsColorKey colorKey,
        ::mce::Color const&                       color
    );

    MCNAPI ::mce::Color const& getColor() const;

    MCNAPI ::Editor::Settings::ThemeSettingsColorKey getColorKey() const;

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

    MCNAPI void*
    $ctor(::std::string const& themeId, ::Editor::Settings::ThemeSettingsColorKey colorKey, ::mce::Color const& color);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
