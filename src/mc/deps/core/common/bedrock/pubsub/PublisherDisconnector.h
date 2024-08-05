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
    // vIndex: 0
    virtual ~PublisherDisconnector() = default;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
