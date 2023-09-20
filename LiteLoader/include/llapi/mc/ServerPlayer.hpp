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
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 43
     * @symbol ?normalTick\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
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
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 101
     * @symbol ?isValidTarget\@ServerPlayer\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool isValidTarget(class Actor *) const;
    /**
     * @vftbl 125
     * @symbol ?handleEntityEvent\@ServerPlayer\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 134
     * @symbol ?setArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @vftbl 144
     * @symbol ?setOffhandSlot\@ServerPlayer\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @vftbl 149
     * @symbol ?load\@ServerPlayer\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 161
     * @symbol ?canChangeDimensionsUsingPortal\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol ?changeDimension\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 164
     * @symbol ?getControllingPlayer\@ServerPlayer\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 165
     * @symbol ?checkFallDamage\@ServerPlayer\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @vftbl 167
     * @symbol ?handleFallDistanceOnServer\@ServerPlayer\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 190
     * @symbol ?onEffectAdded\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance &);
    /**
     * @vftbl 191
     * @symbol ?onEffectUpdated\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance &);
    /**
     * @vftbl 192
     * @symbol ?onEffectRemoved\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance &);
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 220
     * @symbol ?die\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 249
     * @symbol ?knockback\@ServerPlayer\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl 259
     * @symbol ?aiStep\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl 274
     * @symbol __unk_vfn_274
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl 282
     * @symbol ?hurtArmorSlots\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /**
     * @vftbl 283
     * @symbol ?setDamagedArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @vftbl 284
     * @symbol ?sendArmorDamage\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>);
    /**
     * @vftbl 285
     * @symbol ?sendArmor\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmor(class std::bitset<4>);
    /**
     * @vftbl 295
     * @symbol ?clearVanishEnchantedItemsOnDeath\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @vftbl 296
     * @symbol ?sendInventory\@ServerPlayer\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool);
    /**
     * @vftbl 318
     * @symbol ?prepareRegion\@ServerPlayer\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource &);
    /**
     * @vftbl 319
     * @symbol ?destroyRegion\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @vftbl 324
     * @symbol ?changeDimensionWithCredits\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 325
     * @symbol ?tickWorld\@ServerPlayer\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const &);
    /**
     * @vftbl 326
     * @symbol __unk_vfn_326
     */
    virtual void __unk_vfn_326();
    /**
     * @vftbl 328
     * @symbol ?moveView\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @vftbl 329
     * @symbol ?moveSpawnView\@ServerPlayer\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 332
     * @symbol ?checkMovementStats\@ServerPlayer\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const &);
    /**
     * @vftbl 333
     * @symbol __unk_vfn_333
     */
    virtual void __unk_vfn_333();
    /**
     * @vftbl 334
     * @symbol __unk_vfn_334
     */
    virtual void __unk_vfn_334();
    /**
     * @vftbl 335
     * @symbol ?respawn\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl 336
     * @symbol __unk_vfn_336
     */
    virtual void __unk_vfn_336();
    /**
     * @vftbl 337
     * @symbol __unk_vfn_337
     */
    virtual void __unk_vfn_337();
    /**
     * @vftbl 342
     * @symbol __unk_vfn_342
     */
    virtual void __unk_vfn_342();
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
    /**
     * @vftbl 344
     * @symbol ?openTrading\@ServerPlayer\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const &, bool);
    /**
     * @vftbl 346
     * @symbol __unk_vfn_346
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl 347
     * @symbol ?openNpcInteractScreen\@ServerPlayer\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /**
     * @vftbl 348
     * @symbol ?openInventory\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl 349
     * @symbol __unk_vfn_349
     */
    virtual void __unk_vfn_349();
    /**
     * @vftbl 350
     * @symbol __unk_vfn_350
     */
    virtual void __unk_vfn_350();
    /**
     * @vftbl 351
     * @symbol ?displayTextObjectMessage\@ServerPlayer\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /**
     * @vftbl 352
     * @symbol ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @vftbl 353
     * @symbol ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @vftbl 354
     * @symbol ?displayWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @vftbl 356
     * @symbol ?stopSleepInBed\@ServerPlayer\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @vftbl 360
     * @symbol ?openSign\@ServerPlayer\@\@UEAAXAEBVBlockPos\@\@_N\@Z
     */
    virtual void openSign(class BlockPos const &, bool);
    /**
     * @vftbl 361
     * @symbol __unk_vfn_361
     */
    virtual void __unk_vfn_361();
    /**
     * @vftbl 362
     * @symbol ?isHostingPlayer\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl 363
     * @symbol ?isLoading\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @vftbl 364
     * @symbol ?isPlayerInitialized\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl 365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @vftbl 368
     * @symbol ?setPlayerGameType\@ServerPlayer\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @vftbl 376
     * @symbol ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager &, int, int);
    /**
     * @vftbl 377
     * @symbol ?slotChanged\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@AEAVContainer\@\@HAEBVItemStack\@\@2_N\@Z
     */
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /**
     * @vftbl 379
     * @symbol ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager &);
    /**
     * @vftbl 381
     * @symbol ?isActorRelevant\@ServerPlayer\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const &);
    /**
     * @vftbl 382
     * @symbol ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const;
    /**
     * @vftbl 383
     * @symbol ?onSuspension\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @vftbl 384
     * @symbol ?onLinkedSlotsChanged\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @vftbl 390
     * @symbol ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const;
    /**
     * @vftbl 391
     * @symbol ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /**
     * @vftbl 392
     * @symbol ?sendNetworkPacket\@ServerPlayer\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet &) const;
    /**
     * @vftbl 393
     * @symbol ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator();
    /**
     * @vftbl 394
     * @symbol ?reportMovementTelemetry\@ServerPlayer\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl 395
     * @symbol __unk_vfn_395
     */
    virtual void __unk_vfn_395();
    /**
     * @vftbl 398
     * @symbol __unk_vfn_398
     */
    virtual void __unk_vfn_398();
    /**
     * @vftbl 399
     * @symbol ?getMaxChunkBuildRadius\@ServerPlayer\@\@UEBAEXZ
     */
    virtual unsigned char getMaxChunkBuildRadius() const;
    /**
     * @vftbl 403
     * @symbol ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;
    /**
     * @vftbl 404
     * @symbol ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer();
    /**
     * @vftbl 405
     * @symbol ?_getSpawnChunkLimit\@ServerPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @vftbl 406
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
     * @symbol ?acceptClientPosition\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void acceptClientPosition(class Vec3 const &);
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
     * @symbol ?sendPlayerAuthInputReceivedEvent\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendPlayerAuthInputReceivedEvent();
    /**
     * @symbol ?sendPlayerOnGround\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendPlayerOnGround();
    /**
     * @symbol ?setClientChunkRadius\@ServerPlayer\@\@QEAAXIE\@Z
     */
    MCAPI void setClientChunkRadius(unsigned int, unsigned char);
    /**
     * @symbol ?setIsCompatibleWithClientSideChunkGen\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void setIsCompatibleWithClientSideChunkGen(bool);
    /**
     * @symbol ?setLocalPlayerAsInitialized\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void setLocalPlayerAsInitialized();
    /**
     * @symbol ?setPlayerInput\@ServerPlayer\@\@QEAAXMM_N0\@Z
     */
    MCAPI void setPlayerInput(float, float, bool, bool);
    /**
     * @symbol ?triggerRespawnFromCompletingTheEnd\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void triggerRespawnFromCompletingTheEnd();
    /**
     * @symbol ?initializePlayerTickComponents\@ServerPlayer\@\@SAXAEAVEntityContext\@\@AEBUPlayerMovementSettings\@\@\@Z
     */
    MCAPI static void initializePlayerTickComponents(class EntityContext &, struct PlayerMovementSettings const &);
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
