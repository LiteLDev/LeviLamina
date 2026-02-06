#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/IContentManagerContext.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class IContentManager;
struct ContentItem;
// clang-format on

class ContentManagerContext : public ::IContentManagerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::shared_ptr<::ContentItem const>)>> mContextPredicate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ContentView>>>               mContentViews;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IContentManager>>                            mManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentManagerContext() /*override*/;

    virtual ::ContentView& getContentView(
        ::brstd::move_only_function<bool(::std::shared_ptr<::ContentItem const> const&)> predicate
    ) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::ContentView>> const& getContentViews() const /*override*/;

    virtual void onLanguageChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentManagerContext(
        ::std::weak_ptr<::IContentManager>                                   manager,
        ::std::function<bool(::std::shared_ptr<::ContentItem const> const&)> contextPredicate
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::weak_ptr<::IContentManager>                                   manager,
        ::std::function<bool(::std::shared_ptr<::ContentItem const> const&)> contextPredicate
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
    MCAPI ::ContentView&
    $getContentView(::brstd::move_only_function<bool(::std::shared_ptr<::ContentItem const> const&)> predicate);

    MCFOLD ::std::vector<::std::unique_ptr<::ContentView>> const& $getContentViews() const;

    MCAPI void $onLanguageChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
