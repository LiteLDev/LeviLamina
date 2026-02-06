#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BannerPattern;
class ItemStack;
class ItemStackBase;
// clang-format on

struct LoomScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mAddItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mAddDye;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mAddBannerPattern;
    ::ll::TypedStorage<8, 64, ::std::function<int(::BannerPattern const*)>>                   mGetPatternIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mSetSelectedPattern;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&()>>                      mGetResultItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    // NOLINTEND
};
