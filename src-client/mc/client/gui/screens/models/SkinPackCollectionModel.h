#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/SkinPackCollectionStatus.h"
#include "mc/client/gui/screens/models/SkinPackModel.h"
#include "mc/client/player/SkinHandle.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class IDlcBatchModel;
class MainMenuScreenModel;
class SkinPackCollector;
struct ContentCatalogService;
struct IEntitlementManager;
struct PackIdVersion;
struct SkinPackCollectionListener;
struct SkinRepository;
struct SkinRepositoryClientInterface;
// clang-format on

class SkinPackCollectionModel {
public:
    // SkinPackCollectionModel inner types declare
    // clang-format off
    struct SkinPackCollectionEntitlementChangeListener;
    // clang-format on

    // SkinPackCollectionModel inner types define
    struct SkinPackCollectionEntitlementChangeListener {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>                                  mMainMenu;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>   mEntitlementManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinRepository>>                    mSkinRepository;
    ::ll::TypedStorage<8, 8, ::SkinRepositoryClientInterface&>                        mSkinRepositoryClientInterface;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>> mContentCatalogService;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                mExistenceTracker;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinPackCollectionListener>>            mSkinPackCollectionListeners;
    ::ll::TypedStorage<4, 4, ::SkinPackCollectionStatus>                              mCollectionStatus;
    ::ll::TypedStorage<4, 4, int>                                                     mVisibleCollectionStartIndex;
    ::ll::TypedStorage<4, 4, int>                                                     mVisibleCollectionEndIndex;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::mce::UUID>>                      mHandledPackSet;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SkinPackCollector>>>  mCollectors;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinPackModel>>                     mVanillaSkinPack;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinPackModel>>>      mSkinPacks;
    ::ll::TypedStorage<8, 2632, ::SkinPackModel>                                      mInvalidSkinPackModel;
    ::ll::TypedStorage<8, 112, ::SkinHandle>                                          mPreviewSkin;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::IDlcBatchModel>>> mTrackedImports;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinPackCollectionModel::SkinPackCollectionEntitlementChangeListener>>
                                   mEntitlementChangeListener;
    ::ll::TypedStorage<1, 1, bool> mTryAcquireNextPage;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPackCollectionModel& operator=(SkinPackCollectionModel const&);
    SkinPackCollectionModel(SkinPackCollectionModel const&);
    SkinPackCollectionModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinPackCollectionModel(
        ::MainMenuScreenModel&                                        mainMenu,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>          entitlementManager,
        ::std::shared_ptr<::SkinRepository>                           skinRepository,
        ::SkinRepositoryClientInterface&                              skinRepositoryClientInterface,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& contentService
    );

    MCAPI void _acquireAndLoadSkinPack(::std::shared_ptr<::SkinPackModel> const& skinPackModel);

    MCAPI void _tryAndAquireVisibleSkinPacks();

    MCAPI bool areRecentSkinsDownloading() const;

    MCAPI void checkPendingSkinPack();

    MCAPI void equipPreviewSkin(bool withToast);

    MCAPI ::SkinHandle getRecentSkinHandleAtIndex(int index);

    MCAPI ::std::string const& getSkinName(::SkinHandle const& skinHandle) const;

    MCAPI ::SkinPackModel& getSkinPackModelByUUID(::mce::UUID const& packId);

    MCAPI void initializeForOwnedSkinPicker();

    MCAPI void initializeForPDP(::PackIdVersion const& skinPackIdentity);

    MCAPI void initializeForPurchasableSkinPicker();

    MCAPI void initializeForRealmsPlusSkinPicker();

    MCAPI void initializeForSkinPicker();

    MCAPI bool isDownloadActive(::mce::UUID const& packId) const;

    MCAPI bool isDownloadActiveByCollectionIndex(int collectionIndex) const;

    MCAPI void registerSkinPackCollectionListener(::SkinPackCollectionListener const& skinPackCollectionListener);

    MCAPI void setSelectedSkin(::SkinHandle const& skinHandle);

    MCAPI void tryAndAquireSkinPackByPackId(::mce::UUID const& packId);

    MCAPI bool update();

    MCAPI ~SkinPackCollectionModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MainMenuScreenModel&                                        mainMenu,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>          entitlementManager,
        ::std::shared_ptr<::SkinRepository>                           skinRepository,
        ::SkinRepositoryClientInterface&                              skinRepositoryClientInterface,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& contentService
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
