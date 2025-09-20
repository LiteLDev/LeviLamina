#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"
#include "mc/world/level/dimension/MoonPhases.h"

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
namespace Scripting { class WeakLifetimeScope; }
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd2684d;
    ::ll::UntypedStorage<8, 8>  mUnke52bc0;
    ::ll::UntypedStorage<8, 32> mUnk9fe28f;
    ::ll::UntypedStorage<8, 32> mUnkbcdaa5;
    ::ll::UntypedStorage<8, 32> mUnk735be8;
    ::ll::UntypedStorage<8, 32> mUnk2d1c88;
    ::ll::UntypedStorage<8, 32> mUnk2f187d;
    ::ll::UntypedStorage<8, 32> mUnk161bfd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorld& operator=(ScriptWorld const&);
    ScriptWorld(ScriptWorld const&);
    ScriptWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWorld(::ScriptModuleMinecraft::ScriptWorld&&);

    MCNAPI ScriptWorld(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> _playOrQueueMusic(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCNAPI ::Scripting::Result_deprecated<void> _playOrQueueMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> _playSoundInternal(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCNAPI ::std::optional<::Scripting::Error> _validateDynamicProperty_V010(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    ) const;

    MCNAPI void broadcastClientMessage(::std::string const& id, ::std::string const& value);

    MCNAPI void clearDynamicProperties(::Scripting::ContextConfig const& contextConfig);

    MCNAPI int getAbsoluteTime() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldAfterEvents> getAfterEvents() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistRegistry> getAimAssist() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getAllPlayers() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldBeforeEvents>
    getBeforeEvents() const;

    MCNAPI int getDay() const;

    MCNAPI ::Vec3 getDefaultSpawnLocation() const;

    MCNAPI ::SharedTypes::Legacy::Difficulty getDifficulty() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
    getDimension(::std::string const& name) const;

    MCNAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key) const;

    MCNAPI ::std::vector<::std::string> getDynamicPropertyIds(::Scripting::ContextConfig const& contextConfig) const;

    MCNAPI int getDynamicPropertyTotalByteCount(::Scripting::ContextConfig const& contextConfig) const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>>
    getDynamicProperty_V010(::Scripting::ContextConfig const& contextConfig, ::std::string const& key) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getEntity(::std::string const& id) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRules> getGameRules();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTableManager>
    getLootTableManager() const;

    MCNAPI ::MoonPhases getMoonPhase() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getPlayers(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard> getScoreboard();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>
    getStructureManager() const;

    MCNAPI int getTimeOfDay() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events> getWorldV010Events() const;

    MCNAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCNAPI ::Scripting::Result_deprecated<void> playMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> playSound(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCNAPI ::Scripting::Result_deprecated<void> playSound_V010(
        ::std::string const&                                         soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptSoundOptions> soundOptions
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCNAPI ::Scripting::Result_deprecated<void> queueMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions
    );

    MCNAPI ::Scripting::Result_deprecated<bool>
    removeDynamicProperty_V010(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCNAPI ::Scripting::Result_deprecated<void> sendMessage(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    );

    MCNAPI void setAbsoluteTime(int absoluteTime);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, ::Scripting::Error>
    setDefaultSpawnLocation(::Vec3 const& spawnPosition);

    MCNAPI void setDifficulty(::SharedTypes::Legacy::Difficulty difficulty);

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setDynamicProperties(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>> const& values
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& value
    );

    MCNAPI ::Scripting::Result_deprecated<void> setDynamicProperty_V010(
        ::Scripting::ContextConfig const&                           contextConfig,
        ::std::string const&                                        key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3>& value
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    setTimeOfDay(::std::variant<int, ::ScriptModuleMinecraft::ScriptTimeOfDay> timeOfDay);

    MCNAPI void stopMusic();

    MCNAPI ~ScriptWorld();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorld&&);

    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
