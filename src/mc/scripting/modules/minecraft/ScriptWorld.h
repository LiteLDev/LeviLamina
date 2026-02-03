#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptAimAssistRegistry; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptGameRules; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptLootTableManager; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { class ScriptTickingAreaManager; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorld {
public:
    // ScriptWorld inner types define
    using Key = ::ServerLevel const*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events>>
        mLevelV010EventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldBeforeEvents>>
        mBeforeEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
        mAfterEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>>
        mStructureManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistRegistry>>
        mAimAssistRegistry;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTableManager>>
        mLootTableManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTickingAreaManager>>
        mTickingAreaManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorld& operator=(ScriptWorld const&);
    ScriptWorld(ScriptWorld const&);
    ScriptWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorld(::ScriptModuleMinecraft::ScriptWorld&&);

    MCAPI ScriptWorld(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners,
        ::Scripting::DependencyLocator&                      locator,
        ::Scripting::ContextConfig const&                    config
    );

    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> _playOrQueueMusic(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCAPI ::Scripting::Result_deprecated<void> _playOrQueueMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> _playSoundInternal(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCAPI ::std::optional<::Scripting::Error> _validateDynamicProperty_V010(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    ) const;

    MCAPI void broadcastClientMessage(::std::string const& id, ::std::string const& value);

    MCFOLD ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldAfterEvents> getAfterEvents() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistRegistry> getAimAssist() const;

    MCAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getAllPlayers() const;

    MCFOLD ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldBeforeEvents>
    getBeforeEvents() const;

    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
    getDimension(::std::string const& name) const;

    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key) const;

    MCAPI ::std::vector<::std::string> getDynamicPropertyIds(::Scripting::ContextConfig const& contextConfig) const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>>
    getDynamicProperty_V010(::Scripting::ContextConfig const& contextConfig, ::std::string const& key) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getEntity(::std::string const& id) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRules> getGameRules();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTableManager>
    getLootTableManager() const;

    MCAPI ::std::unordered_map<::std::string, ::std::variant<float, bool, ::std::string>>
    getPackSettings(::Scripting::DependencyLocator& locator, ::Scripting::ContextConfig const& config) const;

    MCAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getPlayers(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard> getScoreboard();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>
    getStructureManager() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTickingAreaManager>
    getTickingAreaManager() const;

    MCFOLD ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events> getWorldV010Events() const;

    MCAPI ::ScriptModuleMinecraft::ScriptWorld& operator=(::ScriptModuleMinecraft::ScriptWorld&&);

    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result_deprecated<void> playMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions
    );

    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> playSound(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result_deprecated<void> playSound_V010(
        ::std::string const&                                         soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result_deprecated<void> queueMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions
    );

    MCAPI ::Scripting::Result_deprecated<bool>
    removeDynamicProperty_V010(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCAPI ::Scripting::Result_deprecated<void> sendMessage(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, ::Scripting::Error>
    setDefaultSpawnLocation(::Vec3 const& spawnPosition);

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setDynamicProperties(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::unordered_map<
            ::std::string,
            ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>> const& values
    );

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& value
    );

    MCAPI ::Scripting::Result_deprecated<void> setDynamicProperty_V010(
        ::Scripting::ContextConfig const&                           contextConfig,
        ::std::string const&                                        key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3>& value
    );

    MCAPI ::Scripting::Result_deprecated<void>
    setTimeOfDay(::std::variant<int, ::ScriptModuleMinecraft::ScriptTimeOfDay> timeOfDay);

    MCAPI ~ScriptWorld();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorld&&);

    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners,
        ::Scripting::DependencyLocator&                      locator,
        ::Scripting::ContextConfig const&                    config
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
