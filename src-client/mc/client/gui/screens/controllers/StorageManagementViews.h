#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class IStorageManagementModel;
class IVersionedContentItemCollection;
struct ContentItem;
// clang-format on

class StorageManagementViews {
public:
    // StorageManagementViews inner types declare
    // clang-format off
    struct ContentTab;
    // clang-format on

    // StorageManagementViews inner types define
    struct ContentTab {};

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentTabPtr = ::gsl::not_null<::std::shared_ptr<::StorageManagementViews::ContentTab>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IStorageManagementModel>>> mModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mWorldTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mWorldTemplateTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mResourceTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mBehaviorTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mSkinTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mCacheTab;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ContentItemCollection>>>    mSelectedView;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContentItem const>>>         mSelectedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementViews();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageManagementViews(
        ::std::shared_ptr<::IVersionedContentItemCollection const> viewSource,
        ::std::shared_ptr<::IStorageManagementModel>               model
    );

    MCAPI void _onSelectedReloaded(::ContentItemCollection& selectedView);

    MCAPI ::std::vector<::std::shared_ptr<::ContentItem const>> getAndExpandSelectedItems() const;

    MCAPI ::ContentItemCollection& getSelectedView();

    MCAPI ::std::array<::gsl::not_null<::std::shared_ptr<::StorageManagementViews::ContentTab>>, 6> getTabs();

    MCAPI ~StorageManagementViews();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::IVersionedContentItemCollection const> viewSource,
        ::std::shared_ptr<::IStorageManagementModel>               model
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
