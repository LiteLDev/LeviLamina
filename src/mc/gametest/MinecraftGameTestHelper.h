#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/BaseGameTestHelper.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/GameType.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftGameTestHelper : public ::gametest::BaseGameTestHelper {
public:
    // prevent constructor by default
    MinecraftGameTestHelper& operator=(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MinecraftGameTestHelper@@UEAA@XZ
    virtual ~MinecraftGameTestHelper() = default;

    // vIndex: 1, symbol: ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@HHH_N@Z
    virtual void
    succeedWhenEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool);

    // vIndex: 2, symbol:
    // ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
    virtual void
    succeedWhenEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos, bool);

    // vIndex: 3, symbol:
    // ?succeedWhenEntityData@MinecraftGameTestHelper@@UEAAXAEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@std@@@Z
    virtual void
    succeedWhenEntityData(class BlockPos const& pos, struct ActorDefinitionIdentifier const& actorIdentifier, std::function<bool(class Actor&)>);

    // vIndex: 4, symbol:
    // ?succeedWhenEntityHasComponent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenEntityHasComponent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool
    );

    // vIndex: 5, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@HHH_N@Z
    virtual void succeedWhenBlockPresent(class Block const& block, int x, int y, int z, bool);

    // vIndex: 6, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenBlockPresent(class Block const& block, class BlockPos const& pos, bool);

    // vIndex: 7, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlockLegacy@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenBlockPresent(class BlockLegacy const& block, class BlockPos const& position, bool);

    // vIndex: 8, symbol: ?setNight@MinecraftGameTestHelper@@UEAAXXZ
    virtual void setNight();

    // vIndex: 9, symbol: ?setDayTime@MinecraftGameTestHelper@@UEAAXH@Z
    virtual void setDayTime(int time);

    // vIndex: 10, symbol:
    // ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHHAEBVBlock@@H@Z
    virtual std::optional<struct gametest::GameTestError>
    setBlock(int x, int y, int z, class Block const& block, int updateFlags);

    // vIndex: 11, symbol:
    // ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBVBlock@@H@Z
    virtual std::optional<struct gametest::GameTestError>
    setBlock(class BlockPos const& pos, class Block const& block, int updateFlags);

    // vIndex: 12, symbol:
    // ?destroyBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> destroyBlock(class BlockPos const& pos, bool dropResources);

    // vIndex: 13, symbol: ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
    virtual std::optional<struct gametest::GameTestError> pressButton(int x, int y, int z);

    // vIndex: 14, symbol:
    // ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> pressButton(class BlockPos const&);

    // vIndex: 15, symbol: ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
    virtual std::optional<struct gametest::GameTestError> pullLever(int x, int y, int z);

    // vIndex: 16, symbol:
    // ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> pullLever(class BlockPos const&);

    // vIndex: 17, symbol: ?killAllEntities@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@XZ
    virtual std::optional<struct gametest::GameTestError> killAllEntities();

    // vIndex: 18, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@HHH@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z);

    // vIndex: 19, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos);

    // vIndex: 20, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos);

    // vIndex: 21, symbol:
    // ?spawnItem@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBVItemStack@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnItem(class ItemStack const& itemType, class Vec3 const& pos);

    // vIndex: 22, symbol:
    // ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos);

    // vIndex: 23, symbol:
    // ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos);

    // vIndex: 24, symbol:
    // ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@M@Z
    virtual std::optional<struct gametest::GameTestError>
    walkTo(class Mob& mob, class BlockPos const& pos, float speedModifier);

    // vIndex: 25, symbol:
    // ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVVec3@@M@Z
    virtual std::optional<struct gametest::GameTestError>
    walkTo(class Mob& mob, class Vec3 const& pos, float speedModifier);

    // vIndex: 26, symbol:
    // ?setTntFuse@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVActor@@H@Z
    virtual std::optional<struct gametest::GameTestError> setTntFuse(class Actor& actor, int fuseLength);

    // vIndex: 27, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, bool);

    // vIndex: 28, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@HHH_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool);

    // vIndex: 29, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos, bool);

    // vIndex: 30, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@M_N@Z
    virtual std::optional<struct gametest::GameTestError> assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        float                                   distance,
        bool
    );

    // vIndex: 31, symbol:
    // ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, class BlockPos const& pos, bool);

    // vIndex: 32, symbol:
    // ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEBA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, bool) const;

    // vIndex: 33, symbol:
    // ?assertEntityTouching@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityTouching(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos, bool);

    // vIndex: 34, symbol:
    // ?assertEntityState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityState(class BlockPos const& pos, struct ActorDefinitionIdentifier const& actorIdentifier, std::function<bool(class Actor&)>);

    // vIndex: 35, symbol:
    // ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@HHH_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, int x, int y, int z, bool);

    // vIndex: 36, symbol:
    // ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, class BlockPos const& pos, bool);

    // vIndex: 37, symbol:
    // ?assertBlockState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@V?$function@$$A6A_NAEBVBlock@@@Z@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockState(class BlockPos const& blockPos, std::function<bool(class Block const&)> predicate);

    // vIndex: 38, symbol:
    // ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@HHHM_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const& item, int x, int y, int z, float, bool);

    // vIndex: 39, symbol:
    // ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@M_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const& item, class BlockPos const& pos, float, bool);

    // vIndex: 40, symbol:
    // ?assertItemEntityCountIs@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@MH@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityCountIs(class Item const& itemType, class BlockPos const& pos, float, int);

    // vIndex: 41, symbol:
    // ?assertContainerEmpty@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const& pos);

    // vIndex: 42, symbol:
    // ?assertContainerContains@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItemStack@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertContainerContains(class ItemStack const& item, class BlockPos const& pos);

    // vIndex: 43, symbol:
    // ?assertEntityHasComponent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertEntityHasComponent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool
    );

    // vIndex: 44, symbol:
    // ?assertEntityHasArmor@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@W4ArmorSlot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@HAEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertEntityHasArmor(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        ::ArmorSlot                             armorSlot,
        std::string const&,
        int                   dataValue,
        class BlockPos const& pos,
        bool
    );

    // vIndex: 45, symbol:
    // ?print@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::optional<struct gametest::GameTestError> print(std::string const& text);

    // vIndex: 46, symbol:
    // ?assertRedstonePower@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const& pos, int);

    // vIndex: 47, symbol:
    // ?assertIsWaterlogged@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const& pos, bool);

    // vIndex: 48, symbol:
    // ?pulseRedstone@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const& pos, int duration);

    // vIndex: 49, symbol:
    // ?getFenceConnectivity@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@VScriptGameTestConnectivity@ScriptModuleGameTest@@@std@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(class BlockPos const&);

    // vIndex: 50, symbol:
    // ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const&) const;

    // vIndex: 51, symbol:
    // ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const&) const;

    // vIndex: 52, symbol:
    // ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const& pos
    ) const;

    // vIndex: 53, symbol:
    // ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const& pos) const;

    // vIndex: 54, symbol:
    // ?setFluidContainer@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const& pos, int);

    // vIndex: 55, symbol:
    // ?triggerInternalBlockEvent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@MV?$allocator@M@std@@@3@@Z
    virtual std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(
        class BlockPos const&     pos,
        std::string const&        event,
        std::vector<float> const& parameters
    );

    // vIndex: 56, symbol:
    // ?assertCanReachLocation@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertCanReachLocation(class Mob& mob, class BlockPos const& pos, bool);

    // vIndex: 57, symbol:
    // ?spreadFromFaceTowardDirection@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@1@Z
    virtual std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class BlockPos const& pos,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    // vIndex: 58, symbol:
    // ?spawnSimulatedPlayer@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVSimulatedPlayer@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@W4GameType@@@Z
    virtual std::variant<struct gametest::GameTestError, class SimulatedPlayer*>
    spawnSimulatedPlayer(std::string const& name, class BlockPos const& pos, ::GameType);

    // vIndex: 59, symbol: ?removeSimulatedPlayer@MinecraftGameTestHelper@@UEAAXAEAVSimulatedPlayer@@@Z
    virtual void removeSimulatedPlayer(class SimulatedPlayer&);

    // vIndex: 60, symbol:
    // ?getDimension@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVDimension@@@std@@XZ
    virtual std::variant<struct gametest::GameTestError, class Dimension*> getDimension();

    // vIndex: 61, symbol:
    // ?getBlockSource@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAPEAVBlockSource@@@Z
    virtual std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource*&);

    // vIndex: 62, symbol:
    // ?onPlayerJump@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@H@Z
    virtual std::optional<struct gametest::GameTestError> onPlayerJump(class Mob& mob, int jumpAmount);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_assertEntityInstancePresent@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@AEBVAABB@@AEBVBlockPos@@_N@Z
    MCAPI std::optional<struct gametest::GameTestError>
          _assertEntityInstancePresent(class Actor const* actor, class AABB const&, class BlockPos const&, bool) const;

    // symbol:
    // ?_assertEntityPresent@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVAABB@@AEBVBlockPos@@_N@Z
    MCAPI std::optional<struct gametest::GameTestError> _assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class AABB const&,
        class BlockPos const& pos,
        bool
    ) const;

    // symbol: ?_getBlock@MinecraftGameTestHelper@@AEAAAEBVBlock@@AEBVBlockPos@@@Z
    MCAPI class Block const& _getBlock(class BlockPos const& pos);

    // symbol: ?_getContainer@MinecraftGameTestHelper@@AEAAPEBVContainer@@AEBVBlockPos@@@Z
    MCAPI class Container const* _getContainer(class BlockPos const& pos);

    // symbol: ?_getItemEntityCount@MinecraftGameTestHelper@@AEAAHAEBVItem@@AEBVAABB@@@Z
    MCAPI int _getItemEntityCount(class Item const& item, class AABB const&);

    // symbol:
    // ?_getStructureBlockMissingError@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@XZ
    MCAPI std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;

    // symbol: ?_isEntityPresent@MinecraftGameTestHelper@@AEBA_NAEBUActorDefinitionIdentifier@@AEBVAABB@@@Z
    MCAPI bool _isEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, class AABB const&) const;

    // NOLINTEND
};
