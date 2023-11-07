#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/BaseGameTestHelper.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MinecraftGameTestHelper() = default;

    // vIndex: 1, symbol: ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@HHH_N@Z
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const&, int, int, int, bool);

    // vIndex: 2, symbol:
    // ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const&, class BlockPos const&, bool);

    // vIndex: 3, symbol:
    // ?succeedWhenEntityData@MinecraftGameTestHelper@@UEAAXAEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@std@@@Z
    virtual void
    succeedWhenEntityData(class BlockPos const&, struct ActorDefinitionIdentifier const&, std::function<bool(class Actor&)>);

    // vIndex: 4, symbol:
    // ?succeedWhenEntityHasComponent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenEntityHasComponent(
        struct ActorDefinitionIdentifier const&,
        std::string const&,
        class BlockPos const&,
        bool
    );

    // vIndex: 5, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@HHH_N@Z
    virtual void succeedWhenBlockPresent(class Block const&, int, int, int, bool);

    // vIndex: 6, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenBlockPresent(class Block const&, class BlockPos const&, bool);

    // vIndex: 7, symbol: ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlockLegacy@@AEBVBlockPos@@_N@Z
    virtual void succeedWhenBlockPresent(class BlockLegacy const&, class BlockPos const&, bool);

    // vIndex: 8, symbol: ?setNight@MinecraftGameTestHelper@@UEAAXXZ
    virtual void setNight();

    // vIndex: 9, symbol: ?setDayTime@MinecraftGameTestHelper@@UEAAXH@Z
    virtual void setDayTime(int);

    // vIndex: 10, symbol:
    // ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHHAEBVBlock@@H@Z
    virtual std::optional<struct gametest::GameTestError> setBlock(int, int, int, class Block const&, int);

    // vIndex: 11, symbol:
    // ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBVBlock@@H@Z
    virtual std::optional<struct gametest::GameTestError> setBlock(class BlockPos const&, class Block const&, int);

    // vIndex: 12, symbol:
    // ?destroyBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> destroyBlock(class BlockPos const&, bool);

    // vIndex: 13, symbol: ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
    virtual std::optional<struct gametest::GameTestError> pressButton(int, int, int);

    // vIndex: 14, symbol:
    // ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> pressButton(class BlockPos const&);

    // vIndex: 15, symbol: ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
    virtual std::optional<struct gametest::GameTestError> pullLever(int, int, int);

    // vIndex: 16, symbol:
    // ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> pullLever(class BlockPos const&);

    // vIndex: 17, symbol: ?killAllEntities@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@XZ
    virtual std::optional<struct gametest::GameTestError> killAllEntities();

    // vIndex: 18, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@HHH@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const&, int, int, int);

    // vIndex: 19, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const&, class BlockPos const&);

    // vIndex: 20, symbol:
    // ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const&, class Vec3 const&);

    // vIndex: 21, symbol:
    // ?spawnItem@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBVItemStack@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnItem(class ItemStack const&, class Vec3 const&);

    // vIndex: 22, symbol:
    // ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const&, class BlockPos const&);

    // vIndex: 23, symbol:
    // ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const&, class Vec3 const&);

    // vIndex: 24, symbol:
    // ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@M@Z
    virtual std::optional<struct gametest::GameTestError> walkTo(class Mob&, class BlockPos const&, float);

    // vIndex: 25, symbol:
    // ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVVec3@@M@Z
    virtual std::optional<struct gametest::GameTestError> walkTo(class Mob&, class Vec3 const&, float);

    // vIndex: 26, symbol:
    // ?setTntFuse@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVActor@@H@Z
    virtual std::optional<struct gametest::GameTestError> setTntFuse(class Actor&, int);

    // vIndex: 27, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, bool);

    // vIndex: 28, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@HHH_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, int, int, int, bool);

    // vIndex: 29, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, class BlockPos const&, bool);

    // vIndex: 30, symbol:
    // ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@M_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const&, class BlockPos const&, float, bool);

    // vIndex: 31, symbol:
    // ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const*, class BlockPos const&, bool);

    // vIndex: 32, symbol:
    // ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEBA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertEntityInstancePresent(class Actor const*, bool) const;

    // vIndex: 33, symbol:
    // ?assertEntityTouching@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityTouching(struct ActorDefinitionIdentifier const&, class Vec3 const&, bool);

    // vIndex: 34, symbol:
    // ?assertEntityState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityState(class BlockPos const&, struct ActorDefinitionIdentifier const&, std::function<bool(class Actor&)>);

    // vIndex: 35, symbol:
    // ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@HHH_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const&, int, int, int, bool);

    // vIndex: 36, symbol:
    // ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const&, class BlockPos const&, bool);

    // vIndex: 37, symbol:
    // ?assertBlockState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@V?$function@$$A6A_NAEBVBlock@@@Z@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertBlockState(class BlockPos const&, std::function<bool(class Block const&)>);

    // vIndex: 38, symbol:
    // ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@HHHM_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const&, int, int, int, float, bool);

    // vIndex: 39, symbol:
    // ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@M_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const&, class BlockPos const&, float, bool);

    // vIndex: 40, symbol:
    // ?assertItemEntityCountIs@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@MH@Z
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityCountIs(class Item const&, class BlockPos const&, float, int);

    // vIndex: 41, symbol:
    // ?assertContainerEmpty@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const&);

    // vIndex: 42, symbol:
    // ?assertContainerContains@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItemStack@@AEBVBlockPos@@@Z
    virtual std::optional<struct gametest::GameTestError>
    assertContainerContains(class ItemStack const&, class BlockPos const&);

    // vIndex: 43, symbol:
    // ?assertEntityHasComponent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertEntityHasComponent(struct ActorDefinitionIdentifier const&, std::string const&, class BlockPos const&, bool);

    // vIndex: 44, symbol:
    // ?assertEntityHasArmor@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@W4ArmorSlot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@HAEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertEntityHasArmor(
        struct ActorDefinitionIdentifier const&,
        ::ArmorSlot,
        std::string const&,
        int,
        class BlockPos const&,
        bool
    );

    // vIndex: 45, symbol:
    // ?print@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::optional<struct gametest::GameTestError> print(std::string const&);

    // vIndex: 46, symbol:
    // ?assertRedstonePower@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const&, int);

    // vIndex: 47, symbol:
    // ?assertIsWaterlogged@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const&, bool);

    // vIndex: 48, symbol:
    // ?pulseRedstone@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const&, int);

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
    virtual std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const&) const;

    // vIndex: 53, symbol:
    // ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
    virtual std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const&) const;

    // vIndex: 54, symbol:
    // ?setFluidContainer@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
    virtual std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const&, int);

    // vIndex: 55, symbol:
    // ?triggerInternalBlockEvent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@MV?$allocator@M@std@@@3@@Z
    virtual std::optional<struct gametest::GameTestError>
    triggerInternalBlockEvent(class BlockPos const&, std::string const&, std::vector<float> const&);

    // vIndex: 56, symbol:
    // ?assertCanReachLocation@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@_N@Z
    virtual std::optional<struct gametest::GameTestError>
    assertCanReachLocation(class Mob&, class BlockPos const&, bool);

    // vIndex: 57, symbol:
    // ?spreadFromFaceTowardDirection@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@1@Z
    virtual std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class BlockPos const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    );

    // vIndex: 58, symbol:
    // ?spawnSimulatedPlayer@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVSimulatedPlayer@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@W4GameType@@@Z
    virtual std::variant<struct gametest::GameTestError, class SimulatedPlayer*>
    spawnSimulatedPlayer(std::string const&, class BlockPos const&, ::GameType);

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
    virtual std::optional<struct gametest::GameTestError> onPlayerJump(class Mob&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_assertEntityInstancePresent@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@AEBVAABB@@AEBVBlockPos@@_N@Z
    MCAPI std::optional<struct gametest::GameTestError>
          _assertEntityInstancePresent(class Actor const*, class AABB const&, class BlockPos const&, bool) const;

    // symbol:
    // ?_assertEntityPresent@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVAABB@@AEBVBlockPos@@_N@Z
    MCAPI std::optional<struct gametest::GameTestError>
    _assertEntityPresent(struct ActorDefinitionIdentifier const&, class AABB const&, class BlockPos const&, bool) const;

    // symbol: ?_getBlock@MinecraftGameTestHelper@@AEAAAEBVBlock@@AEBVBlockPos@@@Z
    MCAPI class Block const& _getBlock(class BlockPos const&);

    // symbol: ?_getContainer@MinecraftGameTestHelper@@AEAAPEBVContainer@@AEBVBlockPos@@@Z
    MCAPI class Container const* _getContainer(class BlockPos const&);

    // symbol: ?_getItemEntityCount@MinecraftGameTestHelper@@AEAAHAEBVItem@@AEBVAABB@@@Z
    MCAPI int _getItemEntityCount(class Item const&, class AABB const&);

    // symbol:
    // ?_getServerNetworkHandler@MinecraftGameTestHelper@@AEBA?AV?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@XZ
    MCAPI Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> _getServerNetworkHandler() const;

    // symbol:
    // ?_getStructureBlockMissingError@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@XZ
    MCAPI std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;

    // symbol: ?_isEntityPresent@MinecraftGameTestHelper@@AEBA_NAEBUActorDefinitionIdentifier@@AEBVAABB@@@Z
    MCAPI bool _isEntityPresent(struct ActorDefinitionIdentifier const&, class AABB const&) const;

    // NOLINTEND
};
