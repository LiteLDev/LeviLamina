#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptPlayer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Scoreboard;
class SimulatedPlayer;
class Vec2;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptNavigationResult; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
struct ScoreboardId;
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSimulatedPlayer : public ::ScriptModuleMinecraft::ScriptPlayer {
public:
    // prevent constructor by default
    ScriptSimulatedPlayer& operator=(ScriptSimulatedPlayer const&);
    ScriptSimulatedPlayer(ScriptSimulatedPlayer const&);
    ScriptSimulatedPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol:
    // ?clearVelocity@ScriptSimulatedPlayer@ScriptModuleGameTest@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> clearVelocity(class Actor&);

    // vIndex: 7, symbol:
    // ?applyImpulse@ScriptSimulatedPlayer@ScriptModuleGameTest@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVVec3@@@Z
    virtual class Scripting::Result<void> applyImpulse(class Actor&, class Vec3 const&);

    // vIndex: 8, symbol:
    // ?remove@ScriptSimulatedPlayer@ScriptModuleGameTest@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> remove(class Actor&);

    // vIndex: 9, symbol: ?_isValid@ScriptSimulatedPlayer@ScriptModuleGameTest@@EEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ?attack@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> attack() const;

    // symbol:
    // ?attackEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool> attackEntity(class ScriptModuleMinecraft::ScriptActor const&) const;

    // symbol:
    // ?breakBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVVec3@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool> breakBlock(class Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing) const;

    // symbol:
    // ?chat@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void> chat(std::string const&) const;

    // symbol: ?disconnect@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> disconnect() const;

    // symbol: ?dropSelectedItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> dropSelectedItem() const;

    // symbol: ?fly@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> fly() const;

    // symbol: ?getHeadRotation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEAA?AV?$Result@VVec2@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class Vec2> getHeadRotation();

    // symbol: ?getSprinting@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getSprinting() const;

    // symbol:
    // ?giveItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@_N@Z
    MCAPI class Scripting::Result<bool> giveItem(class ScriptModuleMinecraft::ScriptItemStack const&, bool) const;

    // symbol: ?glide@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> glide() const;

    // symbol: ?interact@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> interact() const;

    // symbol:
    // ?interactWithBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVVec3@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool>
    interactWithBlock(class Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing) const;

    // symbol:
    // ?interactWithEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool> interactWithEntity(class ScriptModuleMinecraft::ScriptActor const&) const;

    // symbol: ?jump@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> jump() const;

    // symbol: ?lookAtBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void> lookAtBlock(class Vec3 const&) const;

    // symbol:
    // ?lookAtEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<void> lookAtEntity(class ScriptModuleMinecraft::ScriptActor const&) const;

    // symbol: ?lookAtLocation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void> lookAtLocation(class Vec3 const&) const;

    // symbol: ?move@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@MMM@Z
    MCAPI class Scripting::Result<void> move(float, float, float) const;

    // symbol: ?moveRelative@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@MMM@Z
    MCAPI class Scripting::Result<void> moveRelative(float, float, float) const;

    // symbol: ?moveToBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<void> moveToBlock(class Vec3 const&, float) const;

    // symbol: ?moveToLocation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<void> moveToLocation(class Vec3 const&, float) const;

    // symbol:
    // ?navigateToBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@UScriptNavigationResult@ScriptModuleMinecraft@@$$V@Scripting@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<struct ScriptModuleMinecraft::ScriptNavigationResult>
    navigateToBlock(class Vec3 const&, float) const;

    // symbol:
    // ?navigateToEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@UScriptNavigationResult@ScriptModuleMinecraft@@$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@M@Z
    MCAPI class Scripting::Result<struct ScriptModuleMinecraft::ScriptNavigationResult>
    navigateToEntity(class ScriptModuleMinecraft::ScriptActor const&, float) const;

    // symbol:
    // ?navigateToLocation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@UScriptNavigationResult@ScriptModuleMinecraft@@$$V@Scripting@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<struct ScriptModuleMinecraft::ScriptNavigationResult>
    navigateToLocation(class Vec3 const&, float) const;

    // symbol:
    // ?navigateToLocations@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@M@Z
    MCAPI class Scripting::Result<void> navigateToLocations(std::vector<class Vec3> const&, float) const;

    // symbol: ?respawn@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> respawn() const;

    // symbol: ?rotateBody@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> rotateBody(float) const;

    // symbol: ?setBodyRotation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> setBodyRotation(float) const;

    // symbol: ?setGameMode@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@W4GameType@@@Z
    MCAPI class Scripting::Result<void> setGameMode(::GameType);

    // symbol:
    // ?setItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@H_N@Z
    MCAPI class Scripting::Result<bool> setItem(class ScriptModuleMinecraft::ScriptItemStack const&, int, bool) const;

    // symbol: ?setSprinting@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setSprinting(bool) const;

    // symbol: ?stopBreakingBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopBreakingBlock() const;

    // symbol: ?stopFlying@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopFlying() const;

    // symbol: ?stopGliding@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopGliding() const;

    // symbol: ?stopInteracting@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopInteracting() const;

    // symbol: ?stopMoving@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopMoving() const;

    // symbol: ?stopSwimming@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopSwimming() const;

    // symbol: ?stopUsingItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopUsingItem() const;

    // symbol: ?swim@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> swim() const;

    // symbol: ?tryGetSimulatedPlayer@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBAPEAVSimulatedPlayer@@XZ
    MCAPI class SimulatedPlayer* tryGetSimulatedPlayer() const;

    // symbol:
    // ?useItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool> useItem(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // symbol: ?useItemInSlot@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<bool> useItemInSlot(int) const;

    // symbol:
    // ?useItemInSlotOnBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@HAEBVVec3@@W4ScriptFacing@ScriptModuleMinecraft@@V?$optional@VVec3@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    useItemInSlotOnBlock(int, class Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing, std::optional<class Vec3>)
        const;

    // symbol:
    // ?useItemOnBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@AEBVVec3@@W4ScriptFacing@6@V?$optional@VVec3@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    useItemOnBlock(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing, std::optional<class Vec3>)
        const;

    // symbol:
    // ?bind@ScriptSimulatedPlayer@ScriptModuleGameTest@@SA?AV?$ClassBindingBuilder@VScriptSimulatedPlayer@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptSimulatedPlayer> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getHelper@ScriptSimulatedPlayer@ScriptModuleGameTest@@CAPEBVBaseGameTestHelper@gametest@@AEBVSimulatedPlayer@@@Z
    MCAPI static class gametest::BaseGameTestHelper const* _getHelper(class SimulatedPlayer const&);

    // symbol:
    // ?_toWorld@ScriptSimulatedPlayer@ScriptModuleGameTest@@CA?AV?$optional@UGameTestError@gametest@@@std@@AEAVSimulatedPlayer@@PEAVBlockPos@@PEAEPEAVVec3@@@Z
    MCAPI static std::optional<struct gametest::GameTestError>
    _toWorld(class SimulatedPlayer&, class BlockPos*, uchar*, class Vec3*);

    // symbol:
    // ?_worldToLocalNavigationResult@ScriptSimulatedPlayer@ScriptModuleGameTest@@CA?AUScriptNavigationResult@ScriptModuleMinecraft@@AEAVSimulatedPlayer@@U34@@Z
    MCAPI static struct ScriptModuleMinecraft::ScriptNavigationResult
    _worldToLocalNavigationResult(class SimulatedPlayer&, struct ScriptModuleMinecraft::ScriptNavigationResult);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
