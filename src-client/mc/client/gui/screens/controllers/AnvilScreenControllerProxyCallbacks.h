#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct AnvilScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                            mAddItemFirstSlot;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                            mAddItemSecondSlot;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>           mSetName;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&()>>             mGetResultItem;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const()>>                mGetFilteredResultName;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, ::std::string const&, int)>> mAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                               mCanBeClosedByServer;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                               mLeaveScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilScreenControllerProxyCallbacks& operator=(AnvilScreenControllerProxyCallbacks const&);
    AnvilScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnvilScreenControllerProxyCallbacks(::AnvilScreenControllerProxyCallbacks const&);

    MCAPI ~AnvilScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AnvilScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
