#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/world/level/GameType.h"

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
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptCamera; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptScreenDisplay; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayer : public ::ScriptModuleMinecraft::ScriptActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke4f065;
    ::ll::UntypedStorage<8, 40> mUnk5c4fca;
    ::ll::UntypedStorage<8, 40> mUnk49ae46;
    ::ll::UntypedStorage<8, 40> mUnka42324;
    ::ll::UntypedStorage<8, 32> mUnka51820;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayer& operator=(ScriptPlayer const&);
    ScriptPlayer(ScriptPlayer const&);
    ScriptPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::Scripting::Result<void> lookAt(::Actor& self, ::Vec3 const& targetLocation) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result<void> applyImpulse(::Actor& self, ::Vec3 const& vector) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> clearVelocity(::Actor& self) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> remove(::Actor& self) /*override*/;

    // vIndex: 1
    virtual void setUnloaded(::Actor& actor) /*override*/;

    // vIndex: 10
    virtual bool _isValid() const /*override*/;

    // vIndex: 11
    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const /*override*/;

    // vIndex: 0
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

    MCAPI ::Scripting::Result<void> _playOrQueueMusic(
        ::Player&                                                    player,
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCAPI ::Scripting::Result<void> _playSoundInternal(
        ::std::string                                                      soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result_deprecated<uint> addExperience(int amount) const;

    MCAPI ::Scripting::Result_deprecated<int> addLevels(int amount) const;

    MCAPI ::Scripting::Result_deprecated<uint> calculateTotalXp() const;

    MCAPI ::Scripting::Result<void> eatItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack);

    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCamera>>
    getCamera();

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptClientSystemInfo>,
        ::Scripting::Error>
    getClientSystemInfo();

    MCAPI ::Scripting::Result_deprecated<::GameType> getGameMode() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptInputInfo> getInputInfo() const;

    MCAPI ::Scripting::Result_deprecated<int> getItemCooldownLeft(::std::string const& type) const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getName() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScreenDisplay>>
    getOrCreateScreenDisplay();

    MCAPI ::Scripting::Result_deprecated<int> getPlayerLevel() const;

    MCAPI ::Scripting::Result_deprecated<int> getSelectedSlot() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::ScriptModuleMinecraft::ScriptDimensionLocation>>
    getSpawnPoint() const;

    MCAPI ::Scripting::Result_deprecated<int> getTotalXpNeededForNextLevel() const;

    MCAPI ::Scripting::Result_deprecated<int> getXpEarnedAtCurrentLevel() const;

    MCAPI ::Scripting::Result_deprecated<bool> isEmoting() const;

    MCAPI ::Scripting::Result_deprecated<bool> isFlying() const;

    MCAPI ::Scripting::Result_deprecated<bool> isGliding() const;

    MCAPI ::Scripting::Result_deprecated<bool> isJumping() const;

    MCAPI ::Scripting::Result_deprecated<bool> isOp() const;

    MCAPI ::ScriptModuleMinecraft::ScriptPlayer& operator=(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI ::Scripting::Result<void>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result<void> playSound(
        ::std::string const&                                               soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result<void> playSound_V010(
        ::std::string const&                                         soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result<void> postClientMessage(::std::string const& id, ::std::string const& value);

    MCAPI ::Scripting::Result<void>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result<void> resetPlayerLevel() const;

    MCAPI ::Scripting::Result<void> sendMessage(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    ) const;

    MCAPI ::Scripting::Result<void> setGameMode(::std::optional<::GameType> gameModeOrUndefined);

    MCAPI ::Scripting::Result<void> setOp(bool isOp) const;

    MCAPI ::Scripting::Result<void, ::Scripting::Error, ::Scripting::PropertyOutOfBoundsError> setSelectedSlot(int slot
    ) const;

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

    MCAPI ::Scripting::Result<void> startItemCooldown(::std::string const& itemType, int duration);

    MCAPI ::Scripting::Result<void> stopMusic();

    MCAPI ::Player* tryGetPlayer() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayer> bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>
    getHandle(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

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
    MCAPI ::Scripting::Result<void> $lookAt(::Actor& self, ::Vec3 const& targetLocation);

    MCAPI ::Scripting::Result<void> $applyImpulse(::Actor& self, ::Vec3 const& vector);

    MCAPI ::Scripting::Result<void> $clearVelocity(::Actor& self);

    MCAPI ::Scripting::Result<void> $remove(::Actor& self);

    MCAPI void $setUnloaded(::Actor& actor);

    MCAPI bool $_isValid() const;

    MCAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
