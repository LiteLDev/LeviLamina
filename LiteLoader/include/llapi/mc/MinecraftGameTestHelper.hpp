/**
 * @file  MC/MinecraftGameTestHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptModuleMinecraft.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftGameTestHelper.
 *
 */
class MinecraftGameTestHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTHELPER
public:
    class MinecraftGameTestHelper& operator=(class MinecraftGameTestHelper const &) = delete;
    MinecraftGameTestHelper(class MinecraftGameTestHelper const &) = delete;
    MinecraftGameTestHelper() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MinecraftGameTestHelper();
    /**
     * @hash   1718403908
     * @vftbl  1
     * @symbol ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@HHH_N@Z
     */
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /**
     * @hash   1136449561
     * @vftbl  2
     * @symbol ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
     */
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /**
     * @hash   -692329484
     * @vftbl  3
     * @symbol ?succeedWhenEntityData@MinecraftGameTestHelper@@UEAAXAEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@std@@@Z
     */
    virtual void succeedWhenEntityData(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /**
     * @hash   1756633709
     * @vftbl  4
     * @symbol ?succeedWhenEntityHasComponent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@_N@Z
     */
    virtual void succeedWhenEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /**
     * @hash   -1895125337
     * @vftbl  5
     * @symbol ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@HHH_N@Z
     */
    virtual void succeedWhenBlockPresent(class Block const &, int, int, int, bool);
    /**
     * @hash   -1541196884
     * @vftbl  6
     * @symbol ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@AEBVBlockPos@@_N@Z
     */
    virtual void succeedWhenBlockPresent(class Block const &, class BlockPos const &, bool);
    /**
     * @hash   -463244525
     * @vftbl  7
     * @symbol ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlockLegacy@@AEBVBlockPos@@_N@Z
     */
    virtual void succeedWhenBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /**
     * @hash   1260175406
     * @vftbl  8
     * @symbol ?setNight@MinecraftGameTestHelper@@UEAAXXZ
     */
    virtual void setNight();
    /**
     * @hash   640043552
     * @vftbl  9
     * @symbol ?setDayTime@MinecraftGameTestHelper@@UEAAXH@Z
     */
    virtual void setDayTime(int);
    /**
     * @hash   1655106710
     * @vftbl  10
     * @symbol ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHHAEBVBlock@@H@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setBlock(int, int, int, class Block const &, int);
    /**
     * @hash   -1857555887
     * @vftbl  11
     * @symbol ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBVBlock@@H@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   1200610902
     * @vftbl  12
     * @symbol ?destroyBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> destroyBlock(class BlockPos const &, bool);
    /**
     * @hash   810935593
     * @vftbl  13
     * @symbol ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pressButton(int, int, int);
    /**
     * @hash   -469275004
     * @vftbl  14
     * @symbol ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pressButton(class BlockPos const &);
    /**
     * @hash   563013257
     * @vftbl  15
     * @symbol ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pullLever(int, int, int);
    /**
     * @hash   1404675060
     * @vftbl  16
     * @symbol ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pullLever(class BlockPos const &);
    /**
     * @hash   -479901723
     * @vftbl  17
     * @symbol ?killAllEntities@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@XZ
     */
    virtual class std::optional<struct gametest::GameTestError> killAllEntities();
    /**
     * @hash   282546534
     * @vftbl  18
     * @symbol ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@HHH@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, int, int, int);
    /**
     * @hash   1875738209
     * @vftbl  19
     * @symbol ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @hash   1892930089
     * @vftbl  20
     * @symbol ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /**
     * @hash   -1050701821
     * @vftbl  21
     * @symbol ?spawnItem@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBVItemStack@@AEBVVec3@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnItem(class ItemStack const &, class Vec3 const &);
    /**
     * @hash   1233847610
     * @vftbl  22
     * @symbol ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @hash   1380968706
     * @vftbl  23
     * @symbol ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /**
     * @hash   830274751
     * @vftbl  24
     * @symbol ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@M@Z
     */
    virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class BlockPos const &, float);
    /**
     * @hash   924721863
     * @vftbl  25
     * @symbol ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVVec3@@M@Z
     */
    virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class Vec3 const &, float);
    /**
     * @hash   1521737458
     * @vftbl  26
     * @symbol ?setTntFuse@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVActor@@H@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setTntFuse(class Actor &, int);
    /**
     * @hash   315428260
     * @vftbl  27
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, bool);
    /**
     * @hash   -191774811
     * @vftbl  28
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@HHH_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /**
     * @hash   -1187836806
     * @vftbl  29
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /**
     * @hash   1578793756
     * @vftbl  30
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@M_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, float, bool);
    /**
     * @hash   1275759300
     * @vftbl  31
     * @symbol ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@AEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityInstancePresent(class Actor const *, class BlockPos const &, bool);
    /**
     * @hash   -79392216
     * @vftbl  32
     * @symbol ?assertEntityTouching@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityTouching(struct ActorDefinitionIdentifier const &, class Vec3 const &, bool);
    /**
     * @hash   1696105684
     * @vftbl  33
     * @symbol ?assertEntityState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@3@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityState(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /**
     * @hash   36479883
     * @vftbl  34
     * @symbol ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@HHH_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, int, int, int, bool);
    /**
     * @hash   -1500547536
     * @vftbl  35
     * @symbol ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@AEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /**
     * @hash   798408740
     * @vftbl  36
     * @symbol ?assertBlockState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@V?$function@$$A6A_NAEBVBlock@@@Z@3@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockState(class BlockPos const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   -340473909
     * @vftbl  37
     * @symbol ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@HHHM_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, int, int, int, float, bool);
    /**
     * @hash   -364339642
     * @vftbl  38
     * @symbol ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@M_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, class BlockPos const &, float, bool);
    /**
     * @hash   1581313191
     * @vftbl  39
     * @symbol ?assertItemEntityCountIs@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@MH@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityCountIs(class Item const &, class BlockPos const &, float, int);
    /**
     * @hash   1580125703
     * @vftbl  40
     * @symbol ?assertContainerEmpty@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const &);
    /**
     * @hash   1862394577
     * @vftbl  41
     * @symbol ?assertContainerContains@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItemStack@@AEBVBlockPos@@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertContainerContains(class ItemStack const &, class BlockPos const &);
    /**
     * @hash   -274240872
     * @vftbl  42
     * @symbol ?assertEntityHasComponent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /**
     * @hash   172831854
     * @vftbl  43
     * @symbol ?assertEntityHasArmor@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@W4ArmorSlot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@HAEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityHasArmor(struct ActorDefinitionIdentifier const &, enum ArmorSlot, std::string const &, int, class BlockPos const &, bool);
    /**
     * @hash   -260573130
     * @vftbl  44
     * @symbol ?print@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> print(std::string const &);
    /**
     * @hash   2066146689
     * @vftbl  45
     * @symbol ?assertRedstonePower@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const &, int);
    /**
     * @hash   1180211324
     * @vftbl  46
     * @symbol ?assertIsWaterlogged@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const &, bool);
    /**
     * @hash   1805290691
     * @vftbl  47
     * @symbol ?pulseRedstone@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const &, int);
    /**
     * @hash   1201050209
     * @vftbl  48
     * @symbol ?getFenceConnectivity@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@VScriptGameTestConnectivity@ScriptModuleGameTest@@@std@@AEBVBlockPos@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity> getFenceConnectivity(class BlockPos const &);
    /**
     * @hash   -1718044647
     * @vftbl  49
     * @symbol ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const &) const;
    /**
     * @hash   414571033
     * @vftbl  50
     * @symbol ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const &) const;
    /**
     * @hash   -104590737
     * @vftbl  51
     * @symbol ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const &) const;
    /**
     * @hash   1080439919
     * @vftbl  52
     * @symbol ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const &) const;
    /**
     * @hash   1195182319
     * @vftbl  53
     * @symbol ?setFluidContainer@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const &, int);
    /**
     * @hash   1843561538
     * @vftbl  54
     * @symbol ?triggerInternalBlockEvent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@MV?$allocator@M@std@@@3@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(class BlockPos const &, std::string const &, std::vector<float> const &);
    /**
     * @hash   1921773087
     * @vftbl  55
     * @symbol ?assertCanReachLocation@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@_N@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertCanReachLocation(class Mob &, class BlockPos const &, bool);
    /**
     * @hash   -1502977501
     * @vftbl  56
     * @symbol ?spreadFromFaceTowardDirection@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@1@Z
     */
    virtual class std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(class BlockPos const &, enum ScriptModuleMinecraft::ScriptFacing, enum ScriptModuleMinecraft::ScriptFacing);
    /**
     * @hash   1732247561
     * @vftbl  57
     * @symbol ?spawnSimulatedPlayer@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVSimulatedPlayer@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@W4GameType@@@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class SimulatedPlayer *> spawnSimulatedPlayer(std::string const &, class BlockPos const &, enum GameType);
    /**
     * @hash   614558326
     * @vftbl  58
     * @symbol ?removeSimulatedPlayer@MinecraftGameTestHelper@@UEAAXAEAVSimulatedPlayer@@@Z
     */
    virtual void removeSimulatedPlayer(class SimulatedPlayer &);
    /**
     * @hash   1817525864
     * @vftbl  59
     * @symbol ?getDimension@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVDimension@@@std@@XZ
     */
    virtual class std::variant<struct gametest::GameTestError, class Dimension *> getDimension();
    /**
     * @hash   874001539
     * @vftbl  60
     * @symbol ?getBlockSource@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAPEAVBlockSource@@@Z
     */
    virtual class std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource *&);
    /**
     * @hash   1386717010
     * @symbol ??0MinecraftGameTestHelper@@QEAA@AEAVMinecraftGameTestInstance@@@Z
     */
    MCAPI MinecraftGameTestHelper(class MinecraftGameTestInstance &);

//private:
    /**
     * @hash   1857474120
     * @symbol ?_assertEntityPresent@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVAABB@@AEBVBlockPos@@_N@Z
     */
    MCAPI class std::optional<struct gametest::GameTestError> _assertEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &, class BlockPos const &, bool) const;
    /**
     * @hash   -1919959615
     * @symbol ?_getContainer@MinecraftGameTestHelper@@AEAAPEBVContainer@@AEBVBlockPos@@@Z
     */
    MCAPI class Container const * _getContainer(class BlockPos const &);
    /**
     * @hash   -90402681
     * @symbol ?_getItemEntityCount@MinecraftGameTestHelper@@AEAAHAEBVItem@@AEBVAABB@@@Z
     */
    MCAPI int _getItemEntityCount(class Item const &, class AABB const &);
    /**
     * @hash   1576245338
     * @symbol ?_getServerNetworkHandler@MinecraftGameTestHelper@@AEBA?AV?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>> _getServerNetworkHandler() const;
    /**
     * @hash   -320837736
     * @symbol ?_getStructureBlockMissingError@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@XZ
     */
    MCAPI class std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;
    /**
     * @hash   -212008733
     * @symbol ?_isEntityPresent@MinecraftGameTestHelper@@AEBA_NAEBUActorDefinitionIdentifier@@AEBVAABB@@@Z
     */
    MCAPI bool _isEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &) const;

private:

};