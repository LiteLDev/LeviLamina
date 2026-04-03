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

class PartyChatFirstMessageOrderQuery : public ::OreUI::QueryBase<::OreUI::PartyChatFirstMessageOrderQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint>>        mFirstOrder;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFirstOrderChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatFirstMessageOrderQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatFirstMessageOrderQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PartyChatFirstMessageOrderQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
