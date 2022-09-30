/**
 * @file  ServerPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Player.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Player.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayer.
 *
 */
class ServerPlayer : public Player {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYER
public:
    class ServerPlayer& operator=(class ServerPlayer const &) = delete;
    ServerPlayer(class ServerPlayer const &) = delete;
    ServerPlayer() = delete;
#endif

public:
    /**
     * @hash   2125779612
     * @vftbl  10
     * @symbol ?initializeComponents@ServerPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -815344342
     * @vftbl  12
     * @symbol ?_serverInitItemStackIds@ServerPlayer@@EEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~ServerPlayer();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -1240436025
     * @vftbl  48
     * @symbol ?normalTick@ServerPlayer@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   -1226875046
     * @vftbl  114
     * @symbol ?isValidTarget@ServerPlayer@@UEBA_NPEAVActor@@@Z
     */
    virtual bool isValidTarget(class Actor *) const;
    /**
     * @hash   -135887518
     * @vftbl  141
     * @symbol ?handleEntityEvent@ServerPlayer@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   -1809709705
     * @vftbl  152
     * @symbol ?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @hash   580578567
     * @vftbl  162
     * @symbol ?setOffhandSlot@ServerPlayer@@UEAAXAEBVItemStack@@@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @hash   1935215111
     * @vftbl  167
     * @symbol ?load@ServerPlayer@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1980012713
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@ServerPlayer@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   1884325991
     * @vftbl  182
     * @symbol ?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @hash   -2031120653
     * @vftbl  183
     * @symbol ?getControllingPlayer@ServerPlayer@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   213866991
     * @vftbl  184
     * @symbol ?checkFallDamage@ServerPlayer@@UEAAXM_N@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @hash   258875103
     * @vftbl  186
     * @symbol ?handleFallDistanceOnServer@ServerPlayer@@UEAAXMM_N@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   1732417130
     * @vftbl  213
     * @symbol ?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
     */
    virtual void onEffectAdded(class MobEffectInstance &);
    /**
     * @hash   1431026143
     * @vftbl  214
     * @symbol ?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance &);
    /**
     * @hash   -867975174
     * @vftbl  215
     * @symbol ?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance &);
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   -763565257
     * @vftbl  253
     * @symbol ?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1267809800
     * @vftbl  286
     * @symbol ?knockback@ServerPlayer@@UEAAXPEAVActor@@HMMMMM@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @hash   399788151
     * @vftbl  300
     * @symbol ?aiStep@ServerPlayer@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @hash   138883112
     * @vftbl  325
     * @symbol ?hurtArmorSlots@ServerPlayer@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /**
     * @hash   -1421081818
     * @vftbl  326
     * @symbol ?setDamagedArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @hash   -1623427028
     * @vftbl  327
     * @symbol ?sendArmorDamage@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>);
    /**
     * @hash   1307071771
     * @vftbl  328
     * @symbol ?sendArmor@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
     */
    virtual void sendArmor(class std::bitset<4>);
    /**
     * @hash   1877498696
     * @vftbl  338
     * @symbol ?clearVanishEnchantedItemsOnDeath@ServerPlayer@@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   -41441227
     * @vftbl  339
     * @symbol ?sendInventory@ServerPlayer@@UEAAX_N@Z
     */
    virtual void sendInventory(bool);
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -1516690778
     * @vftbl  367
     * @symbol ?prepareRegion@ServerPlayer@@UEAAXAEAVChunkSource@@@Z
     */
    virtual void prepareRegion(class ChunkSource &);
    /**
     * @hash   -370880511
     * @vftbl  368
     * @symbol ?destroyRegion@ServerPlayer@@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @hash   -1548317889
     * @vftbl  373
     * @symbol ?changeDimensionWithCredits@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @hash   1318321689
     * @vftbl  374
     * @symbol ?tickWorld@ServerPlayer@@UEAAXAEBUTick@@@Z
     */
    virtual void tickWorld(struct Tick const &);
    /**
     * @vftbl  375
     * @symbol __unk_vfn_375
     */
    virtual void __unk_vfn_375();
    /**
     * @hash   -1457405767
     * @vftbl  377
     * @symbol ?moveView@ServerPlayer@@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @hash   -213329696
     * @vftbl  378
     * @symbol ?moveSpawnView@ServerPlayer@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
     */
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   -1485278233
     * @vftbl  381
     * @symbol ?checkMovementStats@ServerPlayer@@UEAAXAEBVVec3@@@Z
     */
    virtual void checkMovementStats(class Vec3 const &);
    /**
     * @vftbl  382
     * @symbol __unk_vfn_382
     */
    virtual void __unk_vfn_382();
    /**
     * @vftbl  383
     * @symbol __unk_vfn_383
     */
    virtual void __unk_vfn_383();
    /**
     * @vftbl  384
     * @symbol ?respawn@ServerPlayer@@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl  385
     * @symbol __unk_vfn_385
     */
    virtual void __unk_vfn_385();
    /**
     * @vftbl  386
     * @symbol __unk_vfn_386
     */
    virtual void __unk_vfn_386();
    /**
     * @vftbl  391
     * @symbol __unk_vfn_391
     */
    virtual void __unk_vfn_391();
    /**
     * @vftbl  392
     * @symbol __unk_vfn_392
     */
    virtual void __unk_vfn_392();
    /**
     * @hash   1643525739
     * @vftbl  393
     * @symbol ?openTrading@ServerPlayer@@UEAAXAEBUActorUniqueID@@_N@Z
     */
    virtual void openTrading(struct ActorUniqueID const &, bool);
    /**
     * @vftbl  395
     * @symbol __unk_vfn_395
     */
    virtual void __unk_vfn_395();
    /**
     * @hash   1771281081
     * @vftbl  396
     * @symbol ?openNpcInteractScreen@ServerPlayer@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /**
     * @hash   926285317
     * @vftbl  397
     * @symbol ?openInventory@ServerPlayer@@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl  398
     * @symbol __unk_vfn_398
     */
    virtual void __unk_vfn_398();
    /**
     * @vftbl  399
     * @symbol __unk_vfn_399
     */
    virtual void __unk_vfn_399();
    /**
     * @hash   1103079943
     * @vftbl  400
     * @symbol ?displayTextObjectMessage@ServerPlayer@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /**
     * @hash   1553121463
     * @vftbl  401
     * @symbol ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @hash   -1119744570
     * @vftbl  402
     * @symbol ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   2053175610
     * @vftbl  403
     * @symbol ?displayWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   326123362
     * @vftbl  405
     * @symbol ?stopSleepInBed@ServerPlayer@@UEAAX_N0@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @vftbl  409
     * @symbol __unk_vfn_409
     */
    virtual void __unk_vfn_409();
    /**
     * @vftbl  410
     * @symbol __unk_vfn_410
     */
    virtual void __unk_vfn_410();
    /**
     * @hash   -548328027
     * @vftbl  411
     * @symbol ?isHostingPlayer@ServerPlayer@@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @hash   -44840330
     * @vftbl  412
     * @symbol ?isLoading@ServerPlayer@@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @hash   1572298909
     * @vftbl  413
     * @symbol ?isPlayerInitialized@ServerPlayer@@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl  414
     * @symbol __unk_vfn_414
     */
    virtual void __unk_vfn_414();
    /**
     * @hash   1850604150
     * @vftbl  417
     * @symbol ?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @vftbl  421
     * @symbol __unk_vfn_421
     */
    virtual void __unk_vfn_421();
    /**
     * @hash   285720251
     * @vftbl  425
     * @symbol ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
     */
    virtual void setContainerData(class IContainerManager &, int, int);
    /**
     * @hash   -397175990
     * @vftbl  426
     * @symbol ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
     */
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /**
     * @hash   67100430
     * @vftbl  428
     * @symbol ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
     */
    virtual void refreshContainer(class IContainerManager &);
    /**
     * @hash   -1724203945
     * @vftbl  431
     * @symbol ?isActorRelevant@ServerPlayer@@UEAA_NAEBVActor@@@Z
     */
    virtual bool isActorRelevant(class Actor const &);
    /**
     * @hash   -580670020
     * @vftbl  432
     * @symbol ?isTeacher@ServerPlayer@@UEBA_NXZ
     */
    virtual bool isTeacher() const;
    /**
     * @hash   10090207
     * @vftbl  433
     * @symbol ?onSuspension@ServerPlayer@@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @hash   392089786
     * @vftbl  434
     * @symbol ?onLinkedSlotsChanged@ServerPlayer@@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @hash   -1962757935
     * @vftbl  440
     * @symbol ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const;
    /**
     * @hash   183424857
     * @vftbl  441
     * @symbol ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /**
     * @hash   1113766970
     * @vftbl  442
     * @symbol ?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z
     */
    virtual void sendNetworkPacket(class Packet &) const;
    /**
     * @hash   -362910925
     * @vftbl  443
     * @symbol ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
     */
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator();
    /**
     * @hash   1605414451
     * @vftbl  444
     * @symbol ?tryGetMoveInputHandler@ServerPlayer@@UEBAPEAVMoveInputHandler@@XZ
     */
    virtual class MoveInputHandler * tryGetMoveInputHandler() const;
    /**
     * @hash   1803831868
     * @vftbl  445
     * @symbol ?getInputMode@ServerPlayer@@UEBA?AW4InputMode@@XZ
     */
    virtual enum class InputMode getInputMode() const;
    /**
     * @hash   1587696071
     * @vftbl  446
     * @symbol ?getPlayMode@ServerPlayer@@UEBA?AW4ClientPlayMode@@XZ
     */
    virtual enum class ClientPlayMode getPlayMode() const;
    /**
     * @hash   -494440676
     * @vftbl  447
     * @symbol ?reportMovementTelemetry@ServerPlayer@@UEAAXW4MovementEventType@@@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl  448
     * @symbol __unk_vfn_448
     */
    virtual void __unk_vfn_448();
    /**
     * @hash   -953880592
     * @vftbl  451
     * @symbol ?addSavedChunk@ServerPlayer@@UEAAXAEBVChunkPos@@@Z
     */
    virtual void addSavedChunk(class ChunkPos const &);
    /**
     * @hash   -581903486
     * @vftbl  454
     * @symbol ?_getSpawnChunkLimit@ServerPlayer@@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @hash   -611302744
     * @vftbl  455
     * @symbol ?_updateChunkPublisherView@ServerPlayer@@MEAAXAEBVVec3@@M@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    /**
     * @hash   -1280134351
     * @symbol ?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z
     */
    MCVAPI void frameUpdate(class FrameUpdateContextBase &);
    /**
     * @hash   436291937
     * @symbol ?openPortfolio@ServerPlayer@@UEAAXXZ
     */
    MCVAPI void openPortfolio();
#endif
    /**
     * @hash   784794884
     * @symbol ??0ServerPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVNetworkHandler@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@9V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
     */
    MCAPI ServerPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @symbol ?addActorToReplicationList@ServerPlayer@@QEAAXV?$not_null@PEAVActor@@@gsl@@_N@Z
     */
    MCAPI void addActorToReplicationList(class gsl::not_null<class Actor *>, bool);
    /**
     * @hash   2139517204
     * @symbol ?checkCheating@ServerPlayer@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void checkCheating(class Vec3 const &);
    /**
     * @hash   -246454699
     * @symbol ?disconnect@ServerPlayer@@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @hash   -1501282958
     * @symbol ?doDeleteContainerManager@ServerPlayer@@QEAAX_N@Z
     */
    MCAPI void doDeleteContainerManager(bool);
    /**
     * @hash   2043184277
     * @symbol ?doInitialSpawn@ServerPlayer@@QEAAXXZ
     */
    MCAPI void doInitialSpawn();
    /**
     * @hash   -667395256
     * @symbol ?getItemStackNetManagerServer@ServerPlayer@@QEAAAEAVItemStackNetManagerServer@@XZ
     */
    MCAPI class ItemStackNetManagerServer & getItemStackNetManagerServer();
    /**
     * @hash   912917309
     * @symbol ?getServerMoveInputHandler@ServerPlayer@@QEAAPEAVServerMoveInputHandler@@XZ
     */
    MCAPI class ServerMoveInputHandler * getServerMoveInputHandler();
    /**
     * @hash   -457806244
     * @symbol ?handleActorPickRequestOnServer@ServerPlayer@@QEAAXAEAVActor@@_N1@Z
     */
    MCAPI void handleActorPickRequestOnServer(class Actor &, bool, bool);
    /**
     * @hash   -1160589631
     * @symbol ?handleBlockPickRequestOnServer@ServerPlayer@@QEAAXAEBVBlockPos@@_N@Z
     */
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const &, bool);
    /**
     * @hash   -720631516
     * @symbol ?openUnmanagedContainer@ServerPlayer@@QEAA?AW4ContainerID@@XZ
     */
    MCAPI enum class ContainerID openUnmanagedContainer();
    /**
     * @hash   1842942042
     * @symbol ?postLoad@ServerPlayer@@QEAAX_N@Z
     */
    MCAPI void postLoad(bool);
    /**
     * @symbol ?postReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
     */
    MCAPI void postReplicationTick(struct Tick const &);
    /**
     * @symbol ?preReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
     */
    MCAPI void preReplicationTick(struct Tick const &);
    /**
     * @hash   535071894
     * @symbol ?selectItem@ServerPlayer@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void selectItem(class ItemStack const &);
    /**
     * @hash   329494133
     * @symbol ?sendMobEffectPackets@ServerPlayer@@QEAAXXZ
     */
    MCAPI void sendMobEffectPackets();
    /**
     * @symbol ?sendPlayerOnGround@ServerPlayer@@QEAAXXZ
     */
    MCAPI void sendPlayerOnGround();
    /**
     * @hash   15188064
     * @symbol ?setClientChunkRadius@ServerPlayer@@QEAAXI@Z
     */
    MCAPI void setClientChunkRadius(unsigned int);
    /**
     * @hash   1617323612
     * @symbol ?setInputMode@ServerPlayer@@QEAAXAEBW4InputMode@@@Z
     */
    MCAPI void setInputMode(enum class InputMode const &);
    /**
     * @hash   776489123
     * @symbol ?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ
     */
    MCAPI void setLocalPlayerAsInitialized();
    /**
     * @hash   892290468
     * @symbol ?setPlayMode@ServerPlayer@@QEAAXAEBW4ClientPlayMode@@@Z
     */
    MCAPI void setPlayMode(enum class ClientPlayMode const &);
    /**
     * @hash   -919806248
     * @symbol ?setPlayerInput@ServerPlayer@@QEAAXMM_N0@Z
     */
    MCAPI void setPlayerInput(float, float, bool, bool);
    /**
     * @hash   -2029473206
     * @symbol ?setSyncTimeIfClientServerPositionMatches@ServerPlayer@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setSyncTimeIfClientServerPositionMatches(class Vec3 const &);
    /**
     * @hash   -978336683
     * @symbol ?triggerRespawnFromCompletingTheEnd@ServerPlayer@@QEAAXXZ
     */
    MCAPI void triggerRespawnFromCompletingTheEnd();
    /**
     * @hash   114814728
     * @symbol ?tryGetFromEntity@ServerPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class ServerPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @hash   -653478521
     * @symbol ?_checkForLoadedTickingAreas@ServerPlayer@@AEBA_NXZ
     */
    MCAPI bool _checkForLoadedTickingAreas() const;
    /**
     * @hash   -1471733492
     * @symbol ?_logCDEvent@ServerPlayer@@AEAAXW4CrashDumpLogStringID@@000@Z
     */
    MCAPI void _logCDEvent(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID);
    /**
     * @hash   -557103415
     * @symbol ?_nextContainerCounter@ServerPlayer@@AEAA?AW4ContainerID@@XZ
     */
    MCAPI enum class ContainerID _nextContainerCounter();
    /**
     * @hash   -1242633061
     * @symbol ?_removeNearbyEntities@ServerPlayer@@AEAAXXZ
     */
    MCAPI void _removeNearbyEntities();
    /**
     * @hash   -780103806
     * @symbol ?_scanForNearbyActors@ServerPlayer@@AEAAXXZ
     */
    MCAPI void _scanForNearbyActors();
    /**
     * @hash   2073611990
     * @symbol ?_setContainerManager@ServerPlayer@@AEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z
     */
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    /**
     * @hash   -1451666963
     * @symbol ?_updateNearbyActors@ServerPlayer@@AEAAXXZ
     */
    MCAPI void _updateNearbyActors();

private:

};