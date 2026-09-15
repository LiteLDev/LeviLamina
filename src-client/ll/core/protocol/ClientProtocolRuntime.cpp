#include "ll/core/protocol/ClientProtocolRuntime.h"

#include "ll/api/thread/ClientThreadExecutor.h"
#include "ll/core/protocol/ClientEndpoint.h"
#include "ll/core/protocol/ClientLoginIntegration.h"
#include "ll/core/protocol/ModLifecycleIntegration.h"
#include "ll/core/protocol/ProtocolRuntime.h"

namespace ll::protocol::detail {

void registerClientDataHook();
void registerClientLifecycleHooks();
void registerClientLoginHooks();

} // namespace ll::protocol::detail

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

    if (auto initialized = initializeModLifecycleIntegration(
            [] {
                detail::getClientLoginIntegration().closeAll();
                if (auto endpoint = detail::getClientEndpoint()) {
                    endpoint->invalidateSessions(ProtocolCloseReason::RegistryChanged);
                }
            },
            [](std::function<void()> task) { thread::ClientThreadExecutor::getDefault().execute(std::move(task)); }
        );
        !initialized) {
        shutdownLoginIntegration();
        shutdownClientEndpoint();
        return initialized;
    }

    detail::registerClientDataHook();
    detail::registerClientLifecycleHooks();
    detail::registerClientLoginHooks();

    return {};
}

void shutdown() {
    shutdownModLifecycleIntegration();
    shutdownLoginIntegration();
    shutdownClientEndpoint();
}

} // namespace ll::protocol::client
