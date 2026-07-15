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

public:
    // prevent constructor by default
    ThemeSettingsNewThemeCreatedPayload& operator=(ThemeSettingsNewThemeCreatedPayload const&);
    ThemeSettingsNewThemeCreatedPayload(ThemeSettingsNewThemeCreatedPayload const&);
    ThemeSettingsNewThemeCreatedPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThemeSettingsNewThemeCreatedPayload(
        ::std::string const&                  themeId,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceId
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
