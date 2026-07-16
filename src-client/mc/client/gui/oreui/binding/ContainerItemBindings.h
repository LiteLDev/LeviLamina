#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemStatusType.h"
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemType.h"
#include "mc/client/gui/gameplay/data/gameplayui/BundleColor.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

namespace OreUI {

struct ContainerItemBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        amount;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              name;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              details;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              image;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::GameplayUI::ContainerItemStatusType>>      statusType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        statusValue;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        statusMax;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::GameplayUI::ContainerItemType>>            containerItemType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>                       bundleID;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::GameplayUI::BundleColor>>> bundleColor;
    // NOLINTEND
};

} // namespace OreUI
