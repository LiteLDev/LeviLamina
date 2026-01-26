#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemDescriptor;
class ItemStackBase;
class Recipes;
// clang-format on

class EnchantingInputContainerController : public ::ContainerController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingInputContainerController() /*override*/ = default;

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool _isEnchantingInputItem(::ItemDescriptor const& item) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::shared_ptr<::ContainerModel> containerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
