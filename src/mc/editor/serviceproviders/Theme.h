#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/settings/ThemeSettingsColorKey.h"
#include "mc/external/scripting/runtime/Result.h"

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
    MCAPI Theme(
        ::std::function<void(::Editor::Settings::ThemeProps const&)> fullSyncCallback,
        ::std::function<void(::std::string const&)>                  onCurrentThemeChangeCallback,
        ::std::function<
            void(::std::string const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&)>
            onNewThemeCreatedCallback,
        ::std::function<void(::std::string const&, ::Editor::Settings::ThemeSettingsColorKey, ::mce::Color const&)>
                                                    onThemeColorUpdatedCallback,
        ::std::function<void(::std::string const&)> onThemeDeletedCallback
    );

    MCAPI ::std::unordered_map<::HashedString, ::mce::Color>
    _cloneThemeColorProps(::std::unordered_map<::HashedString, ::mce::Color> colorProps);

    MCAPI ::Scripting::Result<void, ::Scripting::Error> addNewTheme(
        ::std::string const&                  id,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceThemeId,
        bool                                  notifyUpdate
    );

    MCAPI bool canThemeBeModified(::std::string const& id) const;

    MCAPI ::Scripting::Result<void, ::Scripting::Error> deleteTheme(::std::string const& id, bool notifyUpdate);

    MCFOLD ::std::string const& getCurrentTheme() const;

    MCAPI ::std::optional<::Editor::Settings::ThemePalette> getThemeColors(::std::string const& id) const;

    MCAPI ::std::vector<::std::string> getThemeIdList() const;

    MCAPI ::Scripting::Result<::std::string, ::Scripting::Error> getThemeName(::std::string const& id) const;

    MCAPI ::Scripting::Result<::Editor::Settings::ThemePalette, ::Scripting::Error>
    getThemePalette(::std::string const& id) const;

    MCAPI ::mce::Color const& resolveColorKey(::Editor::Settings::ThemeSettingsColorKey key) const;

    MCAPI ::Scripting::Result<void, ::Scripting::Error> setCurrentTheme(::std::string const& id, bool notifyUpdate);

    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    setThemeName(::std::string const& id, ::std::string const& name);

    MCAPI void updateSettings(::Editor::Settings::ThemeProps const& props, bool notifyUpdate);

    MCAPI ::Scripting::Result<void, ::Scripting::Error> updateThemeColor(
        ::std::string const&                      id,
        ::Editor::Settings::ThemeSettingsColorKey key,
        ::mce::Color const&                       newColor,
        bool                                      notifyUpdate
    );

    MCAPI ~Theme();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::Color _getDarkThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCAPI static ::std::unordered_map<::HashedString, ::Editor::Settings::ThemePalette> _getDefaultThemesMap();

    MCAPI static ::mce::Color _getDefaultWorldUIColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCAPI static ::std::unordered_map<::HashedString, ::mce::Color> _getEmptyColorKeyMap();

    MCAPI static ::mce::Color _getHighContrastThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCAPI static ::mce::Color _getLightThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCAPI static ::mce::Color _getRedstoneThemeColorByKey(::Editor::Settings::ThemeSettingsColorKey colorKey);

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
