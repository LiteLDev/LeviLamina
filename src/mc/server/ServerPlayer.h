#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/player/Player.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace mce { class UUID; }
// clang-format on

class ServerPlayer : public ::Player {

public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&) = delete;
    ServerPlayer(ServerPlayer const&)            = delete;
    ServerPlayer()                               = delete;

public:
    /**
     * @vftbl 12
     * @symbol
     * ?initializeComponents\@ServerPlayer\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_serverInitItemStackIds\@ServerPlayer\@\@EEAAXXZ
     */
    virtual void _serverInitItemStackIds(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 102
     * @symbol ?isValidTarget\@ServerPlayer\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool isValidTarget(class Actor*) const; // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@ServerPlayer\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 136
     * @symbol ?setArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 146
     * @symbol ?setOffhandSlot\@ServerPlayer\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&); // NOLINT
    /**
     * @vftbl 151
     * @symbol ?load\@ServerPlayer\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 165
     * @symbol ?changeDimension\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@ServerPlayer\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const; // NOLINT
    /**
     * @vftbl 167
     * @symbol ?checkFallDamage\@ServerPlayer\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool); // NOLINT
    /**
     * @vftbl 169
     * @symbol ?handleFallDistanceOnServer\@ServerPlayer\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 194
     * @symbol ?onEffectAdded\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance&); // NOLINT
    /**
     * @vftbl 195
     * @symbol ?onEffectUpdated\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance&); // NOLINT
    /**
     * @vftbl 196
     * @symbol ?onEffectRemoved\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance&); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 224
     * @symbol ?die\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?knockback\@ServerPlayer\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor*, int, float, float, float, float, float); // NOLINT
    /**
     * @vftbl 264
     * @symbol ?aiStep\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void aiStep(); // NOLINT
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276(); // NOLINT
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280(); // NOLINT
    /**
     * @vftbl 288
     * @symbol ?hurtArmorSlots\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, class std::bitset<4>); // NOLINT
    /**
     * @vftbl 289
     * @symbol ?setDamagedArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 290
     * @symbol ?sendArmorDamage\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>); // NOLINT
    /**
     * @vftbl 291
     * @symbol ?sendArmor\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmor(class std::bitset<4>); // NOLINT
    /**
     * @vftbl 301
     * @symbol ?clearVanishEnchantedItemsOnDeath\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath(); // NOLINT
    /**
     * @vftbl 302
     * @symbol ?sendInventory\@ServerPlayer\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
    /**
     * @vftbl 325
     * @symbol ?prepareRegion\@ServerPlayer\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource&); // NOLINT
    /**
     * @vftbl 326
     * @symbol ?destroyRegion\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyRegion(); // NOLINT
    /**
     * @vftbl 331
     * @symbol ?changeDimensionWithCredits\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @vftbl 332
     * @symbol ?tickWorld\@ServerPlayer\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const&); // NOLINT
    /**
     * @vftbl 333
     * @symbol __unk_vfn_333
     */
    virtual void __unk_vfn_333(); // NOLINT
    /**
     * @vftbl 335
     * @symbol ?moveView\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void moveView(); // NOLINT
    /**
     * @vftbl 336
     * @symbol ?moveSpawnView\@ServerPlayer\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @vftbl 339
     * @symbol ?checkMovementStats\@ServerPlayer\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const&); // NOLINT
    /**
     * @vftbl 340
     * @symbol __unk_vfn_340
     */
    virtual void __unk_vfn_340(); // NOLINT
    /**
     * @vftbl 341
     * @symbol __unk_vfn_341
     */
    virtual void __unk_vfn_341(); // NOLINT
    /**
     * @vftbl 342
     * @symbol ?respawn\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void respawn(); // NOLINT
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343(); // NOLINT
    /**
     * @vftbl 344
     * @symbol __unk_vfn_344
     */
    virtual void __unk_vfn_344(); // NOLINT
    /**
     * @vftbl 349
     * @symbol __unk_vfn_349
     */
    virtual void __unk_vfn_349(); // NOLINT
    /**
     * @vftbl 350
     * @symbol __unk_vfn_350
     */
    virtual void __unk_vfn_350(); // NOLINT
    /**
     * @vftbl 351
     * @symbol ?openTrading\@ServerPlayer\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const&, bool); // NOLINT
    /**
     * @vftbl 353
     * @symbol __unk_vfn_353
     */
    virtual void __unk_vfn_353(); // NOLINT
    /**
     * @vftbl 354
     * @symbol ?openNpcInteractScreen\@ServerPlayer\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>); // NOLINT
    /**
     * @vftbl 355
     * @symbol ?openInventory\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void openInventory(); // NOLINT
    /**
     * @vftbl 356
     * @symbol __unk_vfn_356
     */
    virtual void __unk_vfn_356(); // NOLINT
    /**
     * @vftbl 357
     * @symbol __unk_vfn_357
     */
    virtual void __unk_vfn_357(); // NOLINT
    /**
     * @vftbl 358
     * @symbol
     * ?displayTextObjectMessage\@ServerPlayer\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void
    displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 359
     * @symbol
     * ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 360
     * @symbol
     * ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 361
     * @symbol
     * ?displayWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void
    displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 363
     * @symbol ?stopSleepInBed\@ServerPlayer\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool); // NOLINT
    /**
     * @vftbl 367
     * @symbol ?openSign\@ServerPlayer\@\@UEAAXAEBVBlockPos\@\@_N\@Z
     */
    virtual void openSign(class BlockPos const&, bool); // NOLINT
    /**
     * @vftbl 368
     * @symbol __unk_vfn_368
     */
    virtual void __unk_vfn_368(); // NOLINT
    /**
     * @vftbl 369
     * @symbol ?isHostingPlayer\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const; // NOLINT
    /**
     * @vftbl 370
     * @symbol ?isLoading\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isLoading() const; // NOLINT
    /**
     * @vftbl 371
     * @symbol ?isPlayerInitialized\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const; // NOLINT
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372(); // NOLINT
    /**
     * @vftbl 375
     * @symbol ?setPlayerGameType\@ServerPlayer\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType); // NOLINT
    /**
     * @vftbl 379
     * @symbol __unk_vfn_379
     */
    virtual void __unk_vfn_379(); // NOLINT
    /**
     * @vftbl 383
     * @symbol ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager&, int, int); // NOLINT
    /**
     * @vftbl 384
     * @symbol ?slotChanged\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@AEAVContainer\@\@HAEBVItemStack\@\@2_N\@Z
     */
    virtual void slotChanged(
        class IContainerManager&,
        class Container&,
        int,
        class ItemStack const&,
        class ItemStack const&,
        bool
    ); // NOLINT
    /**
     * @vftbl 386
     * @symbol ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager&); // NOLINT
    /**
     * @vftbl 388
     * @symbol ?isActorRelevant\@ServerPlayer\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const&); // NOLINT
    /**
     * @vftbl 389
     * @symbol ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const; // NOLINT
    /**
     * @vftbl 390
     * @symbol ?onSuspension\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onSuspension(); // NOLINT
    /**
     * @vftbl 391
     * @symbol ?onLinkedSlotsChanged\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged(); // NOLINT
    /**
     * @vftbl 397
     * @symbol ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const; // NOLINT
    /**
     * @vftbl 398
     * @symbol
     * ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const; // NOLINT
    /**
     * @vftbl 399
     * @symbol ?sendNetworkPacket\@ServerPlayer\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet&) const; // NOLINT
    /**
     * @vftbl 400
     * @symbol ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator(); // NOLINT
    /**
     * @vftbl 401
     * @symbol ?reportMovementTelemetry\@ServerPlayer\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType); // NOLINT
    /**
     * @vftbl 402
     * @symbol __unk_vfn_402
     */
    virtual void __unk_vfn_402(); // NOLINT
    /**
     * @vftbl 405
     * @symbol __unk_vfn_405
     */
    virtual void __unk_vfn_405(); // NOLINT
    /**
     * @vftbl 406
     * @symbol ?getMaxChunkBuildRadius\@ServerPlayer\@\@UEBAEXZ
     */
    virtual unsigned char getMaxChunkBuildRadius() const; // NOLINT
    /**
     * @vftbl 410
     * @symbol ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const; // NOLINT
    /**
     * @vftbl 411
     * @symbol ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer(); // NOLINT
    /**
     * @vftbl 412
     * @symbol ?_getSpawnChunkLimit\@ServerPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const; // NOLINT
    /**
     * @vftbl 413
     * @symbol ?_updateChunkPublisherView\@ServerPlayer\@\@MEAAXAEBVVec3\@\@M\@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const&, float); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    /**
     * @symbol ?frameUpdate\@ServerPlayer\@\@UEAAXAEAVFrameUpdateContextBase\@\@\@Z
     */
    MCVAPI void frameUpdate(class FrameUpdateContextBase&); // NOLINT
    /**
     * @symbol ?openPortfolio\@ServerPlayer\@\@UEAAXXZ
     */
    MCVAPI void openPortfolio(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerPlayer(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ServerPlayer\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@AEAVNetworkSystem\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@V?$function\@$$A6AXAEAVServerPlayer\@\@\@Z\@std\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@9V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@H_NAEAVEntityContext\@\@\@Z
     */
    MCAPI ServerPlayer(class Level&, class PacketSender&, class NetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, enum class GameType, class NetworkIdentifier const&, enum class SubClientId, class std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&); // NOLINT
    /**
     * @symbol ?acceptClientPosition\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void acceptClientPosition(class Vec3 const&); // NOLINT
    /**
     * @symbol ?addActorToReplicationList\@ServerPlayer\@\@QEAAXV?$not_null\@PEAVActor\@\@\@gsl\@\@_N\@Z
     */
    MCAPI void addActorToReplicationList(class gsl::not_null<class Actor*>, bool); // NOLINT
    /**
     * @symbol ?checkCheating\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void checkCheating(class Vec3 const&); // NOLINT
    /**
     * @symbol ?disconnect\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void disconnect(); // NOLINT
    /**
     * @symbol ?doDeleteContainerManager\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void doDeleteContainerManager(bool); // NOLINT
    /**
     * @symbol ?doInitialSpawn\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void doInitialSpawn(); // NOLINT
    /**
     * @symbol ?getItemStackNetManagerServer\@ServerPlayer\@\@QEAAAEAVItemStackNetManagerServer\@\@XZ
     */
    MCAPI class ItemStackNetManagerServer& getItemStackNetManagerServer(); // NOLINT
    /**
     * @symbol ?handleActorPickRequestOnServer\@ServerPlayer\@\@QEAAXAEAVActor\@\@_N1\@Z
     */
    MCAPI void handleActorPickRequestOnServer(class Actor&, bool, bool); // NOLINT
    /**
     * @symbol ?handleBlockPickRequestOnServer\@ServerPlayer\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?isCompatibleWithClientSideChunkGen\@ServerPlayer\@\@QEBA_NXZ
     */
    MCAPI bool isCompatibleWithClientSideChunkGen() const; // NOLINT
    /**
     * @symbol ?openUnmanagedContainer\@ServerPlayer\@\@QEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID openUnmanagedContainer(); // NOLINT
    /**
     * @symbol ?postLoad\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void postLoad(bool); // NOLINT
    /**
     * @symbol ?postReplicationTick\@ServerPlayer\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void postReplicationTick(struct Tick const&); // NOLINT
    /**
     * @symbol ?preReplicationTick\@ServerPlayer\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void preReplicationTick(struct Tick const&); // NOLINT
    /**
     * @symbol ?selectItem\@ServerPlayer\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void selectItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?sendMobEffectPackets\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendMobEffectPackets(); // NOLINT
    /**
     * @symbol ?sendPlayerAuthInputReceivedEvent\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendPlayerAuthInputReceivedEvent(); // NOLINT
    /**
     * @symbol ?sendPlayerOnGround\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void sendPlayerOnGround(); // NOLINT
    /**
     * @symbol ?setClientChunkRadius\@ServerPlayer\@\@QEAAXIE\@Z
     */
    MCAPI void setClientChunkRadius(unsigned int, unsigned char); // NOLINT
    /**
     * @symbol ?setIsCompatibleWithClientSideChunkGen\@ServerPlayer\@\@QEAAX_N\@Z
     */
    MCAPI void setIsCompatibleWithClientSideChunkGen(bool); // NOLINT
    /**
     * @symbol ?setLocalPlayerAsInitialized\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void setLocalPlayerAsInitialized(); // NOLINT
    /**
     * @symbol ?setPlayerInput\@ServerPlayer\@\@QEAAXMM_N0\@Z
     */
    MCAPI void setPlayerInput(float, float, bool, bool); // NOLINT
    /**
     * @symbol ?triggerRespawnFromCompletingTheEnd\@ServerPlayer\@\@QEAAXXZ
     */
    MCAPI void triggerRespawnFromCompletingTheEnd(); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@ServerPlayer\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ServerPlayer* tryGetFromEntity(class EntityContext&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_logCDEvent\@ServerPlayer\@\@AEAAXW4CrashDumpLogStringID\@\@000\@Z
     */
    MCAPI void _logCDEvent(
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID
    ); // NOLINT
    /**
     * @symbol ?_nextContainerCounter\@ServerPlayer\@\@AEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID _nextContainerCounter(); // NOLINT
    /**
     * @symbol ?_removeNearbyEntities\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _removeNearbyEntities(); // NOLINT
    /**
     * @symbol ?_scanForNearbyActors\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _scanForNearbyActors(); // NOLINT
    /**
     * @symbol ?_setContainerManager\@ServerPlayer\@\@AEAAXV?$shared_ptr\@VIContainerManager\@\@\@std\@\@\@Z
     */
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>); // NOLINT
    /**
     * @symbol ?_updateNearbyActors\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _updateNearbyActors(); // NOLINT

private:
};
