#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/UIOperation.h"
#include "mc/client/gui/screens/ControlCollectionFlag.h"
#include "mc/client/gui/screens/LayoutVariableType.h"
#include "mc/client/renderer/actor/v2/Destination.h"
#include "mc/client/renderer/game/ShadowRenderingParameters.h"
#include "mc/client/renderer/game/TerrainVariation.h"
#include "mc/client/resources/ContentCatalogQueryData.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/services/download/ProcessState.h"
#include "mc/client/services/requests/payment/ReceiptFulfillment.h"
#include "mc/client/store/iap/OfferCategory.h"
#include "mc/client/store/iap/ProductType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/file/file_system/FileType.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/json/ValueType.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/external/cgltf/cgltf_component_type.h"
#include "mc/external/cgltf/cgltf_result.h"
#include "mc/external/cgltf/cgltf_type.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/libsrtp/srtp_err_status_t.h"
#include "mc/external/mimalloc/mi_delayed_e.h"
#include "mc/molang/MolangVersion.h"
#include "mc/network/packet/AgentActionType.h"
#include "mc/network/packet/TextPacketType.h"
#include "mc/options/DiscoveryEnvironment.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/AssetWorkItemFactory.h"
#include "mc/util/HudElement.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ActorTypeNamespaceRules.h"
#include "mc/world/actor/item/MinecartType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/filters/FilterGroup.h"
#include "mc/world/filters/FilterOperator.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/SubChunk.h"
#include "mc/world/level/chunk/SubChunkDelayedDeleter.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
#include "mc/world/level/storage/loot/functions/SpecificEnchantFunction.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorOwnerComponent;
class ActorTickNeededComponent;
class BalloonComponent;
class BaseCircuitComponent;
class Biome;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class BodyControlComponent;
class BoostableComponent;
class BreedableComponent;
class CircuitComponentList;
class CircuitSceneGraph;
class CircuitTrackingInfo;
class CommandBlockComponent;
class CompoundTag;
class DamageOverTimeComponent;
class DanceComponent;
class DataLoadHelper;
class DebuggerStat;
class DimensionHeightRange;
class EntityContext;
class ExplodeComponent;
class ExpressionNode;
class HashedString;
class HopperComponent;
class I18n;
class IAppPlatform;
class IConstBlockSource;
class IFileAccess;
class ILevel;
class IMinecraftEventing;
class InsomniaComponent;
class InternalTaskGroup;
class InventoryContentPacket;
class ItemInstance;
class ItemRegistryRef;
class ItemStack;
class ItemUseInventoryTransaction;
class ItemUseOnActorInventoryTransaction;
class LevelChunk;
class LevelData;
class LevelTickTrackingComponent;
class LinkedAssetValidator;
class ListTag;
class Matrix;
class NavigationComponent;
class PackInstance;
class Player;
class PoolAliasBinding;
class Recipe;
class RecipeIngredient;
class RedstoneTorchCapacitor;
class ScriptPluginResult;
class SemVersion;
class ShapedRecipe;
class ShapelessRecipe;
class StrictEntityContext;
class SubChunkBrightnessStorage;
class TeleportComponent;
class TextPacket;
class ThirdPartyInfo;
class TransformationComponent;
class TrimDataPacket;
class TrimMaterialRegistry;
class TrimPatternRegistry;
class Vec2;
class Vec3;
class WorkerPool;
struct AABBShapeComponent;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifier;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct AgentCapabilities;
struct AirSpeedComponent;
struct AirTravelFlagComponent;
struct AnyWorkItem;
struct BlockLayer;
struct BossComponent;
struct BurnsInDaylightComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct CurrentTickComponent;
struct DashActionComponent;
struct DashJumpFlagComponent;
struct DimensionType;
struct FallDistanceComponent;
struct FlatWorldLayer;
struct FlatWorldPreset;
struct GlidingTravelFlagComponent;
struct GroundTravelFlagComponent;
struct HCTraceImplArea;
struct HorseWasOnGroundPreTravelComponent;
struct ImmuneToLavaDragComponent;
struct IteratePackResult;
struct JumpPendingScaleComponent;
struct KeyOrNameResult;
struct KineticDamageSettings;
struct LavaTravelFlagComponent;
struct LiquidTravelFlagComponent;
struct MCRESULT;
struct MapSample;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct MovementInterpolatorComponent;
struct OnGroundFlagComponent;
struct PackIdVersion;
struct PackMaps;
struct ParseJsonResult;
struct PlayerComponent;
struct PlayerFlyingTravelComponent;
struct PlayerPositionModeComponent;
struct PlayerPreMobTravelComponent;
struct PowerJumpFlagComponent;
struct ShapedRecipePayload;
struct ShapelessRecipePayload;
struct StateVectorComponent;
struct SubBBsComponent;
struct TextProcessingEventOriginEnumHasher;
struct TimerComponent;
struct TradeItem;
struct TriggerJumpRequestComponent;
struct VehicleComponent;
struct WasInLavaFlagComponent;
struct WasInWaterFlagComponent;
struct WaterTravelFlagComponent;
struct WorkerConfiguration;
struct WorldTemplateInfo;
struct XAsyncBlock;
struct cgltf_anisotropy;
struct cgltf_attribute;
struct cgltf_data;
struct cgltf_diffuse_transmission;
struct cgltf_dispersion;
struct cgltf_extension;
struct cgltf_file_options;
struct cgltf_iridescence;
struct cgltf_material_mapping;
struct cgltf_memory_options;
struct cgltf_texture_view;
struct srtp_auth_t;
namespace Bedrock { class StaticOptimizedString; }
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock::Http { class DispatcherInterface; }
namespace Bedrock::Services { class IDiscoveryService; }
namespace Bedrock::Services { struct DiscoveryConfig; }
namespace Core { class File; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakPeerConfiguration; }
namespace Scripting { class ModuleBindingBuilder; }
namespace SharedTypes::Legacy { struct ComponentItemData; }
namespace SharedTypes::v1_21_20::PoolAliases { struct Direct; }
namespace SharedTypes::v1_21_20::PoolAliases { struct Random; }
namespace SharedTypes::v1_21_30 { struct TradeGroup; }
namespace SharedTypes::v1_21_30 { struct TradeItem; }
namespace SharedTypes::v1_21_30 { struct TradeItemList; }
namespace SharedTypes::v1_21_90 { struct CameraPresetFile; }
namespace Social::Events { class Event; }
namespace cereal { struct ReflectionCtx; }
namespace cohtml { class Binder; }
namespace mce { class Color; }
namespace mce { class UUID; }
class TraceState;
struct HC_CALL;
class DataDrivenRenderer;
class ExprToken;
class IClientInstance;
class IOptionRegistry;
class OptionRegistry;
class SearchQuery;
class TrialManager;
class UIControl;
class UIPropertyBag;
class WorldSeedModel;
struct BakedRenderControllerResults;
struct CloudConfiguration;
struct CommonLocTextPair;
struct ContentCatalogQueryData;
struct DataDrivenRendererPool;
struct DataDrivenRendererPreprocessingContext;
struct DurableSearchResults;
struct ExtractedDataDataDrivenModel;
struct ExtractedRenderController;
struct ModificationOperation;
struct ProductSku;
struct Purchase;
struct RealmsWorldInfo;
struct ResourceOffset;
struct SkinPackMeta;
struct cgltf_options;
struct jsmn_parser;
struct mi_block_s;
struct mi_commit_mask_s;
struct mi_heap_s;
struct mi_memid_s;
struct mi_os_mem_config_s;
struct mi_os_tld_s;
struct mi_page_queue_s;
struct mi_page_s;
struct mi_process_info_s;
struct mi_random_cxt_s;
struct mi_segment_s;
struct mi_segments_tld_s;
struct mi_stat_count_s;
struct mi_stat_counter_s;
struct mi_stats_s;
namespace MainGameCore { class WinMain; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace mce { struct BufferResourceService; }
namespace mce::framebuilder { class FrameBuilder; }
namespace mce::framebuilder { struct PerCascadeRenderingParameters; }
namespace mce::framebuilder { struct ShadowRange; }
// clang-format on

// functions
// NOLINTBEGIN
MCAPI void BedrockLogOut(uint const _priority, char const* pszFormat, ...);

#ifdef LL_PLAT_C
MCAPI void CoherentBind(::cohtml::Binder* binder, ::Vec3* data);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::FlatWorldLayer* layer);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                            binder,
    ::IMarketplacePackDownloader::MarketplacePackDownloadStatus* marketplacePackDownloadStatus
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::FlatWorldPreset* options);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::RealmsWorldInfo* realmsWorldInfo);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::WorldSeedModel* seedTemplate);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::WorldTemplateInfo* worldTemplateInfo);
#endif

MCAPI ::SharedTypes::CreativeItemCategory CreativeItemCategoryFromString(::std::string const& str);

#ifdef LL_PLAT_S
MCAPI void* DefaultMemAllocFunction(uint64 size, uint memoryType);

MCAPI void DefaultMemFreeFunction(void* pointer, uint memoryType);
#endif

#ifdef LL_PLAT_C
MCAPI long DoesLocalGameRuntimeDllExist(bool& exists);
#endif

#ifdef LL_PLAT_S
MCAPI bool DoesMockCallMatch(::HC_CALL const* mockCall, ::HC_CALL const* originalCall);
#endif

MCAPI ::HashedString const& EntityCanonicalName(::ActorType entityType);

MCAPI ::ActorType EntityTypeFromString(::std::string const& str);

MCAPI ::std::string EntityTypeIdWithoutCategories(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToFormattedLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI void EntityTypeToStringAndNamespace(::ActorType entityType, ::std::string& nameOut, ::std::string& namespaceOut);

MCAPI double GetEngagementMetricsTimeSinceAppStart_DEPRECATED();

MCAPI ::std::map<::std::string, ::std::string> GetMobProperties(::Actor const* mob);

#ifdef LL_PLAT_S
MCAPI ::TraceState& GetTraceState();
#endif

#ifdef LL_PLAT_C
MCAPI long InitializeGameRuntimeDll(uint64 flags, ::_INITIALIZE_OPTIONS* const options);
#endif

MCAPI ::InventoryContentPacket InventoryContentPacketFromPlayerInventoryId(::ContainerID id, ::Player& player);

#ifdef LL_PLAT_C
MCAPI long IsPackageFamilyNameInstalled(ushort const* familyName, bool& isInstalled);

MCAPI bool IsUseLocalServicesRegistryOverrideSet();

MCAPI long LoadGameRuntimeDll();

MCAPI auto LoadGetPackagesByPackageFamilyFn() -> int64 (*)();

MCAPI auto LoadRegGetValueWFn() -> int64 (*)();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::optional<::LogLevel> LogLevelFromString(::std::string const& str);

MCAPI bool Mock_Internal_HCHttpCallPerformAsync(::HC_CALL* originalCall);

MCAPI long Mock_Internal_ReadRequestBodyIntoMemory(
    ::HC_CALL*                                         originalCall,
    ::std::vector<uchar, ::http_stl_allocator<uchar>>* bodyBytes
);
#endif

#ifdef LL_PLAT_C
MCAPI void NGXInvalidParameterHandler(
    wchar_t const* expression,
    wchar_t const* function,
    wchar_t const* file,
    uint           line,
    uint64         pReserved
);

MCAPI bool NGXSafeInitializeLog(
    wchar_t const* InPathToValidate,
    wchar_t const* InFileName,
    int            MinimumLoggingLevel,
    void (*logcallback)(char const*, ::NVSDK_NGX_Logging_Level, ::NVSDK_NGX_Feature),
    bool DisableOtherLoggingSinks
);
#endif

MCAPI ::PackType PackTypeFromString(::std::string const& value);

#ifdef LL_PLAT_C
MCAPI void PlatformBedrockLogOut(char const* buf, uint64 nullTerminatorPos);
#endif

#ifdef LL_PLAT_S
MCAPI void PlatformBedrockLogOut(uint const _priority, char const* buf, uint64 nullTerminatorPos);
#endif

MCAPI void PushCircularReference(
    ::std::unordered_map<::BlockPos, ::RedstoneTorchCapacitor*>&                      relatedTorches,
    ::BlockPos const&                                                                 pos,
    ::std::queue<::RedstoneTorchCapacitor*, ::std::deque<::RedstoneTorchCapacitor*>>& list
);

#ifdef LL_PLAT_C
MCAPI bool ReadJpegFile(::Core::Path const& fileName, int readMode);

MCAPI bool ShouldUseDllLocalServices();

MCAPI long StringCchCatW(wchar_t* pszDest, uint64 cchDest, wchar_t const* pszSrc);

MCAPI long StringCchCopyW(wchar_t* pszDest, uint64 cchDest, wchar_t const* pszSrc);
#endif

MCAPI ::std::string const& StringFromPackType(::PackType value);

#ifdef LL_PLAT_C
MCAPI ::edu::Role StringToADRole(::std::string const& str);
#endif

MCAPI uint SuperFastHashIncremental(char const* data, uint64 len, uint lastHash);

MCAPI ::SharedTypes::Legacy::UseAnimation UseAnimationFromString(::std::string const& str);

#ifdef LL_PLAT_C
MCAPI HRESULT XalCleanupAsync(::XAsyncBlock* async);

MCAPI ::Bedrock::Threading::Async<::ContentCatalogQueryData::Done> _addCatalogItemsFromSearch(
    ::SearchQuery const&                         query,
    ::DurableSearchResults const&                response,
    ::std::shared_ptr<::ContentCatalogQueryData> request
);
#endif

MCAPI void _addEnvironmentSubfilter(
    ::std::string const&                 legacyPredicate,
    ::FilterGroup::CollectionType        type,
    ::std::string const&                 filterName,
    ::SharedTypes::Legacy::FilterSubject subject,
    ::FilterOperator                     op,
    ::ActorFilterGroup::Processing       process
);

MCAPI void _addLegacyFilterDefinition(
    ::std::string const&                 legacyPredicate,
    ::FilterGroup::CollectionType        type,
    ::std::string const&                 filterName,
    ::SharedTypes::Legacy::FilterSubject subject,
    ::FilterOperator                     op,
    ::ActorFilterGroup::Processing       process
);

#ifdef LL_PLAT_C
MCAPI void _addToMessageHistory(::std::deque<::std::string>& messages, ::std::string const& message);

MCAPI ::std::string _appendToLocTable(
    ::std::unordered_map<::std::string, ::std::string> const& dictionary,
    ::std::string const&                                      keyPrefix,
    ::std::string const&                                      keySuffix
);

MCAPI ::ShadowRenderingParameters::ShadowMap _calculateCascade(
    float                                                     fov,
    float                                                     aspectRatio,
    float                                                     resolution,
    ::mce::framebuilder::ShadowRange const&                   range,
    ::glm::mat4x4 const&                                      playerView,
    ::glm::vec3 const&                                        viewPos,
    ::glm::vec3 const&                                        up,
    ::glm::mat4x4 const&                                      worldToLight,
    ::glm::mat4x4 const&                                      lightToWorld,
    ::glm::vec3 const&                                        playerPosition,
    float                                                     maxWorldTexelSnappingPosition,
    float const                                               zNear,
    float const                                               maxShadowFrustumRadius,
    ::mce::framebuilder::PerCascadeRenderingParameters const& renderingParameters
);
#endif

MCAPI void _checkTickedActorsForOutOfWorld(::ActorOwnerComponent& actorOwnerComponent);

#ifdef LL_PLAT_C
MCAPI bool _chunkSeesSkyDirectly(::BlockPos const& worldMin, ::BlockSource& region);

MCAPI ::glm::vec3 _clampShadowAngle(::glm::vec3 const& lightDir, ::glm::vec3 const& up, float shadowClampAngle);

MCAPI bool _clientHasMenuUI(::IClientInstance const* client);

MCAPI void _computeLookAtXYZMat(::Matrix& rotationMatrix, ::Vec3 const& lookAtDelta);

MCAPI bool _extractConstructionData(
    ::CompoundTag const&          tag,
    ::ActorDefinitionIdentifier&  outDefinition,
    ::Vec3&                       outPosition,
    ::Vec2&                       outRotation,
    ::DataLoadHelper&             dataLoadHelper,
    ::DimensionHeightRange const& heightRange
);
#endif

#ifdef LL_PLAT_S
MCAPI bool _extractConstructionData(
    ::CompoundTag const&          tag,
    ::ActorDefinitionIdentifier&  outDefinition,
    ::Vec3&                       outPosition,
    ::Vec2&                       outRotation,
    ::DataLoadHelper&             dataLoadHelper,
    ::DimensionHeightRange const& heightRange
);
#endif

MCAPI void _fillCommonScriptPluginProperties(
    ::Social::Events::Event&    event,
    ::ScriptPluginResult const& pluginResult,
    bool                        isClient
);

#ifdef LL_PLAT_C
MCAPI void _forEachObject(
    ::Json::Value&                                                                  value,
    ::brstd::function_ref<void(::Json::Value&, ::std::string_view, ::Json::Value&)> callback
);

MCAPI ::std::vector<::BlockPos> _generateChunkStartPositions(::AABB const& area);

MCAPI ::std::vector<::std::string> _getPlatfromLegacyTranserPackIdList();

MCAPI ::cg::MipMapSupport _globalMipMapSupport();

MCAPI bool _haveSameScrollSection(::std::weak_ptr<::UIControl> const& a, ::std::weak_ptr<::UIControl> const& b);

MCAPI bool _isCoinBundleSku(::ProductSku const& sku);

MCAPI bool _isLegacyDurableSku(::ProductSku const& sku);
#endif

MCAPI ::Block const* _loadLayerBlock(::Json::Value const& layer);

#ifdef LL_PLAT_C
MCAPI void _mi_abandoned_collect(::mi_heap_s* heap, bool force, ::mi_segments_tld_s* tld);

MCAPI void _mi_abandoned_reclaim_all(::mi_heap_s* heap, ::mi_segments_tld_s* tld);

MCAPI void* _mi_arena_alloc_aligned(
    uint64         size,
    uint64         alignment,
    uint64         align_offset,
    bool           commit,
    bool           allow_large,
    int            req_arena_id,
    ::mi_memid_s*  memid,
    ::mi_os_tld_s* tld
);

MCAPI void _mi_arena_collect(bool force_purge, ::mi_stats_s* stats);

MCAPI void _mi_arena_free(void* p, uint64 size, uint64 committed_size, ::mi_memid_s memid, ::mi_stats_s* stats);

MCAPI bool _mi_arena_memid_is_suitable(::mi_memid_s memid, int request_arena_id);

MCAPI void _mi_arena_unsafe_destroy_all(::mi_stats_s* stats);

MCAPI bool
_mi_bitmap_claim(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx, bool* any_zero);

MCAPI bool _mi_bitmap_claim_across(
    ::std::atomic<uint64>* bitmap,
    uint64                 bitmap_fields,
    uint64                 count,
    uint64                 bitmap_idx,
    bool*                  pany_zero
);

MCAPI bool
_mi_bitmap_is_claimed_across(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCAPI bool _mi_bitmap_try_claim(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCAPI bool _mi_bitmap_try_find_claim_field(::std::atomic<uint64>* bitmap, uint64 idx, uint64 count, uint64* bitmap_idx);

MCAPI bool _mi_bitmap_try_find_from_claim_across(
    ::std::atomic<uint64>* bitmap,
    uint64                 bitmap_fields,
    uint64                 start_field_idx,
    uint64                 count,
    uint64*                bitmap_idx
);

MCAPI bool _mi_bitmap_unclaim(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCAPI bool
_mi_bitmap_unclaim_across(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCAPI int64 _mi_clock_end(int64 start);

MCAPI int64 _mi_clock_now();

MCAPI int64 _mi_clock_start();

MCAPI uint64 _mi_commit_mask_committed_size(::mi_commit_mask_s const* cm, uint64 total);

MCAPI uint64 _mi_current_thread_count();

MCAPI void _mi_deferred_free(::mi_heap_s* heap, bool force);

MCAPI void _mi_error_message(int err, char const* fmt, ...);

MCAPI void _mi_fprintf(void (*out)(char const*, void*), void* arg, char const* fmt, ...);

MCAPI void _mi_fputs(void (*out)(char const*, void*), void* arg, char const* prefix, char const* message);

MCAPI bool _mi_free_delayed_block(::mi_block_s* block);

MCAPI void _mi_free_generic(::mi_segment_s const* segment, ::mi_page_s* page, bool is_local, void* p);

MCAPI void _mi_heap_collect_abandon(::mi_heap_s* heap);

MCAPI void _mi_heap_collect_retired(::mi_heap_s* heap, bool force);

MCAPI void _mi_heap_delayed_free_all(::mi_heap_s* heap);

MCAPI bool _mi_heap_delayed_free_partial(::mi_heap_s* heap);

MCAPI void _mi_heap_destroy_pages(::mi_heap_s* heap);

MCAPI void* _mi_heap_malloc_zero(::mi_heap_s* heap, uint64 size, bool zero);

MCAPI void* _mi_heap_malloc_zero_ex(::mi_heap_s* heap, uint64 size, bool zero, uint64 huge_alignment);

MCAPI bool _mi_heap_memid_is_suitable(::mi_heap_s* heap, ::mi_memid_s memid);

MCAPI uint64 _mi_heap_random_next(::mi_heap_s* heap);

MCAPI void _mi_heap_set_default_direct(::mi_heap_s* heap);

MCAPI void _mi_heap_unsafe_destroy_all();

MCAPI bool _mi_is_main_thread();

MCAPI void* _mi_malloc_generic(::mi_heap_s* heap, uint64 size, bool zero, uint64 huge_alignment);

MCAPI void _mi_options_init();

MCAPI void* _mi_os_alloc(uint64 size, ::mi_memid_s* memid, ::mi_stats_s* tld_stats);

MCAPI void* _mi_os_alloc_aligned(
    uint64        size,
    uint64        alignment,
    bool          commit,
    bool          allow_large,
    ::mi_memid_s* memid,
    ::mi_stats_s* tld_stats
);

MCAPI void* _mi_os_alloc_aligned_at_offset(
    uint64        size,
    uint64        alignment,
    uint64        offset,
    bool          commit,
    bool          allow_large,
    ::mi_memid_s* memid,
    ::mi_stats_s* tld_stats
);

MCAPI void* _mi_os_alloc_huge_os_pages(
    uint64        pages,
    int           numa_node,
    int64         max_msecs,
    uint64*       pages_reserved,
    uint64*       psize,
    ::mi_memid_s* memid
);

MCAPI bool _mi_os_commit(void* addr, uint64 size, bool* is_zero, ::mi_stats_s* tld_stats);

MCAPI void _mi_os_free(void* p, uint64 size, ::mi_memid_s memid, ::mi_stats_s* tld_stats);

MCAPI void _mi_os_free_ex(void* addr, uint64 size, bool still_committed, ::mi_memid_s memid, ::mi_stats_s* tld_stats);

MCAPI void* _mi_os_get_aligned_hint(uint64 try_alignment, uint64 size);

MCAPI uint64 _mi_os_good_alloc_size(uint64 size);

MCAPI bool _mi_os_has_overcommit();

MCAPI bool _mi_os_has_virtual_reserve();

MCAPI void _mi_os_init();

MCAPI uint64 _mi_os_large_page_size();

MCAPI uint64 _mi_os_numa_node_count_get();

MCAPI int _mi_os_numa_node_get(::mi_os_tld_s* tld);

MCAPI uint64 _mi_os_page_size();

MCAPI bool _mi_os_purge(void* p, uint64 size, ::mi_stats_s* stats);

MCAPI bool _mi_os_purge_ex(void* p, uint64 size, bool allow_reset, ::mi_stats_s* stats);

MCAPI uint64 _mi_os_random_weak(uint64 extra_seed);

MCAPI bool _mi_os_reset(void* addr, uint64 size, ::mi_stats_s* stats);

MCAPI bool _mi_os_use_large_page(uint64 size, uint64 alignment);

MCAPI void _mi_page_abandon(::mi_page_s* page, ::mi_page_queue_s* pq);

MCAPI void _mi_page_free(::mi_page_s* page, ::mi_page_queue_s* pq, bool force);

MCAPI void _mi_page_free_collect(::mi_page_s* page, bool force);

MCAPI void* _mi_page_malloc(::mi_heap_s* heap, ::mi_page_s* page, uint64 size, bool zero);

MCAPI ::mi_block_s* _mi_page_ptr_unalign(::mi_segment_s const* segment, ::mi_page_s const* page, void const* p);

MCAPI uint64 _mi_page_queue_append(::mi_heap_s* heap, ::mi_page_queue_s* pq, ::mi_page_queue_s* append);

MCAPI void _mi_page_reclaim(::mi_heap_s* heap, ::mi_page_s* page);

MCAPI void _mi_page_retire(::mi_page_s* page);

MCAPI bool _mi_page_try_use_delayed_free(::mi_page_s* page, ::mi_delayed_e delay, bool override_never);

MCAPI void _mi_page_unfull(::mi_page_s* page);

MCAPI void _mi_page_use_delayed_free(::mi_page_s* page, ::mi_delayed_e delay, bool override_never);

MCAPI bool _mi_preloading();

MCAPI int _mi_prim_alloc(
    uint64 size,
    uint64 try_alignment,
    bool   commit,
    bool   allow_large,
    bool*  is_large,
    bool*  is_zero,
    void** addr
);

MCAPI int _mi_prim_alloc_huge_os_pages(void* hint_addr, uint64 size, int numa_node, bool* is_zero, void** addr);

MCAPI int64 _mi_prim_clock_now();

MCAPI int _mi_prim_commit(void* addr, uint64 size, bool* is_zero);

MCAPI int _mi_prim_decommit(void* addr, uint64 size, bool* needs_recommit);

MCAPI int _mi_prim_free(void* addr, uint64 size);

MCAPI bool _mi_prim_getenv(char const* name, char* result, uint64 result_size);

MCAPI void _mi_prim_mem_init(::mi_os_mem_config_s* config);

MCAPI uint64 _mi_prim_numa_node();

MCAPI uint64 _mi_prim_numa_node_count();

MCAPI void _mi_prim_out_stderr(char const* msg);

MCAPI void _mi_prim_process_info(::mi_process_info_s* pinfo);

MCAPI bool _mi_prim_random_buf(void* buf, uint64 buf_len);

MCAPI int _mi_prim_reset(void* addr, uint64 size);

MCAPI void _mi_prim_thread_associate_default_heap(::mi_heap_s* heap);

MCAPI void _mi_prim_thread_done_auto_done();

MCAPI void _mi_prim_thread_init_auto_done();

MCAPI void _mi_random_init(::mi_random_cxt_s* ctx);

MCAPI void _mi_random_init_weak(::mi_random_cxt_s* ctx);

MCAPI uint64 _mi_random_next(::mi_random_cxt_s* ctx);

MCAPI void _mi_random_reinit_if_weak(::mi_random_cxt_s* ctx);

MCAPI void _mi_segment_huge_page_reset(::mi_segment_s* segment, ::mi_page_s* page, ::mi_block_s* block);

MCAPI void _mi_segment_map_allocated_at(::mi_segment_s const* segment);

MCAPI void _mi_segment_map_freed_at(::mi_segment_s const* segment);

MCAPI void _mi_segment_page_abandon(::mi_page_s* page, ::mi_segments_tld_s* tld);

MCAPI ::mi_page_s* _mi_segment_page_alloc(
    ::mi_heap_s*         heap,
    uint64               block_size,
    uint64               page_alignment,
    ::mi_segments_tld_s* tld,
    ::mi_os_tld_s*       os_tld
);

MCAPI void _mi_segment_page_free(::mi_page_s* page, bool force, ::mi_segments_tld_s* tld);

MCAPI uchar* _mi_segment_page_start(::mi_segment_s const* segment, ::mi_page_s const* page, uint64* page_size);

MCFOLD void _mi_segment_thread_collect(::mi_segments_tld_s* tld);

MCAPI void _mi_stat_counter_increase(::mi_stat_counter_s* stat, uint64 amount);

MCAPI void _mi_stat_decrease(::mi_stat_count_s* stat, uint64 amount);

MCAPI void _mi_stat_increase(::mi_stat_count_s* stat, uint64 amount);

MCAPI void _mi_stats_done(::mi_stats_s* stats);

MCAPI uint64 _mi_strlen(char const* s);

MCAPI void _mi_thread_data_collect();

MCAPI void _mi_thread_done(::mi_heap_s* heap);

MCAPI uint64 _mi_thread_id();

MCAPI void _mi_verbose_message(char const* fmt, ...);

MCAPI void _mi_warning_message(char const* fmt, ...);
#endif

MCAPI bool _parseEnchantInfo(::Json::Value& enchants, ::SpecificEnchantFunction::EnchantInfo& info);

MCAPI ::std::optional<::std::vector<::BlockLayer>>
_parseLayersV3(::Json::Value const& root, ::LevelData const& levelData);

#ifdef LL_PLAT_C
MCAPI ::glm::vec3 _quantizeLightDirection(float angle, float perpendicularAngle, int step);
#endif

MCAPI ::std::string _resultItemName(::Recipe const& recipe);

MCAPI void _runActorLegacyTick(
    ::EntityContext&            entity,
    ::ActorOwnerComponent&      actorOwnerComponent,
    ::ActorTickNeededComponent& actorTickNeededComponent
);

MCAPI void _runActorLimitedLifetimeTick(::ActorOwnerComponent& actorOwnerComponent);

MCAPI void _runGlobalActorLegacyTick(::ActorOwnerComponent& actorOwnerComponent);

MCAPI ::std::unique_ptr<::ListTag> _saveBlockList(::std::vector<::BlockType const*> const& blockList);

#ifdef LL_PLAT_C
MCAPI void _saveToOptions(::std::deque<::std::string>& messages, ::IOptionRegistry& options, ::OptionID optionId);
#endif

MCAPI bool _spawnMinecart(
    ::MinecartType     type,
    ::Actor*           spawningActor,
    ::BlockSource&     region,
    ::Vec3 const&      pos,
    ::ItemStack const& item
);

#ifdef LL_PLAT_C
MCAPI bool _stringLessThan(::std::string const& str1, ::std::string const& str2);
#endif

MCAPI void _tickAbilitiesComponent(
    ::ActorOwnerComponent& actorOwnerComponent,
    ::PlayerComponent&     playerComponent,
    ::AgentCapabilities&   capabilities
);

MCAPI void _tickBalloonComponent(::ActorOwnerComponent& actorOwnerComponent, ::BalloonComponent& balloonComponent);

MCAPI void _tickBodyControlComponent(
    ::ActorOwnerComponent&        actorOwnerComponent,
    ::BodyControlComponent&       bodyControlComponent,
    ::ActorRotationComponent&     actorRotationComponent,
    ::MobBodyRotationComponent&   mobBodyRotationComponent,
    ::ActorHeadRotationComponent& actorHeadRotationComponent
);

MCAPI void
_tickBoostableComponent(::ActorOwnerComponent& actorOwnerComponent, ::BoostableComponent& boostableComponent);

MCAPI void _tickBossComponent(
    ::ActorOwnerComponent&               actorOwnerComponent,
    ::BossComponent&                     bossComponent,
    ::Optional<::MobFlagComponent const> mobFlagComponent
);

MCAPI void
_tickBreedableComponent(::ActorOwnerComponent& actorOwnerComponent, ::BreedableComponent& breedableComponent);

#ifdef LL_PLAT_C
MCAPI void _tickBubbleColumnState(::EntityContext& entity, ::ActorOwnerComponent& actorOwnerComponent);
#endif

MCAPI void _tickBurnsInDaylightComponent(
    ::ActorOwnerComponent&            actorOwnerComponent,
    ::BurnsInDaylightComponent const& burnsInDaylightComponent
);

MCAPI void _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::CommandBlockComponent& commandBlockComponent);

MCAPI void _tickDamageOverTimeComponent(
    ::ActorOwnerComponent&     actorOwnerComponent,
    ::DamageOverTimeComponent& damageOverTimeComponent
);

MCAPI void _tickDanceComponent(
    ::ActorOwnerComponent&        actorOwnerComponent,
    ::DanceComponent&             danceComponent,
    ::StateVectorComponent const& stateVectorComponent
);

MCAPI void _tickEnvironmentSensorComponent(::ActorOwnerComponent& actorOwnerComponent);

MCAPI void _tickExplodeComponent(::ActorOwnerComponent& actorOwnerComponent, ::ExplodeComponent& explodeComponent);

MCAPI void _tickHurtOnConditionComponent(::ActorOwnerComponent& actorOwnerComponent);

MCAPI void _tickInsomniaComponent(::ActorOwnerComponent& actorOwnerComponent, ::InsomniaComponent& insomniaComponent);

MCAPI void _tickTeleportComponent(::ActorOwnerComponent& actorOwnerComponent, ::TeleportComponent& teleportComponent);

MCAPI void _tickTimerComponent(::ActorOwnerComponent& actorOwnerComponent, ::TimerComponent& timerComponent);

MCAPI void _tickTimerComponent(
    ::ActorOwnerComponent&        actorOwnerComponent,
    ::HopperComponent&            hopperComponent,
    ::StateVectorComponent const& stateVectorComponent
);

MCAPI void _tickTransformationComponent(
    ::ActorOwnerComponent&     actorOwnerComponent,
    ::TransformationComponent& transformationComponent
);

#ifdef LL_PLAT_C
MCAPI ::OfferCategory _tryDetermineOfferCategory(::ProductSku const& sku);

MCAPI ::ProductType _tryDetermineProductType(::ProductSku const& sku);

MCAPI void _updateFramePacing(::std::shared_ptr<::OptionRegistry> const& Options);

MCAPI void _validateControlNamesRecursive(
    ::Json::Value const&          control,
    ::std::string const&          namePath,
    ::std::vector<::std::string>& invalidControlNames
);

MCAPI ::Destination addExpressionOrConstantResources(
    ::std::vector<float>&            constantBuffer,
    ::std::vector<::ExpressionNode>& expressionBuffer,
    ::ExpressionNode const&          expr,
    char const*                      defaultExpression,
    float                            defaultValue
);

MCAPI void addToCollection(
    ::std::vector<::std::shared_ptr<::UIControl>>& controls,
    ::UIControl&                                   control,
    ::ControlCollectionFlag                        flag
);

MCAPI void addToCollectionSortedByZOrder(
    ::std::vector<::std::shared_ptr<::UIControl>>& controls,
    ::UIControl&                                   control,
    ::ControlCollectionFlag                        flag
);
#endif

MCAPI void addToFillQueue(
    ::CircuitSceneGraph&                                                      graph,
    ::CircuitComponentList&                                                   powerAssociationMap,
    ::BaseCircuitComponent*                                                   newComponent,
    ::CircuitTrackingInfo&                                                    info,
    ::BlockPos const&                                                         newPos,
    uchar                                                                     face,
    ::std::queue<::CircuitTrackingInfo, ::std::deque<::CircuitTrackingInfo>>& positions
);

#ifdef LL_PLAT_C
MCAPI ushort bakeGeneratedDraws(
    ::ExtractedDataDataDrivenModel const&     extractedData,
    uint                                      geoIdx,
    ::std::vector<::std::string> const&       materialRegex,
    ::std::vector<::std::string> const&       partVisibilityRegex,
    ::DataDrivenRendererPreprocessingContext& ctx
);

MCAPI ::BakedRenderControllerResults bakeRenderController(
    ::ExtractedDataDataDrivenModel const&     extractedData,
    ::ExtractedRenderController const&        renderController,
    ::DataDrivenRendererPreprocessingContext& ctx
);
#endif

MCAPI void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);

MCAPI void bindModuleToDDUI(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI ::KeyOrNameResult
buildActorDisplayName(::ActorType actorType, ::std::string const& nameTag, ::Actor const* actor);

MCAPI void buildItemsSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::Legacy::ComponentItemData>>& root,
    ::SemVersion const&                                                                                      version
);

#ifdef LL_PLAT_C
MCAPI void* cgltf_default_alloc(void* user, uint64 size);

MCAPI ::cgltf_result cgltf_default_file_read(
    ::cgltf_memory_options const* memory_options,
    ::cgltf_file_options const*   file_options,
    char const*                   path,
    uint64*                       size,
    void**                        data
);

MCAPI void cgltf_default_file_release(
    ::cgltf_memory_options const* memory_options,
    ::cgltf_file_options const*   file_options,
    void*                         data
);

MCAPI void cgltf_default_free(void* user, void* ptr);

MCAPI int cgltf_element_read_float(
    uchar const*           element,
    ::cgltf_type           type,
    ::cgltf_component_type component_type,
    int                    normalized,
    float*                 out,
    uint64                 element_size
);

MCAPI void cgltf_free(::cgltf_data* data);

MCAPI int cgltf_json_strcmp(::jsmntok_t const* tok, uchar const* json_chunk, char const* str);

MCAPI ::cgltf_result
cgltf_parse_json(::cgltf_options* options, uchar const* json_chunk, uint64 size, ::cgltf_data** out_data);

MCAPI int cgltf_parse_json_anisotropy(
    ::cgltf_options*    options,
    ::jsmntok_t const*  tokens,
    int                 i,
    uchar const*        json_chunk,
    ::cgltf_anisotropy* out_anisotropy
);

MCAPI int cgltf_parse_json_attribute_list(
    ::cgltf_options*    options,
    ::jsmntok_t const*  tokens,
    int                 i,
    uchar const*        json_chunk,
    ::cgltf_attribute** out_attributes,
    uint64*             out_attributes_count
);

MCAPI int cgltf_parse_json_cameras(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCAPI int cgltf_parse_json_diffuse_transmission(
    ::cgltf_options*              options,
    ::jsmntok_t const*            tokens,
    int                           i,
    uchar const*                  json_chunk,
    ::cgltf_diffuse_transmission* out_diff_transmission
);

MCAPI int cgltf_parse_json_dispersion(
    ::jsmntok_t const*  tokens,
    int                 i,
    uchar const*        json_chunk,
    ::cgltf_dispersion* out_dispersion
);

MCAPI int cgltf_parse_json_iridescence(
    ::cgltf_options*     options,
    ::jsmntok_t const*   tokens,
    int                  i,
    uchar const*         json_chunk,
    ::cgltf_iridescence* out_iridescence
);

MCAPI int cgltf_parse_json_lights(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCAPI int cgltf_parse_json_material_mapping_data(
    ::cgltf_options*          options,
    ::jsmntok_t const*        tokens,
    int                       i,
    uchar const*              json_chunk,
    ::cgltf_material_mapping* out_mappings,
    uint64*                   offset
);

MCAPI int cgltf_parse_json_root(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCAPI int cgltf_parse_json_string_array(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    char***            out_array,
    uint64*            out_size
);

MCAPI int cgltf_parse_json_texture_view(
    ::cgltf_options*      options,
    ::jsmntok_t const*    tokens,
    int                   i,
    uchar const*          json_chunk,
    ::cgltf_texture_view* out_texture_view
);

MCAPI int cgltf_parse_json_unprocessed_extension(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_extension* out_extension
);

MCAPI int cgltf_parse_json_variants(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCAPI int cgltf_skip_json(::jsmntok_t const* tokens, int i);
#endif

MCAPI void checkAndAddConvertedVariantFilter(
    ::Json::Value&       anyOfFilter,
    ::std::string const  biomeName,
    ::std::string const& targetBiome,
    int                  targetVariant
);

MCAPI void checkComponent(
    ::CircuitSceneGraph&                                                      graph,
    ::CircuitComponentList&                                                   powerAssociationMap,
    ::CircuitComponentType                                                    typeId,
    uchar                                                                     id,
    ::BlockPos const&                                                         otherPos,
    ::CircuitTrackingInfo&                                                    info,
    ::std::queue<::CircuitTrackingInfo, ::std::deque<::CircuitTrackingInfo>>& positions,
    bool                                                                      goingDown
);

#ifdef LL_PLAT_C
MCAPI bool checkMinMaxClientVer(::Json::Value const& documentObject, bool pascalCase);

MCAPI bool checkMinMaxClientVer(::std::string const& minClientVersion, ::std::string const& maxClientVersion);
#endif

MCAPI void convertBiomesFilterToGenericFilter(::Json::Value& tradeItem);

#ifdef LL_PLAT_C
MCAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)> createDefaultUniqueRakPeer();
#endif

MCAPI ::AssetWorkItemFactory<
    ::IteratePackResult,
    ::brstd::move_only_function<::AnyWorkItem(::brstd::copyable_function<::AnyWorkItem(::IteratePackResult&&)>)>>
createIteratePackWorkItem(
    ::PackInstance const& pack,
    uint                  packIndex,
    ::Core::Path          path,
    ::Core::Path          extension,
    ::std::vector<uint>   advancePackLayers,
    uint                  batchSize
);

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeEventMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeEventMap();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeLOCMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeLOCMap();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::PackType, ::std::string> createPackTypeToStringMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::PackType, ::std::string> createPackTypeToStringMap();
#endif

MCAPI ::AssetWorkItemFactory<
    ::ParseJsonResult,
    ::brstd::move_only_function<::AnyWorkItem(::brstd::copyable_function<::AnyWorkItem(::ParseJsonResult&&)>)>>
createParseJsonFileWorkItem(::IteratePackResult packFile);

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::std::string, ::PackType> createStringToPackTypeMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::std::string, ::PackType> createStringToPackTypeMap();

MCAPI ::ExprToken createTokenFromUIDefVal(::Json::Value const& resVal);
#endif

MCAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>
createUniqueRakPeer(::RakNet::RakPeerConfiguration const& config);

MCAPI ::Bedrock::NonOwnerPointer<::WorkerPool> createWorkerPool(
    ::std::string_view                                       name,
    ::Core::Profile::ThreadFrameType                         frameType,
    ::WorkerConfiguration const&                             config,
    ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>& destHandle
);

#ifdef LL_PLAT_C
MCAPI ::UIDefType defTypeFromString(::std::string const& str);

MCAPI ::std::string discoveryEnvironmentToString(::DiscoveryEnvironment const& environment);

MCAPI ::std::string dlcCheckerResultToString(::DlcCheckResult result);
#endif

MCAPI void doHorsePreTravelSystem(
    ::StrictEntityContext&                                               context,
    ::Optional<::VehicleComponent>                                       vehicleComponent,
    ::ActorDataFlagComponent const&                                      synchedActorDataComponent,
    ::AirSpeedComponent&                                                 airSpeed,
    ::ViewT<::StrictEntityContext, ::MobFlagComponent const> const&      mobCheck,
    ::ViewT<::StrictEntityContext, ::OnGroundFlagComponent const> const& onGroundCheck,
    ::EntityModifier<::HorseWasOnGroundPreTravelComponent> const&        mod
);

MCAPI void doLavaMoveSystem(
    ::StrictEntityContext const&,
    ::Optional<::NavigationComponent const>                        navigationComponent,
    ::AABBShapeComponent const&                                    aabbShapeComponent,
    ::ActorRotationComponent const&                                actorRotationComponent,
    ::ActorDataFlagComponent const&                                synchedActorDataComponent,
    ::FallDistanceComponent&                                       fallDistanceComponent,
    ::MobTravelComponent&                                          mobTravelComponent,
    ::StateVectorComponent&                                        stateVectorComponent,
    ::Optional<::CanStandOnPowderSnowComponent const>              canStandOnPowderSnowComponent,
    ::Optional<::CanStandOnPowderSnowFromEquipmentComponent const> canStandOnPowderSnowFromEquipmentComponent,
    ::IConstBlockSource const&                                     region
);

MCAPI void doPlayerMovementStatsEventSystem(
    ::StrictEntityContext&,
    ::ActorOwnerComponent&               actorOwnerComponent,
    ::PlayerPreMobTravelComponent const& playerPreMobTravelComponent,
    ::StateVectorComponent const&        stateVectorComponent
);

MCAPI void doResetMoveDirectionJumpPendingSystem(
    ::StrictEntityContext&,
    ::JumpPendingScaleComponent const&              jumpPendingScaleComponent,
    ::ActorDataFlagComponent const&                 actorDataFlagComponent,
    ::ActorDataControllingSeatIndexComponent const& controllingSeatIndexComponent,
    ::VehicleComponent const&                       vehicleComponent,
    ::MobTravelComponent&                           mobTravelComponent
);

MCAPI void
doResetPositionModeSystem(::StrictEntityContext&, ::PlayerPositionModeComponent& playerPositionModeComponent);

MCAPI void doTeleportInterpolatorResetSystem(
    ::StrictEntityContext&,
    ::Optional<::MovementInterpolatorComponent> movementInterpolatorComponent,
    ::PlayerPositionModeComponent const&        playerPositionModeComponent,
    ::FallDistanceComponent&                    fallDistanceComponent,
    ::StateVectorComponent&                     stateVectorComponent
);

MCAPI void doTeleportPositionModeEventSystem(
    ::StrictEntityContext&,
    ::ActorOwnerComponent&               actorOwnerComponent,
    ::PlayerPositionModeComponent const& playerPositionModeComponent
);

MCAPI void doTickNavigationTravelSystem(
    ::StrictEntityContext&                        context,
    ::ActorOwnerComponent&                        actorOwnerComponent,
    ::MobTravelComponent&                         mobTravelComponent,
    ::NavigationComponent&                        navigationComponent,
    ::EntityModifier<::MobTravelComponent> const& mod
);

MCAPI void doTickTriggerJumpSystem(
    ::StrictEntityContext const&                    context,
    ::ActorDataFlagComponent const&                 actorDataFlagComponent,
    ::ActorDataControllingSeatIndexComponent const& controllingSeatIndexComponent,
    ::VehicleComponent const&                       vehicleComponent,
    ::AABBShapeComponent const&                     aabbShapeComponent,
    ::StateVectorComponent const&                   stateVectorComponent,
    ::JumpPendingScaleComponent const&              jumpPendingScaleComponent,
    ::MovementAttributesComponent const&            attributesComponent,
    ::Optional<::OnGroundFlagComponent const>       onGroundFlagComponent,
    ::Optional<::DashActionComponent const>         dashActionComponent,
    ::Optional<::MobIsJumpingFlagComponent const>   mobIsJumping,
    ::Optional<::WasInLavaFlagComponent const>      wasInLava,
    ::Optional<::WasInWaterFlagComponent const>     wasInWater,
    ::EntityModifier<::TriggerJumpRequestComponent, ::PowerJumpFlagComponent, ::DashJumpFlagComponent> const& mod,
    ::IConstBlockSource const&                                                                                region
);

#ifdef LL_PLAT_C
MCAPI void doTrackTickingActors(
    ::StrictEntityContext&,
    ::LevelTickTrackingComponent& levelTickTrackingComponent,
    ::CurrentTickComponent const& currentTick
);
#endif

MCAPI void doTravelTypeSensingSystem(
    ::StrictEntityContext const&                   context,
    ::Optional<::MovementAbilitiesComponent const> abilitiesComponent,
    ::Optional<::WasInWaterFlagComponent const>    wasInWaterFlagComponent,
    ::Optional<::OnGroundFlagComponent const>      onGroundFlagComponent,
    ::Optional<::ImmuneToLavaDragComponent const>  immuneToLavaDragComponent,
    ::AABBShapeComponent const&                    aabbShapeComponent,
    ::SubBBsComponent const&                       subBBsComponent,
    ::ActorDataFlagComponent const&                synchedActorDataComponent,
    ::EntityModifier<
        ::AirTravelFlagComponent,
        ::GlidingTravelFlagComponent,
        ::GroundTravelFlagComponent,
        ::LavaTravelFlagComponent,
        ::WaterTravelFlagComponent,
        ::PlayerFlyingTravelComponent,
        ::LiquidTravelFlagComponent> const& mod,
    ::IConstBlockSource const&              region
);

#ifdef LL_PLAT_C
MCAPI void executeOnNearestStorageAreaForPath(
    ::Core::PathView                                                        path,
    ::brstd::function_ref<void(::std::shared_ptr<::Core::FileStorageArea>)> onSuccess,
    ::std::function<void()>                                                 onFailure
);

MCAPI void executeOnPrimaryUserStorageArea(
    ::std::function<void(::std::shared_ptr<::Core::FileStorageArea>)> onSuccess,
    ::std::function<void()>                                           onFailure
);
#endif

MCAPI ::srtp_err_status_t external_crypto_init();

MCAPI ::srtp_err_status_t external_hmac_alloc(::srtp_auth_t** a, int key_len, int out_len);

MCAPI ::srtp_err_status_t external_hmac_compute(void*, uchar const*, int, int tag_len, uchar* result);

MCAPI ::srtp_err_status_t external_hmac_dealloc(::srtp_auth_t* a);

MCAPI ::srtp_err_status_t external_hmac_init(void* state, uchar const* key, int key_len);

MCFOLD ::srtp_err_status_t external_hmac_start(void*);

MCFOLD ::srtp_err_status_t external_hmac_update(void*, uchar const*, int);

#ifdef LL_PLAT_C
MCAPI ::std::optional<::ExtractedDataDataDrivenModel>
extractModelData(::HashedString const& name, ::std::shared_ptr<::DataDrivenRenderer> const rendererPtr);

MCAPI void fillLangValue(
    ::std::string const&                                jsonFieldStr,
    ::std::string const&                                langCode,
    ::std::string const&                                modifiedCode,
    ::Json::Value const&                                documentObject,
    bool const                                          pascalCase,
    ::CommonLocTextPair&                                locTextPairToFill,
    ::std::unordered_map<::std::string, ::std::string>& locDictionary
);

MCAPI void fillPackIdentityListFromJson(
    ::std::vector<::PackIdVersion>& packIdentityListToFill,
    ::Json::Value const&            packIdentitiesJsonArray
);
#endif

MCAPI ::std::optional<::FlatWorldPresetID> flatWorldPresetIDFromString(::std::string const& str);

MCAPI ::std::optional<::TradeItem> fromSharedTypes(
    ::SharedTypes::v1_21_30::TradeItem trade,
    ::ItemRegistryRef const            itemRegistry,
    int                                defaultAux,
    bool                               usingUpcomingCreatorFeaturesExperiment
);

MCAPI int fseek(::Core::File& file, int64 offset, int origin);

MCAPI int64 ftell(::Core::File& file);

MCAPI ::std::string gatherTypeStrings(::std::vector<::Json::ValueType> const& types);

#ifdef LL_PLAT_C
MCAPI ::ResourceOffset generateExpressionOffset(
    ::ExpressionNode&&               expression,
    ::ExpressionOp                   expectedOperator,
    ::std::vector<::ExpressionNode>& outputExpressionList
);
#endif

MCAPI ::Json::Value getBiomeFilteredChoice(
    int const                           auxValue,
    ::std::vector<::std::string> const& biomes,
    ::Json::Value const&                originalItem
);

#ifdef LL_PLAT_C
MCAPI ::std::shared_ptr<::UIControl> getControlBreadthFirst(::UIControl* scope, ::std::string name);

MCAPI float getControlVariableValue(::UIControl& control, ::LayoutVariableType const type);

MCAPI void getControlsInternal(
    ::std::vector<::std::shared_ptr<::UIControl>>& result,
    ::std::function<bool(::UIControl const&)>      predicate,
    ::UIControl&                                   control
);

MCAPI ::Json::Value const& getDisplayProperties(::Json::Value const& resultObject, bool pascalCase);

MCAPI ::std::string const getEdition();
#endif

MCAPI ::Bedrock::FileType getFileType(::Core::PathView filePath, ::IFileAccess& fileAccess);

#ifdef LL_PLAT_C
MCAPI void getFirstControlInternal(
    ::std::shared_ptr<::UIControl>&                  result,
    ::std::function<bool(::UIControl const&)> const& predicate,
    ::UIControl&                                     control
);

MCAPI void getFirstVisibleControlInternal(
    ::std::shared_ptr<::UIControl>&                  result,
    ::std::function<bool(::UIControl const&)> const& predicate,
    ::UIControl&                                     control
);
#endif

MCAPI ::std::unordered_map<::FlatWorldPresetID, ::FlatWorldPreset> const& getFlatWorldPresets();

MCFOLD ::I18n& getI18n();

MCAPI ::std::string getInvalidRespawnBlockMessage(::DimensionType const& dimension);

#ifdef LL_PLAT_C
MCAPI ::std::vector<::PackIdVersion> getJsonPackIdVersion(::Json::Value const& objectArray);

MCAPI ::std::string getJsonString(::std::string const& key, ::Json::Value const& object);
#endif

MCAPI ::std::unordered_set<::Block const*> const getNetherBlendBlocks();

#ifdef LL_PLAT_C
MCAPI ::std::string const& getOperationString(::UIOperation operation);
#endif

MCAPI ::std::unordered_set<::BlockType const*> const getOverworldBlendBlocks();

MCAPI ::PackMaps const& getPackMaps();

#ifdef LL_PLAT_C
MCAPI ::std::string getPersonaFullDetailCondition();

MCAPI void getPropertyValue(::std::string_view value, ::ExprToken& tok, ::UIPropertyBag* bag);
#endif

MCAPI int& getSampleCount(
    ::std::vector<::std::pair<::MapSample, int>>& samples,
    ::mce::Color const&                           sampledColor,
    ::Block const&                                sampledBlock
);

#ifdef LL_PLAT_C
MCAPI ::std::string getStringOrParsedTextObject(
    ::Json::Value const&                                 value,
    ::std::function<::std::string(::std::string const&)> emoticonifyTextCallback
);

MCAPI ::SubChunk::SubChunkState getSubChunkState(::LevelChunk& levelChunk, short absoluteIndex);

MCAPI void getVisibleControlsInternal(::std::function<void(::UIControl&)> const& action, ::UIControl& control);
#endif

MCAPI void initBuildingBlocks();

MCAPI bool isChunkAtStage(::std::weak_ptr<::LevelChunk> lcwp, ::ChunkState stateToCheck);

#ifdef LL_PLAT_C
MCAPI bool isSkinPackExpiredRealms(::SkinPackMeta const& meta);
#endif

MCAPI ::std::string join(::std::string prefix, ::std::string_view chunkKey);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag);

#ifdef LL_PLAT_C
MCAPI int jsmn_parse(::jsmn_parser* parser, char const* js, uint64 len, ::jsmntok_t* tokens, uint64 num_tokens);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string keyLookup(
    ::std::unordered_map<::std::string, ::std::vector<char> const> const& keyMap,
    ::std::string const&                                                  packIdentity
);
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string keyLookup(
    ::std::unordered_map<::std::string, ::std::vector<char> const> const& keyMap,
    ::std::string const&                                                  packIdentity
);

MCAPI ::glm::vec3 makeAchromatopsiaXLinked(::glm::vec3 fragment);
#endif

MCAPI ::TextPacket makeAuthorMessage(
    ::TextPacketType               t,
    ::std::string                  author,
    ::std::string                  message,
    bool                           localize,
    ::std::optional<::std::string> filtered,
    ::std::string                  xuid,
    ::std::string                  platformId
);

#ifdef LL_PLAT_C
MCAPI ::glm::vec3 makeCool(::glm::vec3 fragment);

MCAPI ::glm::vec3 makeDeuteranopia(::glm::vec3 fragment);

MCAPI ::glm::vec3 makeGrayscale(::glm::vec3 fragment);
#endif

MCAPI ::std::string makeGuestDisplayName(::std::string hostName, ::SubClientId subclientId);

MCAPI ::mce::UUID makeGuestUUID(::mce::UUID const& hostUuid, ::SubClientId subclientId);

#ifdef LL_PLAT_C
MCAPI ::glm::vec3 makeInverted(::glm::vec3 fragment);
#endif

#ifdef LL_PLAT_S
MCAPI ::TextPacket makeMessageOnly(
    ::TextPacketType               t,
    ::std::string                  message,
    bool                           localize,
    ::std::optional<::std::string> filtered,
    ::std::string                  xuid,
    ::std::string                  platformId
);
#endif

#ifdef LL_PLAT_C
MCAPI ::TextPacket makeMessageOnly(
    ::TextPacketType               t,
    ::std::string                  message,
    bool                           localize,
    ::std::optional<::std::string> filtered,
    ::std::string                  xuid,
    ::std::string                  platformId
);
#endif

#ifdef LL_PLAT_S
MCAPI ::TextPacket makeMessageParams(
    ::TextPacketType             t,
    ::std::string                message,
    ::std::vector<::std::string> params,
    bool                         localize,
    ::std::string                xuid,
    ::std::string                platformId
);
#endif

#ifdef LL_PLAT_C
MCAPI ::TextPacket makeMessageParams(
    ::TextPacketType             t,
    ::std::string                message,
    ::std::vector<::std::string> params,
    bool                         localize,
    ::std::string                xuid,
    ::std::string                platformId
);

MCAPI ::glm::vec3 makeProtanopia(::glm::vec3 fragment);

MCAPI ::DataDrivenRendererPool makeSeededFallbackPool(::std::weak_ptr<::mce::BufferResourceService> bufferService);

MCAPI ::glm::vec3 makeSepia(::glm::vec3 fragment);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::shared_ptr<::Bedrock::Services::IDiscoveryService> makeServerDiscoveryService(
    ::Bedrock::Services::DiscoveryConfig const&             discoveryConfig,
    ::std::shared_ptr<::Bedrock::Http::DispatcherInterface> dispatcher,
    ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>     eventing
);
#endif

#ifdef LL_PLAT_C
MCAPI ::glm::vec3 makeTritanopia(::glm::vec3 fragment);

MCAPI ::glm::vec3 makeWarm(::glm::vec3 fragment);

MCAPI int nvFPrintf(::_iobuf* stream, char const* fmt, ...);

MCAPI int nvSWprintf(wchar_t* dst, uint64 dstLen, wchar_t const* fmt, ...);

MCAPI int nvSprintf(char* dst, uint64 dstLen, char const* fmt, ...);

MCAPI ::std::ostream& operator<<(::std::ostream& os, ::cg::TextureSetLayerType const& type);
#endif

MCAPI ::SharedTypes::v1_21_90::CameraPresetFile parseLegacy(
    ::Puv::Input const&                                      input,
    ::Puv::Logger&                                           logger,
    ::MolangVersion                                          molangVersion,
    ::gsl::not_null<::cereal::ReflectionCtx const*>          ctx,
    ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const validator
);

#ifdef LL_PLAT_C
MCAPI ::std::string parseRawText(::Json::Value const& value);
#endif

MCAPI bool parseSingleTradeJson(::SharedTypes::v1_21_30::TradeItem& inoutTrade, ::Json::Value const& inputData);

MCAPI bool parseTradeChoicesJson(
    ::SharedTypes::v1_21_30::TradeItemList& inoutTrade,
    ::Json::Value&                          inputData,
    ::SemVersion const&                     format
);

MCAPI bool parseTradeGroupJson(
    ::Puv::Logger&                       logger,
    ::SharedTypes::v1_21_30::TradeGroup& inoutTradeGroup,
    ::Json::Value const&                 inputRootData,
    ::SemVersion const&                  format
);

#ifdef LL_PLAT_C
MCAPI ::std::string pascalCaseConverter(::std::string const& inString, bool pascalCase);
#endif

MCAPI ::TrimDataPacket
prepareFromRegistries(::TrimPatternRegistry const& patternRegistry, ::TrimMaterialRegistry const& materialRegistry);

#ifdef LL_PLAT_C
MCAPI void readUV(::glm::vec2& uv, ::Json::Value const& value);

MCAPI void receiptPrinter_Amazon(
    ::std::vector<::std::weak_ptr<::Purchase>> const& purchases,
    ::ReceiptFulfillment::ReceiptData const&          receiptData
);

MCAPI void recursiveMerge(
    ::Json::Value&                                                                  defRoot,
    ::Json::Value const&                                                            currDefRoot,
    ::std::string const&                                                            pathName,
    int                                                                             treeLevel,
    ::std::multiset<::ModificationOperation, ::std::less<::ModificationOperation>>* modifications,
    int                                                                             packIndex
);

MCAPI void
registerBedrockEffectComponents(::ParticleSystem::ParticleEffectComponentRegistry& particleComponentRegistry);

MCAPI void removeFromCollection(
    ::std::vector<::std::shared_ptr<::UIControl>>& controls,
    ::std::map<::std::vector<::std::shared_ptr<::UIControl>>*, ::std::vector<::std::shared_ptr<::UIControl>>>&
                            controlsToRemove,
    ::UIControl&            control,
    ::ControlCollectionFlag flag
);

MCAPI ::mce::framebuilder::FrameBuilder* renderDragonFrameBuilder();

MCFOLD uchar* resample_row_1(uchar* out, uchar* in_near, uchar* in_far, int w, int hs);

MCAPI ::ui::DirtyFlag setControlVariableValue(
    ::UIControl&         control,
    ::LayoutVariableType type,
    float                inValue,
    float                inMinValue,
    float                inMaxValue
);

MCAPI void setProgressPercent(
    float                        progressPercent,
    ::std::function<void(float)> setValue,
    ::std::function<float()>     getMin,
    ::std::function<float()>     getMax
);

MCAPI bool shouldRenderAnyAttachables(
    bool     modelAttachablesAreEnabled,
    ::Actor& actor,
    bool     lessThanOrEqualToVersion_1_16_210,
    bool     hideArmor
);
#endif

#ifdef LL_PLAT_S
MCAPI ::DiscoveryEnvironment stringToDiscoveryEnvironment(::std::string const& str);
#endif

#ifdef LL_PLAT_C
MCAPI ::InitiatorCategory stringToInitiatorCategory(::std::string const& initiatorCategoryString);

MCAPI ::ProcessState stringToProcessState(::std::string const& processStateString);

MCAPI ::TerrainVariation terrainVariationFromString(::std::string_view terrainVariation);
#endif

MCAPI ::ItemInstance toItemInstance(::RecipeIngredient const& ingredient);

MCAPI ::std::shared_ptr<::PoolAliasBinding> toPoolAlias(::SharedTypes::v1_21_20::PoolAliases::Direct const& direct);

MCAPI ::std::shared_ptr<::PoolAliasBinding> toPoolAlias(::SharedTypes::v1_21_20::PoolAliases::Random const& random);

MCAPI ::ShapedRecipePayload toShapedPayload(::ShapedRecipe const& recipe, bool includeUnlocking);

MCAPI ::ShapelessRecipePayload toShapelessPayload(::ShapelessRecipe const& recipe, bool includeUnlocking);

MCAPI ::std::string toString(::AgentActionType type);

#ifdef LL_PLAT_C
MCAPI ::std::optional<uint> tryCreateDataDrivenV2Resource(
    ::HashedString const&                          name,
    ::std::shared_ptr<::DataDrivenRenderer> const& render,
    ::DataDrivenRendererPreprocessingContext&      bakeCtx
);

MCAPI void updateLevelSettingsConsideringPlayerIntents(
    ::Bedrock::NotNullNonOwnerPtr<::ILevel>             level,
    ::Bedrock::NotNullNonOwnerPtr<::IAppPlatform> const appPlatform,
    ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const&,
    bool const                                                  isNxAdhocMultiplayer,
    ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const userManager,
    ::Bedrock::NotNullNonOwnerPtr<::TrialManager> const         trialManager,
    bool const                                                  hasAllValidCrossPlatformSkin
);
#endif

MCAPI ::Json::Value upgradeTraderMaterialFunction(::Json::Value& tradeItem);

#ifdef LL_PLAT_S
MCAPI ::http_wstring utf16_from_utf8(::http_string const& utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8, uint64 size);

MCAPI ::http_string utf8_from_utf16(::http_wstring const& utf16);

MCAPI ::http_string utf8_from_utf16(wchar_t const* utf16, uint64 size);
#endif

MCAPI int64 utf8proc_decompose_char(int uc, int* dst, int64 bufsize, int options, int* last_boundclass);

#ifdef LL_PLAT_C
MCAPI ::std::vector<::std::string> validateControlNames(::Json::Value const& root);

MCAPI void visitTreeInternal(
    ::UIControl&                                   control,
    ::std::function<bool(::UIControl&, int, bool)> visitor,
    int                                            parentZOrder,
    bool                                           ancestorVisible
);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string_view const& ACTOR_DEFINITIONS_VERSION_TRACKER();

MCAPI ::std::vector<::HudElement> const& ALL_HUD_ELEMENTS();

#ifdef LL_PLAT_C
MCAPI ::std::array<::LayoutVariableType, 11> const& AllLayoutVariableTypes();
#endif

MCAPI ::HashedString const& BLAST_FURNACE_TAG();

MCAPI ::HashedString const& CAMPFIRE_TAG();

MCAPI ::std::string_view const& CEREAL_DOCUMENTATION_TAG();

MCAPI ::std::string_view const& CEREAL_JSON_SCHEMA_PROPERTY();

MCAPI ::std::string_view const& CEREAL_ROOT_SCHEMA_PROPERTY();

MCAPI ::std::unordered_map<::ContainerEnumName, ::std::string>& ContainerCollectionNameMap();

#ifdef LL_PLAT_C
MCAPI ::std::string const& DEFAULT_DRIVE_CONTENTS_PATH();
#endif

MCAPI ::HashedString const& FURNACE_TAG();

#ifdef LL_PLAT_C
MCAPI ushort const*& GAME_RUNTIME_DLL_NAME();
#endif

MCAPI ::std::array<::std::pair<::HudElement, ::std::string>, 13> const& HUD_ELEMENTS_TO_STRINGS();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::std::string_view, ::HowToPlayTopicIndex> const& HowToPlayTopicIndexMap();

MCAPI ::std::string const& ICON_OVERLAY_FACTORY();

MCAPI ::ThirdPartyInfo const& INVALID_THIRD_PARTY_INFO();
#endif

MCAPI ::MCRESULT const& MCRESULT_ChatMuted();

MCAPI ::MCRESULT const& MCRESULT_CommandNotFound();

MCAPI ::MCRESULT const& MCRESULT_CommandRequestInitiated();

MCAPI ::MCRESULT const& MCRESULT_CommandStepFail();

MCAPI ::MCRESULT const& MCRESULT_CommandsDisabled();

MCAPI ::MCRESULT const& MCRESULT_EncryptionRequired();

MCAPI ::MCRESULT const& MCRESULT_ExecutionFail();

MCAPI ::MCRESULT const& MCRESULT_FailedToParseCommand();

MCAPI ::MCRESULT const& MCRESULT_InvalidCommandContext();

MCAPI ::MCRESULT const& MCRESULT_InvalidCommandOrigin();

MCAPI ::MCRESULT const& MCRESULT_MalformedRequest();

MCAPI ::MCRESULT const& MCRESULT_Success();

MCAPI ::MCRESULT const& MCRESULT_TooManyPendingRequests();

MCAPI ::std::bitset<39> const& PLAYER_ACTION_MOVEMENT_BITSET();

MCAPI ::std::bitset<39> const& PLAYER_ACTION_MOVEMENT_FLYING_ATTRIBUTE_BITSET();

MCAPI ::std::bitset<39> const& PLAYER_ACTION_MOVEMENT_SPEED_ATTRIBUTE_BITSET();

MCAPI ::HashedString const& SMOKER_TAG();

MCAPI ::HashedString const& SOUL_CAMPFIRE_TAG();

MCAPI ::std::unordered_map<
    ::TextProcessingEventOrigin,
    ::std::string,
    ::TextProcessingEventOriginEnumHasher,
    ::std::equal_to<::TextProcessingEventOrigin>> const&
TextProcessingEventOriginEnumMap();

MCAPI uint const& UNINITIALIZED_BLOCK_NETWORKID();

MCAPI ::std::array<::HashedString, 25> const& VanillaStructureFeatureTypes();

#ifdef LL_PLAT_C
MCAPI bool& _mi_cpu_has_fsrm();

MCAPI ::std::add_lvalue_reference_t<void*[]> _mi_externs();

MCAPI ::mi_heap_s*& _mi_heap_default();

MCAPI ::mi_heap_s const& _mi_heap_empty();

MCAPI ::mi_heap_s& _mi_heap_main();

MCAPI ::std::atomic<uint64>& _mi_numa_node_count();

MCAPI ::mi_page_s const& _mi_page_empty();

MCAPI bool& _mi_process_is_initialized();

MCAPI ::mi_stats_s& _mi_stats_main();

MCAPI ::std::unordered_map<int, ::std::string> const& autoUpdateModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& blockLightQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& chatDurationLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& cloudQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& contentLogGUILevelLables();

MCAPI ::std::unordered_map<int, ::std::string> const& debugHudLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& deviceInfoMemoryTierLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& difficultyLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& discoveryEnvironmentLabels();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::std::string, ::DiscoveryEnvironment> const& discoveryEnvironmentStrings();
#endif

MCAPI ::std::unordered_map<::DiscoveryEnvironment, ::std::string> const& discoveryEnvironments();

MCAPI ::std::add_lvalue_reference_t<uint[]> englishCharacterFrequencies();

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Biome>>& gBiomeChunkGC();

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Block>>& gBlockStorageGC();

MCAPI ::InternalTaskGroup& gInternalTaskGroup();

MCAPI ::SubChunkDelayedDeleter<::SubChunkBrightnessStorage>& gLightStorageGC();

#ifdef LL_PLAT_C
MCAPI ::MainGameCore::WinMain*& gWinMainInstance();

MCAPI bool& g_forceDLSSFallback_Dx12();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, uint)> g_memAllocFunc();

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, uint)> g_memFreeFunc();

MCAPI ::HCTraceImplArea& g_traceHTTPCLIENT();

MCAPI ::HCTraceImplArea& g_traceWEBSOCKET();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& gameModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& graphicsModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& graphicsQualityPresetModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& joystickVisibilityOptionLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& partyInviteReceivedFilterLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& partyInviteSendPrivilegesLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& partyPrivacyLabels();

MCAPI ::std::unordered_map<::std::string, int> const& permissionsNameValuePairs();

MCAPI ::std::unordered_map<int, ::std::string> const& permissionsValueLabelPairs();

MCAPI ::std::unordered_map<int, ::std::string> const& permissionsValueTexturePairs();

MCAPI ::std::unordered_map<int, ::std::string> const& playerWaypointsLabels();
#endif

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, char const*, uint)> rakMalloc_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(void*, uint64, char const*, uint)> rakRealloc_Ex();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& realmsGameModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& reflectionQualityLabels();
#endif

#ifdef LL_PLAT_S
MCAPI bool& s_AsyncLibEnablePumpingWait();

MCAPI ::std::atomic<uint>& s_AsyncLibGlobalStateCount();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& scriptDebuggerAttachModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& shadowQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& sneakOptionLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& splitScreenLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& storageLocationLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& subtitlePositionLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& thirdPersonLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& toastsDurationLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& topButtonScaleOptionLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& typefaceLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& uiProfileLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& upscalingModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& volumetricFogQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& vsyncLabels();

MCAPI ::std::add_lvalue_reference_t<int (*)(void*)> winrt_to_hresult_handler();
#endif
// NOLINTEND
