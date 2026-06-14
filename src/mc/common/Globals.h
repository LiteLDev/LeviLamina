#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"
#include "mc/client/network/NetworkFilter.h"
#include "mc/client/renderer/ColorGraderConfig.h"
#include "mc/client/renderer/LightingGroup.h"
#include "mc/client/renderer/SkyboxConfig.h"
#include "mc/client/renderer/UpscalingConfiguration.h"
#include "mc/client/renderer/actor/v2/Destination.h"
#include "mc/client/renderer/game/ShadowRenderingParameters.h"
#include "mc/client/renderer/game/TerrainVariation.h"
#include "mc/client/resources/ContentCatalogQueryData.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/tutorial/GameTip.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/file/file_system/FileType.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/XAsyncBlock.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/json/ValueType.h"
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/libsrtp/srtp_err_status_t.h"
#include "mc/network/packet/AgentActionType.h"
#include "mc/options/DiscoveryEnvironment.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/HudElement.h"
#include "mc/util/gltf/Accessor.h"
#include "mc/util/gltf/Image.h"
#include "mc/util/gltf/Material.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorHealCause.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ActorTypeNamespaceRules.h"
#include "mc/world/attribute/AttributeBuffType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/filters/FilterGroup.h"
#include "mc/world/filters/FilterOperator.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/block/BlockSlot.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/SubChunk.h"
#include "mc/world/level/chunk/SubChunkDelayedDeleter.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorOwnerComponent;
class BaseGoal;
class Biome;
class BiomeArea;
class Block;
class BlockPos;
class BlockSource;
class BlockState;
class BlockType;
class BoundingBox;
class BribeableComponent;
class CircuitComponentList;
class CircuitSceneGraph;
class CircuitTrackingInfo;
class DefinitionTrigger;
class Dimension;
class ExpressionNode;
class GatheringServerInfo;
class HashedString;
class HitResult;
class I18n;
class IAppPlatform;
class IFileAccess;
class ILevel;
class InternalTaskGroup;
class ItemInstance;
class ItemStack;
class LevelChunk;
class LevelData;
class ListTag;
class PackManifest;
class PackReport;
class PositionTrackingId;
class RecipeIngredient;
class RedstoneTorchCapacitor;
class ResponseVerifier;
class ScriptServerNetworkHandlerReference;
class ScriptStat;
class SemVersionConstant;
class SubChunkBrightnessStorage;
class ThirdPartyInfo;
class Vec2;
class Vec3;
class WorkerPool;
struct AccessorTypeEnumHasher;
struct ActorDefinitionIdentifier;
struct BlockLayer;
struct DimensionType;
struct FlatWorldPreset;
struct HCTraceImplArea;
struct ImageMimeTypeEnumHasher;
struct KeyOrNameResult;
struct KineticDamageSettings;
struct MCRESULT;
struct MaterialAlphaModeEnumHasher;
struct PackIdVersion;
struct PackMaps;
struct SentryEnvelopePayloadStacktraceFrame;
struct TextProcessingEventOriginEnumHasher;
struct WorkerConfiguration;
struct WorldTemplateInfo;
struct srtp_auth_t;
namespace Bedrock { class StaticOptimizedString; }
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Services { class IDiscoveryService; }
namespace Bedrock::Services { struct DiscoveryConfig; }
namespace Core { class File; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Json { class Reader; }
namespace Json { class Value; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct SystemAddress; }
namespace ScriptModuleGameTest { class ScriptSimulatedPlayer; }
namespace ScriptModuleGameTest { struct ScriptPlayerSkinData; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
namespace SharedTypes { struct BaseGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
namespace cohtml { class Binder; }
namespace mce { class UUID; }
class TraceState;
struct HC_CALL;
class BaseActorRenderContext;
class DataDrivenGeometry;
class DataDrivenModel;
class DataDrivenRenderer;
class ExprToken;
class IClientInstance;
class IOptionRegistry;
class LocalPlayer;
class SearchQuery;
class StoreDataDrivenScreenController;
class Tessellator;
class TrialManager;
class UIControl;
class UIPropertyBag;
class WorldSeedModel;
struct ActorAttachableDerivitiveData;
struct ActorDerivitiveData;
struct AnimationData;
struct AttachablesPreprocessingContext;
struct BakedDataDrivenRenderDataInfrequentAccess;
struct BakedRenderControllerResults;
struct CloudConfiguration;
struct CommonLocTextPair;
struct ContentCatalogQueryData;
struct DataDrivenRendererDerivitiveData;
struct DataDrivenRendererPreprocessingContext;
struct DisconnectionErrorStringOverrides;
struct DisconnectionErrorTheme;
struct DurableSearchResults;
struct ExtractedDataDataDrivenModel;
struct ExtractedRenderController;
struct ExtractedSkeletonData;
struct FinalRenderingData;
struct FrameAllocationCount;
struct GameplayRelatedRenderData;
struct LinksToStyle;
struct ModificationOperation;
struct PartVisibilityExpression;
struct PointLightShadowConfiguration;
struct PreviousTransformationInput;
struct PreviousTransformationOutput;
struct ProcessedDataDrivenRenderers;
struct RealmsWorldInfo;
struct RenderControllerResources;
struct RequestedRenderEntries;
struct ResourceBakingResult;
struct ResourceOffset;
struct ShadowConfiguration;
struct SharedUniformPhase;
struct SkinPackMeta;
namespace AtmosphericWeatherConfig { struct SkyWeatherParameters; }
namespace ContentCard { class ItemData; }
namespace ContentCard { class StyleDataGrid; }
namespace MainGameCore { class WinMain; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace mce { class Camera; }
namespace mce::framebuilder { class FrameBuilder; }
namespace mce::framebuilder { struct PerCascadeRenderingParameters; }
namespace mce::framebuilder { struct RenderBatchActorInstanceDescription; }
namespace mce::framebuilder { struct ShadowRange; }
// clang-format on

// functions
// NOLINTBEGIN
MCAPI void BedrockLogOut(uint, char const*, ...);

#ifdef LL_PLAT_C
MCAPI void CoherentBind(::cohtml::Binder* binder, ::Vec3* data);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                            binder,
    ::IMarketplacePackDownloader::MarketplacePackDownloadStatus* marketplacePackDownloadStatus
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::FlatWorldPreset* options);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::RealmsWorldInfo* realmsWorldInfo);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::WorldSeedModel* seedTemplate);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::WorldTemplateInfo* worldTemplateInfo);
#endif

MCFOLD ::SharedTypes::CreativeItemCategory
CreativeItemCategoryComprehensiveToRuntime(::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory category);

MCAPI ::SharedTypes::CreativeItemCategory CreativeItemCategoryFromString(::std::string const& str);

MCAPI ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory
CreativeItemCategoryRuntimeToComprehensive(::SharedTypes::CreativeItemCategory category);

#ifdef LL_PLAT_S
MCAPI void* DefaultMemAllocFunction(uint64 size, uint memoryType);

MCAPI void DefaultMemFreeFunction(void* pointer, uint memoryType);
#endif

MCFOLD void DefaultOutOfMemoryHandler(char const*, long);

#ifdef LL_PLAT_S
MCAPI bool DoesMockCallMatch(::HC_CALL const* mockCall, ::HC_CALL const* originalCall);
#endif

MCAPI ::HashedString const& EntityCanonicalName(::ActorType entityType);

MCAPI ::ActorType EntityTypeFromString(::std::string const& str);

MCAPI ::std::string EntityTypeIdWithoutCategories(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeResolveAlias(::std::string const& fromString, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToFormattedLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI void EntityTypeToStringAndNamespace(::ActorType entityType, ::std::string& nameOut, ::std::string& namespaceOut);

MCAPI double GetEngagementMetricsTimeSinceAppStart_DEPRECATED();

MCAPI void GetMyIP_Windows_Linux_IPV4And6(::RakNet::SystemAddress* const addresses);

#ifdef LL_PLAT_S
MCAPI ::TraceState& GetTraceState();
#endif

#ifdef LL_PLAT_C
MCAPI long InitializeGameRuntimeDll(uint64 flags, ::_INITIALIZE_OPTIONS* const options);

MCAPI long LoadGameRuntimeDll();
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

MCAPI bool NGXSafeInitializeLog(wchar_t const* InPathToValidate, wchar_t const* InFileName);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::optional<::NetherNet::LogSeverity> NetherNetLogSeverityFromString(::std::string const& str);
#endif

MCAPI ::PackType PackTypeFromString(::std::string const& value);

MCAPI void PlatformBedrockLogOut(uint buf, char const* nullTerminatorPos, uint64);

MCAPI void PushCircularReference(
    ::std::unordered_map<::BlockPos, ::RedstoneTorchCapacitor*>&                      relatedTorches,
    ::BlockPos const&                                                                 pos,
    ::std::queue<::RedstoneTorchCapacitor*, ::std::deque<::RedstoneTorchCapacitor*>>& list
);

MCAPI void RakSleep(uint ms);

#ifdef LL_PLAT_C
MCAPI bool ReadJpegFile(::Core::Path const& fileName, int readMode);

MCAPI int ReadJpegSections(::Core::File& infile, int readMode);
#endif

MCAPI ::std::string const& StringFromPackType(::PackType value);

#ifdef LL_PLAT_C
MCAPI ::edu::Role StringToADRole(::std::string const& str);

MCAPI uint StringToNameId(::std::string const& name);
#endif

MCAPI uint SuperFastHashIncremental(char const* data, int len, uint lastHash);

#ifdef LL_PLAT_C
MCAPI void UpdateLinksToStyleWithNavigateInPlace(::LinksToStyle& oldStyle, ::LinksToStyle const& newStyle);
#endif

MCAPI ::SharedTypes::Legacy::UseAnimation UseAnimationFromString(::std::string const& str);

#ifdef LL_PLAT_C
MCAPI int64 WndProc(::HWND__* hwnd, uint uMsg, uint64 wParam, int64 lParam);

MCAPI bool WriteJpegFile(::Core::Path const& fileName);

MCAPI ::Bedrock::Result<::XUser*> XUserGetDefaultHandle_Blocking();

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
MCAPI ::ShadowRenderingParameters::ShadowMap _calculateCascade(
    float                                   fov,
    float                                   aspectRatio,
    float                                   resolution,
    ::mce::framebuilder::ShadowRange const& range,
    ::glm::mat4x4 const&                    playerView,
    ::glm::vec3 const&                      viewPos,
    ::glm::vec3 const&                      up,
    ::glm::mat4x4 const&                    worldToLight,
    ::glm::mat4x4 const&                    playerPosition,
    ::glm::vec3 const&                      maxWorldTexelSnappingPosition,
    float                                   zNear,
    float                                   maxShadowFrustumRadius,
    float                                   renderingParameters,
    ::mce::framebuilder::PerCascadeRenderingParameters const&
);
#endif

MCAPI void _checkTickedActorsForOutOfWorld(::ActorOwnerComponent& actorOwnerComponent);

#ifdef LL_PLAT_C
MCAPI ::glm::vec3 _clampShadowAngle(::glm::vec3 const& lightDir, ::glm::vec3 const& up, float shadowClampAngle);

MCAPI bool _clientHasMenuUI(::IClientInstance const* client);
#endif

MCAPI ::std::unique_ptr<::ListTag> _createBlockStateEnum(::BlockState const& state);

#ifdef LL_PLAT_C
MCAPI int _findNextIndex(::std::vector<::std::shared_ptr<::UIControl>>& tabControls, int originIndex, bool right);

MCAPI void _forEachObject(
    ::Json::Value&                                                                  value,
    ::brstd::function_ref<void(::Json::Value&, ::std::string_view, ::Json::Value&)> callback
);

MCFOLD ::std::vector<::BlockPos> _generateChunkStartPositions(::AABB const& area);

MCAPI int _getCurrentlySelectedToggleGroupIndex(::std::vector<::std::shared_ptr<::UIControl>>& tabControls);

MCAPI ::std::vector<int> const _getRenderDistanceLevels(int& defaultDistanceIdx, bool isVR);

MCAPI void _handleFetchedImageResponseData(
    ::std::shared_ptr<::ContentCatalogQueryData> request,
    ::Core::Path const&                          iconPath,
    ::std::unique_ptr<::PackManifest>            manifestPtr,
    ::Bedrock::Http::Status const&               status,
    uint64                                       fileSize
);
#endif

MCAPI bool _hasAirBuffer(::Json::Value const& blockLayers);

#ifdef LL_PLAT_C
MCAPI bool _haveSameScrollSection(::std::weak_ptr<::UIControl> const& a, ::std::weak_ptr<::UIControl> const& b);

MCAPI bool
_isRenderingAttachableItem(::BaseActorRenderContext& renderContext, ::Actor& entity, ::ItemStack const& item);

MCAPI ::Bedrock::Threading::Async<::ContentCatalogQueryData::Done>
_loadAllCatalogItems(::std::shared_ptr<::ContentCatalogQueryData> request);
#endif

MCAPI ::Block const* _loadLayerBlock(::Json::Value const& layer);

MCAPI ::std::optional<::BlockPos> _locateBiome(
    ::std::function<bool(::Biome const&)> const& predicate,
    ::BiomeArea const&                           biomeArea,
    ::BlockPos                                   worldCenter,
    ::BoundingBox                                worldBounds,
    uint                                         resolution
);

MCAPI ::std::optional<::std::vector<::BlockLayer>>
_parseLayersV3(::Json::Value const& root, ::LevelData const& levelData);

MCAPI ::std::optional<::std::vector<::BlockLayer>>
_parseLayersV4(::Json::Value const& root, ::LevelData const& levelData);

MCAPI ::std::optional<::std::vector<::BlockLayer>>
_parseLayersV5(::Json::Value const& root, ::LevelData const& levelData);

MCAPI ::std::optional<::std::vector<::BlockLayer>>
_parseLayersV6(::Json::Value const& root, ::LevelData const& levelData, ::WorldVersion worldVersion);

#ifdef LL_PLAT_C
MCAPI ::glm::vec3 _quantizeLightDirection(float angle, float perpendicularAngle, int step);
#endif

MCAPI ::std::unique_ptr<::ListTag> _saveBlockList(::std::vector<::BlockType const*> const& blockList);

#ifdef LL_PLAT_C
MCAPI void _searchBlockByCameraCenter(
    ::Actor const& cameraEntity,
    float          a,
    ::LocalPlayer& player,
    ::Vec3&        pickDirection,
    float          pickRange,
    ::HitResult&   hitResult,
    ::HitResult&   liquidHitResult
);

MCAPI bool _searchBlockByFreeFormPick(
    ::IClientInstance&   client,
    ::mce::Camera const& a,
    float                outSrc,
    ::Vec3&              outDir,
    ::Vec3&              hitResult,
    ::HitResult&         liquidHitResult,
    ::HitResult&
);

MCAPI bool _stringLessThan(::std::string const& str1, ::std::string const& str2);
#endif

MCAPI void
_tickBribeableComponent(::ActorOwnerComponent& actorOwnerComponent, ::BribeableComponent& bribeableComponent);

#ifdef LL_PLAT_C
MCAPI ::Destination addExpressionOrConstantResources(
    ::std::vector<float>&            constantBuffer,
    ::std::vector<::ExpressionNode>& expressionBuffer,
    ::ExpressionNode const&          expr,
    char const*                      defaultExpression,
    float                            defaultValue
);

MCAPI void applyAnimations(
    ::RequestedRenderEntries const&                                             entries,
    ::AnimationData const&                                                      animationData,
    ::std::vector<::glm::mat4x4>&                                               boneList,
    ::BaseActorRenderContext&                                                   renderContext,
    ::gsl::span<::mce::framebuilder::RenderBatchActorInstanceDescription const> actorDescriptions
);

MCAPI void bakeAttachable(::std::shared_ptr<::DataDrivenRenderer> renderer, ::AttachablesPreprocessingContext& ctx);

MCAPI void bakeDataDrivenRenderer(
    ::std::weak_ptr<::DataDrivenModel>        weakModelPtr,
    ::ExtractedDataDataDrivenModel const&     extractedData,
    ::DataDrivenRendererPreprocessingContext& ctx
);

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

MCAPI ::ResourceBakingResult bakeResourceOffsets(
    ::ExtractedDataDataDrivenModel const& extractedData,
    ::ExtractedRenderController const&    renderController,
    ::RenderControllerResources&          rcResources
);
#endif

MCAPI void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);

MCAPI void bindModuleToDDUI(
    ::Scripting::ModuleBindingBuilder&     moduleBuilder,
    ::ScriptServerNetworkHandlerReference* serverNetworkHandlerReference
);

MCAPI char const* blockSlotToString(::BlockSlot slot);

MCAPI ::KeyOrNameResult
buildActorDisplayName(::ActorType actorType, ::std::string const& nameTag, ::Actor const* actor);

#ifdef LL_PLAT_C
MCAPI void calculateTileLighting(
    ::GameplayRelatedRenderData const&        worldData,
    ::ActorDerivitiveData const&              actorData,
    ::DataDrivenRendererDerivitiveData const& dataDrivenRendererData,
    ::RequestedRenderEntries const&           entries,
    ::ProcessedDataDrivenRenderers const&     resources,
    ::FinalRenderingData&                     finalRenderData
);
#endif

MCAPI void checkComponent(
    ::CircuitSceneGraph&                                                      graph,
    ::CircuitComponentList&                                                   powerAssociationMap,
    ::CircuitComponentType                                                    typeId,
    uchar                                                                     id,
    ::BlockPos const&                                                         otherPos,
    ::CircuitTrackingInfo&                                                    info,
    ::std::queue<::CircuitTrackingInfo, ::std::deque<::CircuitTrackingInfo>>& positions,
    bool
);

#ifdef LL_PLAT_C
MCAPI bool checkMinMaxClientVer(::Json::Value const& documentObject, bool pascalCase);

MCAPI bool checkMinMaxClientVer(::std::string const& minClientVersion, ::std::string const& maxClientVersion);
#endif

MCAPI bool checkTypeFilter(
    ::ActorDefinitionIdentifier const& entityIdentifier,
    ::ActorDefinitionIdentifier const& identifierFilter
);

#ifdef LL_PLAT_C
MCAPI void clearBakedTextures(
    ::BakedDataDrivenRenderDataInfrequentAccess const& bakedInfrequentData,
    ::RenderControllerResources&                       resources
);
#endif

MCAPI void compoundBlockVolumeActionBindType(::cereal::ReflectionCtx& ctx);

MCAPI void compoundBlockVolumePositionRelativityBindType(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_C
MCAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)> createDefaultUniqueRakPeer();

MCAPI ::std::unique_ptr<::ResponseVerifier> createMutsResponseVerifier(
    ::std::string                    responseField,
    ::std::string                    payloadField,
    ::std::string                    publicKey,
    ::std::function<int64()>         getTime,
    ::std::function<::std::string()> createRequestId
);

MCAPI ::ExprToken createTokenFromUIDefVal(::Json::Value const& resVal);
#endif

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

MCAPI void emplaceMatchedBoneIndex(
    ::std::string const&                  boneName,
    uint64                                boneIdx,
    ::std::vector<::std::string> const&   regexArray,
    ::std::vector<::std::vector<uint64>>& indices
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
extractModelData(::HashedString const& rendererPtr, ::std::shared_ptr<::DataDrivenRenderer>);

MCAPI ::ExtractedSkeletonData extractSkeleton(::DataDrivenGeometry const& geo);

MCAPI void fillLangValue(
    ::std::string const&                                jsonFieldStr,
    ::std::string const&                                langCode,
    ::std::string const&                                modifiedCode,
    ::Json::Value const&                                documentObject,
    bool                                                pascalCase,
    ::CommonLocTextPair&                                locTextPairToFill,
    ::std::unordered_map<::std::string, ::std::string>& locDictionary
);

MCAPI void fillPackIdentityListFromJson(
    ::std::vector<::PackIdVersion>& packIdentityListToFill,
    ::Json::Value const&            packIdentitiesJsonArray
);

MCAPI void findInvalidControls(
    ::Json::Value&                root,
    ::std::vector<::std::string>& foundInvalidControls,
    ::PackReport&                 packReport,
    ::std::string const&          fileName
);
#endif

MCAPI ::AABB fixGeoFileAABBCoordinateSystem(::AABB const& aabb);

MCAPI ::std::optional<::FlatWorldPresetID> flatWorldPresetIDFromString(::std::string const& str);

#ifdef LL_PLAT_C
MCAPI ::std::string_view flatWorldPresetIDToString(::FlatWorldPresetID id);
#endif

MCAPI void forEachEntityType(
    ::brstd::function_ref<bool(::ActorType, ::std::string const&)> callback,
    ::ActorTypeNamespaceRules                                      namespaceRule
);

MCAPI int fseek(::Core::File& file, int64 offset, int origin);

MCAPI int64 ftell(::Core::File& file);

#ifdef LL_PLAT_C
MCAPI void gameplayValueGeneration(
    ::FrameAllocationCount const&             counts,
    ::ActorDerivitiveData const&              actorData,
    ::DataDrivenRendererDerivitiveData const& dataDrivenRendererData,
    ::RequestedRenderEntries const&           entries,
    ::ProcessedDataDrivenRenderers const&     resources,
    ::FinalRenderingData&                     finalRenderData,
    ::SharedUniformPhase&                     uniformPhase
);
#endif

MCAPI ::std::string gatherTypeStrings(::std::vector<::Json::ValueType> const& types);

#ifdef LL_PLAT_C
MCAPI ::ResourceOffset generateExpressionOffset(
    ::ExpressionNode&&               expression,
    ::ExpressionOp                   expectedOperator,
    ::std::vector<::ExpressionNode>& outputExpressionList
);

MCAPI void generatePartVisibility(
    ::DataDrivenRendererDerivitiveData const&  dataDrivenRendererData,
    ::RequestedRenderEntries const&            entries,
    ::ProcessedDataDrivenRenderers const&      resources,
    ::std::vector<::PartVisibilityExpression>& partVisibilityExpressions
);

MCAPI void
generatePreviousTransformationStreams(::PreviousTransformationInput const&& in, ::PreviousTransformationOutput&& out);
#endif

MCAPI ::ActorHealCause getActorHealCause(::AttributeBuffType buffType);

#ifdef LL_PLAT_C
MCAPI ::std::string
getAnchorPointFromDirectionAndAnchor(::GameTip::ArrowDirection direction, ::GameTip::ArrowAnchor anchor);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string getCPUName();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::shared_ptr<::ContentCard::StyleDataGrid const>
getContentCardGridFromController(::StoreDataDrivenScreenController& controller, ::UIPropertyBag& bag);

MCAPI ::ContentCard::ItemData const*
getContentCardItemDataFromBag(::StoreDataDrivenScreenController& controller, ::UIPropertyBag& bag);

MCAPI ::std::shared_ptr<::UIControl> getControlBreadthFirst(::UIControl* scope, ::std::string name);

MCAPI ::std::shared_ptr<::UIControl> getControlFromAncestors(::UIControl* scope, ::std::string name);

MCAPI float getControlVariableValue(::UIControl& control, ::LayoutVariableType type);

MCAPI void getControlsInternal(
    ::std::vector<::std::shared_ptr<::UIControl>>& result,
    ::std::function<bool(::UIControl const&)>      predicate,
    ::UIControl&                                   control
);
#endif

MCAPI ::std::string getDiscoveryServiceURL(::DiscoveryEnvironment environment);

#ifdef LL_PLAT_C
MCAPI ::Json::Value const& getDisplayProperties(::Json::Value const& resultObject, bool pascalCase);
#endif

MCAPI ::std::string const getEdition();

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

MCAPI ::FlatWorldPreset const& getFlatWorldPresetWithID(::FlatWorldPresetID id);

MCAPI ::std::unordered_map<::FlatWorldPresetID, ::FlatWorldPreset> const& getFlatWorldPresets();

MCAPI ::I18n& getI18n();

MCAPI ::std::string getInvalidRespawnBlockMessage(::DimensionType const& dimension);

#ifdef LL_PLAT_C
MCAPI ::std::vector<::PackIdVersion> getJsonPackIdVersion(::Json::Value const& objectArray);
#endif

MCAPI ::brstd::bitset<130, uint64> const& getMovementActorFlagsBitset();

#ifdef LL_PLAT_C
MCAPI ::NetworkFilter getNetworkFilterFromOptions(::IOptionRegistry const& options);
#endif

MCAPI ::PackMaps const& getPackMaps();

MCFOLD ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeEventMapAccess();

MCFOLD ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeLOCMapAccess();

MCAPI ::Scripting::Result<
    ::ScriptModuleGameTest::ScriptPlayerSkinData,
    ::Scripting::InvalidArgumentError,
    ::ScriptModuleMinecraft::ScriptInvalidActorError>
getPlayerSkin(::ScriptModuleMinecraft::ScriptPlayer const& player);

#ifdef LL_PLAT_C
MCAPI ::Core::Result getPrimaryUserStorageArea(::std::shared_ptr<::Core::FileStorageArea>& sptStorageArea);

MCAPI void getPropertyValue(::std::string_view value, ::ExprToken& tok, ::UIPropertyBag* bag);

MCAPI ::SubChunk::SubChunkState getSubChunkState(::LevelChunk& levelChunk, short absoluteIndex);
#endif

MCFOLD int64 getUnixTime();

#ifdef LL_PLAT_C
MCAPI void getVisibleControlsInternal(::std::function<void(::UIControl&)> const& action, ::UIControl& control);
#endif

MCAPI void initializeBase(::BaseGoal& goal, ::SharedTypes::BaseGoalDefinition const& data);

MCAPI bool isChunkAtStage(::std::weak_ptr<::LevelChunk> lcwp, ::ChunkState stateToCheck);

#ifdef LL_PLAT_C
MCAPI bool
isExpectedContentType(::std::string const& contentType, ::std::vector<::std::string> const& expectedContentTypes);

MCAPI bool isSkinPackExpiredRealms(::SkinPackMeta const& meta);

MCAPI bool isSkinPackRealmsPlus(::SkinPackMeta const& meta);
#endif

MCAPI int itemVarientFromString(::std::string const& str);

MCAPI ::std::string join(::std::string prefix, ::std::string_view chunkKey);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag);

MCAPI ::ActorType lookupActualEntityType(::ActorType entityType);

MCAPI ::std::string makeGuestDisplayName(::std::string const& hostName, ::SubClientId subclientId);

MCAPI ::mce::UUID makeGuestUUID(::mce::UUID const& hostUuid, ::SubClientId subclientId);

MCAPI ::mce::UUID makePlayerUUIDForXUID(::std::string const& xuid);

#ifdef LL_PLAT_S
MCAPI ::std::shared_ptr<::Bedrock::Services::IDiscoveryService>
makeServerDiscoveryService(::Bedrock::Services::DiscoveryConfig const& discoveryConfig);
#endif

#ifdef LL_PLAT_C
MCAPI void mergeControls(
    ::Json::Value&                                                                  rootControl,
    ::Json::Value const&                                                            control,
    ::PackReport&                                                                   packReport,
    ::std::multiset<::ModificationOperation, ::std::less<::ModificationOperation>>& modifications,
    ::std::unordered_map<::std::string, ::std::string> const&                       topLevelNames,
    ::std::string const&                                                            fileName,
    int                                                                             packIndex
);

MCAPI int nvFPrintf(::_iobuf*, char const*, ...);

MCAPI int nvSWprintf(wchar_t*, uint64, wchar_t const*, ...);

MCAPI int nvSprintf(char*, uint64, char const*, ...);
#endif

MCAPI ::std::ostream& operator<<(::std::ostream& os, ::ActorFlags const& flag);

MCAPI ::std::ostream& operator<<(::std::ostream& os, ::PositionTrackingId const& id);

#ifdef LL_PLAT_C
MCAPI ::std::ostream& operator<<(::std::ostream& os, ::cg::TextureSetLayerType const& type);

MCAPI ::std::string pascalCaseConverter(::std::string const& inString, bool pascalCase);

MCAPI ::ActorAttachableDerivitiveData processActorAttachables(
    ::RequestedRenderEntries const&       renderEntries,
    ::ProcessedDataDrivenRenderers const& resources,
    bool                                  lessThanOrEqualToVersion_1_16_210
);

MCAPI ::ActorDerivitiveData processActors(
    ::RequestedRenderEntries const&                                          renderEntries,
    ::BaseActorRenderContext const&                                          entityContext,
    ::Vec3                                                                   cameraTargetPos,
    ::ProcessedDataDrivenRenderers const&                                    resources,
    ::std::vector<::mce::framebuilder::RenderBatchActorInstanceDescription>& actorDescriptions,
    ::FrameAllocationCount&                                                  frameCount
);

MCAPI ::DataDrivenRendererDerivitiveData processDataDrivenRenderers(
    ::RequestedRenderEntries const&       renderEntries,
    ::FrameAllocationCount const&         frameCounts,
    ::ProcessedDataDrivenRenderers const& resources,
    ::BaseActorRenderContext*             context,
    ::AnimationData&                      animData
);

MCAPI void
registerBedrockEffectComponents(::ParticleSystem::ParticleEffectComponentRegistry& particleComponentRegistry);

MCAPI void renderAttachables(
    ::RequestedRenderEntries const&        renderEntries,
    ::ActorAttachableDerivitiveData const& attachableData,
    ::FinalRenderingData const&            finalRenderingData,
    ::BaseActorRenderContext&              renderContext,
    ::ProcessedDataDrivenRenderers const&  resources
);

MCAPI ::mce::framebuilder::FrameBuilder* renderDragonFrameBuilder();

MCAPI void renderLeash(::std::vector<::Actor*> const& leashedActors, ::BaseActorRenderContext& ctx);
#endif

MCAPI void renderMapChunk(
    ::Dimension&                    dimension,
    ::buffer_span_mut<uint>         pixels,
    uint                            scale,
    ::BlockPos const&               origin,
    ::MapItemSavedData::ChunkBounds pixelsBB
);

#ifdef LL_PLAT_C
MCAPI void renderTempComponents(
    ::RequestedRenderEntries const&       entries,
    ::BaseActorRenderContext&             ctx,
    ::ProcessedDataDrivenRenderers const& resources,
    ::AnimationData const&                animationData,
    ::FinalRenderingData const&           finalRenderingData
);

MCAPI void reportParseError(::std::string const& fileName, ::Json::Reader& reader);

MCAPI void separateEntityStreams(
    ::DataDrivenRendererDerivitiveData const& dataDrivenRendererData,
    ::RequestedRenderEntries const&           entries,
    ::FrameAllocationCount&                   frameCount,
    ::ProcessedDataDrivenRenderers const&     resources,
    ::FinalRenderingData&                     finalRenderData,
    ::AnimationData&                          animData
);

MCAPI ::ui::DirtyFlag setControlVariableValue(
    ::UIControl&         control,
    ::LayoutVariableType type,
    float                inValue,
    float                inMinValue,
    float                inMaxValue
);

MCAPI void setRegexIndexByBoneIndex(
    ::std::string const&                boneName,
    uint64                              boneIdx,
    ::std::vector<::std::string> const& regexArray,
    ::std::vector<ushort>&              indices
);

MCAPI void setupAttachables(
    ::RequestedRenderEntries const&        renderEntries,
    ::ActorAttachableDerivitiveData const& attachableData,
    ::AnimationData const&                 animationData,
    ::ProcessedDataDrivenRenderers const&  resources
);

MCAPI bool shouldConnectToSideOrBelow(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type dir);

MCAPI bool shouldRenderAnyAttachables(
    bool     modelAttachablesAreEnabled,
    ::Actor& actor,
    bool     lessThanOrEqualToVersion_1_16_210,
    bool     hideArmor
);
#endif

MCAPI ::Scripting::Result<
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSimulatedPlayer>,
    ::Scripting::EngineError>
spawnSimulatedPlayer(
    ::Scripting::WeakLifetimeScope const&                   scope,
    ::ScriptModuleMinecraft::ScriptDimensionLocation const& location,
    ::std::string const&                                    name,
    ::GameType                                              gameMode
);

#ifdef LL_PLAT_S
MCAPI ::DiscoveryEnvironment stringToDiscoveryEnvironment(::std::string const& str);
#endif

#ifdef LL_PLAT_C
MCAPI char const* stringizeLayoutVariableType(::LayoutVariableType type);

MCAPI void submitActors(
    ::GameplayRelatedRenderData const& gameplayData,
    ::FinalRenderingData const&        finalRenderingData,
    bool                               needAGFXStream
);

MCAPI bool supportsDataDrivenRenderer(
    ::HashedString const&       model,
    ::DataDrivenModel const&    renderer,
    ::DataDrivenRenderer const& modelData,
    ::ExtractedDataDataDrivenModel const&
);

MCAPI ::TerrainVariation terrainVariationFromString(::std::string_view terrainVariation);

MCAPI void tessellateThickWireBox(::BaseActorRenderContext& renderContext, ::Tessellator& t, ::AABB const& bb);

MCAPI void tessellateWireBox(::Tessellator& tessellator, ::AABB const& bb);
#endif

MCAPI ::ItemInstance toItemInstance(::RecipeIngredient const& ingredient);

MCAPI ::std::string toString(::AgentActionType type);

#ifdef LL_PLAT_C
MCAPI ::std::optional<uint> tryCreateDataDrivenV2Resource(
    ::HashedString const&                          render,
    ::std::shared_ptr<::DataDrivenRenderer> const& bakeCtx,
    ::DataDrivenRendererPreprocessingContext&
);

MCAPI void updateLevelSettingsConsideringPlayerIntents(
    ::Bedrock::NotNullNonOwnerPtr<::ILevel>                                   level,
    ::Bedrock::NotNullNonOwnerPtr<::IAppPlatform>                             appPlatform,
    ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const& isNxAdhocMultiplayer,
    bool                                                                      userManager,
    ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                     trialManager,
    ::Bedrock::NotNullNonOwnerPtr<::TrialManager>                             hasAllValidCrossPlatformSkin,
    bool
);
#endif

#ifdef LL_PLAT_S
MCAPI ::http_wstring utf16_from_utf8(::http_string const& utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8, uint64 size);

MCAPI ::http_string utf8_from_utf16(::http_wstring const& utf16);

MCAPI ::http_string utf8_from_utf16(wchar_t const* utf16, uint64 size);
#endif

#ifdef LL_PLAT_C
MCAPI bool verifyValidResultObject(::Json::Value const& documentObject, bool pascalCase);

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
MCAPI ::std::vector<::HudElement> const& ALL_HUD_ELEMENTS();

MCAPI ::std::unordered_map<
    ::glTF::Accessor::Type,
    ::std::string,
    ::AccessorTypeEnumHasher,
    ::std::equal_to<::glTF::Accessor::Type>> const&
AccessorTypeEnumMap();

#ifdef LL_PLAT_C
MCAPI ::std::array<::LayoutVariableType, 11> const& AllLayoutVariableTypes();
#endif

MCAPI ::HashedString const& BLAST_FURNACE_TAG();

MCAPI ::HashedString const& CAMPFIRE_TAG();

MCAPI ::std::string_view const& CEREAL_DOCUMENTATION_TAG();

MCAPI ::std::string_view const& CEREAL_JSON_SCHEMA_PROPERTY();

MCAPI ::std::unordered_map<::ContainerEnumName, ::std::string>& ContainerCollectionNameMap();

#ifdef LL_PLAT_C
MCAPI ::std::string const& DEFAULT_DRIVE_CONTENTS_PATH();

MCAPI int const& DEFAULT_SEARCH_RESULTS_PER_REQUEST();

MCAPI ::std::unordered_map<::std::string_view, ::EncyclopediaTopicIndex> const& EncyclopediaTopicIndexMap();

MCAPI ::std::string const& FEATURED_SKIN_PACK_COLLECTION_INDEX();

MCAPI ::std::string const& FEATURED_SKIN_PACK_COLLECTION_NAME();
#endif

MCAPI ::HashedString const& FURNACE_TAG();

MCAPI ::std::array<::std::pair<::HudElement, ::std::string>, 13> const& HUD_ELEMENTS_TO_STRINGS();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::std::string_view, ::HowToPlayTopicIndex> const& HowToPlayTopicIndexMap();

MCAPI ::std::string const& ICON_OVERLAY_FACTORY();
#endif

MCAPI ::GatheringServerInfo const& INVALID_GATHERING_SERVER_INFO();

MCAPI ::ThirdPartyInfo const& INVALID_THIRD_PARTY_INFO();

MCAPI char const*& IPV4_LOOPBACK();

MCAPI char const*& IPV6_LOOPBACK();

MCAPI ::std::unordered_map<
    ::glTF::Image::ImageMimeType,
    ::std::string,
    ::ImageMimeTypeEnumHasher,
    ::std::equal_to<::glTF::Image::ImageMimeType>> const&
ImageMimeTypeEnumMap();

MCAPI ::MCRESULT const& MCRESULT_AllTargetsWillFail();

MCAPI ::MCRESULT const& MCRESULT_ChatMuted();

MCAPI ::MCRESULT const& MCRESULT_CommandExecIncomplete();

MCAPI ::MCRESULT const& MCRESULT_CommandNotFound();

MCAPI ::MCRESULT const& MCRESULT_CommandRequestInitiated();

MCAPI ::MCRESULT const& MCRESULT_CommandStepDone();

MCAPI ::MCRESULT const& MCRESULT_CommandStepFail();

MCAPI ::MCRESULT const& MCRESULT_CommandVersionMismatch();

MCAPI ::MCRESULT const& MCRESULT_CommandsDisabled();

MCAPI ::MCRESULT const& MCRESULT_EncryptionRequired();

MCAPI ::MCRESULT const& MCRESULT_ExecutionFail();

MCAPI ::MCRESULT const& MCRESULT_ExpectedRequestMsg();

MCAPI ::MCRESULT const& MCRESULT_FailWithoutFailMsg();

MCAPI ::MCRESULT const& MCRESULT_FailedToParseCommand();

MCAPI ::MCRESULT const& MCRESULT_InvalidCommandCall();

MCAPI ::MCRESULT const& MCRESULT_InvalidCommandContext();

MCAPI ::MCRESULT const& MCRESULT_InvalidCommandOrigin();

MCAPI ::MCRESULT const& MCRESULT_InvalidOverloadSyntax();

MCAPI ::MCRESULT const& MCRESULT_MalformedRequest();

MCAPI ::MCRESULT const& MCRESULT_MustSpecifyVersion();

MCAPI ::MCRESULT const& MCRESULT_NewCommandVersionAvailable();

MCAPI ::MCRESULT const& MCRESULT_NoChatPermissions();

MCAPI ::MCRESULT const& MCRESULT_NoTargetsFound();

MCAPI ::MCRESULT const& MCRESULT_NotEnoughPermissions();

MCAPI ::MCRESULT const& MCRESULT_Success();

MCAPI ::MCRESULT const& MCRESULT_TooManyPendingRequests();

MCAPI ::MCRESULT const& MCRESULT_VersionMismatch();

MCAPI ::SemVersionConstant const& MIN_ENGINE_VERSION_MINIMUM_V2();

MCAPI ::std::unordered_map<
    ::glTF::Material::AlphaMode,
    ::std::string,
    ::MaterialAlphaModeEnumHasher,
    ::std::equal_to<::glTF::Material::AlphaMode>> const&
MaterialAlphaModeEnumMap();

MCAPI ::std::bitset<38> const& PLAYER_ACTION_MOVEMENT_BITSET();

MCAPI ::std::bitset<38> const& PLAYER_ACTION_MOVEMENT_FLYING_ATTRIBUTE_BITSET();

MCAPI ::std::bitset<38> const& PLAYER_ACTION_MOVEMENT_SPEED_ATTRIBUTE_BITSET();

#ifdef LL_PLAT_C
MCAPI ::std::string const& SKIN_PACK_COLLECTION_INDEX_DEP();

MCAPI ::std::string const& SKIN_PACK_COLLECTION_NAME_DEP();
#endif

MCAPI ::HashedString const& SMOKER_TAG();

MCAPI ::HashedString const& SOUL_CAMPFIRE_TAG();

MCAPI ::std::unordered_map<
    ::TextProcessingEventOrigin,
    ::std::string,
    ::TextProcessingEventOriginEnumHasher,
    ::std::equal_to<::TextProcessingEventOrigin>> const&
TextProcessingEventOriginEnumMap();

MCAPI uint const& UNINITIALIZED_BLOCK_NETWORKID();

MCAPI ::std::array<::HashedString, 17> const& VanillaStructureFeatureTypes();

MCAPI ::std::unordered_map<::std::string, ::ActorFilterGroup::LegacyMapping>& _environmentSubfilters();

MCAPI ::std::unordered_map<::std::string, ::ActorFilterGroup::LegacyMapping>& _legacyPredicates();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& autoUpdateModeLabels();

MCAPI char const*& base64Map();

MCAPI ::mce::Camera& camera();

MCAPI ::std::unordered_map<int, ::std::string> const& chatDurationLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& chunkMapModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& cloudQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& contentLogGUILevelLables();

MCAPI ::std::unordered_map<int, ::std::string> const& debugHudLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& devConnectionQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& devEducationServicesEnvironmentLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& devMarketplaceRotationSpeedMultiplierLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& devTimeZoneTypeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& devWindowsStoreLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& deviceInfoMemoryTierLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& difficultyLabels();
#endif

MCAPI ::std::unordered_map<int, ::std::string> const& discoveryEnvironmentLabels();

MCAPI ::std::unordered_map<::std::string, ::DiscoveryEnvironment> const& discoveryEnvironmentStrings();

MCAPI ::std::unordered_map<::DiscoveryEnvironment, ::std::string> const& discoveryEnvironments();

MCAPI ::std::add_lvalue_reference_t<uint[]> englishCharacterFrequencies();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& exposureTechniqueLabels();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::vector<::std::string>& gAreaFilters();
#endif

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Biome>>& gBiomeChunkGC();

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Block>>& gBlockStorageGC();

MCAPI ::InternalTaskGroup& gInternalTaskGroup();

MCAPI ::SubChunkDelayedDeleter<::SubChunkBrightnessStorage>& gLightStorageGC();

#ifdef LL_PLAT_C
MCAPI ::std::add_lvalue_reference_t<uchar[]> gMinecraftLogoImage();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::vector<::std::string>& gPriorityFilters();
#endif

#ifdef LL_PLAT_C
MCAPI double& gTotalRealWorldTime();

MCAPI double& gTotalRealWorldTimeDelta();

MCAPI ::MainGameCore::WinMain*& gWinMainInstance();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, uint)> g_memAllocFunc();

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, uint)> g_memFreeFunc();

MCAPI ::HCTraceImplArea& g_traceHTTPCLIENT();

MCAPI ::HCTraceImplArea& g_traceWEBSOCKET();
#endif

#ifdef LL_PLAT_C
MCAPI ::HCTraceImplArea& g_traceXAL();

MCAPI ::HCTraceImplArea& g_traceXAL_TELEMETRY();

MCAPI ::HCTraceImplArea& g_traceXSAPI();

MCAPI ::std::unordered_map<int, ::std::string> const& gameModeLabels();

MCAPI char const*& gamepad_disconnected_screen();

MCAPI ::std::unordered_map<int, ::std::string> const& graphicsApiLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& graphicsModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& graphicsQualityPresetModeLabels();

MCAPI char const*& hud_screen();

MCAPI char const*& idle_route();

MCAPI ::std::unordered_map<int, ::std::string> const& interactionModelLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& joystickVisibilityOptionLabels();

MCAPI ::EducationServicesEnvironment& mCachedServicesEnvironment();

MCAPI ::std::unordered_map<int, ::std::string> const& nethernetLoggingVerbosityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& networkLoggingVerbosityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& newPlayerFlowV3ABCTestGroupLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& newPlayerPathTutorialModeABTestGroupLabels();
#endif

MCAPI ::std::add_lvalue_reference_t<void (*)(char const*, long)> notifyOutOfMemory();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& partyInviteReceivedFilterLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& partyInviteSendPrivilegesLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& partyPrivacyLabels();

MCAPI char const*& pause_screen();

MCAPI ::std::unordered_map<::std::string, int> const& permissionsNameValuePairs();

MCAPI ::std::unordered_map<int, ::std::string> const& permissionsValueLabelPairs();

MCAPI ::std::unordered_map<int, ::std::string> const& permissionsValueTexturePairs();

MCAPI ::std::unordered_map<int, ::std::string> const& pointLightLODingQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& pointLightShadowQualityLabels();
#endif

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, char const*, uint)> rakFree_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, char const*, uint)> rakMalloc_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(void*, uint64, char const*, uint)> rakRealloc_Ex();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& realmsEnvironmentLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& realmsGameModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& realmsSkuLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& reflectionQualityLabels();

MCAPI ::std::variant<::XAsyncBlock, ::XUser*>& sDefaultUser();
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

MCAPI ::std::unordered_map<int, ::std::string> const& startupStatisticsLabels();

MCAPI ::__m128i& stbir__s16_32768();

MCAPI ::__m128i& stbir__s32_32768();

MCAPI ::std::unordered_map<int, ::std::string> const& storageLocationLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& subtitlePositionLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& sunsettingTierLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& suspendedConnectionBehaviorLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& thirdPersonLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& toastsDurationLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& tonemapTechniqueLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& topButtonScaleOptionLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& typefaceLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& uiProfileLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& upscalingModeLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& volumetricFogQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& vsyncLabels();

MCAPI ::std::add_lvalue_reference_t<int (*)(void*)> winrt_to_hresult_handler();

MCAPI ::std::unordered_map<int, ::std::string> const& xboxEnvironmentLabels();
#endif
// NOLINTEND
