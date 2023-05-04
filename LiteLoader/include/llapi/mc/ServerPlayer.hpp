/**
 * @file  ServerPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Bedrock.hpp"
#include "Editor.hpp"
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
     * @vftbl 12
     * @symbol ?initializeComponents\@ServerPlayer\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 14
     * @symbol ?_serverInitItemStackIds\@ServerPlayer\@\@EEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 49
     * @symbol ?normalTick\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 115
     * @symbol ?isValidTarget\@ServerPlayer\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool isValidTarget(class Actor *) const;
    /**
     * @vftbl 141
     * @symbol ?handleEntityEvent\@ServerPlayer\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 150
     * @symbol ?setArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @vftbl 160
     * @symbol ?setOffhandSlot\@ServerPlayer\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @vftbl 165
     * @symbol ?load\@ServerPlayer\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 177
     * @symbol ?canChangeDimensionsUsingPortal\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 179
     * @symbol ?changeDimension\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 180
     * @symbol ?getControllingPlayer\@ServerPlayer\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 181
     * @symbol ?checkFallDamage\@ServerPlayer\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @vftbl 183
     * @symbol ?handleFallDistanceOnServer\@ServerPlayer\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 209
     * @symbol ?onEffectAdded\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance &);
    /**
     * @vftbl 210
     * @symbol ?onEffectUpdated\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance &);
    /**
     * @vftbl 211
     * @symbol ?onEffectRemoved\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance &);
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 245
     * @symbol ?die\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 276
     * @symbol ?knockback\@ServerPlayer\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl 288
     * @symbol ?aiStep\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 313
     * @symbol ?hurtArmorSlots\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /**
     * @vftbl 314
     * @symbol ?setDamagedArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @vftbl 315
     * @symbol ?sendArmorDamage\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>);
    /**
     * @vftbl 316
     * @symbol ?sendArmor\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmor(class std::bitset<4>);
    /**
     * @vftbl 326
     * @symbol ?clearVanishEnchantedItemsOnDeath\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @vftbl 327
     * @symbol ?sendInventory\@ServerPlayer\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool);
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl 353
     * @symbol ?prepareRegion\@ServerPlayer\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource &);
    /**
     * @vftbl 354
     * @symbol ?destroyRegion\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @vftbl 359
     * @symbol ?changeDimensionWithCredits\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 360
     * @symbol ?tickWorld\@ServerPlayer\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const &);
    /**
     * @vftbl 361
     * @symbol __unk_vfn_361
     */
    virtual void __unk_vfn_361();
    /**
     * @vftbl 363
     * @symbol ?moveView\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @vftbl 364
     * @symbol ?moveSpawnView\@ServerPlayer\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 367
     * @symbol ?checkMovementStats\@ServerPlayer\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const &);
    /**
     * @vftbl 368
     * @symbol __unk_vfn_368
     */
    virtual void __unk_vfn_368();
    /**
     * @vftbl 369
     * @symbol __unk_vfn_369
     */
    virtual void __unk_vfn_369();
    /**
     * @vftbl 370
     * @symbol ?respawn\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl 371
     * @symbol __unk_vfn_371
     */
    virtual void __unk_vfn_371();
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @vftbl 377
     * @symbol __unk_vfn_377
     */
    virtual void __unk_vfn_377();
    /**
     * @vftbl 378
     * @symbol __unk_vfn_378
     */
    virtual void __unk_vfn_378();
    /**
     * @vftbl 379
     * @symbol ?openTrading\@ServerPlayer\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const &, bool);
    /**
     * @vftbl 381
     * @symbol __unk_vfn_381
     */
    virtual void __unk_vfn_381();
    /**
     * @vftbl 382
     * @symbol ?openNpcInteractScreen\@ServerPlayer\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /**
     * @vftbl 383
     * @symbol ?openInventory\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl 384
     * @symbol __unk_vfn_384
     */
    virtual void __unk_vfn_384();
    /**
     * @vftbl 385
     * @symbol __unk_vfn_385
     */
    virtual void __unk_vfn_385();
    /**
     * @vftbl 386
     * @symbol ?displayTextObjectMessage\@ServerPlayer\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /**
     * @vftbl 387
     * @symbol ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @vftbl 388
     * @symbol ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @vftbl 389
     * @symbol ?displayWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @vftbl 391
     * @symbol ?stopSleepInBed\@ServerPlayer\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @vftbl 395
     * @symbol ?openSign\@ServerPlayer\@\@UEAAXAEBVBlockPos\@\@_N\@Z
     */
    virtual void openSign(class BlockPos const &, bool);
    /**
     * @vftbl 396
     * @symbol __unk_vfn_396
     */
    virtual void __unk_vfn_396();
    /**
     * @vftbl 397
     * @symbol ?isHostingPlayer\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl 398
     * @symbol ?isLoading\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @vftbl 399
     * @symbol ?isPlayerInitialized\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl 400
     * @symbol __unk_vfn_400
     */
    virtual void __unk_vfn_400();
    /**
     * @vftbl 403
     * @symbol ?setPlayerGameType\@ServerPlayer\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @vftbl 407
     * @symbol __unk_vfn_407
     */
    virtual void __unk_vfn_407();
    /**
     * @vftbl 411
     * @symbol ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager &, int, int);
    /**
     * @vftbl 412
     * @symbol ?slotChanged\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@AEAVContainer\@\@HAEBVItemStack\@\@2_N\@Z
     */
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /**
     * @vftbl 414
     * @symbol ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager &);
    /**
     * @vftbl 416
     * @symbol ?isActorRelevant\@ServerPlayer\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const &);
    /**
     * @vftbl 417
     * @symbol ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const;
    /**
     * @vftbl 418
     * @symbol ?onSuspension\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @vftbl 419
     * @symbol ?onLinkedSlotsChanged\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @vftbl 425
     * @symbol ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const;
    /**
     * @vftbl 426
     * @symbol ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /**
     * @vftbl 427
     * @symbol ?sendNetworkPacket\@ServerPlayer\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet &) const;
    /**
     * @vftbl 428
     * @symbol ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator();
    /**
     * @vftbl 429
     * @symbol ?tryGetMoveInputHandler\@ServerPlayer\@\@UEBAPEAVMoveInputHandler\@\@XZ
     */
    virtual class MoveInputHandler * tryGetMoveInputHandler() const;
    /**
     * @vftbl 430
     * @symbol ?getInputMode\@ServerPlayer\@\@UEBA?AW4InputMode\@\@XZ
     */
    virtual enum class InputMode getInputMode() const;
    /**
     * @vftbl 431
     * @symbol ?getPlayMode\@ServerPlayer\@\@UEBA?AW4ClientPlayMode\@\@XZ
     */
    virtual enum class ClientPlayMode getPlayMode() const;
    /**
     * @vftbl 432
     * @symbol ?reportMovementTelemetry\@ServerPlayer\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl 433
     * @symbol __unk_vfn_433
     */
    virtual void __unk_vfn_433();
    /**
     * @vftbl 436
     * @symbol __unk_vfn_436
     */
    virtual void __unk_vfn_436();
    /**
     * @vftbl 437
     * @symbol ?getMaxChunkBuildRadius\@ServerPlayer\@\@UEBAEXZ
     */
    virtual unsigned char getMaxChunkBuildRadius() const;
    /**
     * @vftbl 441
     * @symbol ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;
    /**
     * @vftbl 442
     * @symbol ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer();
    /**
     * @vftbl 443
     * @symbol ?_getSpawnChunkLimit\@ServerPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @vftbl 444
     * @symbol ?_updateChunkPublisherView\@ServerPlayer\@\@MEAAXAEBVVec3\@\@M\@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    /**
     * @symbol ?frameUpdate\@ServerPlayer\@\@UEAAXAEAVFrameUpdateContextBase\@\@\@Z
     */
    MCVAPI void frameUpdate(class FrameUpdateContextBase &);
    /**
     * @symbol ?openPortfolio\@ServerPlayer\@\@UEAAXXZ
     */
    MCVAPI void openPortfolio();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerPlayer();
#endif
    /**
     * @symbol ??0ServerPlayer\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@AEAVNetworkSystem\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@V?$function\@$$A6AXAEAVServerPlayer\@\@\@Z\@std\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@9V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@H_NAEAVEntityContext\@\@\@Z
     */
    MCAPI ServerPlayer(class Level &, class PacketSender &, class NetworkSystem &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @symbol ?addActorToReplicationList\@ServerPlayer\@\@QEAAXV?$not_null\@PEAVActor\@\@\@gsl\@\@_N\@Z
     */
    MCAPI void addActorToReplicationList(class gsl::not_null<class Actor *>, bool);
    /**
     * @symbol ?checkCheating\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void checkCheating(class Vec3 const &);
    /**
     * @symbol ?disconnect\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @symbol ?doDeleteContainerManager\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void doDeleteContainerManager(bool);
    /**
     * @symbol ?doInitialSpawn\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void doInitialSpawn();
    /**
     * @symbol ?getItemStackNetManagerServer\@ServerPlayer\@\@QEAAAEAVItemStackNetManagerServer\@\@XZ
     */
    MCAPI class ItemStackNetManagerServer & getItemStackNetManagerServer();
    /**
     * @symbol ?getServerMoveInputHandler\@ServerPlayer\@\@QEAAPEAVServerMoveInputHandler\@\@XZ
     */
    MCAPI class ServerMoveInputHandler * getServerMoveInputHandler();
    /**
     * @symbol ?handleActorPickRequestOnServer\@ServerPlayer\@\@QEAAXAEAVActor\@\@_N1\@Z
     */
    MCAPI void handleActorPickRequestOnServer(class Actor &, bool, bool);
    /**
     * @symbol ?handleBlockPickRequestOnServer\@ServerPlayer\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const &, bool);
    /**
     * @symbol ?isCompatibleWithClientSideChunkGen\@ServerPlayer\@\@QEBA_NXZ
     */
    MCAPI bool isCompatibleWithClientSideChunkGen() const;
    /**
     * @symbol ?openUnmanagedContainer\@ServerPlayer\@\@QEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID openUnmanagedContainer();
    /**
     * @symbol ?postLoad\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void postLoad(bool);
    /**
     * @symbol ?postReplicationTick\@ServerPlayer\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void postReplicationTick(struct Tick const &);
    /**
     * @symbol ?preReplicationTick\@ServerPlayer\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void preReplicationTick(struct Tick const &);
    /**
     * @symbol ?selectItem\@ServerPlayer\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void selectItem(class ItemStack const &);
    /**
     * @symbol ?sendMobEffectPackets\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendMobEffectPackets();
    /**
     * @symbol ?sendPlayerOnGround\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendPlayerOnGround();
    /**
     * @symbol ?setClientChunkRadius\@ServerPlayer\@\@QEAAXIE\@Z
     */
    MCAPI void setClientChunkRadius(unsigned int, unsigned char);
    /**
     * @symbol ?setInputMode\@ServerPlayer\@\@QEAAXAEBW4InputMode\@\@\@Z
     */
    MCAPI void setInputMode(enum class InputMode const &);
    /**
     * @symbol ?setIsCompatibleWithClientSideChunkGen\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void setIsCompatibleWithClientSideChunkGen(bool);
    /**
     * @symbol ?setLocalPlayerAsInitialized\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void setLocalPlayerAsInitialized();
    /**
     * @symbol ?setPlayMode\@ServerPlayer\@\@QEAAXAEBW4ClientPlayMode\@\@\@Z
     */
    MCAPI void setPlayMode(enum class ClientPlayMode const &);
    /**
     * @symbol ?setPlayerInput\@ServerPlayer\@\@QEAAXMM_N0\@Z
     */
    MCAPI void setPlayerInput(float, float, bool, bool);
    /**
     * @symbol ?setSyncTimeIfClientServerPositionMatches\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setSyncTimeIfClientServerPositionMatches(class Vec3 const &);
    /**
     * @symbol ?triggerRespawnFromCompletingTheEnd\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void triggerRespawnFromCompletingTheEnd();
    /**
     * @symbol ?tryGetFromEntity\@ServerPlayer\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ServerPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_logCDEvent\@ServerPlayer\@\@AEAAXW4CrashDumpLogStringID\@\@000\@Z
     */
    MCAPI void _logCDEvent(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID);
    /**
     * @symbol ?_nextContainerCounter\@ServerPlayer\@\@AEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID _nextContainerCounter();
    /**
     * @symbol ?_removeNearbyEntities\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _removeNearbyEntities();
    /**
     * @symbol ?_scanForNearbyActors\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _scanForNearbyActors();
    /**
     * @symbol ?_setContainerManager\@ServerPlayer\@\@AEAAXV?$shared_ptr\@VIContainerManager\@\@\@std\@\@\@Z
     */
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    /**
     * @symbol ?_updateNearbyActors\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _updateNearbyActors();

private:

};
