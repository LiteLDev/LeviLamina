#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemStatusType.h"
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemType.h"
#include "mc/client/gui/gameplay/data/gameplayui/BundleColor.h"

namespace GameplayUI {

struct ContainerItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                        amount;
    ::ll::TypedStorage<8, 32, ::std::string>                             name;
    ::ll::TypedStorage<8, 32, ::std::string>                             details;
    ::ll::TypedStorage<8, 32, ::std::string>                             image;
    ::ll::TypedStorage<4, 4, ::GameplayUI::ContainerItemStatusType>      statusType;
    ::ll::TypedStorage<4, 4, int>                                        statusValue;
    ::ll::TypedStorage<4, 4, int>                                        statusMax;
    ::ll::TypedStorage<4, 4, ::GameplayUI::ContainerItemType>            containerItemType;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                      bundleID;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameplayUI::BundleColor>> bundleColor;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerItem& operator=(ContainerItem const&);
    ContainerItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerItem(::GameplayUI::ContainerItem const&);

    MCAPI ::GameplayUI::ContainerItem& operator=(::GameplayUI::ContainerItem&&);

    MCAPI ~ContainerItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameplayUI::ContainerItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
