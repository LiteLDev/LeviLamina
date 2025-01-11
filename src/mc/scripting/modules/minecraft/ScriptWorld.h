#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptGameRules; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
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
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorld& operator=(ScriptWorld const&);
    ScriptWorld(ScriptWorld const&);
    ScriptWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorld(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners
    );

    MCAPI ::Scripting::Result<void> _playOrQueueMusic(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCAPI ::Scripting::Result<void> _playSoundInternal(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCAPI ::std::optional<::Scripting::Error> _validateDynamicProperty_V010(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    ) const;

    MCAPI void broadcastClientMessage(::std::string const& id, ::std::string const& value);

    MCAPI int getAbsoluteTime() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldAfterEvents> getAfterEvents();

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    getAllPlayers() const;

    MCFOLD ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldBeforeEvents> getBeforeEvents();

    MCAPI int getDay() const;

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

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    getPlayers(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard> getScoreboard();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>
    getStructureManager() const;

    MCAPI int getTimeOfDay() const;

    MCFOLD ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events> getWorldV010Events();

    MCAPI ::Scripting::Result<void>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result<void> playSound(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result<void> playSound_V010(
        ::std::string const&                                         soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result<void>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result_deprecated<bool>
    removeDynamicProperty_V010(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCAPI ::Scripting::Result<void> sendMessage(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, ::Scripting::Error>
    setDefaultSpawnLocation(::Vec3 const& spawnPosition);

    MCAPI ::Scripting::Result<void> setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& value
    );

    MCAPI ::Scripting::Result<void> setDynamicProperty_V010(
        ::Scripting::ContextConfig const&                           contextConfig,
        ::std::string const&                                        key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3>& value
    );

    MCAPI ::Scripting::Result<void> setTimeOfDay(::std::variant<int, ::ScriptModuleMinecraft::ScriptTimeOfDay> timeOfDay
    );

    MCAPI void stopMusic();

    MCAPI ~ScriptWorld();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptWorld> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
