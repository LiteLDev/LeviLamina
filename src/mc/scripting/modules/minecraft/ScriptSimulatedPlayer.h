#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptPlayer.h"
#include "mc/server/sim/LookDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Player;
class Scoreboard;
class SimulatedPlayer;
class Vec2;
class Vec3;
namespace ScriptModuleGameTest { struct ScriptMoveToOptions; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
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
    // vIndex: 0, symbol: __gen_??1ScriptSimulatedPlayer@ScriptModuleGameTest@@UEAA@XZ
    virtual ~ScriptSimulatedPlayer() = default;

    // vIndex: 2, symbol:
    // ?clearVelocity@ScriptSimulatedPlayer@ScriptModuleGameTest@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> clearVelocity(class Actor& self);

    // vIndex: 7, symbol:
    // ?applyImpulse@ScriptSimulatedPlayer@ScriptModuleGameTest@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVVec3@@@Z
    virtual class Scripting::Result<void> applyImpulse(class Actor& self, class Vec3 const& vector);

    // vIndex: 8, symbol:
    // ?remove@ScriptSimulatedPlayer@ScriptModuleGameTest@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> remove(class Actor&);

    // vIndex: 9, symbol: ?_isValid@ScriptSimulatedPlayer@ScriptModuleGameTest@@EEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??0ScriptSimulatedPlayer@ScriptModuleGameTest@@QEAA@AEBVPlayer@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptSimulatedPlayer(class Player const& player, class Scripting::WeakLifetimeScope const& scope);

    // symbol: ?attack@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> attack() const;

    // symbol:
    // ?attackEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool> attackEntity(class ScriptModuleMinecraft::ScriptActor const&) const;

    // symbol:
    // ?breakBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVVec3@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool>
    breakBlock(class Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face) const;

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
    interactWithBlock(class Vec3 const& blockPos, ::ScriptModuleMinecraft::ScriptFacing facing) const;

    // symbol:
    // ?interactWithEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool> interactWithEntity(class ScriptModuleMinecraft::ScriptActor const&) const;

    // symbol: ?jump@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> jump() const;

    // symbol:
    // ?lookAtBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@W4LookDuration@sim@@@Z
    MCAPI class Scripting::Result<void> lookAtBlock(class Vec3 const&, ::sim::LookDuration) const;

    // symbol:
    // ?lookAtEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@W4LookDuration@sim@@@Z
    MCAPI class Scripting::Result<void>
    lookAtEntity(class ScriptModuleMinecraft::ScriptActor const&, ::sim::LookDuration) const;

    // symbol:
    // ?lookAtLocation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@W4LookDuration@sim@@@Z
    MCAPI class Scripting::Result<void> lookAtLocation(class Vec3 const&, ::sim::LookDuration) const;

    // symbol: ?move@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@MMM@Z
    MCAPI class Scripting::Result<void> move(float, float, float speed) const;

    // symbol: ?moveRelative@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@MMM@Z
    MCAPI class Scripting::Result<void> moveRelative(float, float, float speed) const;

    // symbol:
    // ?moveToBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@V?$optional@UScriptMoveToOptions@ScriptModuleGameTest@@@std@@@Z
    MCAPI class Scripting::Result<void>
    moveToBlock(class Vec3 const&, std::optional<struct ScriptModuleGameTest::ScriptMoveToOptions>) const;

    // symbol:
    // ?moveToLocation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@V?$optional@UScriptMoveToOptions@ScriptModuleGameTest@@@std@@@Z
    MCAPI class Scripting::Result<void>
    moveToLocation(class Vec3 const&, std::optional<struct ScriptModuleGameTest::ScriptMoveToOptions>) const;

    // symbol:
    // ?navigateToBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@UScriptNavigationResult@ScriptModuleGameTest@@$$V@Scripting@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<struct ScriptModuleGameTest::ScriptNavigationResult>
    navigateToBlock(class Vec3 const& position, float speed) const;

    // symbol:
    // ?navigateToEntity@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@UScriptNavigationResult@ScriptModuleGameTest@@$$V@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@M@Z
    MCAPI class Scripting::Result<struct ScriptModuleGameTest::ScriptNavigationResult>
    navigateToEntity(class ScriptModuleMinecraft::ScriptActor const&, float speed) const;

    // symbol:
    // ?navigateToLocation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@UScriptNavigationResult@ScriptModuleGameTest@@$$V@Scripting@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<struct ScriptModuleGameTest::ScriptNavigationResult>
    navigateToLocation(class Vec3 const& position, float speed) const;

    // symbol:
    // ?navigateToLocations@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@AEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@M@Z
    MCAPI class Scripting::Result<void>
    navigateToLocations(std::vector<class Vec3> const& positions, float speed) const;

    // symbol: ?respawn@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> respawn() const;

    // symbol: ?rotateBody@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> rotateBody(float) const;

    // symbol: ?setBodyRotation@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> setBodyRotation(float) const;

    // symbol:
    // ?setItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@H_N@Z
    MCAPI class Scripting::Result<bool>
    setItem(class ScriptModuleMinecraft::ScriptItemStack const&, int slot, bool) const;

    // symbol: ?setSprinting@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setSprinting(bool) const;

    // symbol: ?startBuild@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> startBuild(int) const;

    // symbol: ?stopBreakingBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopBreakingBlock() const;

    // symbol: ?stopBuild@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> stopBuild() const;

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

    // symbol:
    // ?stopUsingItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    stopUsingItem() const;

    // symbol: ?swim@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> swim() const;

    // symbol: ?tryGetSimulatedPlayer@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBAPEAVSimulatedPlayer@@XZ
    MCAPI class SimulatedPlayer* tryGetSimulatedPlayer() const;

    // symbol:
    // ?useItem@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<bool> useItem(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // symbol: ?useItemInSlot@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<bool> useItemInSlot(int slot) const;

    // symbol:
    // ?useItemInSlotOnBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@HAEBVVec3@@W4ScriptFacing@ScriptModuleMinecraft@@V?$optional@VVec3@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    useItemInSlotOnBlock(int slot, class Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face, std::optional<class Vec3>)
        const;

    // symbol:
    // ?useItemOnBlock@ScriptSimulatedPlayer@ScriptModuleGameTest@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@AEBVVec3@@W4ScriptFacing@6@V?$optional@VVec3@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    useItemOnBlock(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face, std::optional<class Vec3>)
        const;

    // symbol:
    // ?bind@ScriptSimulatedPlayer@ScriptModuleGameTest@@SA?AV?$ClassBindingBuilder@VScriptSimulatedPlayer@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptSimulatedPlayer> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getHelper@ScriptSimulatedPlayer@ScriptModuleGameTest@@CAPEBVBaseGameTestHelper@gametest@@AEBVSimulatedPlayer@@@Z
    MCAPI static class gametest::BaseGameTestHelper const* _getHelper(class SimulatedPlayer const& player);

    // symbol:
    // ?_toWorld@ScriptSimulatedPlayer@ScriptModuleGameTest@@CA?AV?$optional@UGameTestError@gametest@@@std@@AEAVSimulatedPlayer@@PEAVBlockPos@@PEAEPEAVVec3@@@Z
    MCAPI static std::optional<struct gametest::GameTestError>
    _toWorld(class SimulatedPlayer& player, class BlockPos* blockPos, uchar* face, class Vec3* pos);

    // symbol:
    // ?_worldToLocalNavigationResult@ScriptSimulatedPlayer@ScriptModuleGameTest@@CA?AUScriptNavigationResult@2@AEAVSimulatedPlayer@@U32@@Z
    MCAPI static struct ScriptModuleGameTest::ScriptNavigationResult
    _worldToLocalNavigationResult(class SimulatedPlayer& player, struct ScriptModuleGameTest::ScriptNavigationResult);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
