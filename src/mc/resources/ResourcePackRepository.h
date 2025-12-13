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
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IRepositoryFactory;
class InvalidPacks;
class PackInstance;
class PackManifestFactory;
class PackSettingsFactory;
class PackSourceFactory;
class PackSourceReport;
class RepositoryPacks;
class RepositorySources;
class ResourceLocation;
class ResourcePack;
class ResourcePackRepositoryRefreshQueue;
class ResourcePackStack;
class TaskGroup;
struct InvalidPacksFilterGroup;
struct PackIdVersion;
struct PackInstanceId;
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
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
        virtual ::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData>
        buildTaskData(::RepositoryLoading::BuildTaskDataOptions const& ops) /*override*/;

        virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&& taskData) /*override*/;

        virtual ::std::shared_ptr<::RepositoryPacks const> getPacks() const /*override*/;

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
    virtual ~ResourcePackRepository() /*override*/;

    virtual void getResourcePacksByPackId(
        ::std::vector<::PackInstanceId> const& packInstanceIds,
        ::std::vector<::PackInstance>&         result
    ) const /*override*/;

    virtual ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const& idAndVersion) const
        /*override*/;

    virtual ::ResourcePack* getResourcePackOfDifferentVersionForPackId(::PackIdVersion const& idAndVersion) const
        /*override*/;

    virtual ::ResourcePack*
    getResourcePackForPackIdInPath(::PackIdVersion const& idAndVersion, ::Core::Path const& fullPath) const
        /*override*/;

    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const& id) const /*override*/;

    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const& idAndVersion) const /*override*/;

    virtual ::std::shared_ptr<::ResourcePack>
    getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const /*override*/;

    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const /*override*/;

    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    getResourcePackInPath(::Core::Path const& path) const /*override*/;

    virtual bool isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location) /*override*/;

    virtual ::PackSourceReport const* getPackLoadingReport() const /*override*/;

    virtual ::std::shared_ptr<::ResourcePack> getEditorPack() const /*override*/;

    virtual ::std::shared_ptr<::ResourcePack> getVanillaPack() const /*override*/;

    virtual bool setServicePacks(::std::vector<::PackIdVersion> servicePackIds) /*override*/;

    virtual bool hasServicePacks(::std::vector<::PackIdVersion> const& servicePacksIds) const /*override*/;

    virtual ::std::vector<::PackIdVersion> const& getServicePacks() const /*override*/;

    virtual void addServicePacksToStack(::ResourcePackStack& stack) const /*override*/;

    virtual void
    addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const* tempCacheKeys) /*override*/;

    virtual void addWorldResourcePacks(::Core::Path const& levelPath) /*override*/;

    virtual void addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) /*override*/;

    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const& worldTemplateUUID) /*override*/;

    virtual void addWorldPackSource(::Core::Path const& levelPath) /*override*/;

    virtual void addPremiumWorldTemplatePackSource(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) /*override*/;

    virtual void removePacksLoadedFromCache() /*override*/;

    virtual void removePacksLoadedFromWorld() /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getResourcePacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getBehaviorPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getSkinPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentResourcePacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentBehaviorPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentSkinPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getTreatmentPacksPath() const /*override*/;

    virtual void refreshPacks() /*override*/;

    virtual ::Bedrock::Threading::Async<void> refreshPacksAsync() /*override*/;

    virtual void requestReloadUserPacks() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    virtual ::PackSettingsFactory& getPackSettingsFactory() const /*override*/;

    virtual ::PackSourceFactory& getPackSourceFactory() /*override*/;

    virtual ::std::vector<::ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const /*override*/;

    virtual ::std::vector<::ResourcePack*> getPacksByType(::PackType type) const /*override*/;

    virtual ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>>
    getPacksByCategory(::PackCategory category) const /*override*/;

    virtual void forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const /*override*/;

    virtual ::std::vector<::ResourceLocation> const& getInvalidPacks(::PackType type) const /*override*/;

    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const
        /*override*/;

    virtual void deletePack(::ResourceLocation const& packLocation) /*override*/;

    virtual void deletePackFiles(::ResourceLocation const& packLocation) /*override*/;

    virtual void postDeletePack(::ResourceLocation const& packLocation) /*override*/;

    virtual void untrackInvalidPack(::ResourceLocation const& packLocation) /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const& identities) /*override*/;

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
    MCAPI_C static ::Core::PathBuffer<::std::string>
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
