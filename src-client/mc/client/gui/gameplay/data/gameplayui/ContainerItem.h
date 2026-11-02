#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/BundleColor.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItemStatusType.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItemType.h"
#include "mc/client/gui/screens/ItemRendererData.h"

namespace GameplayUI {

struct ContainerItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             name;
    ::ll::TypedStorage<8, 32, ::std::string>                             id;
    ::ll::TypedStorage<4, 4, int>                                        amount;
    ::ll::TypedStorage<4, 4, ::GameplayUI::ContainerItemStatusType>      statusType;
    ::ll::TypedStorage<4, 4, int>                                        statusValue;
    ::ll::TypedStorage<4, 4, int>                                        statusMax;
    ::ll::TypedStorage<4, 4, ::GameplayUI::ContainerItemType>            containerItemType;
    ::ll::TypedStorage<1, 1, bool>                                       isSelectedRecipeSlot;
    ::ll::TypedStorage<1, 1, bool>                                       isTouchSelected;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                      bundleID;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameplayUI::BundleColor>> bundleColor;
    ::ll::TypedStorage<4, 4, int>                                        iconSize;
    ::ll::TypedStorage<8, 192, ::std::optional<::ItemRendererData>>      renderData;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerItem& operator=(ContainerItem const&);
    ContainerItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerItem(::GameplayUI::ContainerItem const&);

    MCNAPI ::std::string getIconUrl() const;

    MCNAPI bool isDisabled() const;

    MCNAPI bool isGhost() const;

    MCNAPI bool operator==(::GameplayUI::ContainerItem const&) const;

    MCNAPI bool shouldShowAmount() const;

    MCNAPI bool shouldShowImage() const;

    MCNAPI ~ContainerItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameplayUI::ContainerItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
