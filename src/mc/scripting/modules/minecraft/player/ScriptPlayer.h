#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/options/GraphicsMode.h"
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
namespace ScriptModuleMinecraft { class ScriptPlayerAimAssist; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptCamera; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
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
    ::ll::UntypedStorage<8, 32> mUnke7a12b;
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
    // vIndex: 4
    virtual ::Scripting::Result<void> lookAt(::Actor& self, ::Vec3 const& targetLocation) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> applyImpulse(::Actor& self, ::Vec3 const& vector) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> clearVelocity(::Actor& self) /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result<void> remove(::Actor& self) /*override*/;

    // vIndex: 2
    virtual void setUnloaded(::Actor& actor) /*override*/;

    // vIndex: 1
    virtual void setLoading(::Actor const& actor) /*override*/;

    // vIndex: 11
    virtual bool isValid() const /*override*/;

    // vIndex: 12
    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const /*override*/;

    // vIndex: 0
    virtual ~ScriptPlayer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayer(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCNAPI ScriptPlayer(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ScriptPlayer(
        ::ScriptModuleMinecraft::ScriptActorData const& playerData,
        ::Scripting::WeakLifetimeScope const&           scope
    );

    MCNAPI uint _calculateTotalXp(::Player const& player) const;

    MCNAPI ::Scripting::Result<void> _playOrQueueMusic(
        ::Player&                                                    player,
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCNAPI ::Scripting::Result<void> _playSoundInternal(
        ::std::string                                                      soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCNAPI ::Scripting::Result_deprecated<uint> addExperience(int amount) const;

    MCNAPI ::Scripting::Result_deprecated<int> addLevels(int amount) const;

    MCNAPI ::Scripting::Result_deprecated<uint> calculateTotalXp() const;

    MCNAPI ::Scripting::Result<void>
    clearPropertyOverridesForEntity(::ScriptModuleMinecraft::ScriptActor const& targetEntity);

    MCNAPI ::Scripting::Result<void> eatItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerAimAssist> getAimAssist() const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCamera>>
    getCamera();

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptClientSystemInfo>,
        ::Scripting::Error>
    getClientSystemInfo();

    MCNAPI ::Scripting::Result_deprecated<::GameType> getGameMode() const;

    MCNAPI ::Scripting::Result<::GraphicsMode, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getGraphicsMode() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptInputInfo> getInputInfo() const;

    MCNAPI ::Scripting::Result_deprecated<int> getItemCooldownLeft(::std::string const& type) const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getName() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScreenDisplay>>
    getOrCreateScreenDisplay();

    MCNAPI ::Scripting::Result_deprecated<int> getPlayerLevel() const;

    MCNAPI ::Scripting::Result_deprecated<int> getSelectedSlot() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::ScriptModuleMinecraft::ScriptDimensionLocation>>
    getSpawnPoint() const;

    MCNAPI ::Scripting::Result_deprecated<int> getTotalXpNeededForNextLevel() const;

    MCNAPI ::Scripting::Result_deprecated<int> getXpEarnedAtCurrentLevel() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isEmoting() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isFlying() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isGliding() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isJumping() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isOp() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayer& operator=(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCNAPI ::Scripting::Result<void>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCNAPI ::Scripting::Result<void> playSound(
        ::std::string const&                                               soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCNAPI ::Scripting::Result<void> playSound_V010(
        ::std::string const&                                         soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptSoundOptions> soundOptions
    );

    MCNAPI ::Scripting::Result<void> postClientMessage(::std::string const& id, ::std::string const& value);

    MCNAPI ::Scripting::Result<void>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCNAPI ::Scripting::Result<void> removePropertyOverrideForEntity(
        ::ScriptModuleMinecraft::ScriptActor const& targetEntity,
        ::std::string const&                        identifier
    );

    MCNAPI ::Scripting::Result<void> resetPlayerLevel() const;

    MCNAPI ::Scripting::Result<void> sendMessage(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    ) const;

    MCNAPI ::Scripting::Result<void> setGameMode(::std::optional<::GameType> gameModeOrUndefined);

    MCNAPI ::Scripting::Result<void> setOp(bool isOp) const;

    MCNAPI ::Scripting::Result<void> setPropertyOverrideForEntity(
        ::ScriptModuleMinecraft::ScriptActor const&       targetEntity,
        ::std::string const&                              identifier,
        ::std::variant<float, bool, ::std::string> const& value
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::Error, ::Scripting::PropertyOutOfBoundsError> setSelectedSlot(int slot
    ) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, ::Scripting::Error>
    setSpawnPoint(::std::optional<::ScriptModuleMinecraft::ScriptDimensionLocation> const& dimensionLocation) const;

    MCNAPI ::Scripting::Result<
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

    MCNAPI ::Scripting::Result<void> startItemCooldown(::std::string const& itemType, int duration);

    MCNAPI ::Scripting::Result<void> stopMusic();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayer> bind();

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(::WeakEntityRef entityRef, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCNAPI void* $ctor(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData const& playerData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $lookAt(::Actor& self, ::Vec3 const& targetLocation);

    MCNAPI ::Scripting::Result<void> $applyImpulse(::Actor& self, ::Vec3 const& vector);

    MCNAPI ::Scripting::Result<void> $clearVelocity(::Actor& self);

    MCNAPI ::Scripting::Result<void> $remove(::Actor& self);

    MCNAPI void $setUnloaded(::Actor& actor);

    MCNAPI void $setLoading(::Actor const& actor);

    MCNAPI bool $isValid() const;

    MCNAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
