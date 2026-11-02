#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourcePackStackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/resources/ResourcePackLoader.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class IContentTierManager;
class LinkedAssetValidator;
class PackInstance;
class PackSourceReport;
class ResourcePack;
class ResourcePackListener;
class ResourcePackStack;
// clang-format on

class ResourcePackManager : public ::ResourcePackLoader {
public:
    // ResourcePackManager inner types declare
    // clang-format off
    struct ResourcePackManagerArgs;
    // clang-format on

    // ResourcePackManager inner types define
    struct ResourcePackManagerArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkd67bde;
        ::ll::UntypedStorage<8, 8>  mUnk542099;
        ::ll::UntypedStorage<1, 1>  mUnk6180e5;
        ::ll::UntypedStorage<8, 64> mUnkf0d8cc;
        ::ll::UntypedStorage<8, 64> mUnkc1a4c3;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourcePackManagerArgs& operator=(ResourcePackManagerArgs const&);
        ResourcePackManagerArgs(ResourcePackManagerArgs const&);
        ResourcePackManagerArgs();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ResourcePackManagerArgs();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::gsl::not_null<::ResourcePackListener*>>> mListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mLevelStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mGlobalStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mTreatmentStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mBaseGameStack;
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
    virtual ~ResourcePackManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ResourcePackManager(::ResourcePackLoader::ConstructorKey, ::ResourcePackManager::ResourcePackManagerArgs args);

    MCNAPI void _calculateMinEngineVersionFromFullStack();

    MCNAPI void _composeFullStack();

    MCNAPI void _updateLanguageSubpacks();

#ifdef LL_PLAT_C
    MCNAPI ::ContentTierIncompatibleReason canSupportPacks();
#endif

    MCNAPI void clearStack(::ResourcePackStackType stackType);

    MCAPI int composeFullStack(
        ::ResourcePackStack&       output,
        ::ResourcePackStack const& globalStack,
        ::ResourcePackStack const& levelStack
    ) const;

#ifdef LL_PLAT_C
    MCNAPI void finishLoadingLinkedAssets(::LinkedAssetValidator& validator);

    MCNAPI ::SemVersion getFullStackMinEngineVersion_DEPRECATED() const;

    MCNAPI ::std::vector<::PackInstance> getIncompatiblePacks() const;
#endif

    MCAPI void iteratePacks(::std::function<void(::PackInstance const&)> const& pred) const;

#ifdef LL_PLAT_C
    MCNAPI void onLanguageChanged();

    MCNAPI void releasePreloadCacheHandles();
#endif

    MCNAPI void removeIf(::std::function<bool(::PackInstance const&)> const& pred);

#ifdef LL_PLAT_C
    MCNAPI void removePacks(::std::vector<::gsl::not_null<::ResourcePack const*>> const& packs);

    MCNAPI void removeUnsupportedPacks();
#endif

    MCAPI bool setStack(::std::unique_ptr<::ResourcePackStack> stack, ::ResourcePackStackType stackType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OwnerPtr<::ResourcePackManager> create(::ResourcePackManager::ResourcePackManagerArgs args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackLoader::ConstructorKey, ::ResourcePackManager::ResourcePackManagerArgs args);
    // NOLINTEND
};
