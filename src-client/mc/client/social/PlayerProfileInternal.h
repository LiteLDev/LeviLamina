#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/PlayerProfile.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { struct PlayerIdentifier; }
// clang-format on

namespace Social {

struct PlayerProfileInternal : public ::Social::PlayerProfile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::Social::PlayerIdentifier), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
        notifyChangeSubscribers;
    // NOLINTEND
};

} // namespace Social
