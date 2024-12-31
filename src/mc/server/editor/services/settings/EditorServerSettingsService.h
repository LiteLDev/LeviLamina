#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/settings/EditorSettingsService.h"
#include "mc/editor/settings/ThemeSettingsColorKey.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class GraphicsSettingsChangedPayload; }
namespace Editor::Network { class SpeedSettingsChangedPayload; }
namespace Editor::Network { class ThemeSettingsChangedPayload; }
namespace Editor::Network { class ThemeSettingsCurrentThemeChangedPayload; }
namespace Editor::Network { class ThemeSettingsNewThemeCreatedPayload; }
namespace Editor::Network { class ThemeSettingsThemeColorUpdatedPayload; }
namespace Editor::Network { class ThemeSettingsThemeDeletedPayload; }
namespace Editor::Settings { struct GraphicsProps; }
namespace Editor::Settings { struct SpeedProps; }
namespace Editor::Settings { struct ThemeProps; }
namespace mce { class Color; }
// clang-format on

namespace Editor::Services {

class EditorServerSettingsService : public ::Editor::Services::EditorSettingsService {
public:
    // prevent constructor by default
    EditorServerSettingsService& operator=(EditorServerSettingsService const&);
    EditorServerSettingsService(EditorServerSettingsService const&);
    EditorServerSettingsService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorServerSettingsService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 7
    virtual void _handleGraphicsSettingsChangedPayload(::Editor::Network::GraphicsSettingsChangedPayload const& payload
    ) /*override*/;

    // vIndex: 8
    virtual void _handleSpeedSettingsChangedPayload(::Editor::Network::SpeedSettingsChangedPayload const& payload
    ) /*override*/;

    // vIndex: 9
    virtual void _handleThemeSettingsChangedPayload(::Editor::Network::ThemeSettingsChangedPayload const& payload
    ) /*override*/;

    // vIndex: 10
    virtual void _handleThemeSettingsCurrentThemeChangedPayload(
        ::Editor::Network::ThemeSettingsCurrentThemeChangedPayload const& payload
    ) /*override*/;

    // vIndex: 11
    virtual void
    _handleThemeSettingsNewThemeCreatedPayload(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const& payload
    ) /*override*/;

    // vIndex: 12
    virtual void
    _handleThemeSettingsThemeColorUpdatedPayload(::Editor::Network::ThemeSettingsThemeColorUpdatedPayload const& payload
    ) /*override*/;

    // vIndex: 13
    virtual void
    _handleThemeSettingsThemeDeletedPayload(::Editor::Network::ThemeSettingsThemeDeletedPayload const& payload
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorServerSettingsService(::Editor::ServiceProviderCollection& providers);

    MCAPI void _handleCurrentThemeModified(::std::string const& id);

    MCAPI void _handleGraphicsSettingsModified(::Editor::Settings::GraphicsProps const& props);

    MCAPI void _handleNewThemeCreated(
        ::std::string const&                  id,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceThemeId
    );

    MCAPI void _handleSpeedSettingsModified(::Editor::Settings::SpeedProps const& props);

    MCAPI void _handleThemeColorUpdated(
        ::std::string const&                      themeId,
        ::Editor::Settings::ThemeSettingsColorKey colorKey,
        ::mce::Color const&                       color
    );

    MCAPI void _handleThemeDeleted(::std::string const& id);

    MCAPI void _handleThemeSettingsModified(::Editor::Settings::ThemeProps const& props);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI void $_handleGraphicsSettingsChangedPayload(::Editor::Network::GraphicsSettingsChangedPayload const& payload);

    MCAPI void $_handleSpeedSettingsChangedPayload(::Editor::Network::SpeedSettingsChangedPayload const& payload);

    MCAPI void $_handleThemeSettingsChangedPayload(::Editor::Network::ThemeSettingsChangedPayload const& payload);

    MCAPI void $_handleThemeSettingsCurrentThemeChangedPayload(
        ::Editor::Network::ThemeSettingsCurrentThemeChangedPayload const& payload
    );

    MCAPI void
    $_handleThemeSettingsNewThemeCreatedPayload(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const& payload);

    MCAPI void $_handleThemeSettingsThemeColorUpdatedPayload(
        ::Editor::Network::ThemeSettingsThemeColorUpdatedPayload const& payload
    );

    MCAPI void
    $_handleThemeSettingsThemeDeletedPayload(::Editor::Network::ThemeSettingsThemeDeletedPayload const& payload);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEditorSettingsServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
