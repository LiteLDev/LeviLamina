#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/settings/ThemeSettingsColorKey.h"

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
    ::ll::UntypedStorage<8, 32> mUnk81c7fb;
    ::ll::UntypedStorage<4, 4>  mUnk325b30;
    ::ll::UntypedStorage<4, 16> mUnk577ff8;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsThemeColorUpdatedPayload& operator=(ThemeSettingsThemeColorUpdatedPayload const&);
    ThemeSettingsThemeColorUpdatedPayload(ThemeSettingsThemeColorUpdatedPayload const&);
    ThemeSettingsThemeColorUpdatedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThemeSettingsThemeColorUpdatedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThemeSettingsThemeColorUpdatedPayload(
        ::std::string const&                      themeId,
        ::Editor::Settings::ThemeSettingsColorKey colorKey,
        ::mce::Color const&                       color
    );

    MCAPI ::mce::Color const& getColor() const;

    MCAPI ::Editor::Settings::ThemeSettingsColorKey getColorKey() const;

    MCAPI ::std::string const& getThemeId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& themeId, ::Editor::Settings::ThemeSettingsColorKey colorKey, ::mce::Color const& color);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
