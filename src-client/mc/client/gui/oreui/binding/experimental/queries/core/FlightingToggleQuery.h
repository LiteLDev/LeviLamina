#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class FlightingToggleQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::FlightingToggleQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>> mEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingToggleQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlightingToggleQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlightingToggleQuery(::OreUI::Experimental::GameDependencies const& game, ::std::string const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::GameDependencies const& game, ::std::string const& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
