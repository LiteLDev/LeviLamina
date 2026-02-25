#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class ClientDependencies; }
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class RecipeBookSearchStringQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::RecipeBookSearchStringQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mSubscription;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mSearchString;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeBookSearchStringQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecipeBookSearchStringQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecipeBookSearchStringQuery(
        ::OreUI::Experimental::GameDependencies const&   game,
        ::OreUI::Experimental::ClientDependencies const& client
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::Experimental::GameDependencies const& game, ::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
