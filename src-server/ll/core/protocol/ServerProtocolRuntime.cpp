#include "ll/core/protocol/ServerProtocolRuntime.h"

#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/core/protocol/ModLifecycleIntegration.h"
#include "ll/core/protocol/ProtocolRuntime.h"
#include "ll/core/protocol/ServerEndpoint.h"
#include "ll/core/protocol/ServerLoginIntegration.h"

namespace ll::protocol::detail {

void registerServerLifecycleHooks();
void registerServerLoginHooks();

} // namespace ll::protocol::detail

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

    if (auto initialized = initializeModLifecycleIntegration(
            [] {
                detail::getServerLoginIntegration().closeAll();
                if (auto endpoint = detail::getServerEndpoint()) {
                    endpoint->invalidateSessions(ProtocolCloseReason::RegistryChanged);
                }
            },
            [](std::function<void()> task) { thread::ServerThreadExecutor::getDefault().execute(std::move(task)); }
        );
        !initialized) {
        shutdownLoginIntegration();
        shutdownServerEndpoint();
        return initialized;
    }

    detail::registerServerLifecycleHooks();
    detail::registerServerLoginHooks();

    return {};
}

void shutdown() {
    shutdownModLifecycleIntegration();
    shutdownLoginIntegration();
    shutdownServerEndpoint();
}

} // namespace ll::protocol::server
