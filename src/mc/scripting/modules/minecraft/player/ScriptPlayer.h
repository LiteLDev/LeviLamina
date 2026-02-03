#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/options/GraphicsMode.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Scoreboard;
class Vec3;
class WeakEntityRef;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptClientSystemInfo; }
namespace ScriptModuleMinecraft { class ScriptInputInfo; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptPlayerAimAssist; }
namespace ScriptModuleMinecraft { class ScriptPlayerInputPermissions; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptCamera; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptScreenDisplay; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct PropertyOutOfBoundsError; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayer : public ::ScriptModuleMinecraft::ScriptActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerAimAssist>>
        mAimAssist;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputPermissions>>
            mInputPermissions;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScreenDisplay>>>
        mScreenDisplay;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCamera>>>
        mCamera;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptClientSystemInfo>>>
        mClientSystemInfo;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptInputInfo>>
        mInputInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayer& operator=(ScriptPlayer const&);
    ScriptPlayer(ScriptPlayer const&);
    ScriptPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        lookAt(::Actor& self, ::Vec3 const& targetLocation) /*override*/;

    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        remove(::Actor& self) /*override*/;

    virtual void setUnloaded(::Actor& actor) /*override*/;

    virtual void setLoading(::Actor const& actor) /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const /*override*/;

    virtual ~ScriptPlayer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayer(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI ScriptPlayer(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ScriptPlayer(
        ::ScriptModuleMinecraft::ScriptActorData const& playerData,
        ::Scripting::WeakLifetimeScope const&           scope
    );

    MCAPI uint _calculateTotalXp(::Player const& player) const;

    MCAPI ::Scripting::Result_deprecated<void> _playOrQueueMusic(
        ::Player&                                                    player,
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCAPI ::Scripting::Result_deprecated<void> _playSoundInternal(
        ::std::string                                                      soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result_deprecated<uint> addExperience(int amount) const;

    MCAPI ::Scripting::Result_deprecated<int> addLevels(int amount) const;

    MCAPI ::Scripting::Result_deprecated<uint> calculateTotalXp() const;

    MCAPI ::Scripting::Result_deprecated<void> clearPropertyOverridesForEntity(
        ::std::variant<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> const&
            targetEntity
    );

    MCAPI ::Scripting::Result_deprecated<void> eatItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerAimAssist> getAimAssist() const;

    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCamera>>
    getCamera();

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptClientSystemInfo>>
    getClientSystemInfo();

    MCAPI ::Scripting::Result<::CommandPermissionLevel, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getCommandPermissionLevel() const;

    MCAPI ::Scripting::Result<::ControlScheme::Scheme, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getControlScheme() const;

    MCAPI ::Scripting::Result_deprecated<::GameType> getGameMode() const;

    MCAPI ::Scripting::Result<::GraphicsMode, ::ScriptModuleMinecraft::ScriptInvalidActorError> getGraphicsMode() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptInputInfo> getInputInfo() const;

    MCAPI ::Scripting::Result_deprecated<int> getItemCooldownLeft(::std::string const& type) const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getName() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScreenDisplay>>
    getOrCreateScreenDisplay();

    MCAPI ::Scripting::Result_deprecated<int> getPlayerLevel() const;

    MCAPI ::Scripting::Result<::PlayerPermissionLevel, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerPermissionLevel() const;

    MCAPI ::Scripting::Result_deprecated<int> getSelectedSlot() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::ScriptModuleMinecraft::ScriptDimensionLocation>>
    getSpawnPoint() const;

    MCAPI ::Scripting::Result_deprecated<int> getTotalXpNeededForNextLevel() const;

    MCAPI ::Scripting::Result_deprecated<int> getXpEarnedAtCurrentLevel() const;

    MCAPI ::Scripting::Result_deprecated<bool> isEmoting() const;

    MCAPI ::Scripting::Result_deprecated<bool> isFlying() const;

    MCAPI ::Scripting::Result_deprecated<bool> isGliding() const;

    MCAPI ::Scripting::Result_deprecated<bool> isJumping() const;

    MCAPI ::ScriptModuleMinecraft::ScriptPlayer& operator=(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI ::Scripting::Result_deprecated<void>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result_deprecated<void> playSound(
        ::std::string const&                                               soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result_deprecated<void> playSound_V010(
        ::std::string const&                                         soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result_deprecated<void> postClientMessage(::std::string const& id, ::std::string const& value);

    MCAPI ::Scripting::Result_deprecated<void>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result_deprecated<void> removePropertyOverrideForEntity(
        ::ScriptModuleMinecraft::ScriptActor const& targetEntity,
        ::std::string const&                        identifier
    );

    MCAPI ::Scripting::Result_deprecated<void> resetPlayerLevel() const;

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::ScriptModuleMinecraft::ScriptRawMessageError>
        sendMessage(
            ::Scripting::ContextConfig const& contextConfig,
            ::std::variant<
                ::std::string,
                ::ScriptModuleMinecraft::ScriptRawMessageInterface,
                ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                var
        ) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setCommandPermissionLevel(::CommandPermissionLevel commandPermissionLevel);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError>
    setControlScheme(::std::optional<::ControlScheme::Scheme const> controlScheme) const;

    MCAPI ::Scripting::Result_deprecated<void> setGameMode(::std::optional<::GameType> gameModeOrUndefined);

    MCAPI ::Scripting::Result_deprecated<void> setPropertyOverrideForEntity(
        ::ScriptModuleMinecraft::ScriptActor const&       targetEntity,
        ::std::string const&                              identifier,
        ::std::variant<float, bool, ::std::string> const& value
    );

    MCAPI ::Scripting::Result<void, ::Scripting::Error, ::Scripting::PropertyOutOfBoundsError>
    setSelectedSlot(int slot) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, ::Scripting::Error>
    setSpawnPoint(::std::optional<::ScriptModuleMinecraft::ScriptDimensionLocation> const& dimensionLocation) const;

    MCAPI ::Scripting::Result<
        void,
        ::Scripting::Error,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnParticle(
        ::std::string const& effectName,
        ::Vec3 const&        location,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>>
            molangVariables
    );

    MCAPI ::Scripting::Result_deprecated<void> startItemCooldown(::std::string const& itemType, int duration);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> stopAllSounds();

    MCAPI ::Scripting::Result_deprecated<void> stopMusic();

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    stopSound(::std::string const& soundID);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(::WeakEntityRef entityRef, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI void* $ctor(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData const& playerData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $lookAt(::Actor& self, ::Vec3 const& targetLocation);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $remove(::Actor& self);

    MCAPI void $setUnloaded(::Actor& actor);

    MCAPI void $setLoading(::Actor const& actor);

    MCAPI bool $isValid() const;

    MCAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
