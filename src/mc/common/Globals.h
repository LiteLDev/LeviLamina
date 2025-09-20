#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/file/file_system/FileType.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/ValueType.h"
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/libsrtp/srtp_err_status_t.h"
#include "mc/network/packet/AgentActionType.h"
#include "mc/options/DiscoveryEnvironment.h"
#include "mc/options/EducationServicesEnvironment.h"
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
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
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
class BlockPos;
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
class FeatureRegistry;
class GatheringServerInfo;
class HashedString;
class I18n;
class IFileAccess;
class InternalTaskGroup;
class ItemInstance;
class JigsawStructureRegistry;
class LevelData;
class ListTag;
class RecipeIngredient;
class SemVersionConstant;
class StructureManager;
class StructurePoolElement;
class SubChunkBrightnessStorage;
class ThirdPartyInfo;
class WorkerPool;
struct AccessorTypeEnumHasher;
struct ActorDefinitionIdentifier;
struct ActorFactoryData;
struct AllWorkerConfigurations;
struct AssertHandlerContext;
struct BlockLayer;
struct BlockMaterialInstance;
struct DynDnsResult;
struct FlatWorldPreset;
struct HCTraceImplArea;
struct HC_CALL;
struct ImageMimeTypeEnumHasher;
struct KeyOrNameResult;
struct MCRESULT;
struct MaterialAlphaModeEnumHasher;
struct ScatterParamsMolangVariableIndices;
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
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct EmptyPoolElement; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct SinglePoolElement; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

// functions
// NOLINTBEGIN
MCAPI void BedrockLogOut(uint, char const*, ...);

MCAPI ::CreativeItemCategory CreativeItemCategoryFromString(::std::string const& str);

MCFOLD void* DefaultMemAllocFunction(uint64 size, uint memoryType);

MCFOLD void DefaultMemFreeFunction(void* pointer, uint memoryType);

MCFOLD void DefaultOutOfMemoryHandler(char const* file, long line);

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

MCAPI void JSONSchemaBindings(::cereal::ReflectionCtx& ctx);

MCAPI ::std::optional<::LogLevel> LogLevelFromString(::std::string const& str);

MCFOLD bool MOCK_ASSERT_HANDLER(::AssertHandlerContext const& context);

MCAPI bool MOCK_ASSERT_HANDLER_NO_THROW(::AssertHandlerContext const& context);

MCAPI bool Mock_Internal_HCHttpCallPerformAsync(::HC_CALL* originalCall);

MCAPI long Mock_Internal_ReadRequestBodyIntoMemory(
    ::HC_CALL*                                         originalCall,
    ::std::vector<uchar, ::http_stl_allocator<uchar>>* bodyBytes
);

MCAPI ::std::optional<::NetherNet::LogSeverity> NetherNetLogSeverityFromString(::std::string const& str);

MCAPI ::PackType PackTypeFromString(::std::string const& value);

MCAPI void PlatformBedrockLogOut(uint _priority, char const* buf, uint64 nullTerminatorPos);

MCAPI ::std::string StringFromCreativeItemCategory(::CreativeItemCategory category);

MCAPI ::std::string StringFromMaterialType(::MaterialType const& materialType);

MCAPI ::std::string const& StringFromPackType(::PackType value);

MCAPI ::SharedTypes::Legacy::UseAnimation UseAnimationFromString(::std::string const& str);

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

MCAPI void _checkTickedActorsForOutOfWorld(::ActorOwnerComponent& actorOwnerComponent);

MCAPI ::std::unique_ptr<::ListTag> _createBlockStateEnum(::BlockState const& state);

MCAPI uchar _facingToDirection(uchar facing);

MCAPI uint _facingToVineDirection(uchar facing);

MCAPI ::ScatterParamsMolangVariableIndices& _getScatterParamsMolangVariableIndices();

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

MCAPI ::std::unique_ptr<::ListTag> _saveBlockList(::std::vector<::BlockType const*> const& blockList);

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

MCAPI ::ActorCategory entityCategoriesFromString(::std::string const& str);

MCAPI ::ActorCategory entityCategoryFromString(::std::string const& str);

MCAPI ::srtp_err_status_t external_crypto_init();

MCAPI ::srtp_err_status_t external_hmac_alloc(::srtp_auth_t** a, int key_len, int out_len);

MCAPI ::srtp_err_status_t external_hmac_compute(void*, uchar const*, int, int tag_len, uchar* result);

MCAPI ::srtp_err_status_t external_hmac_dealloc(::srtp_auth_t* a);

MCAPI ::srtp_err_status_t external_hmac_init(void* state, uchar const* key, int key_len);

MCFOLD ::srtp_err_status_t external_hmac_start(void*);

MCFOLD ::srtp_err_status_t external_hmac_update(void*, uchar const*, int);

MCAPI int fclose(::Core::File& file);

MCAPI ::std::optional<::FlatWorldPresetID> flatWorldPresetIDFromString(::std::string const& str);

MCAPI void forEachEntityType(
    ::std::function<bool(::ActorType, ::std::string const&)> callback,
    ::ActorTypeNamespaceRules                                namespaceRule
);

MCAPI uint64 fread(void* buffer, uint64 size, uint64 count, ::Core::File& file);

MCAPI ::std::tuple<::std::string, ::std::unique_ptr<::StructurePoolElement>> from(
    ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::EmptyPoolElement const&,
    ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
    ::JigsawStructureRegistry&,
    ::FeatureRegistry const&
);

MCAPI ::std::tuple<::std::string, ::std::unique_ptr<::StructurePoolElement>> from(
    ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement const& element,
    ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                              structureManager,
    ::JigsawStructureRegistry&                                                     registry,
    ::FeatureRegistry const&
);

MCAPI ::std::tuple<::std::string, ::std::unique_ptr<::StructurePoolElement>> from(
    ::std::variant<
        ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::EmptyPoolElement,
        ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement> const& element,
    ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                   structures,
    ::JigsawStructureRegistry&                                                          registry,
    ::FeatureRegistry const&                                                            features
);

MCAPI int fseek(::Core::File& file, int64 offset, int origin);

MCAPI ::std::string gatherTypeStrings(::std::vector<::Json::ValueType> const& types);

MCAPI ::std::string getDiscoveryServiceURL(::DiscoveryEnvironment environment);

MCAPI ::Bedrock::FileType getFileType(::Core::PathView filePath, ::IFileAccess& fileAccess);

MCAPI ::FlatWorldPreset const& getFlatWorldPresetWithID(::FlatWorldPresetID id);

MCAPI ::std::unordered_map<::FlatWorldPresetID, ::FlatWorldPreset> const& getFlatWorldPresets();

MCAPI ::I18n& getI18n();

MCAPI ::std::string getJsonTypeString(::Json::ValueType const& type);

MCAPI ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeEventMapAccess();

MCAPI ::std::unordered_map<int, ::std::string> const& getPackParseErrorTypeLOCMapAccess();

MCAPI ::AllWorkerConfigurations getWorkerConfiguration(uint highPowerCores, uint totalCores);

MCAPI ::std::string join(::std::string prefix, ::std::string_view chunkKey);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag);

MCAPI ::std::string join(::std::string_view prefix, ::LevelChunkTag tag, uint i);

MCAPI ::std::string makeGuestDisplayName(::std::string const& hostName, ::SubClientId subclientId);

MCAPI ::mce::UUID makeGuestUUID(::mce::UUID const& hostUuid, ::SubClientId subclientId);

MCAPI bool operator!=(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCAPI bool operator!=(::HashedString const& lhs, ::HashedString const& rhs);

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

MCAPI bool operator==(::ExpressionNode const& lhs, ::ExpressionNode const& rhs);

MCAPI bool operator==(::BlockMaterialInstance const& lhs, ::BlockMaterialInstance const& rhs);

MCAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);

MCFOLD bool operator==(::HashedString const& lhs, ::HashedString const& rhs);

MCAPI ::BlockProperty operator|(::BlockProperty lhs, ::BlockProperty b);

MCAPI void renderMapChunk(
    ::Dimension&                    dimension,
    ::buffer_span_mut<uint>         pixels,
    uint                            scale,
    ::BlockPos const&               origin,
    ::MapItemSavedData::ChunkBounds pixelsBB
);

MCAPI ::DiscoveryEnvironment stringToDiscoveryEnvironment(::std::string const& str);

MCAPI ::ItemInstance toItemInstance(::RecipeIngredient const& ingredient);

MCAPI ::leveldb::Status toLevelDbStatus(::Core::Result const& result);

MCAPI ::std::string toString(::AgentActionType type);

MCAPI ::std::optional<::std::locale> tryGetLocaleFromName(::std::string const& localeName);

MCAPI ::http_wstring utf16_from_utf8(::http_string const& utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8, uint64 size);

MCAPI ::http_string utf8_from_utf16(::http_wstring const& utf16);

MCAPI ::http_string utf8_from_utf16(wchar_t const* utf16, uint64 size);
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

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, char const*, uint)> rakFree_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint64, char const*, uint)> rakMalloc_Ex();

MCAPI ::std::add_lvalue_reference_t<void* (*)(void*, uint64, char const*, uint)> rakRealloc_Ex();

MCAPI ::std::add_lvalue_reference_t<::DynDnsResult[]> resultTable();

MCAPI bool& s_AsyncLibEnablePumpingWait();

MCAPI ::std::atomic<uint>& s_AsyncLibGlobalStateCount();

MCAPI int& stbi__flip_vertically_on_write();

MCAPI int& stbi_write_tga_with_rle();

MCAPI ::std::add_lvalue_reference_t<::TypeMapping[]> typeMappings();
// NOLINTEND
