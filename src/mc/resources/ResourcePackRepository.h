#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
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
        buildTaskData(::RepositoryLoading::BuildTaskDataOptions const&) /*override*/;

        virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&&) /*override*/;

        virtual ::std::shared_ptr<::RepositoryPacks const> getPacks() const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

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
    LLAPI void addCustomResourcePackPath(std::filesystem::path const& path, PackType type);

public:
    // prevent constructor by default
    ResourcePackRepository& operator=(ResourcePackRepository const&);
    ResourcePackRepository(ResourcePackRepository const&);
    ResourcePackRepository();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ResourcePackRepository() /*override*/;
#else // LL_PLAT_C
    virtual ~ResourcePackRepository() /*override*/ = default;
#endif

    virtual void getResourcePacksByPackId(::std::vector<::PackInstanceId> const&, ::std::vector<::PackInstance>&) const
        /*override*/;

    virtual ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const&) const /*override*/;

    virtual ::ResourcePack* getResourcePackOfDifferentVersionForPackId(::PackIdVersion const&) const /*override*/;

    virtual ::ResourcePack* getResourcePackForPackIdInPath(::PackIdVersion const&, ::Core::Path const&) const
        /*override*/;

    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const&) const /*override*/;

    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const&) const /*override*/;

    virtual ::std::shared_ptr<::ResourcePack> getResourcePackSatisfiesPackId(::PackIdVersion const&, bool) const
        /*override*/;

    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const&) const /*override*/;

    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    getResourcePackInPath(::Core::Path const&) const /*override*/;

    virtual bool isResourcePackLoaded(::PackIdVersion const&, ::PackOrigin const&) /*override*/;

    virtual ::PackSourceReport const* getPackLoadingReport() const /*override*/;

    virtual ::std::shared_ptr<::ResourcePack> getEditorPack() const /*override*/;

    virtual ::std::shared_ptr<::ResourcePack> getVanillaPack() const /*override*/;

    virtual bool setServicePacks(::std::vector<::PackIdVersion>) /*override*/;

    virtual void addServicePacksToStack(::ResourcePackStack&) const /*override*/;

#ifdef LL_PLAT_S
    virtual void addSystemPacksToStack(::ResourcePackStack& stack) const /*override*/;
#else // LL_PLAT_C
    virtual void addSystemPacksToStack(::ResourcePackStack&) const /*override*/;
#endif

    virtual void addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const*) /*override*/;

#ifdef LL_PLAT_S
    virtual void addWorldResourcePacks(::Core::Path const& levelPath) /*override*/;
#else // LL_PLAT_C
    virtual void addWorldResourcePacks(::Core::Path const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) /*override*/;
#else // LL_PLAT_C
    virtual void addPremiumWorldTemplateResourcePacks(::Core::Path const&, ::ContentIdentity const&) /*override*/;
#endif

    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const&) /*override*/;

    virtual void addWorldPackSource(::Core::Path const&) /*override*/;

    virtual void addPremiumWorldTemplatePackSource(::Core::Path const&, ::ContentIdentity const&) /*override*/;

    virtual void removePacksLoadedFromCache() /*override*/;

    virtual void removePacksLoadedFromWorld() /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getResourcePacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getBehaviorPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getSkinPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getCustomSkinDirectoryPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentResourcePacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentBehaviorPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentSkinPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getTreatmentPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getSystemBehaviorPacksPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getSystemResourcePacksPath() const /*override*/;

    virtual void refreshPacks() /*override*/;

    virtual ::Bedrock::Threading::Async<void> refreshPacksAsync() /*override*/;

    virtual void requestReloadUserPacks() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    virtual ::PackSettingsFactory& getPackSettingsFactory() const /*override*/;

    virtual ::PackSourceFactory& getPackSourceFactory() /*override*/;

    virtual ::std::vector<::ResourcePack*> getPacksByResourceLocation(::PackOrigin) const /*override*/;

    virtual ::std::vector<::ResourcePack*> getPacksByType(::PackType) const /*override*/;

    virtual ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>> getPacksByCategory(::PackCategory) const
        /*override*/;

    virtual void forEachPack(::std::function<void(::ResourcePack const&)> const&) const /*override*/;

    virtual ::std::vector<::ResourceLocation> const& getInvalidPacks(::PackType) const /*override*/;

    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const /*override*/;

    virtual void deletePack(::ResourceLocation const&) /*override*/;

    virtual void deletePackFiles(::ResourceLocation const&) /*override*/;

    virtual void postDeletePack(::ResourceLocation const&) /*override*/;

    virtual void untrackInvalidPack(::ResourceLocation const&) /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const&) /*override*/;

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
#ifdef LL_PLAT_S
    MCFOLD ::PackSourceReport const* $getPackLoadingReport() const;

    MCAPI ::std::shared_ptr<::ResourcePack> $getEditorPack() const;

    MCAPI ::std::shared_ptr<::ResourcePack> $getVanillaPack() const;

    MCAPI void $addSystemPacksToStack(::ResourcePackStack& stack) const;

    MCAPI void $addWorldResourcePacks(::Core::Path const& levelPath);

    MCAPI void $addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    );

    MCFOLD ::PackSettingsFactory& $getPackSettingsFactory() const;
#endif


    // NOLINTEND
};
