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
    // vIndex: 0, symbol: ??1PublisherDisconnector@Detail@PubSub@@@UEAA@XZ
    virtual ~PublisherDisconnector();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
