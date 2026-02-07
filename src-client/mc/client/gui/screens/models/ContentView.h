#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
struct ContentItem;
// clang-format on

class ContentView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ContentView inner types define
    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IContentManager>>                                  mContentManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContentItem>>>                     mItems;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::std::shared_ptr<::ContentItem>)>> mPredicate;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::shared_ptr<::ContentItem>, ::std::shared_ptr<::ContentItem>)>>
                                                                   mSortFunction;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>             mOnReload;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContentView const*>> mContentViewSources;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentView() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reload();

    MCAPI void setSortFunc(
        ::std::function<bool(::std::shared_ptr<::ContentItem> const&, ::std::shared_ptr<::ContentItem> const&)> sortFunc
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
