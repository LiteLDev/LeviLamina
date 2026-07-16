#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"
#include "mc/client/renderer/UpscalingConfiguration.h"
#include "mc/client/renderer/game/TerrainVariation.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/file_system/FileType.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/libsrtp/srtp_err_status_t.h"
#include "mc/network/packet/AgentActionType.h"
#include "mc/network/packet/TextPacketType.h"
#include "mc/options/DiscoveryEnvironment.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/HudElement.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ActorTypeNamespaceRules.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/level/chunk/SubChunkDelayedDeleter.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Biome;
class Block;
class BlockPos;
class CircuitSceneGraph;
class CompoundTag;
class DataLoadHelper;
class DimensionHeightRange;
class ExpressionNode;
class GatheringServerInfo;
class HashedString;
class I18n;
class IFileAccess;
class InternalTaskGroup;
class InventoryContentPacket;
class ItemInstance;
class ItemUseInventoryTransaction;
class ItemUseOnActorInventoryTransaction;
class Player;
class RecipeIngredient;
class ScriptStat;
class SubChunkBrightnessStorage;
class TextPacket;
class ThirdPartyInfo;
class Vec2;
class Vec3;
struct ActorDefinitionIdentifier;
struct FlatWorldPreset;
struct HCTraceImplArea;
struct KeyOrNameResult;
struct KineticDamageSettings;
struct MCRESULT;
struct PackIdVersion;
struct PackMaps;
struct TextProcessingEventOriginEnumHasher;
struct srtp_auth_t;
namespace Bedrock { class StaticOptimizedString; }
namespace Bedrock::Services { class IDiscoveryService; }
namespace Bedrock::Services { struct DiscoveryConfig; }
namespace Core { class File; }
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Json { class Value; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakPeerConfiguration; }
namespace Scripting { class ModuleBindingBuilder; }
namespace cereal { struct ReflectionCtx; }
namespace cohtml { class Binder; }
namespace mce { class UUID; }
class TraceState;
struct HC_CALL;
class IOptionRegistry;
class UIControl;
class WorldSeedModel;
struct CloudConfiguration;
struct RealmsWorldInfo;
namespace MainGameCore { class WinMain; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace mce::framebuilder { class FrameBuilder; }
// clang-format on

// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void CoherentBind(
    ::cohtml::Binder*                                            binder,
    ::IMarketplacePackDownloader::MarketplacePackDownloadStatus* marketplacePackDownloadStatus
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::RealmsWorldInfo* realmsWorldInfo);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::WorldSeedModel* seedTemplate);
#endif

MCAPI ::SharedTypes::CreativeItemCategory CreativeItemCategoryFromString(::std::string const& str);

#ifdef LL_PLAT_S
MCAPI void* DefaultMemAllocFunction(uint64 size, uint memoryType);

MCAPI void DefaultMemFreeFunction(void* pointer, uint memoryType);

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

#ifdef LL_PLAT_S
MCAPI ::TraceState& GetTraceState();
#endif

#ifdef LL_PLAT_C
MCAPI long InitializeGameRuntimeDll(uint64 flags, ::_INITIALIZE_OPTIONS* const options);
#endif

MCAPI ::InventoryContentPacket InventoryContentPacketFromPlayerInventoryId(::ContainerID id, ::Player& player);

#ifdef LL_PLAT_C
MCAPI long LoadGameRuntimeDll();
#endif

#ifdef LL_PLAT_S
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
MCAPI void _addToMessageHistory(::std::deque<::std::string>& messages, ::std::string const& message);
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

#ifdef LL_PLAT_C
MCAPI bool _extractConstructionData(
    ::CompoundTag const&          tag,
    ::ActorDefinitionIdentifier&  outDefinition,
    ::Vec3&                       outPosition,
    ::Vec2&                       outRotation,
    ::DataLoadHelper&             dataLoadHelper,
    ::DimensionHeightRange const& heightRange
);

MCAPI void _saveToOptions(::std::deque<::std::string>& messages, ::IOptionRegistry& options, ::OptionID optionId);
#endif

MCAPI void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);

MCAPI void bindModuleToDDUI(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI ::KeyOrNameResult
buildActorDisplayName(::ActorType actorType, ::std::string const& nameTag, ::Actor const* actor);

#ifdef LL_PLAT_C
MCAPI bool checkMinMaxClientVer(::Json::Value const& documentObject, bool pascalCase);

MCAPI bool checkMinMaxClientVer(::std::string const& minClientVersion, ::std::string const& maxClientVersion);
#endif

MCAPI void compoundBlockVolumeActionBindType(::cereal::ReflectionCtx& ctx);

MCAPI void compoundBlockVolumePositionRelativityBindType(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_C
MCAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)> createDefaultUniqueRakPeer();

MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeEventMap();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeEventMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeLOCMap();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<int, ::std::string> createPackParseErrorTypeLOCMap();

MCAPI ::std::unordered_map<::PackType, ::std::string> createPackTypeToStringMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::PackType, ::std::string> createPackTypeToStringMap();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::std::string, ::PackType> createStringToPackTypeMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::std::string, ::PackType> createStringToPackTypeMap();
#endif

MCAPI ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>
createUniqueRakPeer(::RakNet::RakPeerConfiguration const& config);

#ifdef LL_PLAT_C
MCAPI ::UIDefType defTypeFromString(::std::string const& str);

MCAPI ::std::string discoveryEnvironmentToString(::DiscoveryEnvironment const& environment);

MCAPI ::std::string dlcCheckerResultToString(::DlcCheckResult result);

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
MCAPI void fillPackIdentityListFromJson(
    ::std::vector<::PackIdVersion>& packIdentityListToFill,
    ::Json::Value const&            packIdentitiesJsonArray
);
#endif

MCAPI ::std::optional<::FlatWorldPresetID> flatWorldPresetIDFromString(::std::string const& str);

MCAPI int fseek(::Core::File& file, int64 offset, int origin);

MCAPI int64 ftell(::Core::File& file);

#ifdef LL_PLAT_C
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

MCAPI ::PackMaps const& getPackMaps();

#ifdef LL_PLAT_C
MCAPI void getVisibleControlsInternal(::std::function<void(::UIControl&)> const& action, ::UIControl& control);

MCAPI bool isPowerFlowAvailabeAtDir(::CircuitSceneGraph& graph, ::BlockPos const& currentPos, uchar dir);
#endif

#ifdef LL_PLAT_S
MCAPI bool isPowerFlowAvailabeAtDir(::CircuitSceneGraph& graph, ::BlockPos const& currentPos, uchar dir);
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string keyLookup(
    ::std::unordered_map<::std::string, ::std::vector<char> const> const& keyMap,
    ::std::string const&                                                  packIdentity
);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string keyLookup(
    ::std::unordered_map<::std::string, ::std::vector<char> const> const& keyMap,
    ::std::string const&                                                  packIdentity
);
#endif

MCAPI ::std::string makeGuestDisplayName(::std::string hostName, ::SubClientId subclientId);

MCAPI ::mce::UUID makeGuestUUID(::mce::UUID const& hostUuid, ::SubClientId subclientId);

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
#endif

MCAPI ::mce::UUID makePlayerUUIDForNsaId(::std::string const& nsaId);

MCAPI ::mce::UUID makePlayerUUIDForPsnId(::std::string const& psnId);

MCAPI ::mce::UUID makePlayerUUIDForXUID(::std::string const& xuid);

#ifdef LL_PLAT_S
MCAPI ::std::shared_ptr<::Bedrock::Services::IDiscoveryService>
makeServerDiscoveryService(::Bedrock::Services::DiscoveryConfig const& discoveryConfig);
#endif

#ifdef LL_PLAT_C
MCAPI int nvFPrintf(::_iobuf*, char const*, ...);

MCAPI int nvSWprintf(wchar_t*, uint64, wchar_t const*, ...);

MCAPI int nvSprintf(char*, uint64, char const*, ...);

MCAPI ::std::ostream& operator<<(::std::ostream& os, ::cg::TextureSetLayerType const& type);

MCAPI ::std::string pascalCaseConverter(::std::string const& inString, bool pascalCase);

MCAPI void
registerBedrockEffectComponents(::ParticleSystem::ParticleEffectComponentRegistry& particleComponentRegistry);

MCAPI ::mce::framebuilder::FrameBuilder* renderDragonFrameBuilder();

MCAPI ::ui::DirtyFlag setControlVariableValue(
    ::UIControl&         control,
    ::LayoutVariableType type,
    float                inValue,
    float                inMinValue,
    float                inMaxValue
);

MCAPI int stbi__hdr_test(::stbi__context* s);

MCAPI int stbi__info_main(::stbi__context* s, int* x, int* y, int* comp);

MCAPI uchar* stbi__load_and_postprocess_8bit(::stbi__context* s, int* x, int* y, int* comp, int req_comp);

MCAPI float* stbi__loadf_main(::stbi__context* s, int* x, int* y, int* comp, int req_comp);
#endif

#ifdef LL_PLAT_S
MCAPI ::DiscoveryEnvironment stringToDiscoveryEnvironment(::std::string const& str);
#endif

#ifdef LL_PLAT_C
MCAPI ::TerrainVariation terrainVariationFromString(::std::string_view terrainVariation);
#endif

MCAPI ::ItemInstance toItemInstance(::RecipeIngredient const& ingredient);

MCAPI ::std::string toString(::AgentActionType type);

#ifdef LL_PLAT_S
MCAPI ::http_wstring utf16_from_utf8(::http_string const& utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8);

MCAPI ::http_wstring utf16_from_utf8(char const* utf8, uint64 size);

MCAPI ::http_string utf8_from_utf16(::http_wstring const& utf16);

MCAPI ::http_string utf8_from_utf16(wchar_t const* utf16, uint64 size);
#endif

#ifdef LL_PLAT_C
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

#ifdef LL_PLAT_C
MCAPI ::std::array<::LayoutVariableType, 11> const& AllLayoutVariableTypes();
#endif

MCAPI ::HashedString const& BLAST_FURNACE_TAG();

MCAPI ::HashedString const& CAMPFIRE_TAG();

MCAPI ::std::string_view const& CEREAL_DEFAULT_SCOPE();

MCAPI ::std::string_view const& CEREAL_DOCUMENTATION_TAG();

#ifdef LL_PLAT_S
MCAPI ::std::string_view const& CEREAL_JSON_SCHEMA_PROPERTY();
#endif

MCAPI ::std::unordered_map<::ContainerEnumName, ::std::string>& ContainerCollectionNameMap();

#ifdef LL_PLAT_C
MCAPI ::std::string const& DEFAULT_DRIVE_CONTENTS_PATH();
#endif

MCAPI ::HashedString const& FURNACE_TAG();

MCAPI ::std::array<::std::pair<::HudElement, ::std::string>, 13> const& HUD_ELEMENTS_TO_STRINGS();

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::std::string_view, ::HowToPlayTopicIndex> const& HowToPlayTopicIndexMap();

MCAPI ::std::string const& ICON_OVERLAY_FACTORY();
#endif

MCAPI ::GatheringServerInfo const& INVALID_GATHERING_SERVER_INFO();

#ifdef LL_PLAT_C
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

MCAPI ::std::bitset<38> const& PLAYER_ACTION_MOVEMENT_BITSET();

MCAPI ::std::bitset<38> const& PLAYER_ACTION_MOVEMENT_FLYING_ATTRIBUTE_BITSET();

MCAPI ::std::bitset<38> const& PLAYER_ACTION_MOVEMENT_SPEED_ATTRIBUTE_BITSET();

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

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<int, ::std::string> const& autoUpdateModeLabels();

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
MCAPI ::HCTraceImplArea& g_traceXSAPI();

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

MCAPI ::std::unordered_map<int, ::std::string> const& pointLightLODingQualityLabels();

MCAPI ::std::unordered_map<int, ::std::string> const& pointLightShadowQualityLabels();
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
