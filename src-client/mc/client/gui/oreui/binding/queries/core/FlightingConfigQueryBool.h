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

class FlightingConfigQueryBool : public ::OreUI::QueryBase<::OreUI::FlightingConfigQueryBool> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>        mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingConfigQueryBool();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlightingConfigQueryBool(::OreUI::GameDependencies const& game, ::std::string const& tag);
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
