#include "ll/core/protocol/ServerProtocolRuntime.h"

#include "ll/core/protocol/ProtocolRuntime.h"
#include "ll/core/protocol/ServerEndpoint.h"
#include "ll/core/protocol/ServerLoginIntegration.h"

namespace ll::protocol::server {

Expected<> initialize() {
    if (auto initialized = initializeRuntime(); !initialized) {
        return initialized;
    }

    if (auto initialized = initializeServerEndpoint(); !initialized) {
        return initialized;
    }

    if (auto initialized = initializeLoginIntegration(); !initialized) {
        shutdownServerEndpoint();
        return initialized;
    }

    return {};
}

void shutdown() {
    shutdownLoginIntegration();
    shutdownServerEndpoint();
}

} // namespace ll::protocol::server
