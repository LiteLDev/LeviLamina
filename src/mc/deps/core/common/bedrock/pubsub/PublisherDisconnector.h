#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

class PublisherDisconnector {
public:
    // prevent constructor by default
    PublisherDisconnector& operator=(PublisherDisconnector const&);
    PublisherDisconnector(PublisherDisconnector const&);
    PublisherDisconnector();

public:
    // NOLINTBEGIN
    // symbol: ??1PublisherDisconnector@Detail@PubSub@Bedrock@@UEAA@XZ
    MCVAPI ~PublisherDisconnector();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
