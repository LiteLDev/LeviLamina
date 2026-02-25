#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class PartyChatMemberQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::PartyChatMemberQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mGamerTag;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mGamerIcon;
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
    MCAPI PartyChatMemberQuery(::OreUI::Experimental::GameDependencies const& game, ::std::string const& xuid);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::GameDependencies const& game, ::std::string const& xuid);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
