#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoader.h"
#include "mc/deps/core/resource/ResourcePackStackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ContentTierIncompatibleReason;
class IContentTierManager;
class LinkedAssetValidator;
class LoadedResourceData;
class PackInstance;
class PackReport;
class PackSourceReport;
class ResourceGroup;
class ResourceLocation;
class ResourceLocationPair;
class ResourcePack;
class ResourcePackListener;
class ResourcePackMergeStrategy;
class ResourcePackStack;
struct PackIdVersion;
namespace Core { class Path; }
namespace mce { struct Image; }
// clang-format on

class ResourcePackManager : public ::ResourceLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::gsl::not_null<::ResourcePackListener*>>> mListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mLevelStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mGlobalStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mTreatmentStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mBaseGameStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mFullStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSourceReport>>                           mLoadingReport;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mLocaleCode;
    ::ll::TypedStorage<1, 1, bool>                                                            mInitializing;
    ::ll::TypedStorage<1, 1, bool>                                                            mPendingRestack;
    ::ll::TypedStorage<1, 1, bool>                                                            mUseGlobalPackStack;
    ::ll::TypedStorage<1, 1, bool>                                                            mGameplayResourcesLoaded;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                             mFullStackAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>>     mContentTierManager;
    ::ll::TypedStorage<8, 24, ::SemVersion> mFullStackMinEngineVersion_DEPRECATED_DONOTUSE;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackManager() /*override*/;

    virtual bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const /*override*/;

    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual bool load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual bool loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const /*override*/;

    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const
        /*override*/;

#ifdef LL_PLAT_C
    virtual ::mce::Image loadTexture(::ResourceLocation const& resourceLocation) const /*override*/;

#endif
    virtual bool isInStreamableLocation(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual bool isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getPathContainingResource(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual bool hasCapability(::std::string_view requiredCapability) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackManager(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
    );

    MCAPI void _calculateMinEngineVersionFromFullStack();

    MCAPI void _composeFullStack();

    MCAPI bool _doStackOperation(
        ::ResourcePackStackType                                                          stackType,
        ::brstd::move_only_function<bool(::std::unique_ptr<::ResourcePackStack>*) const> operation
    );

    MCAPI void _getResourcesOfGroup(
        ::PackInstance const&        packInstance,
        ::std::string const&         group,
        ::std::vector<::Core::Path>& resources
    ) const;

    MCAPI void _updateLanguageSubpacks();

#ifdef LL_PLAT_C
    MCAPI bool areGameplayResourcesLoaded() const;

    MCAPI ::ContentTierIncompatibleReason canSupportPacks();

    MCAPI void clearPackReports();
#endif

    MCAPI void clearStack(::ResourcePackStackType stackType);

    MCAPI int composeFullStack(
        ::ResourcePackStack&       output,
        ::ResourcePackStack const& globalStack,
        ::ResourcePackStack const& levelStack
    ) const;

#ifdef LL_PLAT_C
    MCAPI void ensureSupportedSubpacks();

    MCAPI ::std::vector<::ResourceLocationPair> findAllTexturesInUse() const;

    MCAPI ::std::vector<::PackIdVersion> findInPacks(::ResourceLocation const& resourceLocation) const;

    MCAPI void finishLoadingLinkedAssets(::LinkedAssetValidator& validator);

    MCAPI void forceStackCompose_DEPRECATED();

    MCFOLD ::std::shared_mutex& getFullStackAccess() const;

    MCAPI ::SemVersion getFullStackMinEngineVersion_DEPRECATED() const;

    MCAPI ::std::vector<::PackInstance> getIncompatiblePacks() const;
#endif

    MCAPI ::PackInstance* getPackForResource(::Core::Path const& resourceName) const;

    MCFOLD ::PackSourceReport const* getPackSourceReport() const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PackInstance> getPacksWhereAssetExtractionNotViable(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;
#endif

    MCAPI ::ResourceGroup getResourcesOfGroup(::std::string const& group) const;

    MCAPI ::ResourceGroup getResourcesOfGroup(::PackInstance const& packInstance, ::std::string const& group) const;

    MCAPI ::ResourcePackStack const& getStack(::ResourcePackStackType stackType) const;

    MCAPI void handlePendingStackChanges();

#ifdef LL_PLAT_C
    MCAPI bool hasResource(::ResourceLocation const& resourceLocation) const;

    MCAPI bool hasResource(
        ::ResourcePackStack const&       resourcePackStack,
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI bool hasTexture(::ResourceLocation const& resourceLocation) const;

    MCAPI bool hasTexture(::ResourcePackStackType stackType, ::ResourceLocation const& resourceLocation) const;
#endif

    MCAPI bool isAssetExtractionViableForFullStack(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;

    MCAPI bool isOnlyBaseGamePacks() const;

    MCAPI void iteratePacks(::std::function<void(::PackInstance const&)> const& pred) const;

#ifdef LL_PLAT_C
    MCAPI bool
    loadAllVersionsOf(::ResourceLocation const& resourceLocation, ::ResourcePackMergeStrategy& mergeStrategy) const;

    MCAPI void mergePackReports(::std::vector<::PackReport>& packReports);

    MCAPI void notifyJsonResourcesChanged();

    MCAPI void onBaseGamePackDownloadComplete();

    MCAPI void onLanguageChanged();

    MCAPI void onLoadingFinished();

    MCAPI bool refreshStack(::ResourcePackStackType stackType);

    MCAPI void regeneratePackAssetSet();
#endif

    MCAPI void registerResourcePackListener(::ResourcePackListener& listener);

    MCAPI void removeIf(::std::function<bool(::PackInstance const&)> const& pred);

#ifdef LL_PLAT_C
    MCAPI void removePacks(::std::vector<::gsl::not_null<::ResourcePack const*>> const& packs);

    MCAPI void removeUnsupportedPacks();

    MCAPI void setCanUseGlobalPackStack(bool canUseGlobalPackStack);
#endif

    MCAPI void setGameplayResourcesLoaded(bool gameplayResourcesLoaded);

    MCAPI void setPackSourceReport(::PackSourceReport&& report);

    MCAPI bool setStack(::std::unique_ptr<::ResourcePackStack> stack, ::ResourcePackStackType stackType);

#ifdef LL_PLAT_C
    MCAPI bool supportsVibrantVisuals() const;

    MCAPI void unRegisterAllResourcePackListener();
#endif

    MCAPI void unRegisterResourcePackListener(::ResourcePackListener& listener);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
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
    MCAPI bool $load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCAPI bool $load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI bool $load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI bool $loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCAPI ::std::vector<::LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    MCAPI bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    MCAPI bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;

    MCAPI ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;

    MCAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI bool $hasCapability(::std::string_view requiredCapability) const;

#ifdef LL_PLAT_C
    MCAPI ::mce::Image $loadTexture(::ResourceLocation const& resourceLocation) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
