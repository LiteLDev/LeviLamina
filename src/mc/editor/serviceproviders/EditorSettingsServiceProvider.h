#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Settings { class Audio; }
namespace Editor::Settings { class Graphics; }
namespace Editor::Settings { class Speed; }
namespace Editor::Settings { class Theme; }
namespace Editor::Settings { struct AudioProps; }
namespace Editor::Settings { struct GraphicsProps; }
namespace Editor::Settings { struct SpeedProps; }
namespace Editor::Settings { struct ThemeProps; }
namespace mce { class Color; }
// clang-format on

namespace Editor::Services {

class EditorSettingsServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorSettingsServiceProvider() = default;

    // vIndex: 2
    virtual ::Editor::Settings::Audio& getAudioSettings() = 0;

    // vIndex: 1
    virtual ::Editor::Settings::Audio const& getAudioSettings() const = 0;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Subscription
        listenForAudioSettingsChanged(::std::function<void(::Editor::Settings::AudioProps const&)>) = 0;

    // vIndex: 5
    virtual ::Editor::Settings::Graphics& getGraphicsSettings() = 0;

    // vIndex: 4
    virtual ::Editor::Settings::Graphics const& getGraphicsSettings() const = 0;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForGraphicsSettingsChanged(::std::function<void(::Editor::Settings::GraphicsProps const&)>) = 0;

    // vIndex: 8
    virtual ::Editor::Settings::Speed& getSpeedSettings() = 0;

    // vIndex: 7
    virtual ::Editor::Settings::Speed const& getSpeedSettings() const = 0;

    // vIndex: 9
    virtual ::Bedrock::PubSub::Subscription
        listenForSpeedSettingsChanged(::std::function<void(::Editor::Settings::SpeedProps const&)>) = 0;

    // vIndex: 11
    virtual ::Editor::Settings::Theme& getThemeSettings() = 0;

    // vIndex: 10
    virtual ::Editor::Settings::Theme const& getThemeSettings() const = 0;

    // vIndex: 12
    virtual ::Bedrock::PubSub::Subscription
        listenForThemeSettingsChanged(::std::function<void(::Editor::Settings::ThemeProps const&)>) = 0;

    // vIndex: 13
    virtual ::Bedrock::PubSub::Subscription
        listenForCurrentThemeChanged(::std::function<void(::std::string const&)>) = 0;

    // vIndex: 14
    virtual ::Bedrock::PubSub::Subscription listenForNewThemeCreated(
        ::std::function<
            void(::std::string const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&)>
    ) = 0;

    // vIndex: 15
    virtual ::Bedrock::PubSub::Subscription listenForThemeColorUpdated(
        ::std::function<void(::std::string const&, ::Editor::Settings::ThemeSettingsColorKey, ::mce::Color const&)>
    ) = 0;

    // vIndex: 16
    virtual ::Bedrock::PubSub::Subscription listenForThemeDeleted(::std::function<void(::std::string const&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
