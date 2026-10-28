#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PlayerProfileQuery : public ::OreUI::QueryBase<::OreUI::PlayerProfileQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int, int>>                     mGamerScore;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mXboxAvatarUrl;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                     mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerProfileQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerProfileQuery(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        ::std::string const&               playerId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        ::std::string const&               playerId
    );
    // NOLINTEND
};

} // namespace OreUI
