#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemType.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class ItemStackBase;
// clang-format on

namespace GameplayUI {

struct ContainerItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                             amount;
    ::ll::TypedStorage<8, 32, ::std::string>                  name;
    ::ll::TypedStorage<8, 32, ::std::string>                  image;
    ::ll::TypedStorage<1, 1, bool>                            hasDamageValue;
    ::ll::TypedStorage<2, 2, short>                           maxDamage;
    ::ll::TypedStorage<2, 2, short>                           damageValue;
    ::ll::TypedStorage<4, 4, ::GameplayUI::ContainerItemType> containerItemType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ContainerItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::GameplayUI::ContainerItem fromItemStack(
        ::ItemStackBase const&          stack,
        ::ItemRegistryRef               itemRegistry,
        ::GameplayUI::ContainerItemType containerItemType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
