#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

class PublisherDisconnector {

public:
    // prevent constructor by default
    PublisherDisconnector& operator=(PublisherDisconnector const&) = delete;
    PublisherDisconnector(PublisherDisconnector const&)            = delete;
    PublisherDisconnector()                                        = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_PUBSUB_DETAIL_PUBLISHERDISCONNECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PublisherDisconnector();
#endif
    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
