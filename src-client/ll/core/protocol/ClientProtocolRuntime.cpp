#include "ll/core/protocol/ClientProtocolRuntime.h"

#include "ll/core/protocol/ClientEndpoint.h"
#include "ll/core/protocol/ClientLoginIntegration.h"
#include "ll/core/protocol/ProtocolRuntime.h"

namespace ll::protocol::client {

Expected<> initialize() {
    if (auto initialized = initializeRuntime(); !initialized) {
        return initialized;
    }

    if (auto initialized = initializeClientEndpoint(); !initialized) {
        return initialized;
    }

    if (auto initialized = initializeLoginIntegration(); !initialized) {
        shutdownClientEndpoint();
        return initialized;
    }

    return {};
}

void shutdown() {
    shutdownLoginIntegration();
    shutdownClientEndpoint();
}

} // namespace ll::protocol::client
