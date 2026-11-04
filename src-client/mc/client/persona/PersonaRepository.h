#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/IPersonaPieceProvider.h"
#include "mc/client/persona/IPersonaRepository.h"
#include "mc/client/persona/character/ICharacterCollection.h"
#include "mc/client/persona/character/IPersonaCharacterEditor.h"
#include "mc/client/persona/defaults/DefaultAppearanceManager.h"
#include "mc/client/persona/piece_loading/IPersonaPiecePackLoader.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"
#include "mc/deps/shared_types/persona/PieceSide.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class ContentCatalogService;
class DateManager;
class DlcBatchModel;
class GeometryGroup;
class IAdvancedGraphicsOptions;
class IContentAcquisition;
class IContentKeyProvider;
class IEntitlementManager;
class IMinecraftEventing;
class IOptionRegistry;
class IPackManifestFactory;
class IPackSourceFactory;
class IPersonaImageProvider;
class IPersonaRenderResourceProvider;
class ISkinRepository;
class Pack;
class PersonaAppearance;
class PersonaCharacterEditor;
class PersonaGeometryBuilder;
class PersonaOfflineCache;
class PersonaPiece;
class PersonaPiecePackLoader;
class PersonaSkinRegistrar;
class PersonaTextureBuilder;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
class SkinHandle;
class StoreCatalogRepository;
class TaskGroup;
class TintMapColor;
struct PersonaCharacter;
struct TextureHotReloader;
namespace Json { class Value; }
namespace Social { class XboxLiveUser; }
namespace mce { class Color; }
namespace persona { class AchievementOfferCollectionManager; }
namespace persona { class CharacterCollection; }
namespace persona { class PendingAppearance; }
namespace persona { class PersonaCharacterHandleArray; }
namespace persona { class PieceHandle; }
namespace persona { class PieceOfferWrapper; }
namespace persona { struct DefaultAppearance; }
namespace persona { struct FreeItemState; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona { struct PieceToChange; }
namespace persona::color { class ColorInfo; }
namespace persona::debug { class PersonaDebugApi; }
namespace splitscreen { class SplitscreenJsonAppearanceManager; }
// clang-format on

class PersonaRepository : public ::IPersonaRepository,
                          public ::IPersonaCharacterEditor,
                          public ::IPersonaPieceProvider,
                          public ::IPersonaPiecePackLoader,
                          public ::persona::ICharacterCollection {
public:
    // PersonaRepository inner types declare
    // clang-format off
    struct StartupParams;
    struct PendingPieceDownloadBatch;
    // clang-format on

    // PersonaRepository inner types define
    struct StartupParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                     mPersonaDefaultPath;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                     mPersonaPremiumPath;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                     mPersonaPremiumDevPath;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                     mDevelopmentPacksPath;
        ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>>      mLegacyPersonaPremiumPaths;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IPackSourceFactory>>   mSourceFactory;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IPackManifestFactory>> mManifestFactory;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationGroup>>                   mActorAnimationGroup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StartupParams();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PendingPieceDownloadBatch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>       mPieceIds;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DlcBatchModel>> mDlcBatch;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPersonaImageProvider>>                         mImageProvider;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ISkinRepository>>>             mSkinRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>>              mResourceLoadManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>>               mEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::StoreCatalogRepository>>              mStoreCatalog;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IContentAcquisition>>                 mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>                    mTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PersonaPiecePackLoader>>>       mPiecePackLoader;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PersonaGeometryBuilder>>>       mGeometryBuilder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PersonaTextureBuilder>>>        mTextureBuilder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PersonaOfflineCache>>>          mOfflineCache;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PersonaSkinRegistrar>>>         mSkinRegistrar;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::persona::CharacterCollection>>> mCharacterRepository;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PersonaCharacterEditor>>>       mCharacterEditor;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::persona::debug::PersonaDebugApi>>              mDebugApi;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::splitscreen::SplitscreenJsonAppearanceManager>>
        mSplitscreenAppearanceManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::persona::AchievementOfferCollectionManager>>
                                                                   mAchievementOfferCollectionManager;
    ::ll::TypedStorage<8, 48, ::persona::DefaultAppearanceManager> mPersonaDefaults;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::persona::PendingAppearance>> mLoadingPersonaAppearances;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                             mLoadingPersonaAppearancesLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::PersonaRepository::PendingPieceDownloadBatch>>
                                                                        mPendingPieceDownloadBatches;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::mce::UUID>>        mAllQueuedPieceDownloads;
    ::ll::TypedStorage<8, 80, ::std::mutex>                             mEmoteParseLock;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                      mGeneralErrorQueue;
    ::ll::TypedStorage<8, 8, int64>                                     mGeneralErrorTimer;
    ::ll::TypedStorage<1, 1, bool>                                      mInitialized;
    ::ll::TypedStorage<8, 24, ::Bedrock::Threading::AsyncPromise<void>> mInitPromise;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaRepository() /*override*/ = default;

    virtual bool isInitialized() const /*override*/;

    virtual bool isOfferLoading(::persona::PieceOfferWrapper const& personaOffer) const /*override*/;

    virtual bool isLoadingAppearances(::persona::PersonaCharacterHandleArray const& handles) const /*override*/;

    virtual bool isLoadingAppearance(::persona::PersonaCharacterHandle const& handle) const /*override*/;

    virtual ::persona::PersonaCharacterHandle createPersonaOnUser(
        ::persona::ProfileType                      profileType,
        ::PersonaAppearance const&                  appearance,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    ) /*override*/;

    virtual ::persona::PersonaCharacterHandle createAStartingPersonaOnUser(
        ::persona::ProfileType                      profileType,
        ::std::string const&                        playFabId,
        int                                         defaultIndexOverride,
        ::std::function<void(::std::string const&)> callback
    ) /*override*/;

    virtual ::PersonaAppearance createAppearancefromData(
        ::std::vector<::persona::PieceHandle> const&                                   personaPieces,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& tintMap,
        ::mce::Color const&                                                            skinColor,
        ::SharedTypes::persona::ArmSizeType const&                                     armSize
    ) /*override*/;

    virtual ::SkinHandle createPersona(
        ::persona::ProfileType                      profileType,
        ::PersonaAppearance const&                  newAppearance,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    ) /*override*/;

    virtual ::SkinHandle createAStartingPersona(
        ::persona::ProfileType                      profileType,
        ::std::string const&                        playFabId,
        uint const                                  defaultAppearanceIndex,
        ::std::function<void(::std::string const&)> callback
    ) /*override*/;

    virtual ::SkinHandle createAStartingPersona(
        ::persona::ProfileType                      profileType,
        ::mce::UUID const&                          defaultCharacterId,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    ) /*override*/;

    virtual void tryToReloadPersona(
        ::persona::PersonaCharacterHandle const&    handle,
        ::PersonaAppearance const&                  newAppearance,
        ::std::function<void(::std::string const&)> callback
    ) /*override*/;

    virtual bool isAppearanceDefault(::PersonaAppearance const& appearance) const /*override*/;

    virtual void saveOfflinePersonaCatalogCache() /*override*/;

    virtual void loadOfflinePersonaCatalogCache() /*override*/;

    virtual void registerPersonaSkinsForCharacter(::PersonaCharacter& character) /*override*/;

    virtual ::persona::DefaultAppearance const& getDefaultAppearance(uint const& defaultIndexOverride) /*override*/;

    virtual ::persona::DefaultAppearanceManager const& getDefaultAppearanceManager() const /*override*/;

    virtual void
    createSplitscreenUser(::std::string xuid, int splitscreenID, ::Json::Value&& appearanceData) /*override*/;

    virtual ::PersonaAppearance const
    getSplitscreenAppearance(::std::string const& xuid, int const controllerID) /*override*/;

    virtual void saveSplitscreenAppearanceData(
        ::std::string const& xuid,
        int                  splitscreenID,
        ::Json::Value&&      appearanceData
    ) /*override*/;

    virtual void loadDefaultCharactersIfNeeded() /*override*/;

    virtual void addToOfflinePersonaCatalogMap(
        ::persona::PieceOfferWrapper const& personaOffer,
        ::std::string const                 playfabId
    ) /*override*/;

    virtual ::std::vector<::std::string> const
    getAllPiecesFromOfflineMapForPlayfabId(::std::string const& playfabId) const /*override*/;

    virtual void loadOfflinePieceMapIntoStoreCatalog(::DateManager const& dateManager) /*override*/;

    virtual void queuePersonaGeneralError(::persona::PersonaError errorType) /*override*/;

    virtual void downloadAndLoadPieces(
        ::std::vector<::std::string> const& productIds,
        ::std::vector<::std::string> const& pieceIds
    ) /*override*/;

    virtual void
    update(bool inOrStartingGameplay, ::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup) /*override*/;

    virtual void queueContentReload(::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup) /*override*/;

    virtual ::PersonaCharacter& getCharacter(::std::string const& characterName) /*override*/;

    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const& handle) /*override*/;

    virtual void removeCharacter(::std::string const& characterName) /*override*/;

    virtual void removeCharacter(::persona::PersonaCharacterHandle const& handle) /*override*/;

    virtual void changePiece(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceType,
        ::mce::UUID const&                       pieceId,
        ::std::string const&                     productId,
        ::persona::FreeItemState const&          freeItemState,
        ::SharedTypes::persona::PieceSide        side,
        ::std::function<void(bool)>              callback
    ) /*override*/;

    virtual void changePieces(
        ::persona::PersonaCharacterHandle const&       currentCharacter,
        ::std::vector<::persona::PieceToChange> const& pieces,
        ::std::function<void(bool)>                    callback
    ) /*override*/;

    virtual void removePieceByType(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceTypeToRemove,
        ::SharedTypes::persona::PieceSide const  side,
        ::std::function<void(bool)>              callback
    ) /*override*/;

    virtual void changeEmote(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::std::string const&                     emotePieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
        ::std::function<void(bool)>              callback
    ) /*override*/;

    virtual void
    removeEmote(::persona::PersonaCharacterHandle const& currentCharacter, int emoteWheelSlot) /*override*/;

    virtual void removeAllEmotes(::persona::PersonaCharacterHandle const& currentCharacterHandle) /*override*/;

    virtual void removeEmotesWithId(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::std::string const&                     emoteId
    ) /*override*/;

    virtual void changeClassicSkin(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SkinHandle const&                      handle
    ) /*override*/;

    virtual void changeArmSize(
        ::persona::PersonaCharacterHandle const&   currentCharacter,
        ::SharedTypes::persona::ArmSizeType const& armSizeType,
        ::std::function<void(bool)>                callback
    ) /*override*/;

    virtual void changeHeight(
        ::persona::PersonaCharacterHandle const&    currentCharacter,
        ::SharedTypes::persona::BodySizeType const& bodyType,
        ::std::function<void(bool)>                 callback
    ) /*override*/;

    virtual void changePersonaTintColor(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceType,
        ::mce::Color const&                      color,
        ushort                                   channel,
        ::std::function<void(bool)>              callback
    ) /*override*/;

    virtual void changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&          currentCharacter,
        ::SharedTypes::persona::PieceType const           pieceType,
        ::std::vector<::persona::color::ColorInfo> const& tintColors,
        ::std::function<void(bool)>                       callback
    ) /*override*/;

    virtual void savePersonaItems(::persona::PersonaCharacterHandle const& characterHandle) /*override*/;

    virtual void revertPersona(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::std::function<void(bool)>              callback
    ) /*override*/;

    virtual void revertPersonaPiece(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType const& pieceTypeToRevert
    ) /*override*/;

    virtual bool doesCharacterHavePieceOfTypeX(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const& pieceType
    ) /*override*/;

    virtual bool isPieceOwned(::persona::PieceHandle const& item) /*override*/;

    virtual void updatePersonaWithNewAppearance(
        ::PersonaAppearance const&  newAppearance,
        ::PersonaCharacter&         character,
        ::std::function<void(bool)> callback
    ) /*override*/;

    virtual ::PersonaPiece const&
    getPieceFromClassicSkin(::std::string const& skinSerializedName, bool const reportFailure) const /*override*/;

    virtual ::persona::PieceHandle getPieceHandle(::std::string const& pieceId) const /*override*/;

    virtual bool isPieceLoaded(::mce::UUID const& pieceId) const /*override*/;

    virtual bool isKnownPersonaPiece(::mce::UUID const& pieceId) const /*override*/;

    virtual bool isKnownPersonaPieceUnloaded(::mce::UUID const& pieceId) const /*override*/;

    virtual bool isPersonaPieceLoading(::mce::UUID const& peiceId) const /*override*/;

    virtual bool isPersonaPieceInRepo(::mce::UUID const& pieceId) const /*override*/;

    virtual bool isPersonaPieceInRepo(::std::string const& pieceId) const /*override*/;

    virtual ::PersonaPiece const& getPersonaPieceFromRepo(::std::string const& pieceId) const /*override*/;

    virtual void forEachPersonaPack(::std::function<void(::Pack const&)> const& callback) const /*override*/;

    virtual ::std::vector<::persona::PieceOfferWrapper>
    getDefaultPieceWrappersOfTypes(::std::vector<::SharedTypes::persona::PieceType> const& sections) const /*override*/;

    virtual ::SemVersion const& getVersionOfKnownPersonaPiecePack(::mce::UUID const& packId) const /*override*/;

    virtual void loadPiecePack(::mce::UUID packId) /*override*/;

    virtual void queueImportOfPersonaPiecePack(::gsl::not_null<::std::shared_ptr<::Pack>> pack) /*override*/;

    virtual ::std::vector<::std::string> const& getPieceIdsByType(::SharedTypes::persona::PieceType type) const
        /*override*/;

    virtual ::std::shared_ptr<::persona::debug::PersonaDebugApi> getPersonaDebugApi() /*override*/;

    virtual ::PersonaCharacter&
    _addCharacter(::persona::ProfileType profileType, ::std::string const& playFabId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaRepository(
        ::std::unique_ptr<::IPersonaImageProvider>                imageProvider,
        ::std::unique_ptr<::IPersonaRenderResourceProvider>       renderResourceProvider,
        ::std::shared_ptr<::ISkinRepository>                      skinRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>      resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>      entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>       eventing,
        ::Bedrock::NonOwnerPointer<::TextureHotReloader>          textureReloader,
        ::std::shared_ptr<::GeometryGroup>                        skinGeometryGroup
    );

    MCNAPI ::PersonaAppearance _createAppearanceFromJson(::Json::Value const& valueAppearance);

    MCNAPI ::persona::AchievementOfferCollectionManager& _initializeAchievementCollectionOfferManagerIfNeeded(
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> storeRepo,
        ::Social::XboxLiveUser&                                 xboxLiveUser,
        ::IOptionRegistry&                                      options
    );

    MCNAPI void _processEmotesFromLoadedPieces(
        ::std::vector<::std::string> const&      loadedPieces,
        ::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup
    );

    MCNAPI void _queueEmoteParse(::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup);

    MCNAPI void _updatePersona(
        ::PersonaCharacter&                         character,
        ::PersonaAppearance const&                  newAppearance,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI ::Bedrock::Threading::Async<void> beginStartupAsyncInit(::PersonaRepository::StartupParams&& startupParams);

    MCNAPI void createSplitScreenAppearanceManager(::std::string const& playFabId);

    MCNAPI ::persona::AchievementOfferCollectionManager&
    getAchievementOfferCollectionManager(::Social::XboxLiveUser& xboxLiveUser, ::IOptionRegistry& options);

    MCNAPI void onStoreCatalogReady(
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>    contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>  contentCatalogService
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IPersonaImageProvider>                imageProvider,
        ::std::unique_ptr<::IPersonaRenderResourceProvider>       renderResourceProvider,
        ::std::shared_ptr<::ISkinRepository>                      skinRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>      resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>      entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>       eventing,
        ::Bedrock::NonOwnerPointer<::TextureHotReloader>          textureReloader,
        ::std::shared_ptr<::GeometryGroup>                        skinGeometryGroup
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInitialized() const;

    MCNAPI bool $isOfferLoading(::persona::PieceOfferWrapper const& personaOffer) const;

    MCNAPI bool $isLoadingAppearances(::persona::PersonaCharacterHandleArray const& handles) const;

    MCNAPI bool $isLoadingAppearance(::persona::PersonaCharacterHandle const& handle) const;

    MCNAPI ::persona::PersonaCharacterHandle $createPersonaOnUser(
        ::persona::ProfileType                      profileType,
        ::PersonaAppearance const&                  appearance,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI ::persona::PersonaCharacterHandle $createAStartingPersonaOnUser(
        ::persona::ProfileType                      profileType,
        ::std::string const&                        playFabId,
        int                                         defaultIndexOverride,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI ::PersonaAppearance $createAppearancefromData(
        ::std::vector<::persona::PieceHandle> const&                                   personaPieces,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& tintMap,
        ::mce::Color const&                                                            skinColor,
        ::SharedTypes::persona::ArmSizeType const&                                     armSize
    );

    MCNAPI ::SkinHandle $createPersona(
        ::persona::ProfileType                      profileType,
        ::PersonaAppearance const&                  newAppearance,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI ::SkinHandle $createAStartingPersona(
        ::persona::ProfileType                      profileType,
        ::std::string const&                        playFabId,
        uint const                                  defaultAppearanceIndex,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI ::SkinHandle $createAStartingPersona(
        ::persona::ProfileType                      profileType,
        ::mce::UUID const&                          defaultCharacterId,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI void $tryToReloadPersona(
        ::persona::PersonaCharacterHandle const&    handle,
        ::PersonaAppearance const&                  newAppearance,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI bool $isAppearanceDefault(::PersonaAppearance const& appearance) const;

    MCNAPI void $saveOfflinePersonaCatalogCache();

    MCNAPI void $loadOfflinePersonaCatalogCache();

    MCNAPI void $registerPersonaSkinsForCharacter(::PersonaCharacter& character);

    MCNAPI ::persona::DefaultAppearance const& $getDefaultAppearance(uint const& defaultIndexOverride);

    MCNAPI ::persona::DefaultAppearanceManager const& $getDefaultAppearanceManager() const;

    MCNAPI void $createSplitscreenUser(::std::string xuid, int splitscreenID, ::Json::Value&& appearanceData);

    MCNAPI ::PersonaAppearance const $getSplitscreenAppearance(::std::string const& xuid, int const controllerID);

    MCNAPI void
    $saveSplitscreenAppearanceData(::std::string const& xuid, int splitscreenID, ::Json::Value&& appearanceData);

    MCNAPI void $loadDefaultCharactersIfNeeded();

    MCNAPI void
    $addToOfflinePersonaCatalogMap(::persona::PieceOfferWrapper const& personaOffer, ::std::string const playfabId);

    MCNAPI ::std::vector<::std::string> const
    $getAllPiecesFromOfflineMapForPlayfabId(::std::string const& playfabId) const;

    MCNAPI void $loadOfflinePieceMapIntoStoreCatalog(::DateManager const& dateManager);

    MCNAPI void $queuePersonaGeneralError(::persona::PersonaError errorType);

    MCNAPI void $downloadAndLoadPieces(
        ::std::vector<::std::string> const& productIds,
        ::std::vector<::std::string> const& pieceIds
    );

    MCNAPI void $update(bool inOrStartingGameplay, ::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup);

    MCNAPI void $queueContentReload(::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup);

    MCNAPI ::PersonaCharacter& $getCharacter(::std::string const& characterName);

    MCNAPI ::PersonaCharacter& $getCharacter(::persona::PersonaCharacterHandle const& handle);

    MCNAPI void $removeCharacter(::std::string const& characterName);

    MCNAPI void $removeCharacter(::persona::PersonaCharacterHandle const& handle);

    MCNAPI void $changePiece(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceType,
        ::mce::UUID const&                       pieceId,
        ::std::string const&                     productId,
        ::persona::FreeItemState const&          freeItemState,
        ::SharedTypes::persona::PieceSide        side,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void $changePieces(
        ::persona::PersonaCharacterHandle const&       currentCharacter,
        ::std::vector<::persona::PieceToChange> const& pieces,
        ::std::function<void(bool)>                    callback
    );

    MCNAPI void $removePieceByType(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceTypeToRemove,
        ::SharedTypes::persona::PieceSide const  side,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void $changeEmote(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::std::string const&                     emotePieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void $removeEmote(::persona::PersonaCharacterHandle const& currentCharacter, int emoteWheelSlot);

    MCNAPI void $removeAllEmotes(::persona::PersonaCharacterHandle const& currentCharacterHandle);

    MCNAPI void
    $removeEmotesWithId(::persona::PersonaCharacterHandle const& currentCharacter, ::std::string const& emoteId);

    MCNAPI void
    $changeClassicSkin(::persona::PersonaCharacterHandle const& currentCharacter, ::SkinHandle const& handle);

    MCNAPI void $changeArmSize(
        ::persona::PersonaCharacterHandle const&   currentCharacter,
        ::SharedTypes::persona::ArmSizeType const& armSizeType,
        ::std::function<void(bool)>                callback
    );

    MCNAPI void $changeHeight(
        ::persona::PersonaCharacterHandle const&    currentCharacter,
        ::SharedTypes::persona::BodySizeType const& bodyType,
        ::std::function<void(bool)>                 callback
    );

    MCNAPI void $changePersonaTintColor(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceType,
        ::mce::Color const&                      color,
        ushort                                   channel,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void $changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&          currentCharacter,
        ::SharedTypes::persona::PieceType const           pieceType,
        ::std::vector<::persona::color::ColorInfo> const& tintColors,
        ::std::function<void(bool)>                       callback
    );

    MCNAPI void $savePersonaItems(::persona::PersonaCharacterHandle const& characterHandle);

    MCNAPI void
    $revertPersona(::persona::PersonaCharacterHandle const& currentCharacter, ::std::function<void(bool)> callback);

    MCNAPI void $revertPersonaPiece(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType const& pieceTypeToRevert
    );

    MCNAPI bool $doesCharacterHavePieceOfTypeX(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const& pieceType
    );

    MCNAPI bool $isPieceOwned(::persona::PieceHandle const& item);

    MCNAPI void $updatePersonaWithNewAppearance(
        ::PersonaAppearance const&  newAppearance,
        ::PersonaCharacter&         character,
        ::std::function<void(bool)> callback
    );

    MCNAPI ::PersonaPiece const&
    $getPieceFromClassicSkin(::std::string const& skinSerializedName, bool const reportFailure) const;

    MCNAPI ::persona::PieceHandle $getPieceHandle(::std::string const& pieceId) const;

    MCNAPI bool $isPieceLoaded(::mce::UUID const& pieceId) const;

    MCNAPI bool $isKnownPersonaPiece(::mce::UUID const& pieceId) const;

    MCNAPI bool $isKnownPersonaPieceUnloaded(::mce::UUID const& pieceId) const;

    MCNAPI bool $isPersonaPieceLoading(::mce::UUID const& peiceId) const;

    MCNAPI bool $isPersonaPieceInRepo(::mce::UUID const& pieceId) const;

    MCNAPI bool $isPersonaPieceInRepo(::std::string const& pieceId) const;

    MCNAPI ::PersonaPiece const& $getPersonaPieceFromRepo(::std::string const& pieceId) const;

    MCNAPI void $forEachPersonaPack(::std::function<void(::Pack const&)> const& callback) const;

    MCNAPI ::std::vector<::persona::PieceOfferWrapper>
    $getDefaultPieceWrappersOfTypes(::std::vector<::SharedTypes::persona::PieceType> const& sections) const;

    MCNAPI ::SemVersion const& $getVersionOfKnownPersonaPiecePack(::mce::UUID const& packId) const;

    MCNAPI void $loadPiecePack(::mce::UUID packId);

    MCNAPI void $queueImportOfPersonaPiecePack(::gsl::not_null<::std::shared_ptr<::Pack>> pack);

    MCNAPI ::std::vector<::std::string> const& $getPieceIdsByType(::SharedTypes::persona::PieceType type) const;

    MCNAPI ::std::shared_ptr<::persona::debug::PersonaDebugApi> $getPersonaDebugApi();

    MCNAPI ::PersonaCharacter& $_addCharacter(::persona::ProfileType profileType, ::std::string const& playFabId);
    // NOLINTEND
};
