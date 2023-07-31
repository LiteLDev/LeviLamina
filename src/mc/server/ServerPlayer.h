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
    // NOLINTBEGIN
    /**
     * @vftbl 12
     * @symbol
     * ?initializeComponents\@ServerPlayer\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 102
     * @symbol ?isValidTarget\@ServerPlayer\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool isValidTarget(class Actor*) const;
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@ServerPlayer\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 136
     * @symbol ?setArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const&);
    /**
     * @vftbl 146
     * @symbol ?setOffhandSlot\@ServerPlayer\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&);
    /**
     * @vftbl 151
     * @symbol ?load\@ServerPlayer\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol ?changeDimension\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@ServerPlayer\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 167
     * @symbol ?checkFallDamage\@ServerPlayer\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @vftbl 169
     * @symbol ?handleFallDistanceOnServer\@ServerPlayer\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 194
     * @symbol ?onEffectAdded\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance&);
    /**
     * @vftbl 195
     * @symbol ?onEffectUpdated\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance&);
    /**
     * @vftbl 196
     * @symbol ?onEffectRemoved\@ServerPlayer\@\@MEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance&);
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 224
     * @symbol ?die\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&);
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 254
     * @symbol ?knockback\@ServerPlayer\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor*, int, float, float, float, float, float);
    /**
     * @vftbl 264
     * @symbol ?aiStep\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 288
     * @symbol ?hurtArmorSlots\@ServerPlayer\@\@UEAAXAEBVActorDamageSource\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, std::bitset<4>);
    /**
     * @vftbl 289
     * @symbol ?setDamagedArmor\@ServerPlayer\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const&);
    /**
     * @vftbl 290
     * @symbol ?sendArmorDamage\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmorDamage(std::bitset<4>);
    /**
     * @vftbl 291
     * @symbol ?sendArmor\@ServerPlayer\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmor(std::bitset<4>);
    /**
     * @vftbl 301
     * @symbol ?clearVanishEnchantedItemsOnDeath\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @vftbl 302
     * @symbol ?sendInventory\@ServerPlayer\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool);
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
    /**
     * @vftbl 325
     * @symbol ?prepareRegion\@ServerPlayer\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource&);
    /**
     * @vftbl 326
     * @symbol ?destroyRegion\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @vftbl 331
     * @symbol ?changeDimensionWithCredits\@ServerPlayer\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 332
     * @symbol ?tickWorld\@ServerPlayer\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const&);
    /**
     * @vftbl 333
     * @symbol __unk_vfn_333
     */
    virtual void __unk_vfn_333();
    /**
     * @vftbl 335
     * @symbol ?moveView\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @vftbl 336
     * @symbol ?moveSpawnView\@ServerPlayer\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 339
     * @symbol ?checkMovementStats\@ServerPlayer\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const&);
    /**
     * @vftbl 340
     * @symbol __unk_vfn_340
     */
    virtual void __unk_vfn_340();
    /**
     * @vftbl 341
     * @symbol __unk_vfn_341
     */
    virtual void __unk_vfn_341();
    /**
     * @vftbl 342
     * @symbol ?respawn\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
    /**
     * @vftbl 344
     * @symbol __unk_vfn_344
     */
    virtual void __unk_vfn_344();
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
     * @symbol ?openTrading\@ServerPlayer\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const&, bool);
    /**
     * @vftbl 353
     * @symbol __unk_vfn_353
     */
    virtual void __unk_vfn_353();
    /**
     * @vftbl 354
     * @symbol ?openNpcInteractScreen\@ServerPlayer\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData>);
    /**
     * @vftbl 355
     * @symbol ?openInventory\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl 356
     * @symbol __unk_vfn_356
     */
    virtual void __unk_vfn_356();
    /**
     * @vftbl 357
     * @symbol __unk_vfn_357
     */
    virtual void __unk_vfn_357();
    /**
     * @vftbl 358
     * @symbol
     * ?displayTextObjectMessage\@ServerPlayer\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);
    /**
     * @vftbl 359
     * @symbol
     * ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);
    /**
     * @vftbl 360
     * @symbol
     * ?displayTextObjectWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);
    /**
     * @vftbl 361
     * @symbol
     * ?displayWhisperMessage\@ServerPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    /**
     * @vftbl 363
     * @symbol ?stopSleepInBed\@ServerPlayer\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @vftbl 367
     * @symbol ?openSign\@ServerPlayer\@\@UEAAXAEBVBlockPos\@\@_N\@Z
     */
    virtual void openSign(class BlockPos const&, bool);
    /**
     * @vftbl 368
     * @symbol __unk_vfn_368
     */
    virtual void __unk_vfn_368();
    /**
     * @vftbl 369
     * @symbol ?isHostingPlayer\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl 370
     * @symbol ?isLoading\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @vftbl 371
     * @symbol ?isPlayerInitialized\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @vftbl 375
     * @symbol ?setPlayerGameType\@ServerPlayer\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @vftbl 379
     * @symbol __unk_vfn_379
     */
    virtual void __unk_vfn_379();
    /**
     * @vftbl 383
     * @symbol ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager&, int, int);
    /**
     * @vftbl 384
     * @symbol ?slotChanged\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@AEAVContainer\@\@HAEBVItemStack\@\@2_N\@Z
     */
    virtual void
    slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool);
    /**
     * @vftbl 386
     * @symbol ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager&);
    /**
     * @vftbl 388
     * @symbol ?isActorRelevant\@ServerPlayer\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const&);
    /**
     * @vftbl 389
     * @symbol ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const;
    /**
     * @vftbl 390
     * @symbol ?onSuspension\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @vftbl 391
     * @symbol ?onLinkedSlotsChanged\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @vftbl 397
     * @symbol ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const;
    /**
     * @vftbl 398
     * @symbol
     * ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /**
     * @vftbl 399
     * @symbol ?sendNetworkPacket\@ServerPlayer\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet&) const;
    /**
     * @vftbl 400
     * @symbol ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator();
    /**
     * @vftbl 401
     * @symbol ?reportMovementTelemetry\@ServerPlayer\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl 402
     * @symbol __unk_vfn_402
     */
    virtual void __unk_vfn_402();
    /**
     * @vftbl 405
     * @symbol __unk_vfn_405
     */
    virtual void __unk_vfn_405();
    /**
     * @vftbl 406
     * @symbol ?getMaxChunkBuildRadius\@ServerPlayer\@\@UEBAEXZ
     */
    virtual unsigned char getMaxChunkBuildRadius() const;
    /**
     * @vftbl 410
     * @symbol ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;
    /**
     * @vftbl 411
     * @symbol ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer();
    /**
     * @vftbl 412
     * @symbol ?_getSpawnChunkLimit\@ServerPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @vftbl 413
     * @symbol ?_updateChunkPublisherView\@ServerPlayer\@\@MEAAXAEBVVec3\@\@M\@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const&, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    /**
     * @symbol ?frameUpdate\@ServerPlayer\@\@UEAAXAEAVFrameUpdateContextBase\@\@\@Z
     */
    MCVAPI void frameUpdate(class FrameUpdateContextBase&);
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
     * @symbol
     * ??0ServerPlayer\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@AEAVNetworkSystem\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@V?$function\@$$A6AXAEAVServerPlayer\@\@\@Z\@std\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@9V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@H_NAEAVEntityContext\@\@\@Z
     */
    MCAPI ServerPlayer(class Level&, class PacketSender&, class NetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, enum class GameType, class NetworkIdentifier const&, enum class SubClientId, std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);
    /**
     * @symbol ?acceptClientPosition\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void acceptClientPosition(class Vec3 const&);
    /**
     * @symbol ?addActorToReplicationList\@ServerPlayer\@\@QEAAXV?$not_null\@PEAVActor\@\@\@gsl\@\@_N\@Z
     */
    MCAPI void addActorToReplicationList(class gsl::not_null<class Actor*>, bool);
    /**
     * @symbol ?checkCheating\@ServerPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void checkCheating(class Vec3 const&);
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
    MCAPI class ItemStackNetManagerServer& getItemStackNetManagerServer();
    /**
     * @symbol ?handleActorPickRequestOnServer\@ServerPlayer\@\@QEAAXAEAVActor\@\@_N1\@Z
     */
    MCAPI void handleActorPickRequestOnServer(class Actor&, bool, bool);
    /**
     * @symbol ?handleBlockPickRequestOnServer\@ServerPlayer\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const&, bool);
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
    MCAPI void postReplicationTick(struct Tick const&);
    /**
     * @symbol ?preReplicationTick\@ServerPlayer\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void preReplicationTick(struct Tick const&);
    /**
     * @symbol ?selectItem\@ServerPlayer\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void selectItem(class ItemStack const&);
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
     * @symbol ?tryGetFromEntity\@ServerPlayer\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ServerPlayer* tryGetFromEntity(class EntityContext&, bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_logCDEvent\@ServerPlayer\@\@AEAAXW4CrashDumpLogStringID\@\@000\@Z
     */
    MCAPI void _logCDEvent(
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID
    );
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
    MCAPI void _setContainerManager(std::shared_ptr<class IContainerManager>);
    /**
     * @symbol ?_updateNearbyActors\@ServerPlayer\@\@AEAAXXZ
     */
    MCAPI void _updateNearbyActors();
    // NOLINTEND
};
