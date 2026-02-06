#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/DlcBatchCacheModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SkinPackModel;
struct DlcId;
struct IContentAcquisition;
struct IEntitlementManager;
struct ISkinRepository;
struct ISkinRepositoryClientInterface;
struct IStoreCatalogItem;
struct IStoreCatalogRepository;
struct SkinRepositoryClientInterface;
namespace mce { class UUID; }
namespace persona { struct DlcImportTracker; }
// clang-format on

class SDLSkinPackCollectionModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::DlcBatchCacheModel>                                     mDlcBatchCacheModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISkinRepository>>                     mSkinRepository;
    ::ll::TypedStorage<8, 8, ::SkinRepositoryClientInterface&>                          mSkinRepositoryClientInterface;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>     mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository>> mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::persona::DlcImportTracker>>> mTrackedImports;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinPackModel>>>             mSkinPacks;
    ::ll::TypedStorage<8, 8, uint64>                                                         mStartFetchIndex;
    ::ll::TypedStorage<8, 8, uint64>                                                         mVisibleEndRange;
    ::ll::TypedStorage<4, 4, uint>                                                           mVisiblePacks;
    ::ll::TypedStorage<4, 4, uint>                                                           mMaxPacksPerFetch;
    ::ll::TypedStorage<4, 4, int>                                                            mSideLoadedPacksCollected;
    // NOLINTEND

public:
    // prevent constructor by default
    SDLSkinPackCollectionModel& operator=(SDLSkinPackCollectionModel const&);
    SDLSkinPackCollectionModel(SDLSkinPackCollectionModel const&);
    SDLSkinPackCollectionModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SDLSkinPackCollectionModel(
        ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>     contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::std::shared_ptr<::ISkinRepository>                     skinRepository,
        ::ISkinRepositoryClientInterface&                        skinRepositoryClientInterface
    );

    MCAPI void _addSkinPackModel(::mce::UUID const& packId, int index);

    MCAPI void _collectLegacySkins();

    MCAPI void _extractDlcIdFromOffer(::std::vector<::DlcId>& dlcIds, ::IStoreCatalogItem const& calatogItem);

    MCAPI uint64 collectLegacyAndSideLoadedSkinPacks();

    MCAPI void collectOffers(::std::vector<::gsl::not_null<::IStoreCatalogItem*>> const& offers);

    MCAPI uint64 collectSkinsForOffline(bool collectOwnedSkins, ::mce::UUID const& packId);

    MCAPI void tick(::ui::DirtyFlag& dirtyFlags);

    MCAPI ~SDLSkinPackCollectionModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>     contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::std::shared_ptr<::ISkinRepository>                     skinRepository,
        ::ISkinRepositoryClientInterface&                        skinRepositoryClientInterface
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
