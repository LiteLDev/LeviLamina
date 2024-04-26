#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActor.h"

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
    // vIndex: 0, symbol: __gen_??1ScriptPlayer@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptPlayer() = default;

    // vIndex: 1, symbol: ?setUnloaded@ScriptPlayer@ScriptModuleMinecraft@@UEAAXAEAVActor@@@Z
    virtual void setUnloaded(class Actor&);

    // vIndex: 2, symbol:
    // ?clearVelocity@ScriptPlayer@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> clearVelocity(class Actor&);

    // vIndex: 7, symbol:
    // ?applyImpulse@ScriptPlayer@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVVec3@@@Z
    virtual class Scripting::Result<void> applyImpulse(class Actor&, class Vec3 const&);

    // vIndex: 8, symbol: ?remove@ScriptPlayer@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> remove(class Actor&);

    // vIndex: 9, symbol: ?_isValid@ScriptPlayer@ScriptModuleMinecraft@@EEBA_NXZ
    virtual bool _isValid() const;

    // vIndex: 10, symbol:
    // ?_getScoreboardId@ScriptPlayer@ScriptModuleMinecraft@@EEBAAEBUScoreboardId@@AEBVScoreboard@@@Z
    virtual struct ScoreboardId const& _getScoreboardId(class Scoreboard const&) const;

    // symbol: ??0ScriptPlayer@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptPlayer(class ScriptModuleMinecraft::ScriptPlayer&&);

    // symbol: ??0ScriptPlayer@ScriptModuleMinecraft@@QEAA@AEBVPlayer@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptPlayer(class Player const& player, class Scripting::WeakLifetimeScope const& scope);

    // symbol: ?addExperience@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@I$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<uint> addExperience(int amount) const;

    // symbol: ?addLevels@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<int> addLevels(int amount) const;

    // symbol: ?calculateTotalXp@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@I$$V@Scripting@@XZ
    MCAPI class Scripting::Result<uint> calculateTotalXp() const;

    // symbol: ?eatItem@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBVScriptItemStack@2@@Z
    MCAPI class Scripting::Result<void> eatItem(class ScriptModuleMinecraft::ScriptItemStack const&);

    // symbol:
    // ?getCamera@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@UScriptCamera@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCamera>>
    getCamera();

    // symbol: ?getGameMode@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@W4GameType@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<::GameType> getGameMode() const;

    // symbol:
    // ?getItemCooldownLeft@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<int> getItemCooldownLeft(std::string const& type) const;

    // symbol:
    // ?getName@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getName() const;

    // symbol:
    // ?getOrCreateScreenDisplay@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@UScriptScreenDisplay@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptScreenDisplay>>
    getOrCreateScreenDisplay();

    // symbol: ?getPlayerLevel@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getPlayerLevel() const;

    // symbol: ?getSelectedSlot@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getSelectedSlot() const;

    // symbol:
    // ?getSpawnPoint@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@UScriptDimensionLocation@ScriptModuleMinecraft@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<struct ScriptModuleMinecraft::ScriptDimensionLocation>>
    getSpawnPoint() const;

    // symbol: ?getTotalXpNeededForNextLevel@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getTotalXpNeededForNextLevel() const;

    // symbol: ?getXpEarnedAtCurrentLevel@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getXpEarnedAtCurrentLevel() const;

    // symbol: ?isEmoting@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isEmoting() const;

    // symbol: ?isFlying@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isFlying() const;

    // symbol: ?isGliding@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isGliding() const;

    // symbol: ?isJumping@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isJumping() const;

    // symbol: ?isOp@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isOp() const;

    // symbol: ??4ScriptPlayer@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptPlayer& operator=(class ScriptModuleMinecraft::ScriptPlayer&&);

    // symbol:
    // ?playMusic@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptMusicOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    playMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);

    // symbol:
    // ?playSound@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptPlayerSoundOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    playSound(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions>);

    // symbol:
    // ?playSound_V010@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptSoundOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    playSound_V010(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptSoundOptions>);

    // symbol:
    // ?postClientMessage@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI class Scripting::Result<void> postClientMessage(std::string const& id, std::string const& value);

    // symbol:
    // ?queueMusic@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptMusicOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    queueMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);

    // symbol: ?resetPlayerLevel@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> resetPlayerLevel() const;

    // symbol:
    // ?sendMessage@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEBUContextConfig@4@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@2@@std@@@Z
    MCAPI class Scripting::Result<void> sendMessage(
        struct Scripting::ContextConfig const&,
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    ) const;

    // symbol:
    // ?setGameMode@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@W4GameType@@@std@@@Z
    MCAPI class Scripting::Result<void> setGameMode(std::optional<::GameType>);

    // symbol: ?setOp@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setOp(bool) const;

    // symbol: ?setSelectedSlot@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> setSelectedSlot(int slot) const;

    // symbol:
    // ?setSpawnPoint@ScriptPlayer@ScriptModuleMinecraft@@QEBA?AV?$Result@XUScriptLocationOutOfWorldBoundsError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@AEBV?$optional@UScriptDimensionLocation@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, struct Scripting::Error>
        setSpawnPoint(std::optional<struct ScriptModuleMinecraft::ScriptDimensionLocation> const&) const;

    // symbol:
    // ?spawnParticle@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@XUError@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$optional@V?$StrongTypedObjectHandle@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@@6@@Z
    MCAPI class Scripting::Result<
        void,
        struct Scripting::Error,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnParticle(std::string const&, class Vec3 const&, std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>>);

    // symbol:
    // ?startItemCooldown@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI class Scripting::Result<void> startItemCooldown(std::string const& itemType, int duration);

    // symbol: ?stopMusic@ScriptPlayer@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopMusic();

    // symbol: ?tryGetPlayer@ScriptPlayer@ScriptModuleMinecraft@@QEBAPEAVPlayer@@XZ
    MCAPI class Player* tryGetPlayer() const;

    // symbol:
    // ?bind@ScriptPlayer@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayer> bind();

    // symbol:
    // ?getHandle@ScriptPlayer@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@AEBVPlayer@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>
    getHandle(class Player const& player, class Scripting::WeakLifetimeScope const& scope);

    // symbol:
    // ?getHandle@ScriptPlayer@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@VWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(class WeakEntityRef, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_playOrQueueMusic@ScriptPlayer@ScriptModuleMinecraft@@AEAA?AV?$Result@X$$V@Scripting@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptMusicOptions@ScriptModuleMinecraft@@@7@_N@Z
    MCAPI class Scripting::Result<void> _playOrQueueMusic(
        class Player&,
        std::string const&,
        std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>,
        bool
    );

    // symbol:
    // ?_playSoundInternal@ScriptPlayer@ScriptModuleMinecraft@@AEAA?AV?$Result@X$$V@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptPlayerSoundOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
        _playSoundInternal(std::string, std::optional<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
