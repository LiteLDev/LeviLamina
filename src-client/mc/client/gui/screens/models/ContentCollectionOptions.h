#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class IVersionedContentItemCollection;
struct ContentItem;
// clang-format on

struct ContentCollectionOptions {
public:
    // ContentCollectionOptions inner types define
    using OnReload = ::brstd::move_only_function<void(::ContentItemCollection&)>;

    using SortPredicate = bool (*)(::ContentItem const&, ::ContentItem const&);

    using FilterPredicate = ::brstd::move_only_function<bool(::ContentItem const&)>;

    using ViewSource = ::std::shared_ptr<::IVersionedContentItemCollection const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::ContentItem const&)>>                   mFilter;
    ::ll::TypedStorage<8, 8, bool (*)(::ContentItem const&, ::ContentItem const&)>                       mSort;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::ContentItemCollection&)>>               mOnReload;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::IVersionedContentItemCollection const>>> mViewSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ContentCollectionOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
