#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
// clang-format on

struct TradeScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTakeAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&(::std::string const&, int)>>
                                                          mHandleGetVisualItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>    mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>> mSetRecipeIndex;
    // NOLINTEND
};
