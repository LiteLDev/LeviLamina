#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorSettingsServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class GraphicsSettingsChangedPayload; }
namespace Editor::Network { class SpeedSettingsChangedPayload; }
namespace Editor::Network { class ThemeSettingsChangedPayload; }
namespace Editor::Network { class ThemeSettingsCurrentThemeChangedPayload; }
namespace Editor::Network { class ThemeSettingsNewThemeCreatedPayload; }
namespace Editor::Network { class ThemeSettingsThemeColorUpdatedPayload; }
namespace Editor::Network { class ThemeSettingsThemeDeletedPayload; }
namespace Editor::Settings { class Graphics; }
namespace Editor::Settings { class Speed; }
namespace Editor::Settings { class Theme; }
namespace Editor::Settings { struct GraphicsProps; }
namespace Editor::Settings { struct SpeedProps; }
namespace Editor::Settings { struct ThemeProps; }
namespace mce { class Color; }
// clang-format on

namespace Editor::Services {

class EditorSettingsService : public ::Editor::Services::IEditorService,
                              public ::Editor::Services::EditorSettingsServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9c3dd4;
    ::ll::UntypedStorage<8, 48> mUnkd51a0e;
    ::ll::UntypedStorage<8, 8>  mUnkc9079a;
    ::ll::UntypedStorage<8, 16> mUnk5cae67;
    ::ll::UntypedStorage<8, 48> mUnkb47dc7;
    ::ll::UntypedStorage<8, 8>  mUnk901f2d;
    ::ll::UntypedStorage<8, 16> mUnk5fc265;
    ::ll::UntypedStorage<8, 48> mUnkdbf920;
    ::ll::UntypedStorage<8, 16> mUnk1bc51d;
    ::ll::UntypedStorage<8, 48> mUnkd7306b;
    ::ll::UntypedStorage<8, 16> mUnk14b933;
    ::ll::UntypedStorage<8, 48> mUnkab7c40;
    ::ll::UntypedStorage<8, 16> mUnk7a6024;
    ::ll::UntypedStorage<8, 48> mUnkefaceb;
    ::ll::UntypedStorage<8, 16> mUnkc01e6e;
    ::ll::UntypedStorage<8, 48> mUnk6e6ec0;
    ::ll::UntypedStorage<8, 8>  mUnk86ce36;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorSettingsService& operator=(EditorSettingsService const&);
    EditorSettingsService(EditorSettingsService const&);
    EditorSettingsService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorSettingsService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Editor::Settings::Graphics& getGraphicsSettings() /*override*/;

    // vIndex: 1
    virtual ::Editor::Settings::Graphics const& getGraphicsSettings() const /*override*/;

    // vIndex: 5
    virtual ::Editor::Settings::Speed& getSpeedSettings() /*override*/;

    // vIndex: 4
    virtual ::Editor::Settings::Speed const& getSpeedSettings() const /*override*/;

    // vIndex: 8
    virtual ::Editor::Settings::Theme& getThemeSettings() /*override*/;

    // vIndex: 7
    virtual ::Editor::Settings::Theme const& getThemeSettings() const /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    listenForGraphicsSettingsChanged(::std::function<void(::Editor::Settings::GraphicsProps const&)> func) /*override*/;

    // vIndex: 6
    virtual ::Bedrock::PubSub::Subscription
    listenForSpeedSettingsChanged(::std::function<void(::Editor::Settings::SpeedProps const&)> func) /*override*/;

    // vIndex: 9
    virtual ::Bedrock::PubSub::Subscription
    listenForThemeSettingsChanged(::std::function<void(::Editor::Settings::ThemeProps const&)> func) /*override*/;

    // vIndex: 10
    virtual ::Bedrock::PubSub::Subscription
    listenForCurrentThemeChanged(::std::function<void(::std::string const&)> func) /*override*/;

    // vIndex: 11
    virtual ::Bedrock::PubSub::Subscription listenForNewThemeCreated(
        ::std::function<
            void(::std::string const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&)>
            func
    ) /*override*/;

    // vIndex: 12
    virtual ::Bedrock::PubSub::Subscription listenForThemeColorUpdated(
        ::std::function<void(::std::string const&, ::Editor::Settings::ThemeSettingsColorKey, ::mce::Color const&)> func
    ) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::PubSub::Subscription listenForThemeDeleted(::std::function<void(::std::string const&)> func
    ) /*override*/;

    // vIndex: 7
    virtual void _handleGraphicsSettingsChangedPayload(::Editor::Network::GraphicsSettingsChangedPayload const&);

    // vIndex: 8
    virtual void _handleSpeedSettingsChangedPayload(::Editor::Network::SpeedSettingsChangedPayload const&);

    // vIndex: 9
    virtual void _handleThemeSettingsChangedPayload(::Editor::Network::ThemeSettingsChangedPayload const&);

    // vIndex: 10
    virtual void
    _handleThemeSettingsCurrentThemeChangedPayload(::Editor::Network::ThemeSettingsCurrentThemeChangedPayload const&);

    // vIndex: 11
    virtual void
    _handleThemeSettingsNewThemeCreatedPayload(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const&);

    // vIndex: 12
    virtual void
    _handleThemeSettingsThemeColorUpdatedPayload(::Editor::Network::ThemeSettingsThemeColorUpdatedPayload const&);

    // vIndex: 13
    virtual void _handleThemeSettingsThemeDeletedPayload(::Editor::Network::ThemeSettingsThemeDeletedPayload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorSettingsService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $init();

    MCNAPI ::Scripting::Result<void> $quit();

    MCNAPI ::Editor::Settings::Graphics& $getGraphicsSettings();

    MCNAPI ::Editor::Settings::Graphics const& $getGraphicsSettings() const;

    MCNAPI ::Editor::Settings::Speed& $getSpeedSettings();

    MCNAPI ::Editor::Settings::Speed const& $getSpeedSettings() const;

    MCNAPI ::Editor::Settings::Theme& $getThemeSettings();

    MCNAPI ::Editor::Settings::Theme const& $getThemeSettings() const;

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $listenForGraphicsSettingsChanged(::std::function<void(::Editor::Settings::GraphicsProps const&)> func);

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForSpeedSettingsChanged(::std::function<void(::Editor::Settings::SpeedProps const&)> func);

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForThemeSettingsChanged(::std::function<void(::Editor::Settings::ThemeProps const&)> func);

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForCurrentThemeChanged(::std::function<void(::std::string const&)> func);

    MCNAPI ::Bedrock::PubSub::Subscription $listenForNewThemeCreated(
        ::std::function<
            void(::std::string const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&)>
            func
    );

    MCNAPI ::Bedrock::PubSub::Subscription $listenForThemeColorUpdated(
        ::std::function<void(::std::string const&, ::Editor::Settings::ThemeSettingsColorKey, ::mce::Color const&)> func
    );

    MCNAPI ::Bedrock::PubSub::Subscription $listenForThemeDeleted(::std::function<void(::std::string const&)> func);

    MCNAPI void $_handleGraphicsSettingsChangedPayload(::Editor::Network::GraphicsSettingsChangedPayload const&);

    MCNAPI void $_handleSpeedSettingsChangedPayload(::Editor::Network::SpeedSettingsChangedPayload const&);

    MCNAPI void $_handleThemeSettingsChangedPayload(::Editor::Network::ThemeSettingsChangedPayload const&);

    MCNAPI void
    $_handleThemeSettingsCurrentThemeChangedPayload(::Editor::Network::ThemeSettingsCurrentThemeChangedPayload const&);

    MCNAPI void
    $_handleThemeSettingsNewThemeCreatedPayload(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const&);

    MCNAPI void
    $_handleThemeSettingsThemeColorUpdatedPayload(::Editor::Network::ThemeSettingsThemeColorUpdatedPayload const&);

    MCNAPI void $_handleThemeSettingsThemeDeletedPayload(::Editor::Network::ThemeSettingsThemeDeletedPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorSettingsServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
