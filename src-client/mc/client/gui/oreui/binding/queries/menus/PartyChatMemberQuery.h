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

class PartyChatMemberQuery : public ::OreUI::QueryBase<::OreUI::PartyChatMemberQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamerTag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamerIcon;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMemberQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMemberQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyChatMemberQuery(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        ::std::string const&               xuid
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client, ::std::string const& xuid);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
