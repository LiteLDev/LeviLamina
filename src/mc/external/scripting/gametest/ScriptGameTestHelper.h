#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
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
namespace ScriptModuleMinecraft { enum class ScriptFacing; }
namespace ScriptModuleMinecraft { enum class ScriptFluidType; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestHelper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEGAMETEST_SCRIPTGAMETESTHELPER
public:
    ScriptGameTestHelper& operator=(ScriptGameTestHelper const&) = delete;
    ScriptGameTestHelper(ScriptGameTestHelper const&)            = delete;
    ScriptGameTestHelper()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA\@AEAVBaseGameTestHelper\@gametest\@\@VWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptGameTestHelper(class gametest::BaseGameTestHelper&, class Scripting::WeakLifetimeScope);
    /**
     * @symbol
     * ?assertBlockState\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@V?$Closure\@$$A6A_NU?$TypedObjectHandle\@VScriptBlock\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void>
    assertBlockState(class Vec3 const&, class Scripting::Closure<bool(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>)>);
    /**
     * @symbol
     * ?assertBlockTypePresent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptBlockType\@ScriptModuleMinecraft\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    assertBlockTypePresent(class ScriptModuleMinecraft::ScriptBlockType const&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?assertCanReachLocation\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEAVScriptActor\@ScriptModuleMinecraft\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    assertCanReachLocation(class ScriptModuleMinecraft::ScriptActor&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?assertCondition\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> assertCondition(bool, std::string const&);
    /**
     * @symbol
     * ?assertContainerContains\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptItemStack\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    assertContainerContains(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const&);
    /**
     * @symbol
     * ?assertContainerEmpty\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<void> assertContainerEmpty(class Vec3 const&);
    /**
     * @symbol
     * ?assertEntityHasArmor\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H0HAEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    assertEntityHasArmor(std::string const&, int, std::string const&, int, class Vec3 const&, bool);
    /**
     * @symbol
     * ?assertEntityHasComponent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    assertEntityHasComponent(std::string const&, std::string const&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?assertEntityInstancePresent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptActor\@ScriptModuleMinecraft\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    assertEntityInstancePresent(class ScriptModuleMinecraft::ScriptActor const&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?assertEntityInstancePresentInArea\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBVScriptActor\@ScriptModuleMinecraft\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    assertEntityInstancePresentInArea(class ScriptModuleMinecraft::ScriptActor const&, bool) const;
    /**
     * @symbol
     * ?assertEntityPresent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@M_N\@Z
     */
    MCAPI class Scripting::Result<void> assertEntityPresent(std::string const&, class Vec3 const&, float, bool);
    /**
     * @symbol
     * ?assertEntityPresentInArea\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> assertEntityPresentInArea(std::string const&, bool);
    /**
     * @symbol
     * ?assertEntityState\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$Closure\@$$A6A_NU?$TypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void>
    assertEntityState(class Vec3 const&, std::string const&, class Scripting::Closure<bool(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>)>);
    /**
     * @symbol
     * ?assertEntityTouching\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> assertEntityTouching(std::string const&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?assertIsWaterlogged\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> assertIsWaterlogged(class Vec3 const&, bool);
    /**
     * @symbol
     * ?assertItemEntityCountIs\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptItemType\@ScriptModuleMinecraft\@\@AEBVVec3\@\@MH\@Z
     */
    MCAPI class Scripting::Result<void>
    assertItemEntityCountIs(class ScriptModuleMinecraft::ScriptItemType const&, class Vec3 const&, float, int);
    /**
     * @symbol
     * ?assertItemEntityPresent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptItemType\@ScriptModuleMinecraft\@\@AEBVVec3\@\@M_N\@Z
     */
    MCAPI class Scripting::Result<void>
    assertItemEntityPresent(class ScriptModuleMinecraft::ScriptItemType const&, class Vec3 const&, float, bool);
    /**
     * @symbol
     * ?assertRedstonePower\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> assertRedstonePower(class Vec3 const&, int);
    /**
     * @symbol
     * ?destroyBlock\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> destroyBlock(class Vec3 const&, bool);
    /**
     * @symbol
     * ?fail\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> fail(std::string const&);
    /**
     * @symbol
     * ?failIf\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void> failIf(class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?getBlock\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlock\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>
    getBlock(class Vec3 const&);
    /**
     * @symbol
     * ?getDimension\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptDimension\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>>
    getDimension() const;
    /**
     * @symbol
     * ?getFenceConnectivity\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptGameTestConnectivity\@ScriptModuleGameTest\@\@\@Scripting\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestConnectivity>>
    getFenceConnectivity(class Vec3 const&);
    /**
     * @symbol
     * ?getSculkSpreader\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptSculkSpreader\@ScriptModuleGameTest\@\@\@Scripting\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptSculkSpreader>>
    getSculkSpreader(class Vec3 const&);
    /**
     * @symbol
     * ?getTestDirection\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AW4ScriptFacing\@ScriptModuleMinecraft\@\@XZ
     */
    MCAPI enum class ScriptModuleMinecraft::ScriptFacing getTestDirection() const;
    /**
     * @symbol
     * ?idle\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Promise\@XUError\@Scripting\@\@X\@Scripting\@\@AEAVScriptObjectFactory\@4\@H\@Z
     */
    MCAPI class Scripting::Promise<void, struct Scripting::Error, void>
    idle(class Scripting::ScriptObjectFactory&, int);
    /**
     * @symbol ?killAllEntities\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> killAllEntities();
    /**
     * @symbol
     * ?onPlayerJump\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEAVScriptActor\@ScriptModuleMinecraft\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> onPlayerJump(class ScriptModuleMinecraft::ScriptActor&, int);
    /**
     * @symbol
     * ?pressButton\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<void> pressButton(class Vec3 const&);
    /**
     * @symbol
     * ?print\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> print(std::string const&);
    /**
     * @symbol
     * ?pullLever\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<void> pullLever(class Vec3 const&);
    /**
     * @symbol
     * ?pulseRedstone\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> pulseRedstone(class Vec3 const&, int);
    /**
     * @symbol
     * ?relativeBlockPosition\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Vec3> relativeBlockPosition(class Vec3 const&) const;
    /**
     * @symbol
     * ?relativePosition\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Vec3> relativePosition(class Vec3 const&) const;
    /**
     * @symbol
     * ?removeSimulatedPlayer\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAAXAEBVScriptSimulatedPlayer\@2\@\@Z
     */
    MCAPI void removeSimulatedPlayer(class ScriptModuleGameTest::ScriptSimulatedPlayer const&);
    /**
     * @symbol
     * ?rotateDirection\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Scripting\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI class Scripting::Result<enum class ScriptModuleMinecraft::ScriptFacing>
        rotateDirection(enum class ScriptModuleMinecraft::ScriptFacing) const;
    /**
     * @symbol
     * ?rotateVector\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Vec3> rotateVector(class Vec3 const&) const;
    /**
     * @symbol
     * ?runAfterDelay\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void> runAfterDelay(int, class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?runAtTickTime\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void> runAtTickTime(int, class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?setBlockPermutation\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptBlockPermutation\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setBlockPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const&, class Vec3 const&);
    /**
     * @symbol
     * ?setBlockType\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptBlockType\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setBlockType(class ScriptModuleMinecraft::ScriptBlockType const&, class Vec3 const&);
    /**
     * @symbol
     * ?setFluidContainer\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@W4ScriptFluidType\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setFluidContainer(class Vec3 const&, enum class ScriptModuleMinecraft::ScriptFluidType);
    /**
     * @symbol
     * ?setTntFuse\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEAVScriptActor\@ScriptModuleMinecraft\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> setTntFuse(class ScriptModuleMinecraft::ScriptActor&, int);
    /**
     * @symbol
     * ?spawn\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawn(std::string const&, class Vec3 const&);
    /**
     * @symbol
     * ?spawnAtLocation\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnAtLocation(std::string const&, class Vec3 const&);
    /**
     * @symbol
     * ?spawnItem\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBVScriptItemStack\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnItem(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const&);
    /**
     * @symbol
     * ?spawnSimulatedPlayer\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptSimulatedPlayer\@ScriptModuleGameTest\@\@\@Scripting\@\@\@Scripting\@\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameType\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptSimulatedPlayer>>
    spawnSimulatedPlayer(class Vec3 const&, std::string const&, enum class GameType);
    /**
     * @symbol
     * ?spawnWithoutBehaviors\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnWithoutBehaviors(std::string const&, class Vec3 const&);
    /**
     * @symbol
     * ?spawnWithoutBehaviorsAtLocation\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnWithoutBehaviorsAtLocation(std::string const&, class Vec3 const&);
    /**
     * @symbol
     * ?spreadFromFaceTowardDirection\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@1\@Z
     */
    MCAPI class Scripting::Result<void> spreadFromFaceTowardDirection(
        class Vec3 const&,
        enum class ScriptModuleMinecraft::ScriptFacing,
        enum class ScriptModuleMinecraft::ScriptFacing
    );
    /**
     * @symbol
     * ?startSequence\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence> startSequence();
    /**
     * @symbol ?succeed\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> succeed();
    /**
     * @symbol
     * ?succeedIf\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void> succeedIf(class Scripting::Closure<void(void)>);
    /**
     * @symbol ?succeedOnTick\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> succeedOnTick(int);
    /**
     * @symbol
     * ?succeedOnTickWhen\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void> succeedOnTickWhen(int, class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?succeedWhen\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::Result<void> succeedWhen(class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?succeedWhenBlockPresent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptBlockType\@ScriptModuleMinecraft\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    succeedWhenBlockPresent(class ScriptModuleMinecraft::ScriptBlockType const&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?succeedWhenEntityHasComponent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void>
    succeedWhenEntityHasComponent(std::string const&, std::string const&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?succeedWhenEntityPresent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> succeedWhenEntityPresent(std::string const&, class Vec3 const&, bool);
    /**
     * @symbol
     * ?triggerInternalBlockEvent\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@MV?$allocator\@M\@std\@\@\@7\@\@Z
     */
    MCAPI class Scripting::Result<void>
    triggerInternalBlockEvent(class Vec3 const&, std::string const&, std::vector<float> const&);
    /**
     * @symbol
     * ?until\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Promise\@XUError\@Scripting\@\@X\@Scripting\@\@AEAVScriptObjectFactory\@4\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::Promise<void, struct Scripting::Error, void>
    until(class Scripting::ScriptObjectFactory&, class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?walkTo\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEAVScriptActor\@ScriptModuleMinecraft\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI class Scripting::Result<void> walkTo(class ScriptModuleMinecraft::ScriptActor&, class Vec3 const&, float);
    /**
     * @symbol
     * ?walkToLocation\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEAVScriptActor\@ScriptModuleMinecraft\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI class Scripting::Result<void>
    walkToLocation(class ScriptModuleMinecraft::ScriptActor&, class Vec3 const&, float);
    /**
     * @symbol
     * ?worldBlockPosition\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Vec3> worldBlockPosition(class Vec3 const&) const;
    /**
     * @symbol
     * ?worldPosition\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Vec3> worldPosition(class Vec3 const&) const;
    /**
     * @symbol ??1ScriptGameTestHelper\@ScriptModuleGameTest\@\@QEAA\@XZ
     */
    MCAPI ~ScriptGameTestHelper();

    // private:
    /**
     * @symbol
     * ?_callClosure\@ScriptGameTestHelper\@ScriptModuleGameTest\@\@CA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBV?$Closure\@$$A6AXXZ$$V\@Scripting\@\@\@Z
     */
    MCAPI static class std::optional<struct gametest::GameTestError>
    _callClosure(class Scripting::Closure<void(void)> const&);

private:
};

}; // namespace ScriptModuleGameTest
