#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/settings/EditorSettingsService.h"
#include "mc/options/GraphicsMode.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class AudioSettingsChangedPayload; }
namespace Editor::Network { class GraphicsSettingsChangedPayload; }
namespace Editor::Network { class SpeedSettingsChangedPayload; }
namespace Editor::Network { class ThemeSettingsChangedPayload; }
namespace Editor::Network { class ThemeSettingsCurrentThemeChangedPayload; }
namespace Editor::Network { class ThemeSettingsNewThemeCreatedPayload; }
namespace Editor::Network { class ThemeSettingsThemeColorUpdatedPayload; }
namespace Editor::Network { class ThemeSettingsThemeDeletedPayload; }
namespace Editor::Settings { struct AudioProps; }
namespace Editor::Settings { struct GraphicsProps; }
namespace Editor::Settings { struct SpeedProps; }
namespace Editor::Settings { struct ThemeProps; }
namespace mce { class Color; }
// clang-format on

namespace Editor::Services {

class EditorServerSettingsService : public ::Editor::Services::EditorSettingsService {
public:
    // prevent constructor by default
    EditorServerSettingsService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerSettingsService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void
    _handleAudioSettingsChangedPayload(::Editor::Network::AudioSettingsChangedPayload const& payload) /*override*/;

    virtual void _handleGraphicsSettingsChangedPayload(
        ::Editor::Network::GraphicsSettingsChangedPayload const& payload
    ) /*override*/;

    virtual void
    _handleSpeedSettingsChangedPayload(::Editor::Network::SpeedSettingsChangedPayload const& payload) /*override*/;

    virtual void
    _handleThemeSettingsChangedPayload(::Editor::Network::ThemeSettingsChangedPayload const& payload) /*override*/;

    virtual void _handleThemeSettingsCurrentThemeChangedPayload(
        ::Editor::Network::ThemeSettingsCurrentThemeChangedPayload const& payload
    ) /*override*/;

    virtual void _handleThemeSettingsNewThemeCreatedPayload(
        ::Editor::Network::ThemeSettingsNewThemeCreatedPayload const& payload
    ) /*override*/;

    virtual void _handleThemeSettingsThemeColorUpdatedPayload(
        ::Editor::Network::ThemeSettingsThemeColorUpdatedPayload const& payload
    ) /*override*/;

    virtual void _handleThemeSettingsThemeDeletedPayload(
        ::Editor::Network::ThemeSettingsThemeDeletedPayload const& payload
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerSettingsService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _handleAudioSettingsModified(::Editor::Settings::AudioProps const& props);

    MCNAPI void _handleCurrentThemeModified(::std::string const& id);

    MCNAPI void _handleGraphicsSettingsModified(::Editor::Settings::GraphicsProps const& props);

    MCNAPI void _handleNewThemeCreated(
        ::std::string const&                  id,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceThemeId
    );

    MCNAPI void _handleSpeedSettingsModified(::Editor::Settings::SpeedProps const& props);

    MCNAPI void _handleThemeColorUpdated(
        ::std::string const&                      themeId,
        ::Editor::Settings::ThemeSettingsColorKey colorKey,
        ::mce::Color const&                       color
    );

    MCNAPI void _handleThemeDeleted(::std::string const& id);

    MCNAPI void _handleThemeSettingsModified(::Editor::Settings::ThemeProps const& props);

    MCNAPI void _loadGraphicsMode();

    MCNAPI void _saveGraphicsMode(::GraphicsMode mode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $_handleAudioSettingsChangedPayload(::Editor::Network::AudioSettingsChangedPayload const& payload);

    MCNAPI void
    $_handleGraphicsSettingsChangedPayload(::Editor::Network::GraphicsSettingsChangedPayload const& payload);

    MCNAPI void $_handleSpeedSettingsChangedPayload(::Editor::Network::SpeedSettingsChangedPayload const& payload);

    MCNAPI void $_handleThemeSettingsChangedPayload(::Editor::Network::ThemeSettingsChangedPayload const& payload);

    MCNAPI void $_handleThemeSettingsCurrentThemeChangedPayload(
        ::Editor::Network::ThemeSettingsCurrentThemeChangedPayload const& payload
    );

    MCNAPI void
    $_handleThemeSettingsNewThemeCreatedPayload(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const& payload);

    MCNAPI void $_handleThemeSettingsThemeColorUpdatedPayload(
        ::Editor::Network::ThemeSettingsThemeColorUpdatedPayload const& payload
    );

    MCNAPI void
    $_handleThemeSettingsThemeDeletedPayload(::Editor::Network::ThemeSettingsThemeDeletedPayload const& payload);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorSettingsServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
