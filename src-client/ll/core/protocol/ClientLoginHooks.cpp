#include "ll/core/protocol/ClientLoginIntegration.h"

#include "ll/api/memory/Hook.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/network/ClientNetworkHandler.h"
#include "mc/network/packet/PlayStatusPacket.h"

namespace ll::protocol::detail {

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientLoginTimeoutHook,
    HookPriority::Highest,
    ClientInstance,
    &ClientInstance::$update,
    bool,
    bool isInitFinished
) {
    getClientLoginIntegration().pollTimeouts(*this);
    return origin(isInitFinished);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientPlayStatusHook,
    HookPriority::Highest,
    ClientNetworkHandler,
    &ClientNetworkHandler::$handle,
    void,
    NetworkIdentifier const& id,
    PlayStatusPacket const&  packet
) {
    auto const subClientId = static_cast<std::uint8_t>(packet.mSenderSubId);

    auto disposition = getClientLoginIntegration().beforePlayStatus(id, subClientId, packet.mStatus);
    switch (disposition) {
    case ClientLoginIntegration::LoginSuccessDisposition::ContinueVanilla:
        origin(id, packet);
        return;
    case ClientLoginIntegration::LoginSuccessDisposition::ActivateAfterOrigin:
        origin(id, packet);
        if (!getClientLoginIntegration().completeLoginSuccess(id, subClientId)) {
            _disconnectFromServer(id);
        }

        return;
    case ClientLoginIntegration::LoginSuccessDisposition::Reject:
        _disconnectFromServer(id);
        return;
    }
}

} // namespace ll::protocol::detail
