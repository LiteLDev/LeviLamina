#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"
#include "mc/client/renderer/actor/v2/Destination.h"
#include "mc/client/renderer/game/ShadowRenderingParameters.h"
#include "mc/client/renderer/game/TerrainVariation.h"
#include "mc/client/resources/ContentCatalogQueryData.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/store/DlcPerformanceTier.h"
#include "mc/client/tutorial/GameTip.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/file/file_system/FileType.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/json/ValueType.h"
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/libsrtp/srtp_err_status_t.h"
#include "mc/legacy/facing/Name.h"
#include "mc/network/packet/AgentActionType.h"
#include "mc/options/DiscoveryEnvironment.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/HudElement.h"
#include "mc/util/gltf/Accessor.h"
#include "mc/util/gltf/Image.h"
#include "mc/util/gltf/Material.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ActorTypeNamespaceRules.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/filters/FilterGroup.h"
#include "mc/world/filters/FilterOperator.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockSlot.h"
#include "mc/world/level/block/TorchFacing.h"
#include "mc/world/level/block/components/BlockMaterialInstance.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/SubChunk.h"
#include "mc/world/level/chunk/SubChunkDelayedDeleter.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
#include "mc/world/level/material/MaterialType.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorOwnerComponent;
class BaseActorRenderContext;
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
class DataDrivenGeometry;
class DateManager;
class Dimension;
class FeatureRegistry;
class GatheringServerInfo;
class HitResult;
class I18n;
class IAppPlatform;
class IClientInstance;
class IFileAccess;
class ILevel;
class IStructureTemplateManager;
class InternalTaskGroup;
class ItemInstance;
class ItemStack;
class JigsawStructureRegistry;
class LevelChunk;
class LevelData;
class ListTag;
class LocalPlayer;
class PackManifest;
class PackReport;
class RecipeIngredient;
class RedstoneTorchCapacitor;
class ResponseVerifier;
class SearchQuery;
class SemVersionConstant;
class StructurePoolElement;
class SubChunkBrightnessStorage;
class ThirdPartyInfo;
class UIPropertyBag;
class Vec3;
class WindowState;
class WorkerPool;
struct AccessorTypeEnumHasher;
struct ActorDefinitionIdentifier;
struct ActorFactoryData;
struct AllWorkerConfigurations;
struct AssertHandlerContext;
struct BlockLayer;
struct CommonLocTextPair;
struct DateRange;
struct DynDnsResult;
struct FlatWorldLayer;
struct FlatWorldPreset;
struct HCTraceImplArea;
struct HC_CALL;
struct ImageMimeTypeEnumHasher;
struct KeyOrNameResult;
struct MCRESULT;
struct MaterialAlphaModeEnumHasher;
struct PackIdVersion;
struct ScatterParamsMolangVariableIndices;
struct TextProcessingEventOriginEnumHasher;
struct TypeMapping;
struct WorkerConfiguration;
struct WorldTemplateInfo;
struct srtp_auth_t;
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
namespace RakNet { struct RakPeerConfiguration; }
namespace ScriptModuleGameTest { class ScriptSimulatedPlayer; }
namespace ScriptModuleGameTest { struct ScriptPlayerSkinData; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct EmptyPoolElement; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct SinglePoolElement; }
namespace Social { class IUserManager; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Camera; }
namespace mce { class UUID; }
namespace mce::framebuilder { struct PerCascadeRenderingParameters; }
namespace mce::framebuilder { struct ShadowRange; }
class DataDrivenModel;
class DataDrivenRenderer;
class Tessellator;
class UIControl;
struct ActorAttachableDerivitiveData;
struct ActorDerivitiveData;
struct AnimationData;
struct AttachablesPreprocessingContext;
struct BakedDataDrivenRenderDataInfrequentAccess;
struct BakedRenderControllerResults;
struct ContentCatalogQueryData;
struct DataDrivenRendererDerivitiveData;
struct DataDrivenRendererPreprocessingContext;
struct DurableSearchResults;
struct ExprToken;
struct ExtractedDataDataDrivenModel;
struct ExtractedRenderController;
struct ExtractedSkeletonData;
struct FinalRenderingData;
struct FrameAllocationCount;
struct GameplayRelatedRenderData;
struct ModificationOperation;
struct PreviousTransformationInput;
struct PreviousTransformationOutput;
struct ProcessedDataDrivenRenderers;
struct RealmsWorldInfo;
struct RenderControllerResources;
struct RequestedRenderEntries;
struct ResourceBakingResult;
struct ResourceOffset;
struct SharedUniformPhase;
struct StoreDataDrivenScreenController;
struct TrialManager;
struct WorldSeedModel;
namespace Bedrock { class Platform_GameCore; }
namespace ParticleSystem { struct ParticleEffectComponentRegistry; }
namespace Social { struct MultiplayerServiceManager; }
namespace cohtml { class Binder; }
namespace mce::framebuilder { struct FrameBuilder; }
namespace mce::framebuilder { struct RenderBatchActorInstanceDescription; }
// clang-format on

// functions
// NOLINTBEGIN
MCAPI void BedrockLogOut(uint, char const*, ...);

MCAPI_C void CoherentBind(::cohtml::Binder* binder, ::Vec3* data);

MCAPI_C void CoherentBind(::cohtml::Binder* binder, ::FlatWorldLayer* layer);

MCAPI_C void CoherentBind(::cohtml::Binder* binder, ::FlatWorldPreset* options);

MCAPI_C void CoherentBind(::cohtml::Binder* binder, ::RealmsWorldInfo* realmsWorldInfo);

MCAPI_C void CoherentBind(::cohtml::Binder* binder, ::WorldSeedModel* seedTemplate);

MCAPI_C void CoherentBind(::cohtml::Binder* binder, ::WorldTemplateInfo* worldTemplateInfo);

MCAPI ::CreativeItemCategory
CreativeItemCategoryComprehensiveToRuntime(::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory category);

MCAPI ::CreativeItemCategory CreativeItemCategoryFromString(::std::string const& str);

MCFOLD void* DefaultMemAllocFunction(uint64 size, uint memoryType);

MCFOLD void DefaultMemFreeFunction(void* pointer, uint memoryType);

MCFOLD void DefaultOutOfMemoryHandler(char const* file, long line);

MCAPI_C void DiscardData();

MCAPI bool DoesMockCallMatch(::HC_CALL const* mockCall, ::HC_CALL const* originalCall);

MCAPI ::HashedString const& EntityCanonicalName(::ActorType entityType);

MCAPI ::ActorType EntityTypeFromString(::std::string const& str);

MCAPI ::std::string EntityTypeToFormattedLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI void EntityTypeToStringAndNamespace(::ActorType entityType, ::std::string& nameOut, ::std::string& namespaceOut);

MCAPI float FoodSaturationFromString(::std::string const& str);

MCAPI ::std::unordered_map<::std::string, ::ActorFactoryData>& GetActorDataRegistry();

MCAPI double GetEngagementMetricsTimeSinceAppStart_DEPRECATED();

MCAPI_C long InitializeGameRuntimeDll(uint64 flags);

MCAPI_C long LoadGameRuntimeDll();

MCAPI_S ::std::optional<::LogLevel> LogLevelFromString(::std::string const& str);

MCFOLD bool MOCK_ASSERT_HANDLER(::AssertHandlerContext const& context);

MCAPI bool MOCK_ASSERT_HANDLER_NO_THROW(::AssertHandlerContext const& context);

MCAPI ::MaterialType MaterialTypeFromString(::std::string const& materialType);

MCAPI bool Mock_Internal_HCHttpCallPerformAsync(::HC_CALL* originalCall);

MCAPI_S long Mock_Internal_ReadRequestBodyIntoMemory(
    ::HC_CALL*                                         originalCall,
    ::std::vector<uchar, ::http_stl_allocator<uchar>>* bodyBytes
);

MCAPI_C void NGXInvalidParameterHandler(
    wchar_t const* expression,
    wchar_t const* function,
    wchar_t const* file,
    uint           line,
    uint64         pReserved
);

MCAPI_C bool NGXSafeInitializeLog(wchar_t const* InPathToValidate, wchar_t const* InFileName);

MCAPI_S ::std::optional<::NetherNet::LogSeverity> NetherNetLogSeverityFromString(::std::string const& str);

MCAPI ::PackType PackTypeFromString(::std::string const& value);

MCAPI_S void PlatformBedrockLogOut(uint _priority, char const* buf, uint64 nullTerminatorPos);

MCAPI void PushCircularReference(
    ::std::unordered_map<::BlockPos, ::RedstoneTorchCapacitor*>&                      relatedTorches,
    ::BlockPos const&                                                                 pos,
    ::std::queue<::RedstoneTorchCapacitor*, ::std::deque<::RedstoneTorchCapacitor*>>& list
);

MCAPI_C bool ReadJpegFile(::Core::Path const& fileName, int readMode);

MCAPI_C int ReadJpegSections(::Core::File& infile, int readMode);

MCAPI_C void ResetJpgfile();

MCAPI ::std::string StringFromMaterialType(::MaterialType const& materialType);

MCAPI ::std::string const& StringFromPackType(::PackType value);

MCAPI_C ::edu::Role StringToADRole(::std::string const& str);

MCAPI_C uint StringToNameId(::std::string const& name);

MCAPI ::SharedTypes::Legacy::UseAnimation UseAnimationFromString(::std::string const& str);

MCAPI_C int64 WndProc(::HWND__* hwnd, uint uMsg, uint64 wParam, int64 lParam);

MCAPI_C ::Bedrock::Threading::Async<::ContentCatalogQueryData::Done> _addCatalogItemsFromSearch(
    ::SearchQuery const&                         query,
    ::DurableSearchResults const&                response,
    ::std::shared_ptr<::ContentCatalogQueryData> request
);

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

MCAPI_C ::ShadowRenderingParameters::ShadowMap _calculateCascade(
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
    float                                                     zNear,
    float                                                     maxShadowDistance,
    ::mce::framebuilder::PerCascadeRenderingParameters const& renderingParameters
);

MCAPI void _checkTickedActorsForOutOfWorld(::ActorOwnerComponent& actorOwnerComponent);

MCAPI_C ::glm::vec3 _clampShadowAngle(::glm::vec3 const& lightDir, ::glm::vec3 const& up, float shadowClampAngle);

MCAPI ::std::unique_ptr<::ListTag> _createBlockStateEnum(::BlockState const& state);

MCAPI uint _facingToVineDirection(uchar facing);

MCAPI_C int _findNextIndex(::std::vector<::std::shared_ptr<::UIControl>>& tabControls, int originIndex, bool right);

MCAPI_C void _forEachObject(
    ::Json::Value&                                                                  value,
    ::brstd::function_ref<void(::Json::Value&, ::std::string_view, ::Json::Value&)> callback
);

MCFOLD_C ::std::vector<::BlockPos> _generateChunkStartPositions(::AABB const& area);

MCAPI_C ::std::vector<int> const _getRenderDistanceLevels(int& defaultDistanceIdx, bool isVR);

MCAPI ::ScatterParamsMolangVariableIndices& _getScatterParamsMolangVariableIndices();

MCAPI_C void _handleFetchedImageResponseData(
    ::std::shared_ptr<::ContentCatalogQueryData> request,
    ::Core::Path const&                          iconPath,
    ::std::unique_ptr<::PackManifest>            manifestPtr,
    ::Bedrock::Http::Status const&               status,
    uint64                                       fileSize
);

MCAPI_C bool _haveSameScrollSection(::std::weak_ptr<::UIControl> const& a, ::std::weak_ptr<::UIControl> const& b);

MCAPI_C bool
_isRenderingAttachableItem(::BaseActorRenderContext& renderContext, ::Actor& entity, ::ItemStack const& item);

MCAPI_C ::Bedrock::Threading::Async<::ContentCatalogQueryData::Done>
_loadAllCatalogItems(::std::shared_ptr<::ContentCatalogQueryData> request);

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

MCAPI_C ::glm::vec3 _quantizeLightDirection(float angle, float perpendicularAngle, int step);

MCAPI_C void _reflectCausticsParameters(::cereal::ReflectionCtx& ctx);

MCAPI ::std::unique_ptr<::ListTag> _saveBlockList(::std::vector<::BlockType const*> const& blockList);

MCAPI_C void _searchBlockByCameraCenter(
    ::Actor const& cameraEntity,
    float          a,
    ::LocalPlayer& player,
    ::Vec3&        pickDirection,
    float          pickRange,
    ::HitResult&   hitResult,
    ::HitResult&   liquidHitResult
);

MCAPI_C bool _searchBlockByFreeFormPick(
    ::IClientInstance& client,
    ::mce::Camera const&,
    float        a,
    ::Vec3&      outSrc,
    ::Vec3&      outDir,
    ::HitResult& hitResult,
    ::HitResult& liquidHitResult
);

MCAPI_C ::glm::vec3
_snapToTexel(::glm::vec3 const& position, ::glm::mat4x4 const& matrixW2L, ::glm::mat4x4 const& matrixL2W);

MCAPI_C bool _stringLessThan(::std::string const& str1, ::std::string const& str2);

MCAPI void
_tickBribeableComponent(::ActorOwnerComponent& actorOwnerComponent, ::BribeableComponent& bribeableComponent);

MCAPI_C ::Destination addExpressionOrConstantResources(
    ::std::vector<float>&            constantBuffer,
    ::std::vector<::ExpressionNode>& expressionBuffer,
    ::ExpressionNode const&          expr,
    char const*                      defaultExpression,
    float                            defaultValue
);

MCAPI_C void applyAnimations(
    ::RequestedRenderEntries const&                                             entries,
    ::AnimationData const&                                                      animationData,
    ::std::vector<::glm::mat4x4>&                                               boneList,
    ::BaseActorRenderContext&                                                   renderContext,
    ::gsl::span<::mce::framebuilder::RenderBatchActorInstanceDescription const> actorDescriptions
);

MCAPI_C void bakeAttachable(::std::shared_ptr<::DataDrivenRenderer> renderer, ::AttachablesPreprocessingContext& ctx);

MCAPI_C void bakeDataDrivenRenderer(
    ::std::weak_ptr<::DataDrivenModel>        weakModelPtr,
    ::ExtractedDataDataDrivenModel const&     extractedData,
    ::DataDrivenRendererPreprocessingContext& ctx
);

MCAPI_C ushort bakeGeneratedDraws(
    ::ExtractedDataDataDrivenModel const&     extractedData,
    uint                                      geoIdx,
    ::std::vector<::std::string> const&       materialRegex,
    ::std::vector<::std::string> const&       partVisibilityRegex,
    ::DataDrivenRendererPreprocessingContext& ctx
);

MCAPI_C ::BakedRenderControllerResults bakeRenderController(
    ::ExtractedDataDataDrivenModel const&     extractedData,
    ::ExtractedRenderController const&        renderController,
    ::DataDrivenRendererPreprocessingContext& ctx
);

MCAPI_C ::ResourceBakingResult bakeResourceOffsets(
    ::ExtractedDataDataDrivenModel const& extractedData,
    ::ExtractedRenderController const&    renderController,
    ::RenderControllerResources&          rcResources
);

MCAPI void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);

MCAPI void bindMaterialType(::cereal::ReflectionCtx& ctx);

MCAPI char const* blockSlotToString(::BlockSlot slot);

MCAPI ::KeyOrNameResult
buildActorDisplayName(::ActorType actorType, ::std::string const& nameTag, ::Actor const* actor);

MCAPI_C void calculateTileLighting(
    ::GameplayRelatedRenderData const&        worldData,
    ::ActorDerivitiveData const&              actorData,
    ::DataDrivenRendererDerivitiveData const& dataDrivenRendererData,
    ::RequestedRenderEntries const&           entries,
    ::ProcessedDataDrivenRenderers const&     resources,
    ::FinalRenderingData&                     finalRenderData
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

MCAPI_C bool checkMinMaxClientVer(::Json::Value const& documentObject, bool pascalCase);

MCAPI_C bool checkMinMaxClientVer(::std::string const& minClientVersion, ::std::string const& maxClientVersion);

MCAPI bool checkTypeFilter(
    ::ActorDefinitionIdentifier const& entityIdentifier,
    ::ActorDefinitionIdentifier const& identifierFilter
);

MCAPI_C void clearBakedTextures(
    ::BakedDataDrivenRenderDataInfrequentAccess const& bakedInfrequentData,
    ::RenderControllerResources&                       resources
);

MCAPI void compoundBlockVolumeActionBindType(::cereal::ReflectionCtx& ctx);

MCAPI void compoundBlockVolumePositionRelativityBindType(::cereal::ReflectionCtx& ctx);

MCAPI_C ::HardwareMemoryTier
convertMinHardwareMemTierInt(int memTier, char const* context_str, ::std::string const& context_str_val);

MCAPI_C ::DlcPerformanceTier
convertMinPerformanceTierInt(int perfTier, char const* context_str, ::std::string const& context_str_val);

MCAPI ::TorchFacing convertTorchDirection(::Facing::Name facing);

MCAPI_C ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>
createDefaultUniqueRakPeer();

MCAPI_C ::std::unique_ptr<::ResponseVerifier> createMutsResponseVerifier(
    ::std::string                    responseField,
    ::std::string                    payloadField,
    ::std::string                    publicKey,
    ::std::function<int64()>         getTime,
    ::std::function<::std::string()> createRequestId
);

MCAPI_C ::ExprToken createTokenFromUIDefVal(::Json::Value const& resVal);

MCAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>
createUniqueRakPeer(::RakNet::RakPeerConfiguration const& config);

MCAPI ::Bedrock::NonOwnerPointer<::WorkerPool> createWorkerPool(
    ::std::string_view                                       name,
    ::WorkerConfiguration const&                             config,
    ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>& destHandle
);

MCAPI_C ::UIDefType defTypeFromString(::std::string const& str);

MCAPI_C ::std::string dlcCheckerResultToString(::DlcCheckResult result);

MCAPI_C void emplaceMatchedBoneIndex(
    ::std::string const&                  boneName,
    uint64                                boneIdx,
    ::std::vector<::std::string> const&   regexArray,
    ::std::vector<::std::vector<uint64>>& indices
);

MCAPI ::ActorCategory entityCategoriesFromString(::std::string const& str);

MCAPI ::ActorCategory entityCategoryFromString(::std::string const& str);

MCAPI_C void executeOnPrimaryUserStorageArea(
    ::std::function<void(::std::shared_ptr<::Core::FileStorageArea>)> onSuccess,
    ::std::function<void()>                                           onFailure
);

MCAPI ::srtp_err_status_t external_crypto_init();

MCAPI ::srtp_err_status_t external_hmac_alloc(::srtp_auth_t** a, int key_len, int out_len);

MCAPI ::srtp_err_status_t external_hmac_compute(void*, uchar const*, int, int tag_len, uchar* result);

MCAPI ::srtp_err_status_t external_hmac_dealloc(::srtp_auth_t* a);

MCAPI ::srtp_err_status_t external_hmac_init(void* state, uchar const* key, int key_len);

MCFOLD ::srtp_err_status_t external_hmac_start(void*);

MCFOLD ::srtp_err_status_t external_hmac_update(void*, uchar const*, int);

MCAPI_C ::std::optional<::ExtractedDataDataDrivenModel>
extractModelData(::HashedString const& name, ::std::shared_ptr<::DataDrivenRenderer> rendererPtr);

MCAPI_C ::ExtractedSkeletonData extractSkeleton(::DataDrivenGeometry const& geo);

MCAPI int fclose(::Core::File& file);

MCAPI_C int fgetc(::Core::File& infile);

MCAPI_C void fillLangValue(
    ::std::string const&                                jsonFieldStr,
    ::std::string const&                                langCode,
    ::std::string const&                                modifiedCode,
    ::Json::Value const&                                documentObject,
    bool                                                pascalCase,
    ::CommonLocTextPair&                                locTextPairToFill,
    ::std::unordered_map<::std::string, ::std::string>& locDictionary
);

MCAPI_C void fillPackIdentityListFromJson(
    ::std::vector<::PackIdVersion>& packIdentityListToFill,
    ::Json::Value const&            packIdentitiesJsonArray
);

MCAPI_C void findInvalidControls(
    ::Json::Value&                root,
    ::std::vector<::std::string>& foundInvalidControls,
    ::PackReport&                 packReport,
    ::std::string const&          fileName
);

MCAPI ::std::optional<::FlatWorldPresetID> flatWorldPresetIDFromString(::std::string const& str);

MCAPI_C ::std::string_view flatWorldPresetIDToString(::FlatWorldPresetID id);

MCAPI void forEachEntityType(
    ::std::function<bool(::ActorType, ::std::string const&)> callback,
    ::ActorTypeNamespaceRules                                namespaceRule
);

MCAPI_C int fputc(int c, ::Core::File& infile);

MCAPI uint64 fread(void* buffer, uint64 size, uint64 count, ::Core::File& file);

MCAPI ::std::tuple<::std::string, ::std::unique_ptr<::StructurePoolElement>> from(
    ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::EmptyPoolElement const&,
    ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager,
    ::JigsawStructureRegistry&,
    ::FeatureRegistry const&
);

MCAPI ::std::tuple<::std::string, ::std::unique_ptr<::StructurePoolElement>> from(
    ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement const& element,
    ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>                     structureManager,
    ::JigsawStructureRegistry&                                                     registry,
    ::FeatureRegistry const&
);

MCAPI ::std::tuple<::std::string, ::std::unique_ptr<::StructurePoolElement>> from(
    ::std::variant<
        ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::EmptyPoolElement,
        ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement> const& element,
    ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>                          structures,
    ::JigsawStructureRegistry&                                                          registry,
    ::FeatureRegistry const&                                                            features
);

MCAPI int fseek(::Core::File& file, int64 offset, int origin);

MCAPI int64 ftell(::Core::File& file);

MCAPI uint64 fwrite(void const* buffer, uint64 size, uint64 count, ::Core::File& file);

MCAPI_C void gameplayValueGeneration(
    ::FrameAllocationCount const&             counts,
    ::ActorDerivitiveData const&              actorData,
    ::DataDrivenRendererDerivitiveData const& dataDrivenRendererData,
    ::RequestedRenderEntries const&           entries,
    ::ProcessedDataDrivenRenderers const&     resources,
    ::FinalRenderingData&                     finalRenderData,
    ::SharedUniformPhase&                     uniformPhase
);

MCAPI ::std::string gatherTypeStrings(::std::vector<::Json::ValueType> const& types);

MCAPI_C ::ResourceOffset generateExpressionOffset(
    ::ExpressionNode&&               expression,
    ::ExpressionOp                   expectedOperator,
    ::std::vector<::ExpressionNode>& outputExpressionList
);

MCAPI_C void
generatePreviousTransformationStreams(::PreviousTransformationInput const&& in, ::PreviousTransformationOutput&& out);

MCAPI_C ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::DateRange>>> const
getActiveDateRange(::std::vector<::DateRange> const& dateRangesToSearch, ::DateManager const& dateManager);

MCAPI_C ::std::string
getAnchorPointFromDirectionAndAnchor(::GameTip::ArrowDirection direction, ::GameTip::ArrowAnchor anchor);

MCAPI_C ::std::shared_ptr<::UIControl> getControlBreadthFirst(::UIControl* scope, ::std::string name);

MCAPI_C float getControlVariableValue(::UIControl& control, ::LayoutVariableType type);

MCAPI_C void getControlsInternal(
    ::std::vector<::std::shared_ptr<::UIControl>>& result,
    ::std::function<bool(::UIControl const&)>      predicate,
    ::UIControl&                                   control
);

MCAPI ::std::string getDiscoveryServiceURL(::DiscoveryEnvironment environment);

MCAPI_C ::Json::Value const& getDisplayProperties(::Json::Value const& resultObject, bool pascalCase);

MCAPI ::std::string const getEdition();

MCAPI ::Bedrock::FileType getFileType(::Core::PathView filePath, ::IFileAccess& fileAccess);

MCAPI_C void getFirstControlInternal(
    ::std::shared_ptr<::UIControl>&                  result,
    ::std::function<bool(::UIControl const&)> const& predicate,
    ::UIControl&                                     control
);

MCAPI_C void getFirstVisibleControlInternal(
    ::std::shared_ptr<::UIControl>&                  result,
    ::std::function<bool(::UIControl const&)> const& predicate,
    ::UIControl&                                     control
);

MCAPI ::std::unordered_map<::FlatWorldPresetID, ::FlatWorldPreset> const& getFlatWorldPresets();

MCAPI_C ::HowToPlayTopicIndex getHowToPlayTopicIndexFromName(::std::string_view topicString);

MCAPI ::I18n& getI18n();

MCAPI_C ::std::vector<::PackIdVersion> getJsonPackIdVersion(::Json::Value const& objectArray);

MCAPI ::std::string getJsonTypeString(::Json::ValueType const& type);

MCAPI ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeEventMapAccess();

MCAPI ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeLOCMapAccess();

MCAPI_C ::std::string getPlayerCountString(int players, int maxPlayers);

MCAPI ::Scripting::Result<
    ::ScriptModuleGameTest::ScriptPlayerSkinData,
    ::Scripting::InvalidArgumentError,
    ::ScriptModuleMinecraft::ScriptInvalidActorError>
getPlayerSkin(::ScriptModuleMinecraft::ScriptPlayer const& player);

MCAPI_C ::Core::Result getPrimaryUserStorageArea(::std::shared_ptr<::Core::FileStorageArea>& sptStorageArea);

MCAPI_C void getPropertyValue(::ExprToken& tok, ::UIPropertyBag* bag);

MCAPI_C ::std::string getScreenshotTextureFileSystemFromBag(
    int                                index,
    ::UIPropertyBag&                   bag,
    int                                offset,
    ::StoreDataDrivenScreenController& controller
);

MCAPI_C ::std::string
getScreenshotTextureFromBag(int index, ::UIPropertyBag& bag, int offset, ::StoreDataDrivenScreenController& controller);

MCAPI_C ::SubChunk::SubChunkState getSubChunkState(::LevelChunk& levelChunk, short absoluteIndex);

MCAPI_C void getVisibleControlsInternal(::std::function<void(::UIControl&)> const& action, ::UIControl& control);

MCAPI ::AllWorkerConfigurations getWorkerConfiguration(uint highPowerCores, uint totalCores);

MCAPI bool isChunkAtStage(::std::weak_ptr<::LevelChunk> lcwp, ::ChunkState stateToCheck);

MCAPI_C int itemVarientFromString(::std::string const& str);

MCAPI ::std::string join(::std::string prefix, ::std::string_view chunkKey);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag, uint i);

MCAPI_C ::glm::vec3 lerpCoefficients(float normalizedDensityIndex, ::gsl::span<::glm::vec3 const> coefficientData);

MCAPI ::std::string makeGuestDisplayName(::std::string const& hostName, ::SubClientId subclientId);

MCAPI ::mce::UUID makeGuestUUID(::mce::UUID const& hostUuid, ::SubClientId subclientId);

MCAPI ::mce::UUID makePlayerUUIDForXUID(::std::string const& xuid);

MCAPI_S ::std::shared_ptr<::Bedrock::Services::IDiscoveryService>
makeServerDiscoveryService(::Bedrock::Services::DiscoveryConfig const& discoveryConfig);

MCAPI_C void mergeControls(
    ::Json::Value&                                                                  rootControl,
    ::Json::Value const&                                                            control,
    ::PackReport&                                                                   packReport,
    ::std::multiset<::ModificationOperation, ::std::less<::ModificationOperation>>& modifications,
    ::std::unordered_map<::std::string, ::std::string> const&                       topLevelNames,
    ::std::string const&                                                            fileName,
    int                                                                             packIndex
);

MCAPI_C int nvFPrintf(::_iobuf*, char const*, ...);

MCAPI_C int nvSWprintf(wchar_t*, uint64, wchar_t const*, ...);

MCAPI_C int nvSprintf(char*, uint64, char const*, ...);

MCAPI bool operator!=(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCAPI_C bool
operator<(::SemVersionBase<::std::string_view> const& lhs, ::SemVersionBase<::std::string_view> const& rhs);

MCAPI bool operator<(
    ::SemVersionBase<::std::string_view> const&               lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCAPI bool operator<(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCAPI bool operator<(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);

MCAPI_C ::std::ostream& operator<<(::std::ostream& os, ::cg::TextureSetLayerType const& type);

MCAPI bool operator==(::DefinitionTrigger const& a, ::DefinitionTrigger const& b);

MCAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);

MCAPI bool operator==(::BlockMaterialInstance const& lhs, ::BlockMaterialInstance const& rhs);

MCAPI bool operator==(::ExpressionNode const& lhs, ::ExpressionNode const& rhs);

MCAPI_C bool operator>=(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);

MCAPI ::BlockProperty operator|(::BlockProperty lhs, ::BlockProperty b);

MCAPI_C ::std::string pascalCaseConverter(::std::string const& inString, bool pascalCase);

MCAPI_C ::ActorAttachableDerivitiveData processActorAttachables(
    ::RequestedRenderEntries const&       renderEntries,
    ::ProcessedDataDrivenRenderers const& resources,
    bool                                  lessThanOrEqualToVersion_1_16_210
);

MCAPI_C ::ActorDerivitiveData processActors(
    ::RequestedRenderEntries const&                                          renderEntries,
    ::BaseActorRenderContext const&                                          entityContext,
    ::Vec3                                                                   cameraTargetPos,
    ::ProcessedDataDrivenRenderers const&                                    resources,
    ::std::vector<::mce::framebuilder::RenderBatchActorInstanceDescription>& actorDescriptions,
    ::FrameAllocationCount&                                                  frameCount
);

MCAPI_C ::DataDrivenRendererDerivitiveData processDataDrivenRenderers(
    ::RequestedRenderEntries const&       renderEntries,
    ::FrameAllocationCount const&         frameCounts,
    ::ProcessedDataDrivenRenderers const& resources,
    ::BaseActorRenderContext*             context,
    ::AnimationData&                      animData
);

MCAPI_C void
registerBedrockEffectComponents(::ParticleSystem::ParticleEffectComponentRegistry& particleComponentRegistry);

MCAPI_C void renderAttachables(
    ::RequestedRenderEntries const&        renderEntries,
    ::ActorAttachableDerivitiveData const& attachableData,
    ::FinalRenderingData const&            finalRenderingData,
    ::BaseActorRenderContext&              renderContext,
    ::ProcessedDataDrivenRenderers const&  resources
);

MCAPI_C ::mce::framebuilder::FrameBuilder* renderDragonFrameBuilder();

MCAPI_C void renderFlames(::std::vector<::Actor*> const& onFireActors, ::BaseActorRenderContext& ctx);

MCAPI_C void renderLeash(::std::vector<::Actor*> const& leashedActors, ::BaseActorRenderContext& ctx);

MCAPI void renderMapChunk(
    ::Dimension&                    dimension,
    ::buffer_span_mut<uint>         pixels,
    uint                            scale,
    ::BlockPos const&               origin,
    ::MapItemSavedData::ChunkBounds pixelsBB
);

MCAPI_C void renderTempComponents(
    ::RequestedRenderEntries const&       entries,
    ::BaseActorRenderContext&             ctx,
    ::ProcessedDataDrivenRenderers const& resources,
    ::AnimationData const&                animationData,
    ::FinalRenderingData const&           finalRenderingData
);

MCAPI_C void reportParseError(::std::string const& fileName, ::Json::Reader& reader);

MCAPI_C void separateEntityStreams(
    ::DataDrivenRendererDerivitiveData const& dataDrivenRendererData,
    ::RequestedRenderEntries const&           entries,
    ::FrameAllocationCount&                   frameCount,
    ::ProcessedDataDrivenRenderers const&     resources,
    ::FinalRenderingData&                     finalRenderData,
    ::AnimationData&                          animData
);

MCAPI_C ::ui::DirtyFlag setControlVariableValue(
    ::UIControl&         control,
    ::LayoutVariableType type,
    float                inValue,
    float                inMinValue,
    float                inMaxValue
);

MCAPI_C void setRegexIndexByBoneIndex(
    ::std::string const&                boneName,
    uint64                              boneIdx,
    ::std::vector<::std::string> const& regexArray,
    ::std::vector<ushort>&              indices
);

MCAPI_C void setupAttachables(
    ::RequestedRenderEntries const&        renderEntries,
    ::ActorAttachableDerivitiveData const& attachableData,
    ::AnimationData const&                 animationData,
    ::ProcessedDataDrivenRenderers const&  resources
);

MCAPI_C bool shouldConnectToSideOrBelow(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type dir);

MCAPI_C bool shouldRenderAnyAttachables(
    bool     modelAttachablesAreEnabled,
    ::Actor& actor,
    bool     lessThanOrEqualToVersion_1_16_210,
    bool     hideArmor
);

MCAPI ::Scripting::Result<
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSimulatedPlayer>,
    ::Scripting::EngineError>
spawnSimulatedPlayer(
    ::Scripting::WeakLifetimeScope const&                   scope,
    ::ScriptModuleMinecraft::ScriptDimensionLocation const& location,
    ::std::string const&                                    name,
    ::GameType                                              gameMode
);

MCAPI_C ::std::string sprintfBypass(char const*, ...);

MCAPI_S ::DiscoveryEnvironment stringToDiscoveryEnvironment(::std::string const& str);

MCAPI_C void submitActors(
    ::GameplayRelatedRenderData const& gameplayData,
    ::FinalRenderingData const&        finalRenderingData,
    bool                               needAGFXStream
);

MCAPI_C bool supportsDataDrivenRenderer(
    ::HashedString const&                 name,
    ::DataDrivenModel const&              model,
    ::DataDrivenRenderer const&           renderer,
    ::ExtractedDataDataDrivenModel const& modelData
);

MCAPI_C ::TerrainVariation terrainVariationFromString(::std::string_view terrainVariation);

MCAPI_C void tessellateThickWireBox(::BaseActorRenderContext& renderContext, ::Tessellator& t, ::AABB const& bb);

MCAPI_C void tessellateWireBox(::Tessellator& tessellator, ::AABB const& bb);

MCAPI ::ItemInstance toItemInstance(::RecipeIngredient const& ingredient);

MCAPI ::leveldb::Status toLevelDbStatus(::Bedrock::Result<void>&& result);

MCAPI_C ::std::string toString(::NetworkConnectionType connectionType);

MCAPI ::std::string toString(::AgentActionType type);

MCAPI_C ::std::optional<uint> tryCreateDataDrivenV2Resource(
    ::HashedString const&                          name,
    ::std::shared_ptr<::DataDrivenRenderer> const& render,
    ::DataDrivenRendererPreprocessingContext&      bakeCtx
);

MCAPI ::std::optional<::std::locale> tryGetLocaleFromName(::std::string const& localeName);

MCAPI_C void updateLevelSettingsConsideringPlayerIntents(
    ::Bedrock::NotNullNonOwnerPtr<::ILevel>       level,
    ::Bedrock::NotNullNonOwnerPtr<::IAppPlatform> appPlatform,
    ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const&,
    bool                                                  isNxAdhocMultiplayer,
    ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager,
    ::Bedrock::NotNullNonOwnerPtr<::TrialManager>         trialManager,
    bool                                                  hasAllValidCrossPlatformSkin
);

MCAPI ::http_wstring utf16_from_utf8(::http_string const& utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8, uint64 size);

MCAPI ::http_string utf8_from_utf16(::http_wstring const& utf16);

MCAPI ::http_string utf8_from_utf16(wchar_t const* utf16, uint64 size);

MCAPI_C void visitTreeInternal(
    ::UIControl&                                   control,
    ::std::function<bool(::UIControl&, int, bool)> visitor,
    int                                            parentZOrder,
    bool                                           ancestorVisible
);
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

MCAPI_C ::std::array<::LayoutVariableType, 11> const& AllLayoutVariableTypes();

MCAPI ::HashedString const& BLAST_FURNACE_TAG();

MCAPI ::HashedString const& CAMPFIRE_TAG();

MCAPI_C ::std::chrono::seconds const& CLUBS_CACHE_DURATION_FAILED();

MCAPI_C ::std::chrono::seconds const& CLUBS_CACHE_DURATION_SUCCEEDED();

MCAPI ::std::unordered_map<::ContainerEnumName, ::std::string>& ContainerCollectionNameMap();

MCAPI_C ::std::string const& DEFAULT_DRIVE_CONTENTS_PATH();

MCAPI_C int const& DEFAULT_SEARCH_RESULTS_PER_REQUEST();

MCAPI_C ::std::unordered_map<::std::string_view, ::EncyclopediaTopicIndex> const& EncyclopediaTopicIndexMap();

MCAPI_C ::std::string const& FEATURED_SKIN_PACK_COLLECTION_INDEX();

MCAPI_C ::std::string const& FEATURED_SKIN_PACK_COLLECTION_NAME();

MCAPI ::HashedString const& FURNACE_TAG();

MCAPI ::std::array<::std::pair<::HudElement, ::std::string>, 13> const& HUD_ELEMENTS_TO_STRINGS();

MCAPI_C ::std::add_lvalue_reference_t<char const*[]> HeaderBannerType();

MCAPI_C ::std::unordered_map<::std::string_view, ::HowToPlayTopicIndex> const& HowToPlayTopicIndexMap();

MCAPI_C ::std::string const& ICON_OVERLAY_FACTORY();

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

MCAPI_C ::std::string const& SKIN_PACK_COLLECTION_INDEX_DEP();

MCAPI_C ::std::string const& SKIN_PACK_COLLECTION_NAME_DEP();

MCAPI ::HashedString const& SMOKER_TAG();

MCAPI ::HashedString const& SOUL_CAMPFIRE_TAG();

MCAPI ::std::add_lvalue_reference_t<bool (*)(::AssertHandlerContext const&)> TEST_HANDLER();

MCAPI ::std::add_lvalue_reference_t<bool (*)(::AssertHandlerContext const&)> TEST_HANDLER_NO_THROW();

MCAPI ::std::unordered_map<
    ::TextProcessingEventOrigin,
    ::std::string,
    ::TextProcessingEventOriginEnumHasher,
    ::std::equal_to<::TextProcessingEventOrigin>> const&
TextProcessingEventOriginEnumMap();

MCAPI ::std::array<::HashedString, 17> const& VanillaStructureFeatureTypes();

MCAPI ::std::unordered_map<::std::string, ::ActorFilterGroup::LegacyMapping>& _environmentSubfilters();

MCAPI ::std::unordered_map<::std::string, ::ActorFilterGroup::LegacyMapping>& _legacyPredicates();

MCAPI_C ::std::unordered_map<int, ::std::string> const& autoUpdateModeLabels();

MCAPI_C ::mce::Camera& camera();

MCAPI_C ::std::unordered_map<int, ::std::string> const& chatDurationLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& chunkMapModeLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& cloudQualityLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& contentLogGUILevelLables();

MCAPI_C ::std::unordered_map<int, ::std::string> const& debugHudLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& devConnectionQualityLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& devEducationServicesEnvironmentLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& devMarketplaceRotationSpeedMultiplierLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& devTimeZoneTypeLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& devWindowsStoreLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& deviceInfoMemoryTierLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& difficultyLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& discoveryEnvironmentLabels();

MCAPI ::std::unordered_map<::std::string, ::DiscoveryEnvironment> const& discoveryEnvironmentStrings();

MCAPI ::std::unordered_map<::DiscoveryEnvironment, ::std::string> const& discoveryEnvironments();

MCAPI ::std::array<::std::pair<char const*, char const*>, 5> const& educationServicesEnvironmentStrings();

MCAPI ::std::add_lvalue_reference_t<uint[]> englishCharacterFrequencies();

MCAPI_C ::std::unordered_map<int, ::std::string> const& exposureTechniqueLabels();

MCAPI_S ::std::vector<::std::string>& gAreaFilters();

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Biome>>& gBiomeChunkGC();

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Block>>& gBlockStorageGC();

MCAPI ::InternalTaskGroup& gInternalTaskGroup();

MCAPI ::SubChunkDelayedDeleter<::SubChunkBrightnessStorage>& gLightStorageGC();

MCAPI_C ::std::add_lvalue_reference_t<uchar[]> gMinecraftLogoImage();

MCAPI_S ::std::vector<::std::string>& gPriorityFilters();

MCAPI_C double& gTotalRealWorldTime();

MCAPI_C double& gTotalRealWorldTimeDelta();

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, uint)> g_memAllocFunc();

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, uint)> g_memFreeFunc();

MCAPI ::HCTraceImplArea& g_traceHTTPCLIENT();

MCAPI ::HCTraceImplArea& g_traceWEBSOCKET();

MCAPI_C ::HCTraceImplArea& g_traceXAL();

MCAPI_C ::HCTraceImplArea& g_traceXAL_TELEMETRY();

MCAPI_C ::HCTraceImplArea& g_traceXSAPI();

MCAPI_C char const*& gamepad_disconnected_screen();

MCAPI_C ::std::unordered_map<int, ::std::string> const& graphicsApiLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& graphicsModeLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& graphicsQualityPresetModeLabels();

MCAPI_C char const*& hud_screen();

MCAPI_C char const*& idle_route();

MCAPI_C ::std::unordered_map<int, ::std::string> const& interactionModelLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& joystickVisibilityOptionLabels();

MCAPI ::EducationServicesEnvironment& mCachedServicesEnvironment();

MCAPI_C ::std::unordered_map<int, ::std::string> const& nethernetLoggingVerbosityLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& networkLoggingVerbosityLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& newPlayerFlowV3ABCTestGroupLabels();

MCAPI ::std::add_lvalue_reference_t<void (*)(char const*, long)> notifyOutOfMemory();

MCAPI_C ::std::unordered_map<int, ::std::string> const& partyInviteReceivedFilterLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& partyInviteSendPrivilegesLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& partyPrivacyLabels();

MCAPI_C char const*& pause_screen();

MCAPI_C ::std::unordered_map<::std::string, int> const& permissionsNameValuePairs();

MCAPI_C ::std::unordered_map<int, ::std::string> const& permissionsValueLabelPairs();

MCAPI_C ::std::unordered_map<int, ::std::string> const& permissionsValueTexturePairs();

MCAPI_C ::std::unordered_map<int, ::std::string> const& pointLightLODingQualityLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& pointLightShadowQualityLabels();

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, char const*, uint)> rakFree_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, char const*, uint)> rakMalloc_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(void*, uint64, char const*, uint)> rakRealloc_Ex();

MCAPI_C ::std::unordered_map<int, ::std::string> const& realmsEnvironmentLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& realmsSkuLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& reflectionQualityLabels();

MCAPI ::std::add_lvalue_reference_t<::DynDnsResult[]> resultTable();

MCAPI_C ::std::shared_ptr<::Bedrock::Platform_GameCore>& sPlatform();

MCAPI_C ::std::unique_ptr<::WindowState>& sWindowState();

MCAPI_S bool& s_AsyncLibEnablePumpingWait();

MCAPI_S ::std::atomic<uint>& s_AsyncLibGlobalStateCount();

MCAPI_C ::std::unordered_map<int, ::std::string> const& scriptDebuggerAttachModeLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& shadowQualityLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& sneakOptionLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& splitScreenLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& startupStatisticsLabels();

MCAPI ::__m128i& stbir__s16_32768();

MCAPI ::__m128i& stbir__s32_32768();

MCAPI_C ::std::unordered_map<int, ::std::string> const& storageLocationLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& sunsettingTierLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& suspendedConnectionBehaviorLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& thirdPersonLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& toastsDurationLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& tonemapTechniqueLabels();

MCAPI ::std::add_lvalue_reference_t<::TypeMapping[]> typeMappings();

MCAPI_C ::std::unordered_map<int, ::std::string> const& typefaceLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& uiProfileLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& upscalingModeLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& volumetricFogQualityLabels();

MCAPI_C ::std::unordered_map<int, ::std::string> const& vsyncLabels();

MCAPI_C ::std::add_lvalue_reference_t<int (*)(void*)> winrt_to_hresult_handler();

MCAPI_C ::std::unordered_map<int, ::std::string> const& xboxEnvironmentLabels();
// NOLINTEND
