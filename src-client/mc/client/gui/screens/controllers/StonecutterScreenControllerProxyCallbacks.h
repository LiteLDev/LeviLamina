#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemStack;
class ItemStackBase;
// clang-format on

struct StonecutterScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ContainerController*(::std::string const&)>> mGetContainerController;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                    mHandleRecipeSelect;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>              mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>              mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&(::std::string const&, int)>>
                                                                                              mHandleGetVisualItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTakeAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceAll;
    ::ll::TypedStorage<8, 64, ::std::function<int(::ItemStack const&)>>                       mGetStoneIndexForItem;
    // NOLINTEND
};
