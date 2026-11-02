#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ConnectionType.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/WorldPlayerInfoBindings.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

namespace OreUI {

struct WorldPlayerInfoObject : public ::OreUI::PropertyObject<::OreUI::WorldPlayerInfoObject>,
                               public ::OreUI::WorldPlayerInfoBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mIdString;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mPlayerName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mActiveProfileImage;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<::std::optional<::PlayerPermissionLevel>, ::std::optional<::PlayerPermissionLevel>>>
                                                                                                    mPermissionLevel;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                                       mIsHost;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::ConnectionType, ::OreUI::ConnectionType>> mConnectionType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::BuildPlatform, ::BuildPlatform>>                 mPlatform;
    // NOLINTEND
};

} // namespace OreUI
