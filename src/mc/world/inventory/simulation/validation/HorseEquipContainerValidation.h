#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class HorseEquipContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf0fcc9;
    ::ll::UntypedStorage<8, 24> mUnk38e3b5;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseEquipContainerValidation& operator=(HorseEquipContainerValidation const&);
    HorseEquipContainerValidation(HorseEquipContainerValidation const&);
    HorseEquipContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual int getAvailableSetCount(int slot, ::ItemStackBase const& item) const /*override*/;

    // vIndex: 4
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    // vIndex: 2
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const /*override*/;

    // vIndex: 9
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;

    // vIndex: 0
    virtual ~HorseEquipContainerValidation() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HorseEquipContainerValidation(::ContainerScreenContext const& screenContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerScreenContext const& screenContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getAvailableSetCount(int slot, ::ItemStackBase const& item) const;

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
