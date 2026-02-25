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

class LocaleQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::LocaleQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mLocaleToken;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mLocale;
    // NOLINTEND

public:
    // prevent constructor by default
    LocaleQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocaleQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocaleQuery(
        ::OreUI::Experimental::GameDependencies const&   game,
        ::OreUI::Experimental::ClientDependencies const& client
    );
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
