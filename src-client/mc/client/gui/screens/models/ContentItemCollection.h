#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyContentItemCollection;
struct ContentCollectionOptions;
struct ContentItem;
// clang-format on

class ContentItemCollection {
public:
    // ContentItemCollection inner types declare
    // clang-format off
    struct ContentViewSource;
    struct ItemCollection;
    // clang-format on

    // ContentItemCollection inner types define
    struct ContentViewSource {};

    struct ItemCollection {};

    using OnReload = ::brstd::move_only_function<void(::ContentItemCollection&)>;

    using SortPredicate = bool (*)(::ContentItem const&, ::ContentItem const&);

    using FilterPredicate = ::brstd::move_only_function<bool(::ContentItem const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ReadOnlyContentItemCollection>>> mAllItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContentItemCollection::ContentViewSource>>           mContentViewSources;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ContentItemCollection::ItemCollection>>>
                                                                                           mItemCollections;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::ContentItemCollection&)>> mOnReloaded;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::ContentItem const&)>>     mFilter;
    ::ll::TypedStorage<8, 8, bool (*)(::ContentItem const&, ::ContentItem const&)>         mSort;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentItemCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ContentItemCollection(::ContentCollectionOptions&& options);

    MCAPI void createItemCollection(
        ::gsl::not_null<::std::shared_ptr<::ContentItem>>       itemProxy,
        ::brstd::move_only_function<bool(::ContentItem const&)> predicate
    );

    MCAPI void forceReload();

    MCAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>
    getCollection(::ContentItem const& item);

    MCAPI ::std::shared_ptr<::ContentItem const>
    getItem(::brstd::move_only_function<bool(::ContentItem const&)> predicate);

    MCAPI uint64 getTotalSize();

    MCAPI bool tryReload();

    MCAPI ~ContentItemCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentCollectionOptions&& options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
