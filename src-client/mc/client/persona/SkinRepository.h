#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/ISkinRepository.h"
#include "mc/client/persona/defaults/DefaultSkinType.h"
#include "mc/client/persona/pack_cache/PackEvictionState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/platform/ImagePickingCallback.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class DirectoryPackSource;
class IContentKeyProvider;
class IEntitlementManager;
class IPackManifestFactory;
class IPackSourceFactory;
class IResourcePackRepository;
class IToastManager;
class Pack;
class PackSource;
class ResourceLocation;
class ResourcePackManager;
class SerializedSkinRef;
class Skin;
class SkinHandle;
class SkinPack;
class SkinPackDiskLRUIndex;
class SkinPackPin;
class TaskGroup;
struct SkinPackMeta;
namespace Core { class FilePathManager; }
namespace mce { class TextureGroup; }
namespace persona { struct PackEvictionDrainSnapshot; }
namespace persona { struct PackEvictionPass; }
namespace persona { struct PackEvictionTarget; }
namespace persona { struct PackEvictionTelemetrySnapshot; }
// clang-format on

class SkinRepository : public ::ISkinRepository,
                       public ::ImagePickingCallback,
                       public ::std::enable_shared_from_this<::SkinRepository> {
public:
    // SkinRepository inner types declare
    // clang-format off
    struct SkinPackEntry;
    struct LoadListener;
    // clang-format on

    // SkinRepository inner types define
    enum class SkinPackLoadState : uchar {
        Unloaded = 0,
        Loading  = 1,
        Loaded   = 2,
    };

    enum class EntryDisposition : uchar {
        Erase           = 0,
        KeepForReimport = 1,
    };

    struct SkinPackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SemVersion>                       mVersion;
        ::ll::TypedStorage<1, 1, ::SkinRepository::SkinPackLoadState> mState;
        ::ll::TypedStorage<4, 4, uint>                                mPinCount;
        ::ll::TypedStorage<8, 8, uint64>                              mPinGeneration;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkinPack>>       mSkinPack;
        ::ll::TypedStorage<
            8,
            16,
            ::std::optional<::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::mce::UUID>>>>>
            mLruPosition;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void markLoaded(::std::unique_ptr<::SkinPack> skinPack);
        // NOLINTEND
    };

    struct LoadListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<bool>>                     mExistenceTracker;
        ::ll::TypedStorage<8, 64, ::std::function<void(::mce::UUID const&)>> mCallback;
        // NOLINTEND
    };

    using EvictionTelemetrySnapshot = ::persona::PackEvictionTelemetrySnapshot;

    using DrainTelemetrySnapshot = ::persona::PackEvictionDrainSnapshot;

    using EvictionTarget = ::persona::PackEvictionTarget;

    using EvictionPass = ::persona::PackEvictionPass;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::TextureGroup>>                               mTextureGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>           mPackRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IPackManifestFactory>>              mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IPackSourceFactory>>                mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>               mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>>         mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>             mFilePathManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::SkinRepository::SkinPackEntry>> mPackEntryMap;
    ::ll::TypedStorage<8, 16, ::std::list<::mce::UUID>>                                           mLoadedPackLru;
    ::ll::TypedStorage<1, 1, bool>                                                                mLoadedPackLruDirty;
    ::ll::TypedStorage<8, 8, uint64>                                                              mMaxLoadedSkinPacks;
    ::ll::TypedStorage<8, 8, uint64>                                                              mNextPinGeneration;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSource>>                                     mAllSkinPacksSource;
    ::ll::TypedStorage<8, 8, ::DirectoryPackSource*>                                     mPremiumSkinPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkinPackDiskLRUIndex>>                  mSkinPackDiskLRUIndex;
    ::ll::TypedStorage<1, 1, bool>                                                       mAutoEvictionEnabled;
    ::ll::TypedStorage<8, 192, ::persona::PackEvictionState>                             mEvictionState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Pack>>                                 mLoadingPack;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>> mPendingLoads;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool, ::std::string)>>                mOnPickSkin;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsPickingSkin;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IToastManager>>                          mToastManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinRepository::LoadListener>>             mLoadListeners;
    ::ll::TypedStorage<1, 1, bool>                                                       mInitialized;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                         mLocRefreshTask;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mDiskTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinRepository() /*override*/ = default;

    virtual void flushResourceLoaderTasks() /*override*/;

    virtual ::Core::PathBuffer<::std::string> getCustomSkinDirectoryPath() const /*override*/;

    virtual ::std::optional<::Core::PathBuffer<::std::string>> getSharedCustomSkinDirectoryPath() const /*override*/;

    virtual void update(::ResourcePackManager& resourcePackManager) /*override*/;

    virtual void addLoadListener(
        ::std::weak_ptr<bool>                     existanceTracker,
        ::std::function<void(::mce::UUID const&)> callback
    ) /*override*/;

    virtual bool importSkinPack(::gsl::not_null<::std::shared_ptr<::Pack>> pack, bool isTitleLocked) /*override*/;

    virtual bool loadCustomSkin(
        ::std::string const&                customSkinId,
        ::SharedTypes::persona::ArmSizeType customSkinArmSize
    ) /*override*/;

    virtual bool tryLoadSkinPack(::mce::UUID const& packId, bool shouldNotifyPlayer) /*override*/;

    virtual bool loadSkinPack(::mce::UUID const& packId) /*override*/;

    virtual void loadSkinPackAsync(::mce::UUID const& packId, ::SkinPackMeta const& metadata) /*override*/;

    virtual void unloadAndDeleteSkinPack(::mce::UUID const& packId) /*override*/;

    virtual void unloadAndDeleteSkinPackForReimport(::mce::UUID const& packId) /*override*/;

    virtual void cancelPendingLoads() /*override*/;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacks() const /*override*/;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPackage() const /*override*/;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInUserDir() const /*override*/;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPremiumDir() const /*override*/;

    virtual void forEachPack(::std::function<void(::Pack const&)> const& callback) const /*override*/;

    virtual void forEachLoadedSkinPack(::std::function<void(::SkinPack const&)> const& callback) const /*override*/;

    virtual ::SkinPack* getSkinPackById(::mce::UUID const& packId) const /*override*/;

    virtual ::SkinPack* getSkinPackByIdHash(uint64 packIdHash) const /*override*/;

    virtual ::SemVersion const& getVersionOfKnownSkinPack(::mce::UUID const& packId) const /*override*/;

    virtual bool isSkinPackKnown(::mce::UUID const& packId) const /*override*/;

    virtual bool isSkinPackLoaded(::mce::UUID const& packId) const /*override*/;

    virtual bool isKnownSkinPackUnLoaded(::mce::UUID const& packId) const /*override*/;

    virtual bool isSkinPackLoading(::mce::UUID const& packId) const /*override*/;

    virtual bool isSkinPackOwned(::ContentIdentity const& contentIdentity) const /*override*/;

    virtual ::Skin const* getSkinBySerializableName(::std::string const& serializableName) const /*override*/;

    virtual ::Skin const* getSkin(::SkinHandle const& skinHandle) const /*override*/;

    virtual bool canUseSkin(::Skin const* skin) const /*override*/;

    virtual bool canUseSkin(::SkinHandle const& skinHandle) const /*override*/;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    storeCustomSkin(::ResourceLocation const& sourceLocation) /*override*/;

    virtual ::SkinHandle addCustomSkin(::SkinHandle const& customSkinHandle) /*override*/;

    virtual ::SkinHandle
    addCustomSkin(::persona::DefaultSkinType bodySkinType, ::ResourceLocation const& customImageLocation) /*override*/;

    virtual ::SkinHandle addCustomSkin(
        ::SerializedSkinRef const& geoSerializedSkin,
        ::ResourceLocation const&  customImageLocation
    ) /*override*/;

    virtual bool canPickSkin() const /*override*/;

    virtual void pickSkin(::std::function<void(bool, ::std::string)> onPickSkin) /*override*/;

    virtual void reloadSkinPackLocText() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getSkinKeyProvider() const /*override*/;

    virtual bool isValidSkin(::ResourceLocation const& skinLocation) const /*override*/;

    virtual void loadSkin(::ResourceLocation const& skinLocation) /*override*/;

    virtual void unloadSkin(::ResourceLocation const& skinLocation) /*override*/;

    virtual bool loadCustomSkinTexture(::ResourceLocation const& skinLocation) /*override*/;

    virtual void beginAsyncInit(::TaskGroup& taskGroup) /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual uint64 getLoadedSkinPackCount() const /*override*/;

    virtual uint64 getLoadingSkinPackCount() const /*override*/;

    virtual uint64 getUnloadedSkinPackCount() const /*override*/;

    virtual void deleteUnreferencedCustomSkinFiles(::std::vector<::SkinHandle> const& referencedSkins) /*override*/;

    virtual void onImagePickingSuccess(::std::string const& temporaryFilePath) /*override*/;

    virtual void onImagePickingCanceled() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinRepository(
        ::std::shared_ptr<::mce::TextureGroup>                     textureGroup,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>   resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IPackManifestFactory>      manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IPackSourceFactory>        packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>     filePathManager
    );

    MCNAPI bool _loadSkinPack(::gsl::not_null<::std::shared_ptr<::Pack>> pack, bool);

    MCNAPI void _touchSkinPack(::mce::UUID const& packId, ::SkinRepository::SkinPackEntry const& entry) const;

    MCNAPI bool
    _tryLoadSkinPack(::gsl::not_null<::std::shared_ptr<::Pack>> pack, bool loadGeometry, bool notifyPlayerOnFailure);

    MCNAPI void _unloadAndDeleteSkinPack(::mce::UUID const& packId, ::SkinRepository::EntryDisposition disposition);

    MCNAPI ::SkinPackPin pinSkinPack(::mce::UUID const& packId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup>                     textureGroup,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>   resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IPackManifestFactory>      manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IPackSourceFactory>        packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>     filePathManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushResourceLoaderTasks();

    MCNAPI ::Core::PathBuffer<::std::string> $getCustomSkinDirectoryPath() const;

    MCNAPI ::std::optional<::Core::PathBuffer<::std::string>> $getSharedCustomSkinDirectoryPath() const;

    MCNAPI void $update(::ResourcePackManager& resourcePackManager);

    MCNAPI void
    $addLoadListener(::std::weak_ptr<bool> existanceTracker, ::std::function<void(::mce::UUID const&)> callback);

    MCNAPI bool $importSkinPack(::gsl::not_null<::std::shared_ptr<::Pack>> pack, bool isTitleLocked);

    MCNAPI bool
    $loadCustomSkin(::std::string const& customSkinId, ::SharedTypes::persona::ArmSizeType customSkinArmSize);

    MCNAPI bool $tryLoadSkinPack(::mce::UUID const& packId, bool shouldNotifyPlayer);

    MCNAPI bool $loadSkinPack(::mce::UUID const& packId);

    MCNAPI void $loadSkinPackAsync(::mce::UUID const& packId, ::SkinPackMeta const& metadata);

    MCNAPI void $unloadAndDeleteSkinPack(::mce::UUID const& packId);

    MCNAPI void $unloadAndDeleteSkinPackForReimport(::mce::UUID const& packId);

    MCNAPI void $cancelPendingLoads();

    MCNAPI ::std::vector<::Pack const*> const $getKnownSkinPacks() const;

    MCNAPI ::std::vector<::Pack const*> const $getKnownSkinPacksInPackage() const;

    MCNAPI ::std::vector<::Pack const*> const $getKnownSkinPacksInUserDir() const;

    MCNAPI ::std::vector<::Pack const*> const $getKnownSkinPacksInPremiumDir() const;

    MCNAPI void $forEachPack(::std::function<void(::Pack const&)> const& callback) const;

    MCNAPI void $forEachLoadedSkinPack(::std::function<void(::SkinPack const&)> const& callback) const;

    MCNAPI ::SkinPack* $getSkinPackById(::mce::UUID const& packId) const;

    MCNAPI ::SkinPack* $getSkinPackByIdHash(uint64 packIdHash) const;

    MCNAPI ::SemVersion const& $getVersionOfKnownSkinPack(::mce::UUID const& packId) const;

    MCNAPI bool $isSkinPackKnown(::mce::UUID const& packId) const;

    MCNAPI bool $isSkinPackLoaded(::mce::UUID const& packId) const;

    MCNAPI bool $isKnownSkinPackUnLoaded(::mce::UUID const& packId) const;

    MCNAPI bool $isSkinPackLoading(::mce::UUID const& packId) const;

    MCNAPI bool $isSkinPackOwned(::ContentIdentity const& contentIdentity) const;

    MCNAPI ::Skin const* $getSkinBySerializableName(::std::string const& serializableName) const;

    MCNAPI ::Skin const* $getSkin(::SkinHandle const& skinHandle) const;

    MCNAPI bool $canUseSkin(::Skin const* skin) const;

    MCNAPI bool $canUseSkin(::SkinHandle const& skinHandle) const;

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $storeCustomSkin(::ResourceLocation const& sourceLocation);

    MCNAPI ::SkinHandle $addCustomSkin(::SkinHandle const& customSkinHandle);

    MCNAPI ::SkinHandle
    $addCustomSkin(::persona::DefaultSkinType bodySkinType, ::ResourceLocation const& customImageLocation);

    MCNAPI ::SkinHandle
    $addCustomSkin(::SerializedSkinRef const& geoSerializedSkin, ::ResourceLocation const& customImageLocation);

    MCNAPI bool $canPickSkin() const;

    MCNAPI void $pickSkin(::std::function<void(bool, ::std::string)> onPickSkin);

    MCNAPI void $reloadSkinPackLocText();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getSkinKeyProvider() const;

    MCNAPI bool $isValidSkin(::ResourceLocation const& skinLocation) const;

    MCNAPI void $loadSkin(::ResourceLocation const& skinLocation);

    MCNAPI void $unloadSkin(::ResourceLocation const& skinLocation);

    MCNAPI bool $loadCustomSkinTexture(::ResourceLocation const& skinLocation);

    MCNAPI void $beginAsyncInit(::TaskGroup& taskGroup);

    MCNAPI bool $isInitialized() const;

    MCNAPI uint64 $getLoadedSkinPackCount() const;

    MCNAPI uint64 $getLoadingSkinPackCount() const;

    MCNAPI uint64 $getUnloadedSkinPackCount() const;

    MCNAPI void $deleteUnreferencedCustomSkinFiles(::std::vector<::SkinHandle> const& referencedSkins);

    MCNAPI void $onImagePickingSuccess(::std::string const& temporaryFilePath);

    MCNAPI void $onImagePickingCanceled();
    // NOLINTEND
};
