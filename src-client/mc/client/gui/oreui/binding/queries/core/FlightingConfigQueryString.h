#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class FlightingConfigQueryString : public ::OreUI::QueryBase<::OreUI::FlightingConfigQueryString> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mToken;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingConfigQueryString();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlightingConfigQueryString(::OreUI::GameDependencies const& game, ::std::string const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
