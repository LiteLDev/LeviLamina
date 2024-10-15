#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Scoreboard;
class Vec3;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
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
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayer : public ::ScriptModuleMinecraft::ScriptActor {
public:
    // prevent constructor by default
    ScriptPlayer& operator=(ScriptPlayer const&);
    ScriptPlayer(ScriptPlayer const&);
    ScriptPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPlayer();

    // vIndex: 1
    virtual void setUnloaded(class Actor& actor);

    // vIndex: 2
    virtual class Scripting::Result<void> clearVelocity(class Actor&);

    // vIndex: 7
    virtual class Scripting::Result<void> applyImpulse(class Actor&, class Vec3 const&);

    // vIndex: 8
    virtual class Scripting::Result<void> remove(class Actor&);

    // vIndex: 9
    virtual bool _isValid() const;

    // vIndex: 10
    virtual struct ScoreboardId const& _getScoreboardId(class Scoreboard const& scoreboard) const;

    MCAPI ScriptPlayer(class ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI ScriptPlayer(class Player const& player, class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<uint> addExperience(int amount) const;

    MCAPI class Scripting::Result<int> addLevels(int amount) const;

    MCAPI class Scripting::Result<uint> calculateTotalXp() const;

    MCAPI class Scripting::Result<void> eatItem(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack);

    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCamera>>
    getCamera();

    MCAPI class Scripting::Result<::GameType> getGameMode() const;

    MCAPI class Scripting::Result<int> getItemCooldownLeft(std::string const& type) const;

    MCAPI class Scripting::Result<std::string> getName() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptScreenDisplay>>
    getOrCreateScreenDisplay();

    MCAPI class Scripting::Result<int> getPlayerLevel() const;

    MCAPI class Scripting::Result<int> getSelectedSlot() const;

    MCAPI class Scripting::Result<std::optional<struct ScriptModuleMinecraft::ScriptDimensionLocation>>
    getSpawnPoint() const;

    MCAPI class Scripting::Result<int> getTotalXpNeededForNextLevel() const;

    MCAPI class Scripting::Result<int> getXpEarnedAtCurrentLevel() const;

    MCAPI class Scripting::Result<bool> isEmoting() const;

    MCAPI class Scripting::Result<bool> isFlying() const;

    MCAPI class Scripting::Result<bool> isGliding() const;

    MCAPI class Scripting::Result<bool> isJumping() const;

    MCAPI class Scripting::Result<bool> isOp() const;

    MCAPI class ScriptModuleMinecraft::ScriptPlayer& operator=(class ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI class Scripting::Result<void>
    playMusic(std::string const& trackID, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI class Scripting::Result<void> playSound(
        std::string const&                                                    soundID,
        std::optional<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCAPI class Scripting::Result<void> playSound_V010(
        std::string const&                                              soundID,
        std::optional<struct ScriptModuleMinecraft::ScriptSoundOptions> soundOptions
    );

    MCAPI class Scripting::Result<void> postClientMessage(std::string const& id, std::string const& value);

    MCAPI class Scripting::Result<void> queueMusic(
        std::string const&                                              trackID,
        std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions> musicOptions
    );

    MCAPI class Scripting::Result<void> resetPlayerLevel() const;

    MCAPI class Scripting::Result<void> sendMessage(
        struct Scripting::ContextConfig const& contextConfig,
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    ) const;

    MCAPI class Scripting::Result<void> setGameMode(std::optional<::GameType> gameModeOrUndefined);

    MCAPI class Scripting::Result<void> setOp(bool isOp) const;

    MCAPI class Scripting::Result<void, struct Scripting::Error, struct Scripting::PropertyOutOfBoundsError>
    setSelectedSlot(int slot) const;

    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, struct Scripting::Error>
        setSpawnPoint(std::optional<struct ScriptModuleMinecraft::ScriptDimensionLocation> const& dimensionLocation
        ) const;

    MCAPI class Scripting::Result<
        void,
        struct Scripting::Error,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnParticle(
        std::string const& effectName,
        class Vec3 const&  location,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>>
            molangVariables
    );

    MCAPI class Scripting::Result<void> startItemCooldown(std::string const& itemType, int duration);

    MCAPI class Scripting::Result<void> stopMusic();

    MCAPI class Player* tryGetPlayer() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayer> bind();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>
    getHandle(class Player const& player, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(class WeakEntityRef entityRef, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<void> _playOrQueueMusic(
        class Player&                                                   player,
        std::string const&                                              trackID,
        std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                            shouldQueue
    );

    MCAPI class Scripting::Result<void> _playSoundInternal(
        std::string                                                           soundID,
        std::optional<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI void* ctor$(class Player const& player, class Scripting::WeakLifetimeScope const& scope);

    MCAPI void dtor$();

    MCAPI struct ScoreboardId const& _getScoreboardId$(class Scoreboard const& scoreboard) const;

    MCAPI bool _isValid$() const;

    MCAPI class Scripting::Result<void> applyImpulse$(class Actor&, class Vec3 const&);

    MCAPI class Scripting::Result<void> clearVelocity$(class Actor&);

    MCAPI class Scripting::Result<void> remove$(class Actor&);

    MCAPI void setUnloaded$(class Actor& actor);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
