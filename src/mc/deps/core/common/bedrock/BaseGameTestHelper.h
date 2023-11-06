#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/GameType.h"
#include "mc/gametest/framework/GameTestErrorType.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Dimension;
class Item;
class ItemStack;
class Mob;
class SimulatedPlayer;
class Vec3;
namespace Bedrock { class EnableNonOwnerReferences; }
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestSequence; }
namespace gametest { struct GameTestError; }
struct ActorDefinitionIdentifier;
// clang-format on

namespace gametest {

class BaseGameTestHelper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    BaseGameTestHelper& operator=(BaseGameTestHelper const&);
    BaseGameTestHelper(BaseGameTestHelper const&);
    BaseGameTestHelper();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BaseGameTestHelper@@@UEAA@XZ
    virtual ~BaseGameTestHelper();

    // vIndex: 1, symbol: ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@HHH_N@Z
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const&, int, int, int, bool) = 0;

    // vIndex: 2, symbol:
    // ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const&, class BlockPos const&, bool) = 0;

    // vIndex: 3, symbol:
    // ?succeedWhenEntityData@MinecraftGameTestHelper@@UEAAXAEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@std@@@Z
    virtual void
    succeedWhenEntityData(class BlockPos const&, struct ActorDefinitionIdentifier const&, std::function<bool(class Actor&)>) = 0;

    // vIndex: 4, symbol:
    // ?succeedWhenEntityHasComponent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenEntityHasComponent(
        struct ActorDefinitionIdentifier const&,
        std::string const&,
        class BlockPos const&,
        bool
    ) = 0;

    // vIndex: 5, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@HHH_N@Z
    virtual void succeedWhenBlockPresent(class Block const&, int, int, int, bool) = 0;

    // vIndex: 6, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenBlockPresent(class Block const&, class BlockPos const&, bool) = 0;

    // vIndex: 7, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlockLegacy@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenBlockPresent(class BlockLegacy const&, class BlockPos const&, bool) = 0;

    // vIndex: 8, symbol: ?setNight@MinecraftGameTestHelper@@UEAAXXZ
    virtual void setNight() = 0;

    // vIndex: 9, symbol: ?setDayTime@MinecraftGameTestHelper@@UEAAXH@Z
    virtual void setDayTime(int) = 0;

    // vIndex: 10, symbol:
    // ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHHAEBVBlock@@H@Z
    virtual std::optional<struct gametest::GameTestError> setBlock(int, int, int, class Block const&, int) = 0;

    // vIndex: 11, symbol:
    // ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBVBlock@@H@Z
    virtual std::optional<struct gametest::GameTestError> setBlock(class BlockPos const&, class Block const&, int) = 0;

    // vIndex: 12, symbol:
    // ?destroyBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> destroyBlock(class BlockPos const&, bool) = 0;

    // vIndex: 13, symbol: ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
    virtual std::optional<struct gametest::GameTestError> pressButton(int, int, int) = 0;

    // vIndex: 14, symbol:
    // ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> pressButton(class BlockPos const&) = 0;

    // vIndex: 15, symbol: ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
    virtual std::optional<struct gametest::GameTestError> pullLever(int, int, int) = 0;

    // vIndex: 16, symbol:
    // ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> pullLever(class BlockPos const&) = 0;

    // vIndex: 17, symbol: ?killAllEntities@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@XZ
    virtual std::optional<struct gametest::GameTestError> killAllEntities() = 0;

    // vIndex: 18, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@HHH@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const&, int, int, int) = 0;

    // vIndex: 19, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const&, class BlockPos const&) = 0;

    // vIndex: 20, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const&, class Vec3 const&) = 0;

    // vIndex: 21, symbol:
    // ?spawnItem@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBVItemStack@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnItem(class ItemStack const&, class Vec3 const&) = 0;

    // vIndex: 22, symbol:
    // ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const&, class BlockPos const&) = 0;

    // vIndex: 23, symbol:
    // ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const&, class Vec3 const&) = 0;

    // vIndex: 24, symbol:
    // ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@M@Z
    virtual std::optional<struct gametest::GameTestError> walkTo(class Mob&, class BlockPos const&, float) = 0;

    // vIndex: 25, symbol:
    // ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVVec3@@M@Z
    virtual std::optional<struct gametest::GameTestError> walkTo(class Mob&, class Vec3 const&, float) = 0;

    // vIndex: 26, symbol:
    // ?setTntFuse@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVActor@@H@Z
    virtual std::optional<struct gametest::GameTestError> setTntFuse(class Actor&, int) = 0;

    // vIndex: 27, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, bool) = 0;

    // vIndex: 28, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@HHH_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, int, int, int, bool) = 0;

    // vIndex: 29, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, class BlockPos const&, bool) = 0;

    // vIndex: 30, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@M_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, class BlockPos const&, float, bool) = 0;

    // vIndex: 31, symbol:
    // ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const*, class BlockPos const&, bool) = 0;

    // vIndex: 32, symbol:
    // ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEBA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const*, bool) const = 0;

    // vIndex: 33, symbol:
    // ?assertEntityTouching@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityTouching(struct ActorDefinitionIdentifier const&, class Vec3 const&, bool) = 0;

    // vIndex: 34, symbol:
    // ?assertEntityState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityState(class BlockPos const&, struct ActorDefinitionIdentifier const&, std::function<bool(class Actor&)>) = 0;

    // vIndex: 35, symbol:
    // ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@HHH_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const&, int, int, int, bool) = 0;

    // vIndex: 36, symbol:
    // ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const&, class BlockPos const&, bool) = 0;

    // vIndex: 37, symbol:
    // ?assertBlockState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@V?$function@$$A6A_NAEBVBlock@@@Z@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockState(class BlockPos const&, std::function<bool(class Block const&)>) = 0;

    // vIndex: 38, symbol:
    // ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@HHHM_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const&, int, int, int, float, bool) = 0;

    // vIndex: 39, symbol:
    // ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@M_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const&, class BlockPos const&, float, bool) = 0;

    // vIndex: 40, symbol:
    // ?assertItemEntityCountIs@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@MH@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityCountIs(class Item const&, class BlockPos const&, float, int) = 0;

    // vIndex: 41, symbol:
    // ?assertContainerEmpty@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const&) = 0;

    // vIndex: 42, symbol:
    // ?assertContainerContains@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItemStack@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertContainerContains(class ItemStack const&, class BlockPos const&) = 0;

    // vIndex: 43, symbol:
    // ?assertEntityHasComponent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertEntityHasComponent(
        struct ActorDefinitionIdentifier const&,
        std::string const&,
        class BlockPos const&,
        bool
    ) = 0;

    // vIndex: 44, symbol:
    // ?assertEntityHasArmor@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@W4ArmorSlot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@HAEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertEntityHasArmor(
        struct ActorDefinitionIdentifier const&,
        ::ArmorSlot,
        std::string const&,
        int,
        class BlockPos const&,
        bool
    ) = 0;

    // vIndex: 45, symbol:
    // ?print@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::optional<struct gametest::GameTestError> print(std::string const&) = 0;

    // vIndex: 46, symbol:
    // ?assertRedstonePower@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const&, int) = 0;

    // vIndex: 47, symbol:
    // ?assertIsWaterlogged@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const&, bool) = 0;

    // vIndex: 48, symbol:
    // ?pulseRedstone@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const&, int) = 0;

    // vIndex: 49, symbol:
    // ?getFenceConnectivity@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@VScriptGameTestConnectivity@ScriptModuleGameTest@@@std@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(class BlockPos const&) = 0;

    // vIndex: 50, symbol:
    // ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const&) const = 0;

    // vIndex: 51, symbol:
    // ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const&) const = 0;

    // vIndex: 52, symbol:
    // ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class BlockPos>
    relativePosition(class BlockPos const&) const = 0;

    // vIndex: 53, symbol:
    // ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const&) const = 0;

    // vIndex: 54, symbol:
    // ?setFluidContainer@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const&, int) = 0;

    // vIndex: 55, symbol:
    // ?triggerInternalBlockEvent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@MV?$allocator@M@std@@@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    triggerInternalBlockEvent(class BlockPos const&, std::string const&, std::vector<float> const&) = 0;

    // vIndex: 56, symbol:
    // ?assertCanReachLocation@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertCanReachLocation(class Mob&, class BlockPos const&, bool) = 0;

    // vIndex: 57, symbol:
    // ?spreadFromFaceTowardDirection@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@1@Z
    virtual std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class BlockPos const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    ) = 0;

    // vIndex: 58, symbol:
    // ?spawnSimulatedPlayer@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVSimulatedPlayer@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@W4GameType@@@Z
    virtual std::variant<struct gametest::GameTestError, class SimulatedPlayer*>
    spawnSimulatedPlayer(std::string const&, class BlockPos const&, ::GameType) = 0;

    // vIndex: 59, symbol: ?removeSimulatedPlayer@MinecraftGameTestHelper@@UEAAXAEAVSimulatedPlayer@@@Z
    virtual void removeSimulatedPlayer(class SimulatedPlayer&) = 0;

    // vIndex: 60, symbol:
    // ?getDimension@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVDimension@@@std@@XZ
    virtual std::variant<struct gametest::GameTestError, class Dimension*> getDimension() = 0;

    // vIndex: 61, symbol:
    // ?getBlockSource@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAPEAVBlockSource@@@Z
    virtual std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource*&) = 0;

    // vIndex: 62, symbol:
    // ?onPlayerJump@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@H@Z
    virtual std::optional<struct gametest::GameTestError> onPlayerJump(class Mob&, int) = 0;

    // symbol: ??0BaseGameTestHelper@gametest@@QEAA@AEAVBaseGameTestInstance@1@@Z
    MCAPI explicit BaseGameTestHelper(class gametest::BaseGameTestInstance&);

    // symbol:
    // ?assertCondition@BaseGameTestHelper@gametest@@QEAA?AV?$optional@UGameTestError@gametest@@@std@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<struct gametest::GameTestError> assertCondition(bool, std::string const&);

    // symbol: ?fail@BaseGameTestHelper@gametest@@QEAAXUGameTestError@2@@Z
    MCAPI void fail(struct gametest::GameTestError);

    // symbol:
    // ?failIf@BaseGameTestHelper@gametest@@QEAAXV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI void failIf(std::function<std::optional<struct gametest::GameTestError>(void)>);

    // symbol:
    // ?generateErrorWithContext@BaseGameTestHelper@gametest@@QEBA?AUGameTestError@2@W4GameTestErrorType@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@@Z
    MCAPI struct gametest::GameTestError
    generateErrorWithContext(::gametest::GameTestErrorType, std::string, class BlockPos const&) const;

    // symbol:
    // ?generateErrorWithContext@BaseGameTestHelper@gametest@@QEBA?AUGameTestError@2@W4GameTestErrorType@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@AEBVBlockPos@@@Z
    MCAPI struct gametest::GameTestError
    generateErrorWithContext(::gametest::GameTestErrorType, std::string, std::vector<std::string>, class BlockPos const&)
        const;

    // symbol: ?getTestDirection@BaseGameTestHelper@gametest@@QEBAEXZ
    MCAPI uchar getTestDirection() const;

    // symbol: ?getTestRotationAngle@BaseGameTestHelper@gametest@@QEBAMXZ
    MCAPI float getTestRotationAngle() const;

    // symbol: ?rotateDirection@BaseGameTestHelper@gametest@@QEBA?AV?$variant@UGameTestError@gametest@@E@std@@E@Z
    MCAPI std::variant<struct gametest::GameTestError, uchar> rotateDirection(uchar) const;

    // symbol:
    // ?rotateVector@BaseGameTestHelper@gametest@@QEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
    MCAPI std::variant<struct gametest::GameTestError, class Vec3> rotateVector(class Vec3 const&) const;

    // symbol:
    // ?runAfterDelay@BaseGameTestHelper@gametest@@QEAAXHV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI void runAfterDelay(int, std::function<std::optional<struct gametest::GameTestError>(void)>);

    // symbol:
    // ?runAtTickTime@BaseGameTestHelper@gametest@@QEAAXHV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI void runAtTickTime(int, std::function<std::optional<struct gametest::GameTestError>(void)>);

    // symbol: ?startSequence@BaseGameTestHelper@gametest@@QEAAAEAVGameTestSequence@2@XZ
    MCAPI class gametest::GameTestSequence& startSequence();

    // symbol: ?succeed@BaseGameTestHelper@gametest@@QEAAXXZ
    MCAPI void succeed();

    // symbol:
    // ?succeedIf@BaseGameTestHelper@gametest@@QEAAXV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI void succeedIf(std::function<std::optional<struct gametest::GameTestError>(void)>);

    // symbol: ?succeedOnTick@BaseGameTestHelper@gametest@@QEAAXH@Z
    MCAPI void succeedOnTick(int);

    // symbol:
    // ?succeedOnTickWhen@BaseGameTestHelper@gametest@@QEAAXHV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI void succeedOnTickWhen(int, std::function<std::optional<struct gametest::GameTestError>(void)>);

    // symbol:
    // ?succeedWhen@BaseGameTestHelper@gametest@@QEAAXV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI void succeedWhen(std::function<std::optional<struct gametest::GameTestError>(void)>);

    // symbol:
    // ?until@BaseGameTestHelper@gametest@@QEAAXV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@0@Z
    MCAPI void
        until(std::function<std::optional<struct gametest::GameTestError>(void)>, std::function<std::optional<struct gametest::GameTestError>(void)>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_absolutePos@BaseGameTestHelper@gametest@@IEBA?AVBlockPos@@AEBV3@@Z
    MCAPI class BlockPos _absolutePos(class BlockPos const&) const;

    // symbol: ?_absoluteVec@BaseGameTestHelper@gametest@@IEBA?AVVec3@@AEBV3@@Z
    MCAPI class Vec3 _absoluteVec(class Vec3 const&) const;

    // NOLINTEND
};

}; // namespace gametest
