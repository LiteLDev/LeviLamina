/**
 * @file  MinecraftGameTestHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../ScriptModuleMinecraft.hpp"
#include "../../Bedrock.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~MinecraftGameTestHelper();
    /**
     * @hash   766860148
     * @vftbl  1
     * @symbol  ?succeedWhenEntityPresent\@MinecraftGameTestHelper\@\@UEAAXAEBUActorDefinitionIdentifier\@\@HHH_N\@Z
     */
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /**
     * @hash   184936553
     * @vftbl  2
     * @symbol  ?succeedWhenEntityPresent\@MinecraftGameTestHelper\@\@UEAAXAEBUActorDefinitionIdentifier\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /**
     * @hash   -1643919372
     * @vftbl  3
     * @symbol  ?succeedWhenEntityData\@MinecraftGameTestHelper\@\@UEAAXAEBVBlockPos\@\@AEBUActorDefinitionIdentifier\@\@V?$function\@$$A6A_NAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    virtual void succeedWhenEntityData(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /**
     * @hash   805059197
     * @vftbl  4
     * @symbol  ?succeedWhenEntityHasComponent\@MinecraftGameTestHelper\@\@UEAAXAEBUActorDefinitionIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual void succeedWhenEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /**
     * @hash   1448236695
     * @vftbl  5
     * @symbol  ?succeedWhenBlockPresent\@MinecraftGameTestHelper\@\@UEAAXAEBVBlock\@\@HHH_N\@Z
     */
    virtual void succeedWhenBlockPresent(class Block const &, int, int, int, bool);
    /**
     * @hash   1802165148
     * @vftbl  6
     * @symbol  ?succeedWhenBlockPresent\@MinecraftGameTestHelper\@\@UEAAXAEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual void succeedWhenBlockPresent(class Block const &, class BlockPos const &, bool);
    /**
     * @hash   -1414834413
     * @vftbl  7
     * @symbol  ?succeedWhenBlockPresent\@MinecraftGameTestHelper\@\@UEAAXAEBVBlockLegacy\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual void succeedWhenBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /**
     * @hash   308262622
     * @vftbl  8
     * @symbol  ?setNight\@MinecraftGameTestHelper\@\@UEAAXXZ
     */
    virtual void setNight();
    /**
     * @hash   -311899984
     * @vftbl  9
     * @symbol  ?setDayTime\@MinecraftGameTestHelper\@\@UEAAXH\@Z
     */
    virtual void setDayTime(int);
    /**
     * @hash   703147798
     * @vftbl  10
     * @symbol  ?setBlock\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@HHHAEBVBlock\@\@H\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setBlock(int, int, int, class Block const &, int);
    /**
     * @hash   1485437121
     * @vftbl  11
     * @symbol  ?setBlock\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   248774998
     * @vftbl  12
     * @symbol  ?destroyBlock\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> destroyBlock(class BlockPos const &, bool);
    /**
     * @hash   -141100199
     * @vftbl  13
     * @symbol  ?pressButton\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@HHH\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pressButton(int, int, int);
    /**
     * @hash   -1421326172
     * @vftbl  14
     * @symbol  ?pressButton\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pressButton(class BlockPos const &);
    /**
     * @hash   -388991783
     * @vftbl  15
     * @symbol  ?pullLever\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@HHH\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pullLever(int, int, int);
    /**
     * @hash   452654644
     * @vftbl  16
     * @symbol  ?pullLever\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pullLever(class BlockPos const &);
    /**
     * @hash   -1432029771
     * @vftbl  17
     * @symbol  ?killAllEntities\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    virtual class std::optional<struct gametest::GameTestError> killAllEntities();
    /**
     * @hash   -669320122
     * @vftbl  18
     * @symbol  ?spawn\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVActor\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@HHH\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, int, int, int);
    /**
     * @hash   923825425
     * @vftbl  19
     * @symbol  ?spawn\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVActor\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @hash   941032681
     * @vftbl  20
     * @symbol  ?spawn\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVActor\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVVec3\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /**
     * @hash   -2002553101
     * @vftbl  21
     * @symbol  ?spawnItem\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVActor\@\@\@std\@\@AEBVItemStack\@\@AEBVVec3\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnItem(class ItemStack const &, class Vec3 const &);
    /**
     * @hash   282211594
     * @vftbl  22
     * @symbol  ?spawnWithoutBehaviors\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVActor\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @hash   429348066
     * @vftbl  23
     * @symbol  ?spawnWithoutBehaviors\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVActor\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVVec3\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /**
     * @hash   -121299761
     * @vftbl  24
     * @symbol  ?walkTo\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEAVMob\@\@AEBVBlockPos\@\@M\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class BlockPos const &, float);
    /**
     * @hash   -26852649
     * @vftbl  25
     * @symbol  ?walkTo\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class Vec3 const &, float);
    /**
     * @hash   569840050
     * @vftbl  26
     * @symbol  ?setTntFuse\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEAVActor\@\@H\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setTntFuse(class Actor &, int);
    /**
     * @hash   -636515276
     * @vftbl  27
     * @symbol  ?assertEntityPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, bool);
    /**
     * @hash   -1143718347
     * @vftbl  28
     * @symbol  ?assertEntityPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@HHH_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /**
     * @hash   -2139780342
     * @vftbl  29
     * @symbol  ?assertEntityPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /**
     * @hash   626850220
     * @vftbl  30
     * @symbol  ?assertEntityPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVBlockPos\@\@M_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, float, bool);
    /**
     * @hash   323831140
     * @vftbl  31
     * @symbol  ?assertEntityInstancePresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@PEBVActor\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityInstancePresent(class Actor const *, class BlockPos const &, bool);
    /**
     * @hash   -1031228120
     * @vftbl  32
     * @symbol  ?assertEntityTouching\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVVec3\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityTouching(struct ActorDefinitionIdentifier const &, class Vec3 const &, bool);
    /**
     * @hash   744239028
     * @vftbl  33
     * @symbol  ?assertEntityState\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@AEBUActorDefinitionIdentifier\@\@V?$function\@$$A6A_NAEAVActor\@\@\@Z\@3\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityState(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /**
     * @hash   -915340645
     * @vftbl  34
     * @symbol  ?assertBlockPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockLegacy\@\@HHH_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, int, int, int, bool);
    /**
     * @hash   1842645360
     * @vftbl  35
     * @symbol  ?assertBlockPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockLegacy\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /**
     * @hash   -153411788
     * @vftbl  36
     * @symbol  ?assertBlockState\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@3\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockState(class BlockPos const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   -1292309813
     * @vftbl  37
     * @symbol  ?assertItemEntityPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVItem\@\@HHHM_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, int, int, int, float, bool);
    /**
     * @hash   -1316175546
     * @vftbl  38
     * @symbol  ?assertItemEntityPresent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVItem\@\@AEBVBlockPos\@\@M_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, class BlockPos const &, float, bool);
    /**
     * @hash   629477287
     * @vftbl  39
     * @symbol  ?assertItemEntityCountIs\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVItem\@\@AEBVBlockPos\@\@MH\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityCountIs(class Item const &, class BlockPos const &, float, int);
    /**
     * @hash   628274423
     * @vftbl  40
     * @symbol  ?assertContainerEmpty\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const &);
    /**
     * @hash   910543297
     * @vftbl  41
     * @symbol  ?assertContainerContains\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVItemStack\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertContainerContains(class ItemStack const &, class BlockPos const &);
    /**
     * @hash   -1226169032
     * @vftbl  42
     * @symbol  ?assertEntityHasComponent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /**
     * @hash   -779019426
     * @vftbl  43
     * @symbol  ?assertEntityHasArmor\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@W4ArmorSlot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@HAEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityHasArmor(struct ActorDefinitionIdentifier const &, enum class ArmorSlot, std::string const &, int, class BlockPos const &, bool);
    /**
     * @hash   -1212593546
     * @vftbl  44
     * @symbol  ?print\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> print(std::string const &);
    /**
     * @hash   1114310785
     * @vftbl  45
     * @symbol  ?assertRedstonePower\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const &, int);
    /**
     * @hash   228375420
     * @vftbl  46
     * @symbol  ?assertIsWaterlogged\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const &, bool);
    /**
     * @hash   853301027
     * @vftbl  47
     * @symbol  ?pulseRedstone\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const &, int);
    /**
     * @hash   248952913
     * @vftbl  48
     * @symbol  ?getFenceConnectivity\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@VScriptGameTestConnectivity\@ScriptModuleGameTest\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity> getFenceConnectivity(class BlockPos const &);
    /**
     * @hash   1625317385
     * @vftbl  49
     * @symbol  ?worldPosition\@MinecraftGameTestHelper\@\@UEBA?AV?$variant\@UGameTestError\@gametest\@\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const &) const;
    /**
     * @hash   -633283564
     * @vftbl  50
     * @symbol  ?worldPosition\@MinecraftGameTestHelper\@\@UEBA?AV?$variant\@UGameTestError\@gametest\@\@VVec3\@\@\@std\@\@AEBUScriptVec3Interface\@ScriptModuleMinecraft\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Vec3> worldPosition(struct ScriptModuleMinecraft::ScriptVec3Interface const &) const;
    /**
     * @hash   -1056565025
     * @vftbl  51
     * @symbol  ?relativePosition\@MinecraftGameTestHelper\@\@UEBA?AV?$variant\@UGameTestError\@gametest\@\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const &) const;
    /**
     * @hash   1473465066
     * @vftbl  52
     * @symbol  ?relativePosition\@MinecraftGameTestHelper\@\@UEBA?AV?$variant\@UGameTestError\@gametest\@\@VVec3\@\@\@std\@\@AEBUScriptVec3Interface\@ScriptModuleMinecraft\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class Vec3> relativePosition(struct ScriptModuleMinecraft::ScriptVec3Interface const &) const;
    /**
     * @hash   243269535
     * @vftbl  53
     * @symbol  ?setFluidContainer\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const &, int);
    /**
     * @hash   892033154
     * @vftbl  54
     * @symbol  ?triggerInternalBlockEvent\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$vector\@MV?$allocator\@M\@std\@\@\@3\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(class BlockPos const &, std::string const &, std::vector<float> const &);
    /**
     * @hash   969937183
     * @vftbl  55
     * @symbol  ?assertCanReachLocation\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEAVMob\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> assertCanReachLocation(class Mob &, class BlockPos const &, bool);
    /**
     * @hash   1840369155
     * @vftbl  56
     * @symbol  ?spreadFromFaceTowardDirection\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@1\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @hash   780534665
     * @vftbl  57
     * @symbol  ?spawnSimulatedPlayer\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVSimulatedPlayer\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVBlockPos\@\@W4GameType\@\@\@Z
     */
    virtual class std::variant<struct gametest::GameTestError, class SimulatedPlayer *> spawnSimulatedPlayer(std::string const &, class BlockPos const &, enum class GameType);
    /**
     * @hash   -337415962
     * @vftbl  58
     * @symbol  ?removeSimulatedPlayer\@MinecraftGameTestHelper\@\@UEAAXAEAVSimulatedPlayer\@\@\@Z
     */
    virtual void removeSimulatedPlayer(class SimulatedPlayer &);
    /**
     * @hash   865413192
     * @vftbl  59
     * @symbol  ?getDimension\@MinecraftGameTestHelper\@\@UEAA?AV?$variant\@UGameTestError\@gametest\@\@PEAVDimension\@\@\@std\@\@XZ
     */
    virtual class std::variant<struct gametest::GameTestError, class Dimension *> getDimension();
    /**
     * @hash   -77818989
     * @vftbl  60
     * @symbol  ?getBlockSource\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEAPEAVBlockSource\@\@\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource *&);
    /**
     * @hash   662493330
     * @vftbl  61
     * @symbol  ?onPlayerJump\@MinecraftGameTestHelper\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEAVMob\@\@H\@Z
     */
    virtual class std::optional<struct gametest::GameTestError> onPlayerJump(class Mob &, int);
    /**
     * @hash   434481330
     * @symbol  ??0MinecraftGameTestHelper\@\@QEAA\@AEAVMinecraftGameTestInstance\@\@\@Z
     */
    MCAPI MinecraftGameTestHelper(class MinecraftGameTestInstance &);

//private:
    /**
     * @hash   905330696
     * @symbol  ?_assertEntityPresent\@MinecraftGameTestHelper\@\@AEBA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI class std::optional<struct gametest::GameTestError> _assertEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &, class BlockPos const &, bool) const;
    /**
     * @hash   14755149
     * @symbol  ?_getBlock\@MinecraftGameTestHelper\@\@AEAAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const & _getBlock(class BlockPos const &);
    /**
     * @hash   1423141025
     * @symbol  ?_getContainer\@MinecraftGameTestHelper\@\@AEAAPEBVContainer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Container const * _getContainer(class BlockPos const &);
    /**
     * @hash   -1042253961
     * @symbol  ?_getItemEntityCount\@MinecraftGameTestHelper\@\@AEAAHAEBVItem\@\@AEBVAABB\@\@\@Z
     */
    MCAPI int _getItemEntityCount(class Item const &, class AABB const &);
    /**
     * @hash   624409434
     * @symbol  ?_getServerNetworkHandler\@MinecraftGameTestHelper\@\@AEBA?AV?$not_null\@V?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>> _getServerNetworkHandler() const;
    /**
     * @hash   -1272689016
     * @symbol  ?_getStructureBlockMissingError\@MinecraftGameTestHelper\@\@AEBA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;
    /**
     * @hash   -1163798509
     * @symbol  ?_isEntityPresent\@MinecraftGameTestHelper\@\@AEBA_NAEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@\@Z
     */
    MCAPI bool _isEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &) const;

private:

};