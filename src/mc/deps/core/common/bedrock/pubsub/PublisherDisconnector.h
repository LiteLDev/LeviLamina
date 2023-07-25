#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

class PublisherDisconnector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_DETAIL_PUBLISHERDISCONNECTOR
public:
    PublisherDisconnector& operator=(PublisherDisconnector const&) = delete;
    PublisherDisconnector(PublisherDisconnector const&)            = delete;
    PublisherDisconnector()                                        = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_PUBSUB_DETAIL_PUBLISHERDISCONNECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PublisherDisconnector();
#endif
};

}; // namespace Bedrock::PubSub::Detail
