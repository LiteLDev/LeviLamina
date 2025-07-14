#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/resources/IResourcePackRepository.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IMinecraftEventing;
class IPackManifestFactory;
class Pack;
class PackInstance;
class PackManifestFactory;
class PackSettingsFactory;
class PackSource;
class PackSourceFactory;
class PackSourceReport;
class ResourcePack;
class ResourcePackStack;
class SemVersion;
class TaskGroup;
struct InvalidPacksFilterGroup;
struct PackInstanceId;
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
namespace mce { class UUID; }
// clang-format on

class ResourcePackRepository : public ::IResourcePackRepository {
public:
    // ResourcePackRepository inner types declare
    // clang-format off
    struct KnownPackInfo;
    // clang-format on

    // ResourcePackRepository inner types define
    struct KnownPackInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                          mDiscoveredOnDisk;
        ::ll::TypedStorage<8, 56, ::ResourceLocation>           mResourceLocation;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPastHashes;
        ::ll::TypedStorage<8, 48, ::PackIdVersion>              mIdentity;
        // NOLINTEND
    };

    using EventingCallback = ::std::function<::IMinecraftEventing&()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>> mFilePathManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ResourcePack>>>       mAllResourcePacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>                mPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>                mCachePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>                mWorldPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>                mPremiumWorldTemplatePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>                mTempWorldTemplatePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSourceReport>>                   mPackSourceReport;
    ::ll::TypedStorage<8, 8, ::ResourcePack*>                                         mEditorPack;
    ::ll::TypedStorage<8, 8, ::ResourcePack*>                                         mVanillaPack;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                         mServicePacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                      mInvalidPackLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                      mInvalidBehaviorPackLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                      mInvalidResourcePackLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                      mInvalidTemplatePackLocation;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                   mEventing;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                  mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider>> mContentAccessibility;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                              mCurrentWorldPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                      mCurrentPremiumWorldTemplatePath;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContentIdentity, ::std::string>> mTempCacheContentKeys;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSettingsFactory>>                mPackSettingsFactory;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                                    mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>> mCommands;
    ::ll::TypedStorage<8, 16, ::std::map<void*, ::std::function<void(::ResourcePack*)>>> mRemoveResourcePackCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mInitTaskGroup;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                               mInitializeMutex;
    ::ll::TypedStorage<1, 1, bool>                                                       mCancelInitialization;
    ::ll::TypedStorage<1, 1, bool>                                                       mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                       mReloadUserPacksRequested;
    ::ll::TypedStorage<1, 1, bool>                                                       mRefreshPacksRequested;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mCurrentPremiumWorldTemplateIdentity;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackRepository& operator=(ResourcePackRepository const&);
    ResourcePackRepository(ResourcePackRepository const&);
    ResourcePackRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackRepository() /*override*/;

    // vIndex: 1
    virtual void getResourcePacksByPackId(
        ::std::vector<::PackInstanceId> const& packInstanceIds,
        ::std::vector<::PackInstance>&         result
    ) const /*override*/;

    // vIndex: 2
    virtual ::ResourcePack* getResourcePackForPackId(::PackIdVersion const& idAndVersion) const /*override*/;

    // vIndex: 3
    virtual ::ResourcePack* getResourcePackOfDifferentVersionForPackId(::PackIdVersion const& idAndVersion) const
        /*override*/;

    // vIndex: 4
    virtual ::ResourcePack*
    getResourcePackForPackIdInPath(::PackIdVersion const& idAndVersion, ::Core::Path const& fullPath) const
        /*override*/;

    // vIndex: 5
    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const& id) const /*override*/;

    // vIndex: 6
    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const& idAndVersion) const /*override*/;

    // vIndex: 7
    virtual ::ResourcePack*
    getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const /*override*/;

    // vIndex: 8
    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const /*override*/;

    // vIndex: 9
    virtual ::ResourcePack* getResourcePackInPath(::Core::Path const& path) const /*override*/;

    // vIndex: 10
    virtual bool isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location) /*override*/;

    // vIndex: 11
    virtual ::PackSourceReport const* getPackLoadingReport() const /*override*/;

    // vIndex: 12
    virtual ::ResourcePack* getEditorPack() const /*override*/;

    // vIndex: 13
    virtual ::ResourcePack* getVanillaPack() const /*override*/;

    // vIndex: 14
    virtual bool setServicePacks(::std::vector<::PackIdVersion> servicePackIds) /*override*/;

    // vIndex: 15
    virtual bool hasServicePacks(::std::vector<::PackIdVersion> const& servicePacksIds) const /*override*/;

    // vIndex: 16
    virtual ::std::vector<::PackIdVersion> const& getServicePacks() const /*override*/;

    // vIndex: 17
    virtual void addServicePacksToStack(::ResourcePackStack& stack) const /*override*/;

    // vIndex: 18
    virtual void
    addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const* tempCacheKeys) /*override*/;

    // vIndex: 19
    virtual void addWorldResourcePacks(::Core::Path const& levelPath) /*override*/;

    // vIndex: 20
    virtual void addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) /*override*/;

    // vIndex: 23
    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const& worldTemplateUUID) /*override*/;

    // vIndex: 21
    virtual void addWorldPackSource(::Core::Path const& levelPath) /*override*/;

    // vIndex: 22
    virtual void addPremiumWorldTemplatePackSource(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) /*override*/;

    // vIndex: 24
    virtual void removePacksLoadedFromCache() /*override*/;

    // vIndex: 25
    virtual void removePacksLoadedFromWorld() /*override*/;

    // vIndex: 26
    virtual ::Core::PathBuffer<::std::string> const getResourcePacksPath() const /*override*/;

    // vIndex: 27
    virtual ::Core::PathBuffer<::std::string> const getBehaviorPacksPath() const /*override*/;

    // vIndex: 28
    virtual ::Core::PathBuffer<::std::string> const getSkinPacksPath() const /*override*/;

    // vIndex: 29
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentResourcePacksPath() const /*override*/;

    // vIndex: 30
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentBehaviorPacksPath() const /*override*/;

    // vIndex: 31
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentSkinPacksPath() const /*override*/;

    // vIndex: 32
    virtual ::Core::PathBuffer<::std::string> const getTreatmentPacksPath() const /*override*/;

    // vIndex: 33
    virtual void refreshPacks() /*override*/;

    // vIndex: 34
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> refreshPacksAsync() /*override*/;

    // vIndex: 35
    virtual void requestReloadUserPacks() /*override*/;

    // vIndex: 36
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    // vIndex: 37
    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    // vIndex: 38
    virtual ::PackSettingsFactory& getPackSettingsFactory() const /*override*/;

    // vIndex: 39
    virtual ::PackSourceFactory& getPackSourceFactory() /*override*/;

    // vIndex: 40
    virtual ::CompositePackSource const* getWorldPackSource() const /*override*/;

    // vIndex: 41
    virtual ::std::vector<::ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const /*override*/;

    // vIndex: 42
    virtual ::std::vector<::ResourcePack*> getPacksByType(::PackType type) const /*override*/;

    // vIndex: 43
    virtual ::std::vector<::ResourcePack*> getPacksByCategory(::PackCategory category) const /*override*/;

    // vIndex: 44
    virtual void forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const /*override*/;

    // vIndex: 45
    virtual void addInvalidPack(::ResourceLocation const& packLocation, ::PackType type) /*override*/;

    // vIndex: 47
    virtual ::std::vector<::ResourceLocation> const& getInvalidPacks(::PackType type) const /*override*/;

    // vIndex: 46
    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const
        /*override*/;

    // vIndex: 48
    virtual void deletePack(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 49
    virtual void deletePackFiles(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 50
    virtual void postDeletePack(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 51
    virtual void untrackInvalidPack(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 52
    virtual void
    registerResourcePackRemovedCallback(void* ptr, ::std::function<void(::ResourcePack*)> callback) /*override*/;

    // vIndex: 53
    virtual void unregisterResourcePackRemovedCallback(void* ptr) /*override*/;

    // vIndex: 54
    virtual bool isInitialized() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackRepository(
        ::IMinecraftEventing&                                                 eventing,
        ::PackManifestFactory&                                                manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> const& contentAccessibility,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&         pathManager,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>       commands,
        ::PackSourceFactory&                                                  packSourceFactory,
        bool                                                                  initAsync
    );

    MCAPI bool _addResourcePackIfNotAlreadyAdded(::Pack& pack);

    MCAPI void _findVanillaPacks();

    MCAPI void _initialize();

    MCAPI void _initializeCachedPackSource();

    MCAPI void _initializePackSource();

    MCAPI void _initializeWorldPackSource();

    MCAPI void _loadPacks();

    MCAPI bool _packExists(::mce::UUID const& packId, ::SemVersion const& version, ::PackOrigin origin) const;

    MCAPI void _reloadUserPacks();

    MCAPI bool _removePack(::ResourceLocation const& packLocation, bool unregisterDeleteCallback);

    MCAPI void _triggerRemoveResourcePackCallback(::ResourcePack* resourcePack);

    MCAPI void _validateDependencies();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PackSourceReport loadAndUpgradePacks(
        ::PackSource&                        packSource,
        ::IPackManifestFactory&              manifestFactory,
        ::IContentKeyProvider const&         keyProvider,
        ::PackCommand::IPackCommandPipeline* commands
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::set<::mce::UUID>& CHEMISTRY_PACK_UUIDS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftEventing&                                                 eventing,
        ::PackManifestFactory&                                                manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> const& contentAccessibility,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&         pathManager,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>       commands,
        ::PackSourceFactory&                                                  packSourceFactory,
        bool                                                                  initAsync
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $getResourcePacksByPackId(
        ::std::vector<::PackInstanceId> const& packInstanceIds,
        ::std::vector<::PackInstance>&         result
    ) const;

    MCAPI ::ResourcePack* $getResourcePackForPackId(::PackIdVersion const& idAndVersion) const;

    MCAPI ::ResourcePack* $getResourcePackOfDifferentVersionForPackId(::PackIdVersion const& idAndVersion) const;

    MCAPI ::ResourcePack*
    $getResourcePackForPackIdInPath(::PackIdVersion const& idAndVersion, ::Core::Path const& fullPath) const;

    MCAPI ::ResourcePack* $getResourcePackByUUID(::mce::UUID const& id) const;

    MCAPI ::ResourcePack* $getResourcePackForPackIdOwned(::PackIdVersion const& idAndVersion) const;

    MCAPI ::ResourcePack*
    $getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const;

    MCAPI ::ResourcePack* $getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const;

    MCAPI ::ResourcePack* $getResourcePackInPath(::Core::Path const& path) const;

    MCAPI bool $isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location);

    MCFOLD ::PackSourceReport const* $getPackLoadingReport() const;

    MCFOLD ::ResourcePack* $getEditorPack() const;

    MCFOLD ::ResourcePack* $getVanillaPack() const;

    MCAPI bool $setServicePacks(::std::vector<::PackIdVersion> servicePackIds);

    MCAPI bool $hasServicePacks(::std::vector<::PackIdVersion> const& servicePacksIds) const;

    MCFOLD ::std::vector<::PackIdVersion> const& $getServicePacks() const;

    MCAPI void $addServicePacksToStack(::ResourcePackStack& stack) const;

    MCAPI void $addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const* tempCacheKeys);

    MCAPI void $addWorldResourcePacks(::Core::Path const& levelPath);

    MCAPI void $addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    );

    MCAPI void $addTempWorldTemplateResourcePacks(::mce::UUID const& worldTemplateUUID);

    MCAPI void $addWorldPackSource(::Core::Path const& levelPath);

    MCAPI void $addPremiumWorldTemplatePackSource(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    );

    MCAPI void $removePacksLoadedFromCache();

    MCAPI void $removePacksLoadedFromWorld();

    MCAPI ::Core::PathBuffer<::std::string> const $getResourcePacksPath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getBehaviorPacksPath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getSkinPacksPath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getDevelopmentResourcePacksPath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getDevelopmentBehaviorPacksPath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getDevelopmentSkinPacksPath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getTreatmentPacksPath() const;

    MCAPI void $refreshPacks();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> $refreshPacksAsync();

    MCAPI void $requestReloadUserPacks();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCFOLD ::PackManifestFactory& $getPackManifestFactory();

    MCFOLD ::PackSettingsFactory& $getPackSettingsFactory() const;

    MCAPI ::PackSourceFactory& $getPackSourceFactory();

    MCFOLD ::CompositePackSource const* $getWorldPackSource() const;

    MCAPI ::std::vector<::ResourcePack*> $getPacksByResourceLocation(::PackOrigin type) const;

    MCAPI ::std::vector<::ResourcePack*> $getPacksByType(::PackType type) const;

    MCAPI ::std::vector<::ResourcePack*> $getPacksByCategory(::PackCategory category) const;

    MCAPI void $forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const;

    MCAPI void $addInvalidPack(::ResourceLocation const& packLocation, ::PackType type);

    MCAPI ::std::vector<::ResourceLocation> const& $getInvalidPacks(::PackType type) const;

    MCAPI ::std::vector<::ResourceLocation> $getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const;

    MCAPI void $deletePack(::ResourceLocation const& packLocation);

    MCAPI void $deletePackFiles(::ResourceLocation const& packLocation);

    MCAPI void $postDeletePack(::ResourceLocation const& packLocation);

    MCAPI void $untrackInvalidPack(::ResourceLocation const& packLocation);

    MCAPI void $registerResourcePackRemovedCallback(void* ptr, ::std::function<void(::ResourcePack*)> callback);

    MCAPI void $unregisterResourcePackRemovedCallback(void* ptr);

    MCAPI bool $isInitialized() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
