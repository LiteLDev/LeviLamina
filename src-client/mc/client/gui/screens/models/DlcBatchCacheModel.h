#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcBatchModel;
class DlcId;
class IContentAcquisition;
class IMinecraftGame;
class IStoreCatalogRepository;
// clang-format on

class DlcBatchCacheModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DlcBatchModel>>                           mDlcBatchList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>>     mContentAcquisition;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository>> mStoreCatalog;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatchCacheModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DlcBatchCacheModel(::IMinecraftGame& minecraft);

    MCAPI DlcBatchCacheModel(
        ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>     contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalog
    );

    MCAPI ::DlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const& dlcIds);

    MCAPI ::DlcBatchModel& getDlcBatchModel(::std::string const& productId);

    MCAPI ::DlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const& productIds);

    MCAPI ~DlcBatchCacheModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftGame& minecraft);

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>     contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalog
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
