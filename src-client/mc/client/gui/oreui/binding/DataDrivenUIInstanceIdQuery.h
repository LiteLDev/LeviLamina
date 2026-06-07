#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { class DataDrivenScreenAPI; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class DataDrivenUIInstanceIdQuery : public ::OreUI::QueryBase<::OreUI::DataDrivenUIInstanceIdQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<uint>>> mInstanceId;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIInstanceIdQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DataDrivenUIInstanceIdQuery(::GameplayUI::DataDrivenScreenAPI* dataDrivenScreenAPI);

    MCAPI DataDrivenUIInstanceIdQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameplayUI::DataDrivenScreenAPI* dataDrivenScreenAPI);

    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
