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
MCNAPI void CoherentBind(::cohtml::Binder* binder, ::Vec3* data);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::FlatWorldLayer* layer);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                            binder,
    ::IMarketplacePackDownloader::MarketplacePackDownloadStatus* marketplacePackDownloadStatus
);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::FlatWorldPreset* options);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::RealmsWorldInfo* realmsWorldInfo);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::WorldSeedModel* seedTemplate);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::WorldTemplateInfo* worldTemplateInfo);
#endif

MCNAPI ::SharedTypes::CreativeItemCategory CreativeItemCategoryFromString(::std::string const& str);

#ifdef LL_PLAT_S
MCNAPI void* DefaultMemAllocFunction(uint64 size, uint memoryType);

MCNAPI void DefaultMemFreeFunction(void* pointer, uint memoryType);
#endif

#ifdef LL_PLAT_C
MCNAPI long DoesLocalGameRuntimeDllExist(bool& exists);
#endif

#ifdef LL_PLAT_S
MCNAPI bool DoesMockCallMatch(::HC_CALL const* mockCall, ::HC_CALL const* originalCall);
#endif

MCAPI ::HashedString const& EntityCanonicalName(::ActorType entityType);

MCAPI ::ActorType EntityTypeFromString(::std::string const& str);

MCNAPI ::std::string EntityTypeIdWithoutCategories(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCNAPI ::std::string EntityTypeToFormattedLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCNAPI ::std::string EntityTypeToString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCNAPI void EntityTypeToStringAndNamespace(::ActorType entityType, ::std::string& nameOut, ::std::string& namespaceOut);

MCNAPI double GetEngagementMetricsTimeSinceAppStart_DEPRECATED();

MCNAPI ::std::map<::std::string, ::std::string> GetMobProperties(::Actor const* mob);

#ifdef LL_PLAT_S
MCNAPI ::TraceState& GetTraceState();
#endif

#ifdef LL_PLAT_C
MCNAPI long InitializeGameRuntimeDll(uint64 flags, ::_INITIALIZE_OPTIONS* const options);
#endif

MCNAPI ::InventoryContentPacket InventoryContentPacketFromPlayerInventoryId(::ContainerID id, ::Player& player);

#ifdef LL_PLAT_C
MCNAPI long IsPackageFamilyNameInstalled(ushort const* familyName, bool& isInstalled);

MCNAPI bool IsUseLocalServicesRegistryOverrideSet();

MCNAPI long LoadGameRuntimeDll();

MCNAPI auto LoadGetPackagesByPackageFamilyFn() -> int64 (*)();

MCNAPI auto LoadRegGetValueWFn() -> int64 (*)();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::optional<::LogLevel> LogLevelFromString(::std::string const& str);

MCNAPI bool Mock_Internal_HCHttpCallPerformAsync(::HC_CALL* originalCall);

MCNAPI long Mock_Internal_ReadRequestBodyIntoMemory(
    ::HC_CALL*                                         originalCall,
    ::std::vector<uchar, ::http_stl_allocator<uchar>>* bodyBytes
);
#endif

#ifdef LL_PLAT_C
MCNAPI void NGXInvalidParameterHandler(
    wchar_t const* expression,
    wchar_t const* function,
    wchar_t const* file,
    uint           line,
    uint64         pReserved
);

MCNAPI bool NGXSafeInitializeLog(
    wchar_t const* InPathToValidate,
    wchar_t const* InFileName,
    int            MinimumLoggingLevel,
    void (*logcallback)(char const*, ::NVSDK_NGX_Logging_Level, ::NVSDK_NGX_Feature),
    bool DisableOtherLoggingSinks
);
#endif

MCNAPI ::PackType PackTypeFromString(::std::string const& value);

#ifdef LL_PLAT_C
MCNAPI void PlatformBedrockLogOut(char const* buf, uint64 nullTerminatorPos);
#endif

#ifdef LL_PLAT_S
MCNAPI void PlatformBedrockLogOut(uint const _priority, char const* buf, uint64 nullTerminatorPos);
#endif

MCNAPI void PushCircularReference(
    ::std::unordered_map<::BlockPos, ::RedstoneTorchCapacitor*>&                      relatedTorches,
    ::BlockPos const&                                                                 pos,
    ::std::queue<::RedstoneTorchCapacitor*, ::std::deque<::RedstoneTorchCapacitor*>>& list
);

#ifdef LL_PLAT_C
MCNAPI bool ReadJpegFile(::Core::Path const& fileName, int readMode);

MCNAPI bool ShouldUseDllLocalServices();

MCNAPI long StringCchCatW(wchar_t* pszDest, uint64 cchDest, wchar_t const* pszSrc);

MCNAPI long StringCchCopyW(wchar_t* pszDest, uint64 cchDest, wchar_t const* pszSrc);
#endif

MCNAPI ::std::string const& StringFromPackType(::PackType value);

#ifdef LL_PLAT_C
MCNAPI ::edu::Role StringToADRole(::std::string const& str);
#endif

MCNAPI uint SuperFastHashIncremental(char const* data, uint64 len, uint lastHash);

MCNAPI ::SharedTypes::Legacy::UseAnimation UseAnimationFromString(::std::string const& str);

#ifdef LL_PLAT_C
MCNAPI HRESULT XalCleanupAsync(::XAsyncBlock* async);

MCNAPI ::Bedrock::Threading::Async<::ContentCatalogQueryData::Done> _addCatalogItemsFromSearch(
    ::SearchQuery const&                         query,
    ::DurableSearchResults const&                response,
    ::std::shared_ptr<::ContentCatalogQueryData> request
);
#endif

MCNAPI void _addEnvironmentSubfilter(
    ::std::string const&                 legacyPredicate,
    ::FilterGroup::CollectionType        type,
    ::std::string const&                 filterName,
    ::SharedTypes::Legacy::FilterSubject subject,
    ::FilterOperator                     op,
    ::ActorFilterGroup::Processing       process
);

MCNAPI void _addLegacyFilterDefinition(
    ::std::string const&                 legacyPredicate,
    ::FilterGroup::CollectionType        type,
    ::std::string const&                 filterName,
    ::SharedTypes::Legacy::FilterSubject subject,
    ::FilterOperator                     op,
    ::ActorFilterGroup::Processing       process
);

#ifdef LL_PLAT_C
MCNAPI void _addToMessageHistory(::std::deque<::std::string>& messages, ::std::string const& message);

MCNAPI ::std::string _appendToLocTable(
    ::std::unordered_map<::std::string, ::std::string> const& dictionary,
    ::std::string const&                                      keyPrefix,
    ::std::string const&                                      keySuffix
);

MCNAPI ::ShadowRenderingParameters::ShadowMap _calculateCascade(
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

MCNAPI void _checkTickedActorsForOutOfWorld(::ActorOwnerComponent& actorOwnerComponent);

#ifdef LL_PLAT_C
MCNAPI bool _chunkSeesSkyDirectly(::BlockPos const& worldMin, ::BlockSource& region);

MCNAPI ::glm::vec3 _clampShadowAngle(::glm::vec3 const& lightDir, ::glm::vec3 const& up, float shadowClampAngle);

MCNAPI bool _clientHasMenuUI(::IClientInstance const* client);

MCNAPI void _computeLookAtXYZMat(::Matrix& rotationMatrix, ::Vec3 const& lookAtDelta);

MCNAPI bool _extractConstructionData(
    ::CompoundTag const&          tag,
    ::ActorDefinitionIdentifier&  outDefinition,
    ::Vec3&                       outPosition,
    ::Vec2&                       outRotation,
    ::DataLoadHelper&             dataLoadHelper,
    ::DimensionHeightRange const& heightRange
);
#endif

#ifdef LL_PLAT_S
MCNAPI bool _extractConstructionData(
    ::CompoundTag const&          tag,
    ::ActorDefinitionIdentifier&  outDefinition,
    ::Vec3&                       outPosition,
    ::Vec2&                       outRotation,
    ::DataLoadHelper&             dataLoadHelper,
    ::DimensionHeightRange const& heightRange
);
#endif

MCNAPI void _fillCommonScriptPluginProperties(
    ::Social::Events::Event&    event,
    ::ScriptPluginResult const& pluginResult,
    bool                        isClient
);

#ifdef LL_PLAT_C
MCNAPI void _forEachObject(
    ::Json::Value&                                                                  value,
    ::brstd::function_ref<void(::Json::Value&, ::std::string_view, ::Json::Value&)> callback
);

MCNAPI ::std::vector<::BlockPos> _generateChunkStartPositions(::AABB const& area);

MCNAPI ::std::vector<::std::string> _getPlatfromLegacyTranserPackIdList();

MCNAPI ::cg::MipMapSupport _globalMipMapSupport();

MCNAPI bool _haveSameScrollSection(::std::weak_ptr<::UIControl> const& a, ::std::weak_ptr<::UIControl> const& b);

MCNAPI bool _isCoinBundleSku(::ProductSku const& sku);

MCNAPI bool _isLegacyDurableSku(::ProductSku const& sku);
#endif

MCNAPI ::Block const* _loadLayerBlock(::Json::Value const& layer);

#ifdef LL_PLAT_C
MCNAPI void _mi_abandoned_collect(::mi_heap_s* heap, bool force, ::mi_segments_tld_s* tld);

MCNAPI void _mi_abandoned_reclaim_all(::mi_heap_s* heap, ::mi_segments_tld_s* tld);

MCNAPI void* _mi_arena_alloc_aligned(
    uint64         size,
    uint64         alignment,
    uint64         align_offset,
    bool           commit,
    bool           allow_large,
    int            req_arena_id,
    ::mi_memid_s*  memid,
    ::mi_os_tld_s* tld
);

MCNAPI void _mi_arena_collect(bool force_purge, ::mi_stats_s* stats);

MCNAPI void _mi_arena_free(void* p, uint64 size, uint64 committed_size, ::mi_memid_s memid, ::mi_stats_s* stats);

MCNAPI bool _mi_arena_memid_is_suitable(::mi_memid_s memid, int request_arena_id);

MCNAPI void _mi_arena_unsafe_destroy_all(::mi_stats_s* stats);

MCNAPI bool
_mi_bitmap_claim(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx, bool* any_zero);

MCNAPI bool _mi_bitmap_claim_across(
    ::std::atomic<uint64>* bitmap,
    uint64                 bitmap_fields,
    uint64                 count,
    uint64                 bitmap_idx,
    bool*                  pany_zero
);

MCNAPI bool
_mi_bitmap_is_claimed_across(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCNAPI bool _mi_bitmap_try_claim(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCNAPI bool
_mi_bitmap_try_find_claim_field(::std::atomic<uint64>* bitmap, uint64 idx, uint64 count, uint64* bitmap_idx);

MCNAPI bool _mi_bitmap_try_find_from_claim_across(
    ::std::atomic<uint64>* bitmap,
    uint64                 bitmap_fields,
    uint64                 start_field_idx,
    uint64                 count,
    uint64*                bitmap_idx
);

MCNAPI bool _mi_bitmap_unclaim(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCNAPI bool
_mi_bitmap_unclaim_across(::std::atomic<uint64>* bitmap, uint64 bitmap_fields, uint64 count, uint64 bitmap_idx);

MCNAPI int64 _mi_clock_end(int64 start);

MCNAPI int64 _mi_clock_now();

MCNAPI int64 _mi_clock_start();

MCNAPI uint64 _mi_commit_mask_committed_size(::mi_commit_mask_s const* cm, uint64 total);

MCNAPI uint64 _mi_current_thread_count();

MCNAPI void _mi_deferred_free(::mi_heap_s* heap, bool force);

MCNAPI void _mi_error_message(int err, char const* fmt, ...);

MCNAPI void _mi_fprintf(void (*out)(char const*, void*), void* arg, char const* fmt, ...);

MCNAPI void _mi_fputs(void (*out)(char const*, void*), void* arg, char const* prefix, char const* message);

MCNAPI bool _mi_free_delayed_block(::mi_block_s* block);

MCNAPI void _mi_free_generic(::mi_segment_s const* segment, ::mi_page_s* page, bool is_local, void* p);

MCNAPI void _mi_heap_collect_abandon(::mi_heap_s* heap);

MCNAPI void _mi_heap_collect_retired(::mi_heap_s* heap, bool force);

MCNAPI void _mi_heap_delayed_free_all(::mi_heap_s* heap);

MCNAPI bool _mi_heap_delayed_free_partial(::mi_heap_s* heap);

MCNAPI void _mi_heap_destroy_pages(::mi_heap_s* heap);

MCNAPI void* _mi_heap_malloc_zero(::mi_heap_s* heap, uint64 size, bool zero);

MCNAPI void* _mi_heap_malloc_zero_ex(::mi_heap_s* heap, uint64 size, bool zero, uint64 huge_alignment);

MCNAPI bool _mi_heap_memid_is_suitable(::mi_heap_s* heap, ::mi_memid_s memid);

MCNAPI uint64 _mi_heap_random_next(::mi_heap_s* heap);

MCNAPI void _mi_heap_set_default_direct(::mi_heap_s* heap);

MCNAPI void _mi_heap_unsafe_destroy_all();

MCNAPI bool _mi_is_main_thread();

MCNAPI void* _mi_malloc_generic(::mi_heap_s* heap, uint64 size, bool zero, uint64 huge_alignment);

MCNAPI void _mi_options_init();

MCNAPI void* _mi_os_alloc(uint64 size, ::mi_memid_s* memid, ::mi_stats_s* tld_stats);

MCNAPI void* _mi_os_alloc_aligned(
    uint64        size,
    uint64        alignment,
    bool          commit,
    bool          allow_large,
    ::mi_memid_s* memid,
    ::mi_stats_s* tld_stats
);

MCNAPI void* _mi_os_alloc_aligned_at_offset(
    uint64        size,
    uint64        alignment,
    uint64        offset,
    bool          commit,
    bool          allow_large,
    ::mi_memid_s* memid,
    ::mi_stats_s* tld_stats
);

MCNAPI void* _mi_os_alloc_huge_os_pages(
    uint64        pages,
    int           numa_node,
    int64         max_msecs,
    uint64*       pages_reserved,
    uint64*       psize,
    ::mi_memid_s* memid
);

MCNAPI bool _mi_os_commit(void* addr, uint64 size, bool* is_zero, ::mi_stats_s* tld_stats);

MCNAPI void _mi_os_free(void* p, uint64 size, ::mi_memid_s memid, ::mi_stats_s* tld_stats);

MCNAPI void _mi_os_free_ex(void* addr, uint64 size, bool still_committed, ::mi_memid_s memid, ::mi_stats_s* tld_stats);

MCNAPI void* _mi_os_get_aligned_hint(uint64 try_alignment, uint64 size);

MCNAPI uint64 _mi_os_good_alloc_size(uint64 size);

MCNAPI bool _mi_os_has_overcommit();

MCNAPI bool _mi_os_has_virtual_reserve();

MCNAPI void _mi_os_init();

MCNAPI uint64 _mi_os_large_page_size();

MCNAPI uint64 _mi_os_numa_node_count_get();

MCNAPI int _mi_os_numa_node_get(::mi_os_tld_s* tld);

MCNAPI uint64 _mi_os_page_size();

MCNAPI bool _mi_os_purge(void* p, uint64 size, ::mi_stats_s* stats);

MCNAPI bool _mi_os_purge_ex(void* p, uint64 size, bool allow_reset, ::mi_stats_s* stats);

MCNAPI uint64 _mi_os_random_weak(uint64 extra_seed);

MCNAPI bool _mi_os_reset(void* addr, uint64 size, ::mi_stats_s* stats);

MCNAPI bool _mi_os_use_large_page(uint64 size, uint64 alignment);

MCNAPI void _mi_page_abandon(::mi_page_s* page, ::mi_page_queue_s* pq);

MCNAPI void _mi_page_free(::mi_page_s* page, ::mi_page_queue_s* pq, bool force);

MCNAPI void _mi_page_free_collect(::mi_page_s* page, bool force);

MCNAPI void* _mi_page_malloc(::mi_heap_s* heap, ::mi_page_s* page, uint64 size, bool zero);

MCNAPI ::mi_block_s* _mi_page_ptr_unalign(::mi_segment_s const* segment, ::mi_page_s const* page, void const* p);

MCNAPI uint64 _mi_page_queue_append(::mi_heap_s* heap, ::mi_page_queue_s* pq, ::mi_page_queue_s* append);

MCNAPI void _mi_page_reclaim(::mi_heap_s* heap, ::mi_page_s* page);

MCNAPI void _mi_page_retire(::mi_page_s* page);

MCNAPI bool _mi_page_try_use_delayed_free(::mi_page_s* page, ::mi_delayed_e delay, bool override_never);

MCNAPI void _mi_page_unfull(::mi_page_s* page);

MCNAPI void _mi_page_use_delayed_free(::mi_page_s* page, ::mi_delayed_e delay, bool override_never);

MCNAPI bool _mi_preloading();

MCNAPI int _mi_prim_alloc(
    uint64 size,
    uint64 try_alignment,
    bool   commit,
    bool   allow_large,
    bool*  is_large,
    bool*  is_zero,
    void** addr
);

MCNAPI int _mi_prim_alloc_huge_os_pages(void* hint_addr, uint64 size, int numa_node, bool* is_zero, void** addr);

MCNAPI int64 _mi_prim_clock_now();

MCNAPI int _mi_prim_commit(void* addr, uint64 size, bool* is_zero);

MCNAPI int _mi_prim_decommit(void* addr, uint64 size, bool* needs_recommit);

MCNAPI int _mi_prim_free(void* addr, uint64 size);

MCNAPI bool _mi_prim_getenv(char const* name, char* result, uint64 result_size);

MCNAPI void _mi_prim_mem_init(::mi_os_mem_config_s* config);

MCNAPI uint64 _mi_prim_numa_node();

MCNAPI uint64 _mi_prim_numa_node_count();

MCNAPI void _mi_prim_out_stderr(char const* msg);

MCNAPI void _mi_prim_process_info(::mi_process_info_s* pinfo);

MCNAPI bool _mi_prim_random_buf(void* buf, uint64 buf_len);

MCNAPI int _mi_prim_reset(void* addr, uint64 size);

MCNAPI void _mi_prim_thread_associate_default_heap(::mi_heap_s* heap);

MCNAPI void _mi_prim_thread_done_auto_done();

MCNAPI void _mi_prim_thread_init_auto_done();

MCNAPI void _mi_random_init(::mi_random_cxt_s* ctx);

MCNAPI void _mi_random_init_weak(::mi_random_cxt_s* ctx);

MCNAPI uint64 _mi_random_next(::mi_random_cxt_s* ctx);

MCNAPI void _mi_random_reinit_if_weak(::mi_random_cxt_s* ctx);

MCNAPI void _mi_segment_huge_page_reset(::mi_segment_s* segment, ::mi_page_s* page, ::mi_block_s* block);

MCNAPI void _mi_segment_map_allocated_at(::mi_segment_s const* segment);

MCNAPI void _mi_segment_map_freed_at(::mi_segment_s const* segment);

MCNAPI void _mi_segment_page_abandon(::mi_page_s* page, ::mi_segments_tld_s* tld);

MCNAPI ::mi_page_s* _mi_segment_page_alloc(
    ::mi_heap_s*         heap,
    uint64               block_size,
    uint64               page_alignment,
    ::mi_segments_tld_s* tld,
    ::mi_os_tld_s*       os_tld
);

MCNAPI void _mi_segment_page_free(::mi_page_s* page, bool force, ::mi_segments_tld_s* tld);

MCNAPI uchar* _mi_segment_page_start(::mi_segment_s const* segment, ::mi_page_s const* page, uint64* page_size);

MCNAPI void _mi_segment_thread_collect(::mi_segments_tld_s* tld);

MCNAPI void _mi_stat_counter_increase(::mi_stat_counter_s* stat, uint64 amount);

MCNAPI void _mi_stat_decrease(::mi_stat_count_s* stat, uint64 amount);

MCNAPI void _mi_stat_increase(::mi_stat_count_s* stat, uint64 amount);

MCNAPI void _mi_stats_done(::mi_stats_s* stats);

MCNAPI uint64 _mi_strlen(char const* s);

MCNAPI void _mi_thread_data_collect();

MCNAPI void _mi_thread_done(::mi_heap_s* heap);

MCNAPI uint64 _mi_thread_id();

MCNAPI void _mi_verbose_message(char const* fmt, ...);

MCNAPI void _mi_warning_message(char const* fmt, ...);
#endif

MCNAPI bool _parseEnchantInfo(::Json::Value& enchants, ::SpecificEnchantFunction::EnchantInfo& info);

MCNAPI ::std::optional<::std::vector<::BlockLayer>>
_parseLayersV3(::Json::Value const& root, ::LevelData const& levelData);

#ifdef LL_PLAT_C
MCNAPI ::glm::vec3 _quantizeLightDirection(float angle, float perpendicularAngle, int step);
#endif

MCNAPI ::std::string _resultItemName(::Recipe const& recipe);

MCNAPI void _runActorLegacyTick(
    ::EntityContext&            entity,
    ::ActorOwnerComponent&      actorOwnerComponent,
    ::ActorTickNeededComponent& actorTickNeededComponent
);

MCNAPI void _runActorLimitedLifetimeTick(::ActorOwnerComponent& actorOwnerComponent);

MCNAPI void _runGlobalActorLegacyTick(::ActorOwnerComponent& actorOwnerComponent);

MCNAPI ::std::unique_ptr<::ListTag> _saveBlockList(::std::vector<::BlockType const*> const& blockList);

#ifdef LL_PLAT_C
MCNAPI void _saveToOptions(::std::deque<::std::string>& messages, ::IOptionRegistry& options, ::OptionID optionId);
#endif

MCNAPI bool _spawnMinecart(
    ::MinecartType     type,
    ::Actor*           spawningActor,
    ::BlockSource&     region,
    ::Vec3 const&      pos,
    ::ItemStack const& item
);

#ifdef LL_PLAT_C
MCNAPI bool _stringLessThan(::std::string const& str1, ::std::string const& str2);
#endif

MCNAPI void _tickAbilitiesComponent(
    ::ActorOwnerComponent& actorOwnerComponent,
    ::PlayerComponent&     playerComponent,
    ::AgentCapabilities&   capabilities
);

MCNAPI void _tickBalloonComponent(::ActorOwnerComponent& actorOwnerComponent, ::BalloonComponent& balloonComponent);

MCNAPI void _tickBodyControlComponent(
    ::ActorOwnerComponent&        actorOwnerComponent,
    ::BodyControlComponent&       bodyControlComponent,
    ::ActorRotationComponent&     actorRotationComponent,
    ::MobBodyRotationComponent&   mobBodyRotationComponent,
    ::ActorHeadRotationComponent& actorHeadRotationComponent
);

MCNAPI void
_tickBoostableComponent(::ActorOwnerComponent& actorOwnerComponent, ::BoostableComponent& boostableComponent);

MCNAPI void _tickBossComponent(
    ::ActorOwnerComponent&               actorOwnerComponent,
    ::BossComponent&                     bossComponent,
    ::Optional<::MobFlagComponent const> mobFlagComponent
);

MCNAPI void
_tickBreedableComponent(::ActorOwnerComponent& actorOwnerComponent, ::BreedableComponent& breedableComponent);

#ifdef LL_PLAT_C
MCNAPI void _tickBubbleColumnState(::EntityContext& entity, ::ActorOwnerComponent& actorOwnerComponent);
#endif

MCNAPI void _tickBurnsInDaylightComponent(
    ::ActorOwnerComponent&            actorOwnerComponent,
    ::BurnsInDaylightComponent const& burnsInDaylightComponent
);

MCNAPI void _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::CommandBlockComponent& commandBlockComponent);

MCNAPI void _tickDamageOverTimeComponent(
    ::ActorOwnerComponent&     actorOwnerComponent,
    ::DamageOverTimeComponent& damageOverTimeComponent
);

MCNAPI void _tickDanceComponent(
    ::ActorOwnerComponent&        actorOwnerComponent,
    ::DanceComponent&             danceComponent,
    ::StateVectorComponent const& stateVectorComponent
);

MCNAPI void _tickEnvironmentSensorComponent(::ActorOwnerComponent& actorOwnerComponent);

MCAPI void _tickExplodeComponent(::ActorOwnerComponent& actorOwnerComponent, ::ExplodeComponent& explodeComponent);

MCNAPI void _tickHurtOnConditionComponent(::ActorOwnerComponent& actorOwnerComponent);

MCNAPI void _tickInsomniaComponent(::ActorOwnerComponent& actorOwnerComponent, ::InsomniaComponent& insomniaComponent);

MCNAPI void _tickTeleportComponent(::ActorOwnerComponent& actorOwnerComponent, ::TeleportComponent& teleportComponent);

MCNAPI void _tickTimerComponent(::ActorOwnerComponent& actorOwnerComponent, ::TimerComponent& timerComponent);

MCNAPI void _tickTimerComponent(
    ::ActorOwnerComponent&        actorOwnerComponent,
    ::HopperComponent&            hopperComponent,
    ::StateVectorComponent const& stateVectorComponent
);

MCNAPI void _tickTransformationComponent(
    ::ActorOwnerComponent&     actorOwnerComponent,
    ::TransformationComponent& transformationComponent
);

#ifdef LL_PLAT_C
MCNAPI ::OfferCategory _tryDetermineOfferCategory(::ProductSku const& sku);

MCNAPI ::ProductType _tryDetermineProductType(::ProductSku const& sku);

MCNAPI void _updateFramePacing(::std::shared_ptr<::OptionRegistry> const& Options);

MCNAPI void _validateControlNamesRecursive(
    ::Json::Value const&          control,
    ::std::string const&          namePath,
    ::std::vector<::std::string>& invalidControlNames
);

MCNAPI ::Destination addExpressionOrConstantResources(
    ::std::vector<float>&            constantBuffer,
    ::std::vector<::ExpressionNode>& expressionBuffer,
    ::ExpressionNode const&          expr,
    char const*                      defaultExpression,
    float                            defaultValue
);

MCNAPI void addToCollection(
    ::std::vector<::std::shared_ptr<::UIControl>>& controls,
    ::UIControl&                                   control,
    ::ControlCollectionFlag                        flag
);

MCNAPI void addToCollectionSortedByZOrder(
    ::std::vector<::std::shared_ptr<::UIControl>>& controls,
    ::UIControl&                                   control,
    ::ControlCollectionFlag                        flag
);
#endif

MCNAPI void addToFillQueue(
    ::CircuitSceneGraph&                                                      graph,
    ::CircuitComponentList&                                                   powerAssociationMap,
    ::BaseCircuitComponent*                                                   newComponent,
    ::CircuitTrackingInfo&                                                    info,
    ::BlockPos const&                                                         newPos,
    uchar                                                                     face,
    ::std::queue<::CircuitTrackingInfo, ::std::deque<::CircuitTrackingInfo>>& positions
);

#ifdef LL_PLAT_C
MCNAPI ushort bakeGeneratedDraws(
    ::ExtractedDataDataDrivenModel const&     extractedData,
    uint                                      geoIdx,
    ::std::vector<::std::string> const&       materialRegex,
    ::std::vector<::std::string> const&       partVisibilityRegex,
    ::DataDrivenRendererPreprocessingContext& ctx
);

MCNAPI ::BakedRenderControllerResults bakeRenderController(
    ::ExtractedDataDataDrivenModel const&     extractedData,
    ::ExtractedRenderController const&        renderController,
    ::DataDrivenRendererPreprocessingContext& ctx
);
#endif

MCNAPI void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);

MCNAPI void bindModuleToDDUI(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI ::KeyOrNameResult
buildActorDisplayName(::ActorType actorType, ::std::string const& nameTag, ::Actor const* actor);

MCNAPI void buildItemsSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::Legacy::ComponentItemData>>& root,
    ::SemVersion const&                                                                                      version
);

#ifdef LL_PLAT_C
MCNAPI void* cgltf_default_alloc(void* user, uint64 size);

MCNAPI ::cgltf_result cgltf_default_file_read(
    ::cgltf_memory_options const* memory_options,
    ::cgltf_file_options const*   file_options,
    char const*                   path,
    uint64*                       size,
    void**                        data
);

MCNAPI void cgltf_default_file_release(
    ::cgltf_memory_options const* memory_options,
    ::cgltf_file_options const*   file_options,
    void*                         data
);

MCNAPI void cgltf_default_free(void* user, void* ptr);

MCNAPI int cgltf_element_read_float(
    uchar const*           element,
    ::cgltf_type           type,
    ::cgltf_component_type component_type,
    int                    normalized,
    float*                 out,
    uint64                 element_size
);

MCNAPI void cgltf_free(::cgltf_data* data);

MCNAPI int cgltf_json_strcmp(::jsmntok_t const* tok, uchar const* json_chunk, char const* str);

MCNAPI ::cgltf_result
cgltf_parse_json(::cgltf_options* options, uchar const* json_chunk, uint64 size, ::cgltf_data** out_data);

MCNAPI int cgltf_parse_json_anisotropy(
    ::cgltf_options*    options,
    ::jsmntok_t const*  tokens,
    int                 i,
    uchar const*        json_chunk,
    ::cgltf_anisotropy* out_anisotropy
);

MCNAPI int cgltf_parse_json_attribute_list(
    ::cgltf_options*    options,
    ::jsmntok_t const*  tokens,
    int                 i,
    uchar const*        json_chunk,
    ::cgltf_attribute** out_attributes,
    uint64*             out_attributes_count
);

MCNAPI int cgltf_parse_json_cameras(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCNAPI int cgltf_parse_json_diffuse_transmission(
    ::cgltf_options*              options,
    ::jsmntok_t const*            tokens,
    int                           i,
    uchar const*                  json_chunk,
    ::cgltf_diffuse_transmission* out_diff_transmission
);

MCNAPI int cgltf_parse_json_dispersion(
    ::jsmntok_t const*  tokens,
    int                 i,
    uchar const*        json_chunk,
    ::cgltf_dispersion* out_dispersion
);

MCNAPI int cgltf_parse_json_iridescence(
    ::cgltf_options*     options,
    ::jsmntok_t const*   tokens,
    int                  i,
    uchar const*         json_chunk,
    ::cgltf_iridescence* out_iridescence
);

MCNAPI int cgltf_parse_json_lights(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCNAPI int cgltf_parse_json_material_mapping_data(
    ::cgltf_options*          options,
    ::jsmntok_t const*        tokens,
    int                       i,
    uchar const*              json_chunk,
    ::cgltf_material_mapping* out_mappings,
    uint64*                   offset
);

MCNAPI int cgltf_parse_json_root(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCNAPI int cgltf_parse_json_string_array(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    char***            out_array,
    uint64*            out_size
);

MCNAPI int cgltf_parse_json_texture_view(
    ::cgltf_options*      options,
    ::jsmntok_t const*    tokens,
    int                   i,
    uchar const*          json_chunk,
    ::cgltf_texture_view* out_texture_view
);

MCNAPI int cgltf_parse_json_unprocessed_extension(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_extension* out_extension
);

MCNAPI int cgltf_parse_json_variants(
    ::cgltf_options*   options,
    ::jsmntok_t const* tokens,
    int                i,
    uchar const*       json_chunk,
    ::cgltf_data*      out_data
);

MCNAPI int cgltf_skip_json(::jsmntok_t const* tokens, int i);
#endif

MCNAPI void checkAndAddConvertedVariantFilter(
    ::Json::Value&       anyOfFilter,
    ::std::string const  biomeName,
    ::std::string const& targetBiome,
    int                  targetVariant
);

MCNAPI void checkComponent(
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
MCNAPI bool checkMinMaxClientVer(::Json::Value const& documentObject, bool pascalCase);

MCNAPI bool checkMinMaxClientVer(::std::string const& minClientVersion, ::std::string const& maxClientVersion);
#endif

MCNAPI void convertBiomesFilterToGenericFilter(::Json::Value& tradeItem);

#ifdef LL_PLAT_C
MCNAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>
createDefaultUniqueRakPeer();
#endif

MCNAPI ::AssetWorkItemFactory<
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
MCNAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeEventMap();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeEventMap();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeLOCMap();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeLOCMap();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<::PackType, ::std::string> createPackTypeToStringMap();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<::PackType, ::std::string> createPackTypeToStringMap();
#endif

MCNAPI ::AssetWorkItemFactory<
    ::ParseJsonResult,
    ::brstd::move_only_function<::AnyWorkItem(::brstd::copyable_function<::AnyWorkItem(::ParseJsonResult&&)>)>>
createParseJsonFileWorkItem(::IteratePackResult packFile);

#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<::std::string, ::PackType> createStringToPackTypeMap();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<::std::string, ::PackType> createStringToPackTypeMap();

MCNAPI ::ExprToken createTokenFromUIDefVal(::Json::Value const& resVal);
#endif

MCNAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>
createUniqueRakPeer(::RakNet::RakPeerConfiguration const& config);

MCNAPI ::Bedrock::NonOwnerPointer<::WorkerPool> createWorkerPool(
    ::std::string_view                                       name,
    ::Core::Profile::ThreadFrameType                         frameType,
    ::WorkerConfiguration const&                             config,
    ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>& destHandle
);

#ifdef LL_PLAT_C
MCNAPI ::UIDefType defTypeFromString(::std::string const& str);

MCNAPI ::std::string discoveryEnvironmentToString(::DiscoveryEnvironment const& environment);

MCNAPI ::std::string dlcCheckerResultToString(::DlcCheckResult result);
#endif

MCNAPI void doHorsePreTravelSystem(
    ::StrictEntityContext&                                               context,
    ::Optional<::VehicleComponent>                                       vehicleComponent,
    ::ActorDataFlagComponent const&                                      synchedActorDataComponent,
    ::AirSpeedComponent&                                                 airSpeed,
    ::ViewT<::StrictEntityContext, ::MobFlagComponent const> const&      mobCheck,
    ::ViewT<::StrictEntityContext, ::OnGroundFlagComponent const> const& onGroundCheck,
    ::EntityModifier<::HorseWasOnGroundPreTravelComponent> const&        mod
);

MCNAPI void doLavaMoveSystem(
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

MCNAPI void doPlayerMovementStatsEventSystem(
    ::StrictEntityContext&,
    ::ActorOwnerComponent&               actorOwnerComponent,
    ::PlayerPreMobTravelComponent const& playerPreMobTravelComponent,
    ::StateVectorComponent const&        stateVectorComponent
);

MCNAPI void doResetMoveDirectionJumpPendingSystem(
    ::StrictEntityContext&,
    ::JumpPendingScaleComponent const&              jumpPendingScaleComponent,
    ::ActorDataFlagComponent const&                 actorDataFlagComponent,
    ::ActorDataControllingSeatIndexComponent const& controllingSeatIndexComponent,
    ::VehicleComponent const&                       vehicleComponent,
    ::MobTravelComponent&                           mobTravelComponent
);

MCNAPI void
doResetPositionModeSystem(::StrictEntityContext&, ::PlayerPositionModeComponent& playerPositionModeComponent);

MCNAPI void doTeleportInterpolatorResetSystem(
    ::StrictEntityContext&,
    ::Optional<::MovementInterpolatorComponent> movementInterpolatorComponent,
    ::PlayerPositionModeComponent const&        playerPositionModeComponent,
    ::FallDistanceComponent&                    fallDistanceComponent,
    ::StateVectorComponent&                     stateVectorComponent
);

MCNAPI void doTeleportPositionModeEventSystem(
    ::StrictEntityContext&,
    ::ActorOwnerComponent&               actorOwnerComponent,
    ::PlayerPositionModeComponent const& playerPositionModeComponent
);

MCNAPI void doTickNavigationTravelSystem(
    ::StrictEntityContext&                        context,
    ::ActorOwnerComponent&                        actorOwnerComponent,
    ::MobTravelComponent&                         mobTravelComponent,
    ::NavigationComponent&                        navigationComponent,
    ::EntityModifier<::MobTravelComponent> const& mod
);

MCNAPI void doTickTriggerJumpSystem(
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
MCNAPI void doTrackTickingActors(
    ::StrictEntityContext&,
    ::LevelTickTrackingComponent& levelTickTrackingComponent,
    ::CurrentTickComponent const& currentTick
);
#endif

MCNAPI void doTravelTypeSensingSystem(
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
MCNAPI void executeOnNearestStorageAreaForPath(
    ::Core::PathView                                                        path,
    ::brstd::function_ref<void(::std::shared_ptr<::Core::FileStorageArea>)> onSuccess,
    ::std::function<void()>                                                 onFailure
);

MCNAPI void executeOnPrimaryUserStorageArea(
    ::std::function<void(::std::shared_ptr<::Core::FileStorageArea>)> onSuccess,
    ::std::function<void()>                                           onFailure
);
#endif

MCNAPI ::srtp_err_status_t external_crypto_init();

MCNAPI ::srtp_err_status_t external_hmac_alloc(::srtp_auth_t** a, int key_len, int out_len);

MCNAPI ::srtp_err_status_t external_hmac_compute(void*, uchar const*, int, int tag_len, uchar* result);

MCNAPI ::srtp_err_status_t external_hmac_dealloc(::srtp_auth_t* a);

MCNAPI ::srtp_err_status_t external_hmac_init(void* state, uchar const* key, int key_len);

MCNAPI ::srtp_err_status_t external_hmac_start(void*);

MCNAPI ::srtp_err_status_t external_hmac_update(void*, uchar const*, int);

#ifdef LL_PLAT_C
MCNAPI ::std::optional<::ExtractedDataDataDrivenModel>
extractModelData(::HashedString const& name, ::std::shared_ptr<::DataDrivenRenderer> const rendererPtr);

MCNAPI void fillLangValue(
    ::std::string const&                                jsonFieldStr,
    ::std::string const&                                langCode,
    ::std::string const&                                modifiedCode,
    ::Json::Value const&                                documentObject,
    bool const                                          pascalCase,
    ::CommonLocTextPair&                                locTextPairToFill,
    ::std::unordered_map<::std::string, ::std::string>& locDictionary
);

MCNAPI void fillPackIdentityListFromJson(
    ::std::vector<::PackIdVersion>& packIdentityListToFill,
    ::Json::Value const&            packIdentitiesJsonArray
);
#endif

MCNAPI ::std::optional<::FlatWorldPresetID> flatWorldPresetIDFromString(::std::string const& str);

MCNAPI ::std::optional<::TradeItem> fromSharedTypes(
    ::SharedTypes::v1_21_30::TradeItem trade,
    ::ItemRegistryRef const            itemRegistry,
    int                                defaultAux,
    bool                               usingUpcomingCreatorFeaturesExperiment
);

MCNAPI int fseek(::Core::File& file, int64 offset, int origin);

MCNAPI int64 ftell(::Core::File& file);

MCNAPI ::std::string gatherTypeStrings(::std::vector<::Json::ValueType> const& types);

#ifdef LL_PLAT_C
MCNAPI ::ResourceOffset generateExpressionOffset(
    ::ExpressionNode&&               expression,
    ::ExpressionOp                   expectedOperator,
    ::std::vector<::ExpressionNode>& outputExpressionList
);
#endif

MCNAPI ::Json::Value getBiomeFilteredChoice(
    int const                           auxValue,
    ::std::vector<::std::string> const& biomes,
    ::Json::Value const&                originalItem
);

#ifdef LL_PLAT_C
MCNAPI ::std::shared_ptr<::UIControl> getControlBreadthFirst(::UIControl* scope, ::std::string name);

MCNAPI float getControlVariableValue(::UIControl& control, ::LayoutVariableType const type);

MCNAPI void getControlsInternal(
    ::std::vector<::std::shared_ptr<::UIControl>>& result,
    ::std::function<bool(::UIControl const&)>      predicate,
    ::UIControl&                                   control
);

MCNAPI ::Json::Value const& getDisplayProperties(::Json::Value const& resultObject, bool pascalCase);

MCNAPI ::std::string const getEdition();
#endif

MCNAPI ::Bedrock::FileType getFileType(::Core::PathView filePath, ::IFileAccess& fileAccess);

#ifdef LL_PLAT_C
MCNAPI void getFirstControlInternal(
    ::std::shared_ptr<::UIControl>&                  result,
    ::std::function<bool(::UIControl const&)> const& predicate,
    ::UIControl&                                     control
);

MCNAPI void getFirstVisibleControlInternal(
    ::std::shared_ptr<::UIControl>&                  result,
    ::std::function<bool(::UIControl const&)> const& predicate,
    ::UIControl&                                     control
);
#endif

MCNAPI ::std::unordered_map<::FlatWorldPresetID, ::FlatWorldPreset> const& getFlatWorldPresets();

MCFOLD ::I18n& getI18n();

MCNAPI ::std::string getInvalidRespawnBlockMessage(::DimensionType const& dimension);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::PackIdVersion> getJsonPackIdVersion(::Json::Value const& objectArray);

MCNAPI ::std::string getJsonString(::std::string const& key, ::Json::Value const& object);
#endif

MCNAPI ::std::unordered_set<::Block const*> const getNetherBlendBlocks();

#ifdef LL_PLAT_C
MCNAPI ::std::string const& getOperationString(::UIOperation operation);
#endif

MCNAPI ::std::unordered_set<::BlockType const*> const getOverworldBlendBlocks();

MCNAPI ::PackMaps const& getPackMaps();

#ifdef LL_PLAT_C
MCNAPI ::std::string getPersonaFullDetailCondition();

MCNAPI void getPropertyValue(::std::string_view value, ::ExprToken& tok, ::UIPropertyBag* bag);
#endif

MCNAPI int& getSampleCount(
    ::std::vector<::std::pair<::MapSample, int>>& samples,
    ::mce::Color const&                           sampledColor,
    ::Block const&                                sampledBlock
);

#ifdef LL_PLAT_C
MCNAPI ::std::string getStringOrParsedTextObject(
    ::Json::Value const&                                 value,
    ::std::function<::std::string(::std::string const&)> emoticonifyTextCallback
);

MCNAPI ::SubChunk::SubChunkState getSubChunkState(::LevelChunk& levelChunk, short absoluteIndex);

MCNAPI void getVisibleControlsInternal(::std::function<void(::UIControl&)> const& action, ::UIControl& control);
#endif

MCNAPI void initBuildingBlocks();

MCNAPI bool isChunkAtStage(::std::weak_ptr<::LevelChunk> lcwp, ::ChunkState stateToCheck);

#ifdef LL_PLAT_C
MCNAPI bool isSkinPackExpiredRealms(::SkinPackMeta const& meta);
#endif

MCNAPI ::std::string join(::std::string prefix, ::std::string_view chunkKey);

MCNAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag);

#ifdef LL_PLAT_C
MCNAPI int jsmn_parse(::jsmn_parser* parser, char const* js, uint64 len, ::jsmntok_t* tokens, uint64 num_tokens);
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::string keyLookup(
    ::std::unordered_map<::std::string, ::std::vector<char> const> const& keyMap,
    ::std::string const&                                                  packIdentity
);
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::string keyLookup(
    ::std::unordered_map<::std::string, ::std::vector<char> const> const& keyMap,
    ::std::string const&                                                  packIdentity
);

MCNAPI ::glm::vec3 makeAchromatopsiaXLinked(::glm::vec3 fragment);
#endif

MCNAPI ::TextPacket makeAuthorMessage(
    ::TextPacketType               t,
    ::std::string                  author,
    ::std::string                  message,
    bool                           localize,
    ::std::optional<::std::string> filtered,
    ::std::string                  xuid,
    ::std::string                  platformId
);

#ifdef LL_PLAT_C
MCNAPI ::glm::vec3 makeCool(::glm::vec3 fragment);

MCNAPI ::glm::vec3 makeDeuteranopia(::glm::vec3 fragment);

MCNAPI ::glm::vec3 makeGrayscale(::glm::vec3 fragment);
#endif

MCNAPI ::std::string makeGuestDisplayName(::std::string hostName, ::SubClientId subclientId);

MCNAPI ::mce::UUID makeGuestUUID(::mce::UUID const& hostUuid, ::SubClientId subclientId);

#ifdef LL_PLAT_C
MCNAPI ::glm::vec3 makeInverted(::glm::vec3 fragment);
#endif

#ifdef LL_PLAT_S
MCNAPI ::TextPacket makeMessageOnly(
    ::TextPacketType               t,
    ::std::string                  message,
    bool                           localize,
    ::std::optional<::std::string> filtered,
    ::std::string                  xuid,
    ::std::string                  platformId
);
#endif

#ifdef LL_PLAT_C
MCNAPI ::TextPacket makeMessageOnly(
    ::TextPacketType               t,
    ::std::string                  message,
    bool                           localize,
    ::std::optional<::std::string> filtered,
    ::std::string                  xuid,
    ::std::string                  platformId
);
#endif

#ifdef LL_PLAT_S
MCNAPI ::TextPacket makeMessageParams(
    ::TextPacketType             t,
    ::std::string                message,
    ::std::vector<::std::string> params,
    bool                         localize,
    ::std::string                xuid,
    ::std::string                platformId
);
#endif

#ifdef LL_PLAT_C
MCNAPI ::TextPacket makeMessageParams(
    ::TextPacketType             t,
    ::std::string                message,
    ::std::vector<::std::string> params,
    bool                         localize,
    ::std::string                xuid,
    ::std::string                platformId
);

MCNAPI ::glm::vec3 makeProtanopia(::glm::vec3 fragment);

MCNAPI ::DataDrivenRendererPool makeSeededFallbackPool(::std::weak_ptr<::mce::BufferResourceService> bufferService);

MCNAPI ::glm::vec3 makeSepia(::glm::vec3 fragment);
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::shared_ptr<::Bedrock::Services::IDiscoveryService> makeServerDiscoveryService(
    ::Bedrock::Services::DiscoveryConfig const&             discoveryConfig,
    ::std::shared_ptr<::Bedrock::Http::DispatcherInterface> dispatcher,
    ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>     eventing
);
#endif

#ifdef LL_PLAT_C
MCNAPI ::glm::vec3 makeTritanopia(::glm::vec3 fragment);

MCNAPI ::glm::vec3 makeWarm(::glm::vec3 fragment);

MCNAPI int nvFPrintf(::_iobuf* stream, char const* fmt, ...);

MCNAPI int nvSWprintf(wchar_t* dst, uint64 dstLen, wchar_t const* fmt, ...);

MCNAPI int nvSprintf(char* dst, uint64 dstLen, char const* fmt, ...);

MCNAPI ::std::ostream& operator<<(::std::ostream& os, ::cg::TextureSetLayerType const& type);
#endif

MCNAPI ::SharedTypes::v1_21_90::CameraPresetFile parseLegacy(
    ::Puv::Input const&                                      input,
    ::Puv::Logger&                                           logger,
    ::MolangVersion                                          molangVersion,
    ::gsl::not_null<::cereal::ReflectionCtx const*>          ctx,
    ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const validator
);

#ifdef LL_PLAT_C
MCNAPI ::std::string parseRawText(::Json::Value const& value);
#endif

MCNAPI bool parseSingleTradeJson(::SharedTypes::v1_21_30::TradeItem& inoutTrade, ::Json::Value const& inputData);

MCNAPI bool parseTradeChoicesJson(
    ::SharedTypes::v1_21_30::TradeItemList& inoutTrade,
    ::Json::Value&                          inputData,
    ::SemVersion const&                     format
);

MCNAPI bool parseTradeGroupJson(
    ::Puv::Logger&                       logger,
    ::SharedTypes::v1_21_30::TradeGroup& inoutTradeGroup,
    ::Json::Value const&                 inputRootData,
    ::SemVersion const&                  format
);

#ifdef LL_PLAT_C
MCNAPI ::std::string pascalCaseConverter(::std::string const& inString, bool pascalCase);
#endif

MCNAPI ::TrimDataPacket
prepareFromRegistries(::TrimPatternRegistry const& patternRegistry, ::TrimMaterialRegistry const& materialRegistry);

#ifdef LL_PLAT_C
MCNAPI void readUV(::glm::vec2& uv, ::Json::Value const& value);

MCNAPI void receiptPrinter_Amazon(
    ::std::vector<::std::weak_ptr<::Purchase>> const& purchases,
    ::ReceiptFulfillment::ReceiptData const&          receiptData
);

MCNAPI void recursiveMerge(
    ::Json::Value&                                                                  defRoot,
    ::Json::Value const&                                                            currDefRoot,
    ::std::string const&                                                            pathName,
    int                                                                             treeLevel,
    ::std::multiset<::ModificationOperation, ::std::less<::ModificationOperation>>* modifications,
    int                                                                             packIndex
);

MCNAPI void
registerBedrockEffectComponents(::ParticleSystem::ParticleEffectComponentRegistry& particleComponentRegistry);

MCNAPI void removeFromCollection(
    ::std::vector<::std::shared_ptr<::UIControl>>& controls,
    ::std::map<::std::vector<::std::shared_ptr<::UIControl>>*, ::std::vector<::std::shared_ptr<::UIControl>>>&
                            controlsToRemove,
    ::UIControl&            control,
    ::ControlCollectionFlag flag
);

MCNAPI ::mce::framebuilder::FrameBuilder* renderDragonFrameBuilder();

MCNAPI uchar* resample_row_1(uchar* out, uchar* in_near, uchar* in_far, int w, int hs);

MCNAPI ::ui::DirtyFlag setControlVariableValue(
    ::UIControl&         control,
    ::LayoutVariableType type,
    float                inValue,
    float                inMinValue,
    float                inMaxValue
);

MCNAPI void setProgressPercent(
    float                        progressPercent,
    ::std::function<void(float)> setValue,
    ::std::function<float()>     getMin,
    ::std::function<float()>     getMax
);

MCNAPI bool shouldRenderAnyAttachables(
    bool     modelAttachablesAreEnabled,
    ::Actor& actor,
    bool     lessThanOrEqualToVersion_1_16_210,
    bool     hideArmor
);
#endif

#ifdef LL_PLAT_S
MCNAPI ::DiscoveryEnvironment stringToDiscoveryEnvironment(::std::string const& str);
#endif

#ifdef LL_PLAT_C
MCNAPI ::InitiatorCategory stringToInitiatorCategory(::std::string const& initiatorCategoryString);

MCNAPI ::ProcessState stringToProcessState(::std::string const& processStateString);

MCNAPI ::TerrainVariation terrainVariationFromString(::std::string_view terrainVariation);
#endif

MCNAPI ::ItemInstance toItemInstance(::RecipeIngredient const& ingredient);

MCNAPI ::std::shared_ptr<::PoolAliasBinding> toPoolAlias(::SharedTypes::v1_21_20::PoolAliases::Direct const& direct);

MCNAPI ::std::shared_ptr<::PoolAliasBinding> toPoolAlias(::SharedTypes::v1_21_20::PoolAliases::Random const& random);

MCNAPI ::ShapedRecipePayload toShapedPayload(::ShapedRecipe const& recipe, bool includeUnlocking);

MCNAPI ::ShapelessRecipePayload toShapelessPayload(::ShapelessRecipe const& recipe, bool includeUnlocking);

MCNAPI ::std::string toString(::AgentActionType type);

#ifdef LL_PLAT_C
MCNAPI ::std::optional<uint> tryCreateDataDrivenV2Resource(
    ::HashedString const&                          name,
    ::std::shared_ptr<::DataDrivenRenderer> const& render,
    ::DataDrivenRendererPreprocessingContext&      bakeCtx
);

MCNAPI void updateLevelSettingsConsideringPlayerIntents(
    ::Bedrock::NotNullNonOwnerPtr<::ILevel>             level,
    ::Bedrock::NotNullNonOwnerPtr<::IAppPlatform> const appPlatform,
    ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const&,
    bool const                                                  isNxAdhocMultiplayer,
    ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const userManager,
    ::Bedrock::NotNullNonOwnerPtr<::TrialManager> const         trialManager,
    bool const                                                  hasAllValidCrossPlatformSkin
);
#endif

MCNAPI ::Json::Value upgradeTraderMaterialFunction(::Json::Value& tradeItem);

#ifdef LL_PLAT_S
MCNAPI ::http_wstring utf16_from_utf8(::http_string const& utf8);

MCNAPI ::http_wstring utf16_from_utf8(char const* utf8);

MCNAPI ::http_wstring utf16_from_utf8(char const* utf8, uint64 size);

MCNAPI ::http_string utf8_from_utf16(::http_wstring const& utf16);

MCNAPI ::http_string utf8_from_utf16(wchar_t const* utf16, uint64 size);
#endif

MCNAPI int64 utf8proc_decompose_char(int uc, int* dst, int64 bufsize, int options, int* last_boundclass);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string> validateControlNames(::Json::Value const& root);

MCNAPI void visitTreeInternal(
    ::UIControl&                                   control,
    ::std::function<bool(::UIControl&, int, bool)> visitor,
    int                                            parentZOrder,
    bool                                           ancestorVisible
);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string_view const& ACTOR_DEFINITIONS_VERSION_TRACKER();

MCNAPI ::std::vector<::HudElement> const& ALL_HUD_ELEMENTS();

#ifdef LL_PLAT_C
MCNAPI ::std::array<::LayoutVariableType, 11> const& AllLayoutVariableTypes();
#endif

MCNAPI ::HashedString const& BLAST_FURNACE_TAG();

MCNAPI ::HashedString const& CAMPFIRE_TAG();

MCNAPI ::std::string_view const& CEREAL_DOCUMENTATION_TAG();

MCNAPI ::std::string_view const& CEREAL_JSON_SCHEMA_PROPERTY();

MCNAPI ::std::string_view const& CEREAL_ROOT_SCHEMA_PROPERTY();

MCAPI ::std::unordered_map<::ContainerEnumName, ::std::string>& ContainerCollectionNameMap();

#ifdef LL_PLAT_C
MCNAPI ::std::string const& DEFAULT_DRIVE_CONTENTS_PATH();
#endif

MCNAPI ::HashedString const& FURNACE_TAG();

#ifdef LL_PLAT_C
MCNAPI ushort const*& GAME_RUNTIME_DLL_NAME();
#endif

MCNAPI ::std::array<::std::pair<::HudElement, ::std::string>, 13> const& HUD_ELEMENTS_TO_STRINGS();

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<::std::string_view, ::HowToPlayTopicIndex> const& HowToPlayTopicIndexMap();

MCNAPI ::std::string const& ICON_OVERLAY_FACTORY();

MCNAPI ::ThirdPartyInfo const& INVALID_THIRD_PARTY_INFO();
#endif

MCNAPI ::MCRESULT const& MCRESULT_ChatMuted();

MCNAPI ::MCRESULT const& MCRESULT_CommandNotFound();

MCNAPI ::MCRESULT const& MCRESULT_CommandRequestInitiated();

MCNAPI ::MCRESULT const& MCRESULT_CommandStepFail();

MCAPI ::MCRESULT const& MCRESULT_CommandsDisabled();

MCNAPI ::MCRESULT const& MCRESULT_EncryptionRequired();

MCAPI ::MCRESULT const& MCRESULT_ExecutionFail();

MCAPI ::MCRESULT const& MCRESULT_FailedToParseCommand();

MCNAPI ::MCRESULT const& MCRESULT_InvalidCommandContext();

MCNAPI ::MCRESULT const& MCRESULT_InvalidCommandOrigin();

MCNAPI ::MCRESULT const& MCRESULT_MalformedRequest();

MCAPI ::MCRESULT const& MCRESULT_Success();

MCNAPI ::MCRESULT const& MCRESULT_TooManyPendingRequests();

MCNAPI ::std::bitset<39> const& PLAYER_ACTION_MOVEMENT_BITSET();

MCNAPI ::std::bitset<39> const& PLAYER_ACTION_MOVEMENT_FLYING_ATTRIBUTE_BITSET();

MCNAPI ::std::bitset<39> const& PLAYER_ACTION_MOVEMENT_SPEED_ATTRIBUTE_BITSET();

MCNAPI ::HashedString const& SMOKER_TAG();

MCNAPI ::HashedString const& SOUL_CAMPFIRE_TAG();

MCNAPI ::std::unordered_map<
    ::TextProcessingEventOrigin,
    ::std::string,
    ::TextProcessingEventOriginEnumHasher,
    ::std::equal_to<::TextProcessingEventOrigin>> const&
TextProcessingEventOriginEnumMap();

MCNAPI uint const& UNINITIALIZED_BLOCK_NETWORKID();

MCNAPI ::std::array<::HashedString, 25> const& VanillaStructureFeatureTypes();

#ifdef LL_PLAT_C
MCNAPI bool& _mi_cpu_has_fsrm();

MCNAPI ::std::add_lvalue_reference_t<void*[]> _mi_externs();

MCNAPI ::mi_heap_s*& _mi_heap_default();

MCNAPI ::mi_heap_s const& _mi_heap_empty();

MCNAPI ::mi_heap_s& _mi_heap_main();

MCNAPI ::std::atomic<uint64>& _mi_numa_node_count();

MCNAPI ::mi_page_s const& _mi_page_empty();

MCNAPI bool& _mi_process_is_initialized();

MCNAPI ::mi_stats_s& _mi_stats_main();

MCNAPI ::std::unordered_map<int, ::std::string> const& autoUpdateModeLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& blockLightQualityLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& chatDurationLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& cloudQualityLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& contentLogGUILevelLables();

MCNAPI ::std::unordered_map<int, ::std::string> const& debugHudLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& deviceInfoMemoryTierLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& difficultyLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& discoveryEnvironmentLabels();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<::std::string, ::DiscoveryEnvironment> const& discoveryEnvironmentStrings();
#endif

MCNAPI ::std::unordered_map<::DiscoveryEnvironment, ::std::string> const& discoveryEnvironments();

MCNAPI ::std::add_lvalue_reference_t<uint[]> englishCharacterFrequencies();

MCNAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Biome>>& gBiomeChunkGC();

MCNAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Block>>& gBlockStorageGC();

MCAPI ::InternalTaskGroup& gInternalTaskGroup();

MCNAPI ::SubChunkDelayedDeleter<::SubChunkBrightnessStorage>& gLightStorageGC();

#ifdef LL_PLAT_C
MCNAPI ::MainGameCore::WinMain*& gWinMainInstance();

MCNAPI bool& g_forceDLSSFallback_Dx12();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::add_lvalue_reference_t<void* (*)(uint64, uint)> g_memAllocFunc();

MCNAPI ::std::add_lvalue_reference_t<void (*)(void*, uint)> g_memFreeFunc();

MCNAPI ::HCTraceImplArea& g_traceHTTPCLIENT();

MCNAPI ::HCTraceImplArea& g_traceWEBSOCKET();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<int, ::std::string> const& gameModeLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& graphicsModeLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& graphicsQualityPresetModeLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& joystickVisibilityOptionLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& partyInviteReceivedFilterLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& partyInviteSendPrivilegesLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& partyPrivacyLabels();

MCNAPI ::std::unordered_map<::std::string, int> const& permissionsNameValuePairs();

MCNAPI ::std::unordered_map<int, ::std::string> const& permissionsValueLabelPairs();

MCNAPI ::std::unordered_map<int, ::std::string> const& permissionsValueTexturePairs();

MCNAPI ::std::unordered_map<int, ::std::string> const& playerWaypointsLabels();
#endif

MCNAPI ::std::add_lvalue_reference_t<void* (*)(uint64, char const*, uint)> rakMalloc_Ex();

MCNAPI ::std::add_lvalue_reference_t<void* (*)(void*, uint64, char const*, uint)> rakRealloc_Ex();

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<int, ::std::string> const& realmsGameModeLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& reflectionQualityLabels();
#endif

#ifdef LL_PLAT_S
MCNAPI bool& s_AsyncLibEnablePumpingWait();

MCNAPI ::std::atomic<uint>& s_AsyncLibGlobalStateCount();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<int, ::std::string> const& scriptDebuggerAttachModeLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& shadowQualityLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& sneakOptionLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& splitScreenLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& storageLocationLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& subtitlePositionLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& thirdPersonLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& toastsDurationLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& topButtonScaleOptionLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& typefaceLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& uiProfileLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& upscalingModeLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& volumetricFogQualityLabels();

MCNAPI ::std::unordered_map<int, ::std::string> const& vsyncLabels();

MCNAPI ::std::add_lvalue_reference_t<int (*)(void*)> winrt_to_hresult_handler();
#endif
// NOLINTEND
