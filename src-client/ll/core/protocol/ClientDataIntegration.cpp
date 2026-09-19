#include "ll/core/protocol/ClientDataIntegration.h"

#include "ll/api/Versions.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/protocol/Discovery.h"

#include "mc/network/BaseConnectionRequest.h"

namespace ll::protocol::detail {

Expected<> addClientDiscoveryMarker(Json::Value& root) {
    if (!ll::getLeviConfig().targeted.protocol.enabled) return {};

    auto version = ll::getLoaderVersion();
    auto build   = version.build.value_or("release");

    return injectDiscoveryMarker(root, version.to_string(), build);
}

LL_TYPE_STATIC_HOOK(
    ProtocolClientDataMarkerHook,
    HookPriority::Highest,
    BaseConnectionRequest,
    &BaseConnectionRequest::_fillPersonaJson,
    void,
    Json::Value&              root,
    ConnectionSkinInfo const& skinInfo
) {
    if (auto marker = addClientDiscoveryMarker(root); !marker) {
        marker.error().log(ll::getLogger());
    }
    origin(root, skinInfo);
}

void registerClientDataHook() { static memory::HookRegistrar<ProtocolClientDataMarkerHook> hook; }

} // namespace ll::protocol::detail
