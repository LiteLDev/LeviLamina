#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/EducationServicesEnvironment.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/file/file_system/FileType.h"
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/json/ValueType.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/external/lib_http_client/HCTraceLevel.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/libsrtp/srtp_err_status_t.h"
#include "mc/network/packet/AgentActionType.h"
#include "mc/options/DiscoveryEnvironment.h"
#include "mc/util/HudElement.h"
#include "mc/util/gltf/Accessor.h"
#include "mc/util/gltf/Image.h"
#include "mc/util/gltf/Material.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ActorTypeNamespaceRules.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/filters/FilterGroup.h"
#include "mc/world/filters/FilterOperator.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockSlot.h"
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/SubChunkDelayedDeleter.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/material/MaterialType.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class Biome;
class BiomeArea;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class BlockState;
class BoundingBox;
class BribeableComponent;
class CircuitComponentList;
class CircuitSceneGraph;
class CircuitTrackingInfo;
class DefinitionTrigger;
class Dimension;
class GatheringServerInfo;
class HashedString;
class I18n;
class IFileAccess;
class InternalTaskGroup;
class ItemInstance;
class LeashFenceKnotActor;
class LevelData;
class ListTag;
class RecipeIngredient;
class SemVersionConstant;
class StrictEntityContext;
class SubChunkBrightnessStorage;
class ThirdPartyInfo;
class WorkerPool;
struct AccessorTypeEnumHasher;
struct ActorDefinitionIdentifier;
struct ActorFactoryData;
struct ActorMapping;
struct AssertHandlerContext;
struct BlockLayer;
struct BlockMaterialInstance;
struct DynDnsResult;
struct HCTraceImplArea;
struct HC_CALL;
struct ImageMimeTypeEnumHasher;
struct KeyOrNameResult;
struct MCRESULT;
struct MaterialAlphaModeEnumHasher;
struct MobOnPlayerJumpRequestComponent;
struct ScatterParamsMolangVariableIndices;
struct SendPacketsComponent;
struct TextProcessingEventOriginEnumHasher;
struct ThreadConfiguration;
struct TypeMapping;
struct WorkerConfiguration;
struct srtp_auth_t;
namespace Bedrock { class StaticOptimizedString; }
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Core { class File; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Json { class Value; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakPeerConfiguration; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

// functions
// NOLINTBEGIN
MCAPI void BedrockLogOut(uint, char const*, ...);

MCAPI ::CreativeItemCategory CreativeItemCategoryFromString(::std::string const& str);

MCAPI void* DefaultMemAllocFunction(uint64, uint);

MCAPI void DefaultMemFreeFunction(void*, uint);

MCFOLD void DefaultOutOfMemoryHandler(char const* file, long line);

MCAPI bool DoesMockCallMatch(::HC_CALL const*, ::HC_CALL const*);

MCAPI ::HashedString const& EntityCanonicalName(::ActorType entityType);

MCAPI ::ActorType EntityTypeFromString(::std::string const& str);

MCAPI ::std::string EntityTypeToFormattedLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToLocString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI ::std::string EntityTypeToString(::ActorType entityType, ::ActorTypeNamespaceRules namespaceRule);

MCAPI void EntityTypeToStringAndNamespace(::ActorType entityType, ::std::string& nameOut, ::std::string& namespaceOut);

MCAPI float FoodSaturationFromString(::std::string const& str);

MCAPI ::std::unordered_map<::std::string, ::ActorFactoryData>& GetActorDataRegistry();

MCAPI double GetEngagementMetricsTimeSinceAppStart_DEPRECATED();

MCAPI void Internal_HCTraceMessage(char const*, ::HCTraceLevel, char const*);

MCAPI uint64 Internal_ThisThreadId();

MCAPI ::std::optional<::LogLevel> LogLevelFromString(::std::string const& str);

MCFOLD bool MOCK_ASSERT_HANDLER(::AssertHandlerContext const& context);

MCAPI bool MOCK_ASSERT_HANDLER_NO_THROW(::AssertHandlerContext const& context);

MCAPI bool Mock_Internal_HCHttpCallPerformAsync(::HC_CALL*);

MCAPI long Mock_Internal_ReadRequestBodyIntoMemory(::HC_CALL*, ::std::vector<uchar, ::http_stl_allocator<uchar>>*);

MCAPI void PlatformBedrockLogOut(uint _priority, char const* buf, uint64 nullTerminatorPos);

MCAPI ::std::string StringFromCreativeItemCategory(::CreativeItemCategory category);

MCAPI ::std::string StringFromMaterialType(::MaterialType const& materialType);

MCAPI ::SharedTypes::Legacy::UseAnimation UseAnimationFromString(::std::string const& str);

MCAPI void _addEnvironmentSubfilter(
    ::std::string const&                 legacyPredicate,
    ::FilterGroup::CollectionType        filterName,
    ::std::string const&                 op,
    ::SharedTypes::Legacy::FilterSubject process,
    ::FilterOperator                     type,
    ::ActorFilterGroup::Processing       subject
);

MCAPI void _addLegacyFilterDefinition(
    ::std::string const&                 legacyPredicate,
    ::FilterGroup::CollectionType        type,
    ::std::string const&                 filterName,
    ::SharedTypes::Legacy::FilterSubject subject,
    ::FilterOperator                     op,
    ::ActorFilterGroup::Processing       process
);

MCAPI void _checkTickedActorsForOutOfWorld(::ActorOwnerComponent& actorOwnerComponent);

MCAPI ::std::unique_ptr<::ListTag> _createBlockStateEnum(::BlockState const& state);

MCAPI uchar _facingToDirection(uchar facing);

MCAPI uint _facingToVineDirection(uchar facing);

MCAPI ::ScatterParamsMolangVariableIndices& _getScatterParamsMolangVariableIndices();

MCAPI bool _hasAirBuffer(::Json::Value const& blockLayers);

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

MCAPI ::std::unique_ptr<::ListTag> _saveBlockList(::std::vector<::BlockLegacy const*> const& blockList);

MCAPI void
_tickBribeableComponent(::ActorOwnerComponent& actorOwnerComponent, ::BribeableComponent& bribeableComponent);

MCAPI void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);

MCAPI void bindMaterialType(::cereal::ReflectionCtx& ctx);

MCAPI char const* blockSlotToString(::BlockSlot slot);

MCAPI ::KeyOrNameResult
buildActorDisplayName(::ActorType actorType, ::std::string const& nameTag, ::Actor const* actor);

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

MCAPI bool checkTypeFilter(
    ::ActorDefinitionIdentifier const& entityIdentifier,
    ::ActorDefinitionIdentifier const& identifierFilter
);

MCAPI void compoundBlockVolumeActionBindType(::cereal::ReflectionCtx& ctx);

MCAPI void compoundBlockVolumePositionRelativityBindType(::cereal::ReflectionCtx& ctx);

MCAPI void configureThread(::ThreadConfiguration const& config);

MCAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>
createUniqueRakPeer(::RakNet::RakPeerConfiguration const& config);

MCAPI ::Bedrock::NonOwnerPointer<::WorkerPool> createWorkerPool(
    ::std::string_view                                       name,
    ::WorkerConfiguration const&                             config,
    ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>& destHandle
);

MCAPI void doSendPacket(
    ::StrictEntityContext const&              entity,
    ::MobOnPlayerJumpRequestComponent const&  mobOnPlayerJumpRequestComponent,
    ::EntityModifier<::SendPacketsComponent>& modifier
);

MCAPI ::ActorCategory entityCategoriesFromString(::std::string const& str);

MCAPI ::ActorCategory entityCategoryFromString(::std::string const& str);

MCAPI ::srtp_err_status_t external_crypto_init();

MCAPI ::srtp_err_status_t external_hmac_alloc(::srtp_auth_t**, int, int);

MCAPI ::srtp_err_status_t external_hmac_compute(void*, uchar const*, int, int, uchar*);

MCAPI ::srtp_err_status_t external_hmac_dealloc(::srtp_auth_t*);

MCAPI ::srtp_err_status_t external_hmac_init(void*, uchar const*, int);

MCAPI ::srtp_err_status_t external_hmac_start(void*);

MCAPI ::srtp_err_status_t external_hmac_update(void*, uchar const*, int);

MCAPI int fclose(::Core::File& file);

MCAPI ::LeashFenceKnotActor* findKnotAt(::BlockSource& region, ::BlockPos const& pos);

MCAPI void forEachEntityType(::std::function<bool(::ActorType, ::std::string const&)> callback);

MCAPI uint64 fread(void* buffer, uint64 size, uint64 count, ::Core::File& file);

MCAPI int fseek(::Core::File& file, int64 offset, int origin);

MCAPI ::std::string gatherTypeStrings(::std::vector<::Json::ValueType> const& types);

MCAPI ::std::string const getEdition();

MCAPI ::FileType getFileType(::Core::PathView filePath, ::IFileAccess& fileAccess);

MCAPI ::I18n& getI18n();

MCAPI ::std::string getJsonTypeString(::Json::ValueType const& type);

MCAPI ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeEventMapAccess();

MCAPI ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeLOCMapAccess();

MCAPI ::std::string join(::std::string prefix, ::std::string_view chunkKey);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag i, uint tag);

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

MCAPI bool operator==(::DefinitionTrigger const& a, ::DefinitionTrigger const& b);

MCAPI bool operator==(::BlockMaterialInstance const& lhs, ::BlockMaterialInstance const& rhs);

MCAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);

MCAPI ::BlockProperty operator|(::BlockProperty lhs, ::BlockProperty b);

MCAPI void renderMapChunk(
    ::Dimension&                    dimension,
    ::buffer_span_mut<uint>         pixels,
    uint                            scale,
    ::BlockPos const&               origin,
    ::MapItemSavedData::ChunkBounds pixelsBB
);

MCAPI ::ItemInstance toItemInstance(::RecipeIngredient const& ingredient);

MCAPI ::leveldb::Status toLevelDbStatus(::Core::Result const& result);

MCAPI ::std::string toString(::AgentActionType type);

MCAPI ::http_wstring utf16_from_utf8(::http_string const&);

MCAPI ::http_wstring utf16_from_utf8(char const*);

MCAPI ::http_wstring utf16_from_utf8(char const*, uint64);

MCAPI ::http_string utf8_from_utf16(::http_wstring const&);

MCAPI ::http_string utf8_from_utf16(wchar_t const*, uint64);
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

MCAPI ::HashedString const& BLAST_FURNACE_TAG();

MCAPI ::HashedString const& CAMPFIRE_TAG();

MCAPI ::std::unordered_map<::ContainerEnumName, ::std::string>& ContainerCollectionNameMap();

MCAPI ::std::unordered_map<::ActorType, ::ActorMapping>& ENTITY_TYPE_MAP();

MCAPI ::HashedString const& FURNACE_TAG();

MCAPI ::std::array<::std::pair<::HudElement, ::std::string>, 13> const& HUD_ELEMENTS_TO_STRINGS();

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

MCAPI ::std::unordered_map<int, ::std::string> const& discoveryEnvironmentLabels();

MCAPI ::std::unordered_map<::std::string, ::DiscoveryEnvironment> const& discoveryEnvironmentStrings();

MCAPI ::std::unordered_map<::DiscoveryEnvironment, ::std::string> const& discoveryEnvironments();

MCAPI ::std::add_lvalue_reference_t<uint[]> englishCharacterFrequencies();

MCAPI ::std::vector<::std::string>& gAreaFilters();

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Biome>>& gBiomeChunkGC();

MCAPI ::SubChunkDelayedDeleter<::SubChunkStorage<::Block>>& gBlockStorageGC();

MCAPI ::InternalTaskGroup& gInternalTaskGroup();

MCAPI ::SubChunkDelayedDeleter<::SubChunkBrightnessStorage>& gLightStorageGC();

MCAPI ::std::vector<::std::string>& gPriorityFilters();

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, uint)> g_memAllocFunc();

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, uint)> g_memFreeFunc();

MCAPI ::HCTraceImplArea& g_traceHTTPCLIENT();

MCAPI ::HCTraceImplArea& g_traceWEBSOCKET();

MCAPI ::EducationServicesEnvironment& mCachedServicesEnvironment();

MCAPI ::std::add_lvalue_reference_t<void (*)(char const*, long)> notifyOutOfMemory();

MCAPI ::std::unordered_map<uint64, ::std::pair<::std::pair<::std::string, ::std::string>, ::std::string>>&
preOptimizedHashes();

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, char const*, uint)> rakFree_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, char const*, uint)> rakMalloc_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(void*, uint64, char const*, uint)> rakRealloc_Ex();

MCAPI ::std::add_lvalue_reference_t<::DynDnsResult[]> resultTable();

MCAPI bool& s_AsyncLibEnablePumpingWait();

MCAPI ::std::atomic<uint>& s_AsyncLibGlobalStateCount();

MCAPI ::std::add_lvalue_reference_t<::TypeMapping[]> typeMappings();
// NOLINTEND
