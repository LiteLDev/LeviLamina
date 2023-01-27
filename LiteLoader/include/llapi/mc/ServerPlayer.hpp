/**
 * @file  ServerPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../Bedrock.hpp"
#include "../../Editor.hpp"
#include "../../Player.hpp"

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
     * @hash   1439810124
     * @vftbl  12
     * @symbol  ?initializeComponents\@ServerPlayer\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -1502774550
     * @vftbl  14
     * @symbol  ?_serverInitItemStackIds\@ServerPlayer\@\@EEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~ServerPlayer();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -1925959609
     * @vftbl  49
     * @symbol  ?normalTick\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -1912460134
     * @vftbl  116
     * @symbol  ?isValidTarget\@ServerPlayer\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool isValidTarget(class Actor *) const;
    /**
     * @hash   -821903134
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@ServerPlayer\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   1803485751
     * @vftbl  151
     * @symbol  ?setArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @hash   -101285529
     * @vftbl  161
     * @symbol  ?setOffhandSlot\@ServerPlayer\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @hash   1249630023
     * @vftbl  166
     * @symbol  ?load\@ServerPlayer\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1627816519
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   1197187927
     * @vftbl  180
     * @symbol  ?changeDimension\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @hash   1577477379
     * @vftbl  181
     * @symbol  ?getControllingPlayer\@ServerPlayer\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   -473055809
     * @vftbl  182
     * @symbol  ?checkFallDamage\@ServerPlayer\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @hash   -427125137
     * @vftbl  184
     * @symbol  ?handleFallDistanceOnServer\@ServerPlayer\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   1047277946
     * @vftbl  210
     * @symbol  ?onEffectAdded\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance &);
    /**
     * @hash   745902335
     * @vftbl  211
     * @symbol  ?onEffectUpdated\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance &);
    /**
     * @hash   -1553114358
     * @vftbl  212
     * @symbol  ?onEffectRemoved\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance &);
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   -1450334297
     * @vftbl  246
     * @symbol  ?die\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -1953394888
     * @vftbl  278
     * @symbol  ?knockback\@ServerPlayer\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -287349913
     * @vftbl  291
     * @symbol  ?aiStep\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   -547117128
     * @vftbl  316
     * @symbol  ?hurtArmorSlots\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /**
     * @hash   -2102976666
     * @vftbl  317
     * @symbol  ?setDamagedArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @hash   1989430156
     * @vftbl  318
     * @symbol  ?sendArmorDamage\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>);
    /**
     * @hash   624930907
     * @vftbl  319
     * @symbol  ?sendArmor\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmor(class std::bitset<4>);
    /**
     * @hash   1190606648
     * @vftbl  329
     * @symbol  ?clearVanishEnchantedItemsOnDeath\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   -723336075
     * @vftbl  330
     * @symbol  ?sendInventory\@ServerPlayer\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool);
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   2095597494
     * @vftbl  356
     * @symbol  ?prepareRegion\@ServerPlayer\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource &);
    /**
     * @hash   -1057649551
     * @vftbl  357
     * @symbol  ?destroyRegion\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @hash   2059511343
     * @vftbl  362
     * @symbol  ?changeDimensionWithCredits\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @hash   636611353
     * @vftbl  363
     * @symbol  ?tickWorld\@ServerPlayer\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const &);
    /**
     * @vftbl  364
     * @symbol  __unk_vfn_364
     */
    virtual void __unk_vfn_364();
    /**
     * @hash   -2142990855
     * @vftbl  366
     * @symbol  ?moveView\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @hash   -898914784
     * @vftbl  367
     * @symbol  ?moveSpawnView\@ServerPlayer\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   2122797015
     * @vftbl  370
     * @symbol  ?checkMovementStats\@ServerPlayer\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const &);
    /**
     * @vftbl  371
     * @symbol  __unk_vfn_371
     */
    virtual void __unk_vfn_371();
    /**
     * @vftbl  372
     * @symbol  __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @hash   -1025862357
     * @vftbl  373
     * @symbol  ?respawn\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl  374
     * @symbol  __unk_vfn_374
     */
    virtual void __unk_vfn_374();
    /**
     * @vftbl  375
     * @symbol  __unk_vfn_375
     */
    virtual void __unk_vfn_375();
    /**
     * @vftbl  380
     * @symbol  __unk_vfn_380
     */
    virtual void __unk_vfn_380();
    /**
     * @vftbl  381
     * @symbol  __unk_vfn_381
     */
    virtual void __unk_vfn_381();
    /**
     * @hash   958463435
     * @vftbl  382
     * @symbol  ?openTrading\@ServerPlayer\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const &, bool);
    /**
     * @vftbl  384
     * @symbol  __unk_vfn_384
     */
    virtual void __unk_vfn_384();
    /**
     * @hash   1086203401
     * @vftbl  385
     * @symbol  ?openNpcInteractScreen\@ServerPlayer\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /**
     * @hash   241176885
     * @vftbl  386
     * @symbol  ?openInventory\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl  387
     * @symbol  __unk_vfn_387
     */
    virtual void __unk_vfn_387();
    /**
     * @vftbl  388
     * @symbol  __unk_vfn_388
     */
    virtual void __unk_vfn_388();
    /**
     * @hash   416372407
     * @vftbl  389
     * @symbol  ?displayTextObjectMessage\@ServerPlayer\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /**
     * @hash   866460055
     * @vftbl  390
     * @symbol  ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @hash   -1806421354
     * @vftbl  391
     * @symbol  ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1366529578
     * @vftbl  392
     * @symbol  ?displayWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -355602350
     * @vftbl  394
     * @symbol  ?stopSleepInBed\@ServerPlayer\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @vftbl  398
     * @symbol  __unk_vfn_398
     */
    virtual void __unk_vfn_398();
    /**
     * @vftbl  399
     * @symbol  __unk_vfn_399
     */
    virtual void __unk_vfn_399();
    /**
     * @hash   -1233913115
     * @vftbl  400
     * @symbol  ?isHostingPlayer\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @hash   -730425418
     * @vftbl  401
     * @symbol  ?isLoading\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @hash   886713821
     * @vftbl  402
     * @symbol  ?isPlayerInitialized\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl  403
     * @symbol  __unk_vfn_403
     */
    virtual void __unk_vfn_403();
    /**
     * @hash   1168770806
     * @vftbl  406
     * @symbol  ?setPlayerGameType\@ServerPlayer\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @vftbl  410
     * @symbol  __unk_vfn_410
     */
    virtual void __unk_vfn_410();
    /**
     * @hash   -396189973
     * @vftbl  414
     * @symbol  ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager &, int, int);
    /**
     * @hash   -1078947830
     * @vftbl  415
     * @symbol  ?slotChanged\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@AEAVContainer\@\@HAEBVItemStack\@\@2_N\@Z
     */
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /**
     * @hash   -615563218
     * @vftbl  417
     * @symbol  ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager &);
    /**
     * @hash   1885178263
     * @vftbl  419
     * @symbol  ?isActorRelevant\@ServerPlayer\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const &);
    /**
     * @hash   -1266255108
     * @vftbl  420
     * @symbol  ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const;
    /**
     * @hash   -675018225
     * @vftbl  421
     * @symbol  ?onSuspension\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @hash   -293034022
     * @vftbl  422
     * @symbol  ?onLinkedSlotsChanged\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @hash   1650376017
     * @vftbl  428
     * @symbol  ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const;
    /**
     * @hash   -498639127
     * @vftbl  429
     * @symbol  ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /**
     * @hash   431933626
     * @vftbl  430
     * @symbol  ?sendNetworkPacket\@ServerPlayer\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet &) const;
    /**
     * @hash   -1049095677
     * @vftbl  431
     * @symbol  ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator();
    /**
     * @hash   922151139
     * @vftbl  432
     * @symbol  ?tryGetMoveInputHandler\@ServerPlayer\@\@UEBAPEAVMoveInputHandler\@\@XZ
     */
    virtual class MoveInputHandler * tryGetMoveInputHandler() const;
    /**
     * @hash   1117647116
     * @vftbl  433
     * @symbol  ?getInputMode\@ServerPlayer\@\@UEBA?AW4InputMode\@\@XZ
     */
    virtual enum class InputMode getInputMode() const;
    /**
     * @hash   901511319
     * @vftbl  434
     * @symbol  ?getPlayMode\@ServerPlayer\@\@UEBA?AW4ClientPlayMode\@\@XZ
     */
    virtual enum class ClientPlayMode getPlayMode() const;
    /**
     * @hash   -1177088948
     * @vftbl  435
     * @symbol  ?reportMovementTelemetry\@ServerPlayer\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl  436
     * @symbol  __unk_vfn_436
     */
    virtual void __unk_vfn_436();
    /**
     * @vftbl  439
     * @symbol  __unk_vfn_439
     */
    virtual void __unk_vfn_439();
    /**
     * @hash   -476000128
     * @vftbl  443
     * @symbol  ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;
    /**
     * @hash   -434480517
     * @vftbl  444
     * @symbol  ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer();
    /**
     * @hash   -1269349070
     * @vftbl  445
     * @symbol  ?_getSpawnChunkLimit\@ServerPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @hash   -1298656072
     * @vftbl  446
     * @symbol  ?_updateChunkPublisherView\@ServerPlayer\@\@MEAAXAEBVVec3\@\@M\@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    /**
     * @hash   -1188247375
     * @symbol  ?frameUpdate\@ServerPlayer\@\@UEAAXAEAVFrameUpdateContextBase\@\@\@Z
     */
    MCVAPI void frameUpdate(class FrameUpdateContextBase &);
    /**
     * @hash   528178913
     * @symbol  ?openPortfolio\@ServerPlayer\@\@UEAAXXZ
     */
    MCVAPI void openPortfolio();
#endif
    /**
     * @hash   97441556
     * @symbol  ??0ServerPlayer\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@AEAVNetworkHandler\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@V?$function\@$$A6AXAEAVServerPlayer\@\@\@Z\@std\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@9V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@H_NAEAVEntityContext\@\@\@Z
     */
    MCAPI ServerPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @hash   -1100173012
     * @symbol  ?addActorToReplicationList\@ServerPlayer\@\@QEAAXV?$not_null\@PEAVActor\@\@\@gsl\@\@_N\@Z
     */
    MCAPI void addActorToReplicationList(class gsl::not_null<class Actor *>, bool);
    /**
     * @hash   1452532900
     * @symbol  ?checkCheating\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void checkCheating(class Vec3 const &);
    /**
     * @hash   -933192987
     * @symbol  ?disconnect\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @hash   2107038306
     * @symbol  ?doDeleteContainerManager\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void doDeleteContainerManager(bool);
    /**
     * @hash   1356568997
     * @symbol  ?doInitialSpawn\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void doInitialSpawn();
    /**
     * @hash   -1353580008
     * @symbol  ?getItemStackNetManagerServer\@ServerPlayer\@\@QEAAAEAVItemStackNetManagerServer\@\@XZ
     */
    MCAPI class ItemStackNetManagerServer & getItemStackNetManagerServer();
    /**
     * @hash   226747933
     * @symbol  ?getServerMoveInputHandler\@ServerPlayer\@\@QEAAPEAVServerMoveInputHandler\@\@XZ
     */
    MCAPI class ServerMoveInputHandler * getServerMoveInputHandler();
    /**
     * @hash   -1143975620
     * @symbol  ?handleActorPickRequestOnServer\@ServerPlayer\@\@QEAAXAEAVActor\@\@_N1\@Z
     */
    MCAPI void handleActorPickRequestOnServer(class Actor &, bool, bool);
    /**
     * @hash   -1846666751
     * @symbol  ?handleBlockPickRequestOnServer\@ServerPlayer\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const &, bool);
    /**
     * @hash   -1405647692
     * @symbol  ?openUnmanagedContainer\@ServerPlayer\@\@QEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID openUnmanagedContainer();
    /**
     * @hash   1157925866
     * @symbol  ?postLoad\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void postLoad(bool);
    /**
     * @hash   899957186
     * @symbol  ?postReplicationTick\@ServerPlayer\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void postReplicationTick(struct Tick const &);
    /**
     * @hash   -860606694
     * @symbol  ?preReplicationTick\@ServerPlayer\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void preReplicationTick(struct Tick const &);
    /**
     * @hash   -147084346
     * @symbol  ?selectItem\@ServerPlayer\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void selectItem(class ItemStack const &);
    /**
     * @hash   -352339211
     * @symbol  ?sendMobEffectPackets\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendMobEffectPackets();
    /**
     * @hash   -1457876235
     * @symbol  ?sendPlayerOnGround\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendPlayerOnGround();
    /**
     * @hash   -666737536
     * @symbol  ?setClientChunkRadius\@ServerPlayer\@\@QEAAXI\@Z
     */
    MCAPI void setClientChunkRadius(unsigned int);
    /**
     * @hash   935459516
     * @symbol  ?setInputMode\@ServerPlayer\@\@QEAAXAEBW4InputMode\@\@\@Z
     */
    MCAPI void setInputMode(enum class InputMode const &);
    /**
     * @hash   94625027
     * @symbol  ?setLocalPlayerAsInitialized\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void setLocalPlayerAsInitialized();
    /**
     * @hash   210457124
     * @symbol  ?setPlayMode\@ServerPlayer\@\@QEAAXAEBW4ClientPlayMode\@\@\@Z
     */
    MCAPI void setPlayMode(enum class ClientPlayMode const &);
    /**
     * @hash   -1601624216
     * @symbol  ?setPlayerInput\@ServerPlayer\@\@QEAAXMM_N0\@Z
     */
    MCAPI void setPlayerInput(float, float, bool, bool);
    /**
     * @hash   1583691498
     * @symbol  ?setSyncTimeIfClientServerPositionMatches\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setSyncTimeIfClientServerPositionMatches(class Vec3 const &);
    /**
     * @hash   -1661599995
     * @symbol  ?triggerRespawnFromCompletingTheEnd\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void triggerRespawnFromCompletingTheEnd();
    /**
     * @hash   -568448584
     * @symbol  ?tryGetFromEntity\@ServerPlayer\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ServerPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @hash   2135803596
     * @symbol  ?_logCDEvent\@ServerPlayer\@\@AEAAXW4CrashDumpLogStringID\@\@000\@Z
     */
    MCAPI void _logCDEvent(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID);
    /**
     * @hash   -1244533623
     * @symbol  ?_nextContainerCounter\@ServerPlayer\@\@AEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID _nextContainerCounter();
    /**
     * @hash   -1930063269
     * @symbol  ?_removeNearbyEntities\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _removeNearbyEntities();
    /**
     * @hash   -1467534014
     * @symbol  ?_scanForNearbyActors\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _scanForNearbyActors();
    /**
     * @hash   1386212534
     * @symbol  ?_setContainerManager\@ServerPlayer\@\@AEAAXV?$shared_ptr\@VIContainerManager\@\@\@std\@\@\@Z
     */
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    /**
     * @hash   -2139020291
     * @symbol  ?_updateNearbyActors\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _updateNearbyActors();

private:

};