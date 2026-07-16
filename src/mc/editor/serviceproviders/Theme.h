#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Settings { struct ThemePalette; }
namespace Editor::Settings { struct ThemeProps; }
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
    ::ll::UntypedStorage<8, 64>  mUnka6f1d2;
    ::ll::UntypedStorage<8, 64>  mUnk9a43ca;
    ::ll::UntypedStorage<8, 64>  mUnk78388d;
    ::ll::UntypedStorage<8, 64>  mUnk258f58;
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

    MCNAPI ::Scripting::Result_deprecated<void> addNewTheme(
        ::std::string const&                  id,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceThemeId,
        bool                                  notifyUpdate
    );

    MCNAPI bool canThemeBeModified(::std::string const& id) const;

    MCNAPI ::Scripting::Result_deprecated<void> deleteTheme(::std::string const& id, bool notifyUpdate);

#ifdef LL_PLAT_C
    MCNAPI ::std::unordered_map<::HashedString, ::Editor::Settings::ThemePalette> getAllThemesMap() const;
#endif

    MCNAPI ::std::optional<::Editor::Settings::ThemePalette> getThemeColors(::std::string const& id) const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getThemeName(::std::string const& id) const;

#ifdef LL_PLAT_C
    MCNAPI ::Scripting::Result_deprecated<::Editor::Settings::ThemePalette>
    getThemePalette(::std::string const& id) const;
#endif

    MCNAPI ::mce::Color const& resolveColorKey(::Editor::Settings::ThemeSettingsColorKey key) const;

    MCNAPI ::Scripting::Result_deprecated<void> setCurrentTheme(::std::string const& id, bool notifyUpdate);

    MCNAPI ::Scripting::Result_deprecated<void> setThemeName(::std::string const& id, ::std::string const& name);

    MCNAPI void updateSettings(::Editor::Settings::ThemeProps const& props, bool notifyUpdate);

    MCNAPI ::Scripting::Result_deprecated<void> updateThemeColor(
        ::std::string const&                      id,
        ::Editor::Settings::ThemeSettingsColorKey key,
        ::mce::Color const&                       newColor,
        bool                                      notifyUpdate
    );

    MCNAPI ~Theme();
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
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
