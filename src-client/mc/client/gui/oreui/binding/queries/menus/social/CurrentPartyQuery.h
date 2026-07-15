#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Parties { class IPartyProvider; }
// clang-format on

namespace OreUI {

class CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    // NOLINTEND
};

} // namespace OreUI
