#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Settings { struct ThemePalette; }
namespace Editor::Settings { struct ThemeProps; }
namespace Scripting { struct Error; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

namespace Editor::Settings {

class Theme {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk1f5339;
    ::ll::UntypedStorage<8, 64>  mUnkb81eb0;
    ::ll::UntypedStorage<8, 64>  mUnk2b56a1;
    ::ll::UntypedStorage<8, 64>  mUnkba74b5;
    ::ll::UntypedStorage<8, 64>  mUnkdb376c;
    ::ll::UntypedStorage<8, 64>  mUnk9e8945;
    // NOLINTEND

public:
    // prevent constructor by default
    Theme& operator=(Theme const&);
    Theme(Theme const&);
    Theme();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Theme(
        ::std::function<void(::Editor::Settings::ThemeProps const&)> fullSyncCallback,
        ::std::function<void(::std::string const&)>                  onCurrentThemeChangeCallback,
        ::std::function<
            void(::std::string const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&)>
            onNewThemeCreatedCallback,
        ::std::function<void(::std::string const&, ::Editor::Settings::ThemeSettingsColorKey, ::mce::Color const&)>
                                                    onThemeColorUpdatedCallback,
        ::std::function<void(::std::string const&)> onThemeDeletedCallback
    );

    MCNAPI ::std::unordered_map<::HashedString, ::mce::Color>
    _cloneThemeColorProps(::std::unordered_map<::HashedString, ::mce::Color> colorProps);

    MCNAPI ::Scripting::Error _getAttemptingToModifyBuiltInThemeError(::std::string const& themeId) const;

    MCNAPI ::Scripting::Error _getThemeDoesNotExistError(::std::string const& themeId, bool isCustom) const;

    MCNAPI ::Scripting::Result_deprecated<void> addNewTheme(
        ::std::string const&                  id,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceThemeId,
        bool                                  notifyUpdate
    );

    MCNAPI bool canThemeBeModified(::std::string const& id) const;

    MCNAPI ::Scripting::Result_deprecated<void> deleteTheme(::std::string const& id, bool notifyUpdate);

    MCNAPI ::std::optional<::Editor::Settings::ThemePalette> getThemeColors(::std::string const& id) const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::Settings::ThemePalette>
    getThemePalette(::std::string const& id) const;

    MCNAPI ::mce::Color const& resolveColorKey(::Editor::Settings::ThemeSettingsColorKey key) const;

    MCNAPI ::Scripting::Result_deprecated<void> setCurrentTheme(::std::string const& id, bool notifyUpdate);

    MCNAPI ::Scripting::Result_deprecated<void> setThemeName(::std::string const& id, ::std::string const& name);

    MCNAPI ::Scripting::Result_deprecated<void> updateThemeColor(
        ::std::string const&                      id,
        ::Editor::Settings::ThemeSettingsColorKey key,
        ::mce::Color const&                       newColor,
        bool                                      notifyUpdate
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Color _getDarkThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCNAPI static ::std::unordered_map<::HashedString, ::Editor::Settings::ThemePalette> _getDefaultThemesMap();

    MCNAPI static ::mce::Color _getDefaultWorldUIColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCNAPI static ::std::unordered_map<::HashedString, ::mce::Color> _getEmptyColorKeyMap();

    MCNAPI static ::mce::Color _getHighContrastThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCNAPI static ::mce::Color _getLightThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCNAPI static ::mce::Color _getRedstoneThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::function<void(::Editor::Settings::ThemeProps const&)> fullSyncCallback,
        ::std::function<void(::std::string const&)>                  onCurrentThemeChangeCallback,
        ::std::function<
            void(::std::string const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&)>
            onNewThemeCreatedCallback,
        ::std::function<void(::std::string const&, ::Editor::Settings::ThemeSettingsColorKey, ::mce::Color const&)>
                                                    onThemeColorUpdatedCallback,
        ::std::function<void(::std::string const&)> onThemeDeletedCallback
    );
    // NOLINTEND
};

} // namespace Editor::Settings
