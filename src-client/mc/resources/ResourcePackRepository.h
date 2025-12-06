#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/IContentSourceRepository.h"
#include "mc/resources/IResourcePackRepository.h"
#include "mc/resources/repository_loading/IRepositoryLoader.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
class PackSettingsFactory;
class PackSourceFactory;
class RepositorySources;
class ResourceLocation;
class ResourcePack;
class ResourcePackStack;
class TaskGroup;
struct IContentAccessibilityProvider;
struct IContentKeyProvider;
struct IRepositoryFactory;
struct InvalidPacks;
struct InvalidPacksFilterGroup;
struct PackIdVersion;
struct PackInstanceId;
struct PackManifestFactory;
struct PackSourceReport;
struct RepositoryPacks;
struct ResourcePackRepositoryRefreshQueue;
namespace Core { class Path; }
namespace Core { struct FilePathManager; }
namespace PackCommand { struct IPackCommandPipeline; }
namespace RepositoryLoading { struct AllRefreshTaskData; }
namespace RepositoryLoading { struct BuildTaskDataOptions; }
namespace RepositoryLoading { struct VanillaPacks; }
namespace mce { class UUID; }
// clang-format on

class ResourcePackRepository : public ::IResourcePackRepository, public ::IContentSourceRepository {
public:
    // ResourcePackRepository inner types declare
    // clang-format off
    class RepositoryLoaderImpl;
    // clang-format on

    // ResourcePackRepository inner types define
    class RepositoryLoaderImpl : public ::RepositoryLoading::IRepositoryLoader {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ResourcePackRepository&> mRepository;
        // NOLINTEND

    public:
        // prevent constructor by default
        RepositoryLoaderImpl& operator=(RepositoryLoaderImpl const&);
        RepositoryLoaderImpl(RepositoryLoaderImpl const&);
        RepositoryLoaderImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual ::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData>
        buildTaskData(::RepositoryLoading::BuildTaskDataOptions const& ops) /*override*/;

        // vIndex: 2
        virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&& taskData) /*override*/;

        // vIndex: 3
        virtual ::std::shared_ptr<::RepositoryPacks const> getPacks() const /*override*/;

        // vIndex: 0
        virtual ~RepositoryLoaderImpl() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData>
        $buildTaskData(::RepositoryLoading::BuildTaskDataOptions const& ops);

        MCNAPI void $applyTaskResults(::RepositoryLoading::AllRefreshTaskData&& taskData);

        MCNAPI ::std::shared_ptr<::RepositoryPacks const> $getPacks() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>               mFilePathManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::RepositoryPacks>>>                mAllResourcePacks;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::InvalidPacks>>>                    mInvalidPacks;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IRepositoryFactory>>>              mFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::RepositorySources>>>              mSources;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSourceReport>>                                 mPackSourceReport;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::RepositoryLoading::VanillaPacks>>> mVanillaPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                                       mServicePacks;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                                mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider>> mContentAccessibility;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                              mCurrentWorldPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                      mCurrentPremiumWorldTemplatePath;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContentIdentity, ::std::string>> mTempCacheContentKeys;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSettingsFactory>>                mPackSettingsFactory;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                                    mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>> mCommands;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>                  mTaskGroup;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mCurrentPremiumWorldTemplateIdentity;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ResourcePackRepositoryRefreshQueue>>> mRefresher;
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
    virtual ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const& idAndVersion) const
        /*override*/;

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
    virtual ::std::shared_ptr<::ResourcePack>
    getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const /*override*/;

    // vIndex: 8
    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    getResourcePackInPath(::Core::Path const& path) const /*override*/;

    // vIndex: 10
    virtual bool isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location) /*override*/;

    // vIndex: 11
    virtual ::PackSourceReport const* getPackLoadingReport() const /*override*/;

    // vIndex: 12
    virtual ::std::shared_ptr<::ResourcePack> getEditorPack() const /*override*/;

    // vIndex: 13
    virtual ::std::shared_ptr<::ResourcePack> getVanillaPack() const /*override*/;

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
    virtual ::Bedrock::Threading::Async<void> refreshPacksAsync() /*override*/;

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
    virtual ::std::vector<::ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const /*override*/;

    // vIndex: 41
    virtual ::std::vector<::ResourcePack*> getPacksByType(::PackType type) const /*override*/;

    // vIndex: 42
    virtual ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>>
    getPacksByCategory(::PackCategory category) const /*override*/;

    // vIndex: 43
    virtual void forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const /*override*/;

    // vIndex: 45
    virtual ::std::vector<::ResourceLocation> const& getInvalidPacks(::PackType type) const /*override*/;

    // vIndex: 44
    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const
        /*override*/;

    // vIndex: 46
    virtual void deletePack(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 47
    virtual void deletePackFiles(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 48
    virtual void postDeletePack(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 49
    virtual void untrackInvalidPack(::ResourceLocation const& packLocation) /*override*/;

    // vIndex: 50
    virtual bool isInitialized() const /*override*/;

    // vIndex: 4
    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const& identities) /*override*/;

    // vIndex: 51
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> getContentSourceRepository() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackRepository(
        ::gsl::not_null<::std::shared_ptr<::RepositoryPacks>>                 repositoryPacks,
        ::PackManifestFactory&                                                manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> const& contentAccessibility,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&         pathManager,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>       commands,
        ::PackSourceFactory&                                                  packSourceFactory,
        bool                                                                  initAsync,
        ::std::unique_ptr<::IRepositoryFactory>                               factory
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string>
    getDevelopmentBehaviorPacksPath(::Core::FilePathManager const& paths);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::RepositoryPacks>>                 repositoryPacks,
        ::PackManifestFactory&                                                manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> const& contentAccessibility,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&         pathManager,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>       commands,
        ::PackSourceFactory&                                                  packSourceFactory,
        bool                                                                  initAsync,
        ::std::unique_ptr<::IRepositoryFactory>                               factory
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

    MCAPI ::std::shared_ptr<::ResourcePack> $getResourcePackForPackId(::PackIdVersion const& idAndVersion) const;

    MCAPI ::ResourcePack* $getResourcePackOfDifferentVersionForPackId(::PackIdVersion const& idAndVersion) const;

    MCAPI ::ResourcePack*
    $getResourcePackForPackIdInPath(::PackIdVersion const& idAndVersion, ::Core::Path const& fullPath) const;

    MCAPI ::ResourcePack* $getResourcePackByUUID(::mce::UUID const& id) const;

    MCAPI ::ResourcePack* $getResourcePackForPackIdOwned(::PackIdVersion const& idAndVersion) const;

    MCAPI ::std::shared_ptr<::ResourcePack>
    $getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const;

    MCAPI ::ResourcePack* $getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const;

    MCAPI ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    $getResourcePackInPath(::Core::Path const& path) const;

    MCAPI bool $isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location);

    MCFOLD ::PackSourceReport const* $getPackLoadingReport() const;

    MCAPI ::std::shared_ptr<::ResourcePack> $getEditorPack() const;

    MCAPI ::std::shared_ptr<::ResourcePack> $getVanillaPack() const;

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

    MCAPI ::Bedrock::Threading::Async<void> $refreshPacksAsync();

    MCAPI void $requestReloadUserPacks();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCFOLD ::PackManifestFactory& $getPackManifestFactory();

    MCFOLD ::PackSettingsFactory& $getPackSettingsFactory() const;

    MCFOLD ::PackSourceFactory& $getPackSourceFactory();

    MCAPI ::std::vector<::ResourcePack*> $getPacksByResourceLocation(::PackOrigin type) const;

    MCAPI ::std::vector<::ResourcePack*> $getPacksByType(::PackType type) const;

    MCAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>>
    $getPacksByCategory(::PackCategory category) const;

    MCAPI void $forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const;

    MCAPI ::std::vector<::ResourceLocation> const& $getInvalidPacks(::PackType type) const;

    MCAPI ::std::vector<::ResourceLocation> $getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const;

    MCAPI void $deletePack(::ResourceLocation const& packLocation);

    MCAPI void $deletePackFiles(::ResourceLocation const& packLocation);

    MCAPI void $postDeletePack(::ResourceLocation const& packLocation);

    MCAPI void $untrackInvalidPack(::ResourceLocation const& packLocation);

    MCAPI bool $isInitialized() const;

    MCAPI ::ResourcePackStack $createStack(::std::vector<::PackInstanceId> const& identities);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> $getContentSourceRepository();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIContentSourceRepository();

    MCNAPI static void** $vftableForIResourcePackRepository();
    // NOLINTEND
};
