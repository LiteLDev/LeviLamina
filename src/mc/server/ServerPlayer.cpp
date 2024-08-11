
#include "mc/certificates/ExtendedCertificate.h"

#include "ll/api/service/Bedrock.h"

#include "mc/certificates/WebToken.h"
#include "mc/locale/I18n.h"
#include "mc/locale/Localization.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/MinecraftPackets.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/Minecraft.h"

UserEntityIdentifierComponent const& ServerPlayer::getUserEntityIdentifier() const {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

UserEntityIdentifierComponent& ServerPlayer::getUserEntityIdentifier() {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

optional_ref<ConnectionRequest const> ServerPlayer::getConnectionRequest() const {
    if (isSimulatedPlayer()) {
        return std::nullopt;
    }
    return ll::service::getServerNetworkHandler().transform([&](auto& handler) {
        return handler.fetchConnectionRequest(getNetworkIdentifier());
    });
}

NetworkIdentifier const& ServerPlayer::getNetworkIdentifier() const { return getUserEntityIdentifier().mNetworkId; }

optional_ref<Certificate const> ServerPlayer::getCertificate() const {
    return getUserEntityIdentifier().mCertificate.get();
}

SubClientId const& ServerPlayer::getClientSubId() const { return getUserEntityIdentifier().mClientSubId; }

mce::UUID const& ServerPlayer::getUuid() const { return getUserEntityIdentifier().mClientUUID; }

std::string ServerPlayer::getIPAndPort() const { return getNetworkIdentifier().getIPAndPort(); }

std::string ServerPlayer::getLocaleCode() const {
    if (auto request = getConnectionRequest()) {
        return request->mRawToken->mDataInfo["LanguageCode"].asString({});
    }
    return {};
}

std::optional<NetworkPeer::NetworkStatus> ServerPlayer::getNetworkStatus() const {
    return ll::service::getNetworkSystem()
        .and_then([&](auto& system) { return optional_ref{system.getPeerForUser(getNetworkIdentifier())}; })
        .and_then([&](auto& peer) { return peer.getNetworkStatus(); });
}

void ServerPlayer::disconnect(std::string_view reason) const {
    ll::service::getServerNetworkHandler().transform([&](auto& handler) {
        handler.disconnectClient(
            getNetworkIdentifier(),
            Connection::DisconnectFailReason::Unknown,
            std::string{reason},
            false
        );
        return true;
    });
}
