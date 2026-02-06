#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentView;
struct PackIdVersion;
// clang-format on

struct ContentViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ContentView>> mSelectedContentView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ContentView>> mGlobalContentView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ContentView>> mAvailableContentView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ContentView>> mRealmsContentView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ContentView>> mInvalidContentView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ContentView>> mUnownedContentView;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>            mInitialSelectedPacks;
    ::ll::TypedStorage<1, 1, bool>                                       mRepopulateReports;
    ::ll::TypedStorage<1, 1, bool>                                       mSelectedContentUpdated;
    ::ll::TypedStorage<1, 1, bool>                                       mGetInitialSelectedPacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentViews& operator=(ContentViews const&);
    ContentViews();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentViews(::ContentViews const&);

    MCAPI ~ContentViews();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentViews const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
