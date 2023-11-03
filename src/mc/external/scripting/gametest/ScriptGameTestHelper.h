#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptFluidType.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class Vec3;
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace ScriptModuleGameTest { class ScriptGameTestSequence; }
namespace ScriptModuleGameTest { class ScriptSculkSpreader; }
namespace ScriptModuleGameTest { class ScriptSimulatedPlayer; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestHelper {
public:
    // prevent constructor by default
    ScriptGameTestHelper& operator=(ScriptGameTestHelper const&);
    ScriptGameTestHelper(ScriptGameTestHelper const&);
    ScriptGameTestHelper();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptGameTestHelper@ScriptModuleGameTest@@QEAA@AEAVBaseGameTestHelper@gametest@@VWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptGameTestHelper(class gametest::BaseGameTestHelper&, class Scripting::WeakLifetimeScope);

    // symbol:
    // ?assertBlockState@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@V?$Closure@$$A6A_NU?$TypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@Z$$V@4@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertBlockState(class Vec3 const&, class Scripting::Closure<bool(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>)>);

    // symbol:
    // ?assertBlockTypePresent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertBlockTypePresent(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            std::string> const&,
        class Vec3 const&,
        bool
    );

    // symbol:
    // ?assertCanReachLocation@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEAVScriptActor@ScriptModuleMinecraft@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertCanReachLocation(class ScriptModuleMinecraft::ScriptActor&, class Vec3 const&, bool);

    // symbol:
    // ?assertCondition@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertCondition(bool, std::string const&);

    // symbol:
    // ?assertContainerContains@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertContainerContains(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const&);

    // symbol:
    // ?assertContainerEmpty@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertContainerEmpty(class Vec3 const&);

    // symbol:
    // ?assertEntityHasArmor@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H0HAEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityHasArmor(std::string const&, int, std::string const&, int, class Vec3 const&, bool);

    // symbol:
    // ?assertEntityHasComponent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityHasComponent(std::string const&, std::string const&, class Vec3 const&, bool);

    // symbol:
    // ?assertEntityInstancePresent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityInstancePresent(class ScriptModuleMinecraft::ScriptActor const&, class Vec3 const&, bool);

    // symbol:
    // ?assertEntityInstancePresentInArea@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVScriptActor@ScriptModuleMinecraft@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityInstancePresentInArea(class ScriptModuleMinecraft::ScriptActor const&, bool) const;

    // symbol:
    // ?assertEntityPresent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@M_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityPresent(std::string const&, class Vec3 const&, float, bool);

    // symbol:
    // ?assertEntityPresentInArea@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityPresentInArea(std::string const&, bool);

    // symbol:
    // ?assertEntityState@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$Closure@$$A6A_NU?$TypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@Z$$V@4@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityState(class Vec3 const&, std::string const&, class Scripting::Closure<bool(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>)>);

    // symbol:
    // ?assertEntityTouching@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityTouching(std::string const&, class Vec3 const&, bool);

    // symbol:
    // ?assertIsWaterlogged@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertIsWaterlogged(class Vec3 const&, bool);

    // symbol:
    // ?assertItemEntityCountIs@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VScriptItemType@ScriptModuleMinecraft@@@std@@AEBVVec3@@MH@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertItemEntityCountIs(
        std::variant<std::string, class ScriptModuleMinecraft::ScriptItemType>,
        class Vec3 const&,
        float,
        int
    );

    // symbol:
    // ?assertItemEntityPresent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VScriptItemType@ScriptModuleMinecraft@@@std@@AEBVVec3@@M_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertItemEntityPresent(
        std::variant<std::string, class ScriptModuleMinecraft::ScriptItemType>,
        class Vec3 const&,
        float,
        bool
    );

    // symbol:
    // ?assertRedstonePower@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@H@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertRedstonePower(class Vec3 const&, int);

    // symbol:
    // ?destroyBlock@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> destroyBlock(class Vec3 const&, bool);

    // symbol:
    // ?fail@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void> fail(std::string const&);

    // symbol:
    // ?failIf@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@V?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::Result<void> failIf(class Scripting::Closure<void(void)>);

    // symbol:
    // ?getBlock@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>,
        struct gametest::GameTestError>
    getBlock(class Vec3 const&);

    // symbol:
    // ?getDimension@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@UGameTestError@gametest@@@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>,
        struct gametest::GameTestError>
    getDimension() const;

    // symbol:
    // ?getFenceConnectivity@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptGameTestConnectivity@ScriptModuleGameTest@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestConnectivity>,
        struct gametest::GameTestError>
    getFenceConnectivity(class Vec3 const&);

    // symbol:
    // ?getSculkSpreader@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptSculkSpreader@ScriptModuleGameTest@@@Scripting@@@std@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptSculkSpreader>>,
        struct gametest::GameTestError>
    getSculkSpreader(class Vec3 const&);

    // symbol:
    // ?getTestDirection@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AW4ScriptFacing@ScriptModuleMinecraft@@XZ
    MCAPI ::ScriptModuleMinecraft::ScriptFacing getTestDirection() const;

    // symbol:
    // ?idle@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Promise@XUError@Scripting@@X@Scripting@@AEAVScriptObjectFactory@4@H@Z
    MCAPI class Scripting::Promise<void, struct Scripting::Error, void>
    idle(class Scripting::ScriptObjectFactory&, int);

    // symbol:
    // ?killAllEntities@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@XZ
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> killAllEntities();

    // symbol:
    // ?onPlayerJump@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEAVScriptActor@ScriptModuleMinecraft@@H@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    onPlayerJump(class ScriptModuleMinecraft::ScriptActor&, int);

    // symbol:
    // ?pressButton@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> pressButton(class Vec3 const&);

    // symbol:
    // ?print@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> print(std::string const&);

    // symbol:
    // ?pullLever@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> pullLever(class Vec3 const&);

    // symbol:
    // ?pulseRedstone@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@H@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> pulseRedstone(class Vec3 const&, int);

    // symbol:
    // ?relativeBlockPosition@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@VVec3@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError>
    relativeBlockPosition(class Vec3 const&) const;

    // symbol:
    // ?relativePosition@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@VVec3@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError> relativePosition(class Vec3 const&) const;

    // symbol: ?removeSimulatedPlayer@ScriptGameTestHelper@ScriptModuleGameTest@@QEAAXAEBVScriptSimulatedPlayer@2@@Z
    MCAPI void removeSimulatedPlayer(class ScriptModuleGameTest::ScriptSimulatedPlayer const&);

    // symbol:
    // ?rotateDirection@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@W4ScriptFacing@ScriptModuleMinecraft@@UGameTestError@gametest@@@Scripting@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<::ScriptModuleMinecraft::ScriptFacing, struct gametest::GameTestError>
        rotateDirection(::ScriptModuleMinecraft::ScriptFacing) const;

    // symbol:
    // ?rotateVector@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@VVec3@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError> rotateVector(class Vec3 const&) const;

    // symbol:
    // ?runAfterDelay@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@HV?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::Result<void> runAfterDelay(int, class Scripting::Closure<void(void)>);

    // symbol:
    // ?runAtTickTime@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@HV?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::Result<void> runAtTickTime(int, class Scripting::Closure<void(void)>);

    // symbol:
    // ?setBlockPermutation@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVScriptBlockPermutation@ScriptModuleMinecraft@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setBlockPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const&, class Vec3 const&);

    // symbol:
    // ?setBlockType@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setBlockType(std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, std::string> const&, class Vec3 const&);

    // symbol:
    // ?setFluidContainer@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@W4ScriptFluidType@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setFluidContainer(class Vec3 const&, ::ScriptModuleMinecraft::ScriptFluidType);

    // symbol:
    // ?setTntFuse@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEAVScriptActor@ScriptModuleMinecraft@@H@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setTntFuse(class ScriptModuleMinecraft::ScriptActor&, int);

    // symbol:
    // ?spawn@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawn(std::string const&, class Vec3 const&);

    // symbol:
    // ?spawnAtLocation@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnAtLocation(std::string const&, class Vec3 const&);

    // symbol:
    // ?spawnItem@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBVScriptItemStack@ScriptModuleMinecraft@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnItem(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const&);

    // symbol:
    // ?spawnSimulatedPlayer@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptSimulatedPlayer@ScriptModuleGameTest@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameType@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptSimulatedPlayer>,
        struct gametest::GameTestError>
    spawnSimulatedPlayer(class Vec3 const&, std::string const&, ::GameType);

    // symbol:
    // ?spawnWithoutBehaviors@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnWithoutBehaviors(std::string const&, class Vec3 const&);

    // symbol:
    // ?spawnWithoutBehaviorsAtLocation@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UGameTestError@gametest@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnWithoutBehaviorsAtLocation(std::string const&, class Vec3 const&);

    // symbol:
    // ?spreadFromFaceTowardDirection@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@W4ScriptFacing@ScriptModuleMinecraft@@1@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class Vec3 const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    );

    // symbol:
    // ?startSequence@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence> startSequence();

    // symbol: ?succeed@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> succeed();

    // symbol:
    // ?succeedIf@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@V?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::Result<void> succeedIf(class Scripting::Closure<void(void)>);

    // symbol: ?succeedOnTick@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> succeedOnTick(int);

    // symbol:
    // ?succeedOnTickWhen@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@HV?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::Result<void> succeedOnTickWhen(int, class Scripting::Closure<void(void)>);

    // symbol:
    // ?succeedWhen@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@V?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::Result<void> succeedWhen(class Scripting::Closure<void(void)>);

    // symbol:
    // ?succeedWhenBlockPresent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> succeedWhenBlockPresent(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            std::string> const&,
        class Vec3 const&,
        bool
    );

    // symbol:
    // ?succeedWhenEntityHasComponent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void>
    succeedWhenEntityHasComponent(std::string const&, std::string const&, class Vec3 const&, bool);

    // symbol:
    // ?succeedWhenEntityPresent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@_N@Z
    MCAPI class Scripting::Result<void> succeedWhenEntityPresent(std::string const&, class Vec3 const&, bool);

    // symbol:
    // ?triggerInternalBlockEvent@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@MV?$allocator@M@std@@@7@@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    triggerInternalBlockEvent(class Vec3 const&, std::string const&, std::vector<float> const&);

    // symbol:
    // ?until@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Promise@XUError@Scripting@@X@Scripting@@AEAVScriptObjectFactory@4@V?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::Promise<void, struct Scripting::Error, void>
    until(class Scripting::ScriptObjectFactory&, class Scripting::Closure<void(void)>);

    // symbol:
    // ?walkTo@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEAVScriptActor@ScriptModuleMinecraft@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    walkTo(class ScriptModuleMinecraft::ScriptActor&, class Vec3 const&, float);

    // symbol:
    // ?walkToLocation@ScriptGameTestHelper@ScriptModuleGameTest@@QEAA?AV?$Result@XUGameTestError@gametest@@@Scripting@@AEAVScriptActor@ScriptModuleMinecraft@@AEBVVec3@@M@Z
    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    walkToLocation(class ScriptModuleMinecraft::ScriptActor&, class Vec3 const&, float);

    // symbol:
    // ?worldBlockPosition@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@VVec3@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError>
    worldBlockPosition(class Vec3 const&) const;

    // symbol:
    // ?worldPosition@ScriptGameTestHelper@ScriptModuleGameTest@@QEBA?AV?$Result@VVec3@@UGameTestError@gametest@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError> worldPosition(class Vec3 const&) const;

    // symbol: ??1ScriptGameTestHelper@ScriptModuleGameTest@@QEAA@XZ
    MCAPI ~ScriptGameTestHelper();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getBlockFromVariant@ScriptGameTestHelper@ScriptModuleGameTest@@AEAA?AV?$optional@PEBVBlockLegacy@@@std@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@Z
    MCAPI std::optional<class BlockLegacy const*>
          _getBlockFromVariant(std::variant<
                         class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
                         std::string> const&);

    // symbol:
    // ?_callClosure@ScriptGameTestHelper@ScriptModuleGameTest@@CA?AV?$optional@UGameTestError@gametest@@@std@@AEBV?$Closure@$$A6AXXZ$$V@Scripting@@@Z
    MCAPI static std::optional<struct gametest::GameTestError>
    _callClosure(class Scripting::Closure<void(void)> const&);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
