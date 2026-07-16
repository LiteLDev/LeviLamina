#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/settings/EditorSettingsService.h"

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

    virtual void _handleAudioSettingsChangedPayload(::Editor::Network::AudioSettingsChangedPayload const&) /*override*/;

    virtual void
    _handleGraphicsSettingsChangedPayload(::Editor::Network::GraphicsSettingsChangedPayload const&) /*override*/;

    virtual void _handleSpeedSettingsChangedPayload(::Editor::Network::SpeedSettingsChangedPayload const&) /*override*/;

    virtual void _handleThemeSettingsChangedPayload(::Editor::Network::ThemeSettingsChangedPayload const&) /*override*/;

    virtual void _handleThemeSettingsCurrentThemeChangedPayload(
        ::Editor::Network::ThemeSettingsCurrentThemeChangedPayload const&
    ) /*override*/;

    virtual void _handleThemeSettingsNewThemeCreatedPayload(
        ::Editor::Network::ThemeSettingsNewThemeCreatedPayload const&
    ) /*override*/;

    virtual void _handleThemeSettingsThemeColorUpdatedPayload(
        ::Editor::Network::ThemeSettingsThemeColorUpdatedPayload const&
    ) /*override*/;

    virtual void
    _handleThemeSettingsThemeDeletedPayload(::Editor::Network::ThemeSettingsThemeDeletedPayload const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerSettingsService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
