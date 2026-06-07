#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ThemeSettingsNewThemeCreatedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsNewThemeCreatedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk552792;
    ::ll::UntypedStorage<8, 40> mUnk5f2840;
    ::ll::UntypedStorage<8, 40> mUnk1aa069;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ThemeSettingsNewThemeCreatedPayload();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThemeSettingsNewThemeCreatedPayload();
#endif

    MCNAPI ThemeSettingsNewThemeCreatedPayload(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const&);

    MCNAPI ThemeSettingsNewThemeCreatedPayload(
        ::std::string const&                  themeId,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceId
    );

    MCNAPI ::std::optional<::std::string> const& getSourceId() const;

    MCNAPI ::std::string const& getThemeId() const;

    MCNAPI ::std::optional<::std::string> const& getThemeName() const;

    MCNAPI ::Editor::Network::ThemeSettingsNewThemeCreatedPayload&
    operator=(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const&);
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

    MCNAPI void* $ctor(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const&);

    MCNAPI void* $ctor(
        ::std::string const&                  themeId,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceId
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
