#include "mc/world/actor/player/Player.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/server/volume/UserEntityIdentifierComponent.h"

#include "mc/certificates/ExtendedCertificate.h"
#include "mc/certificates/WebToken.h"

#include "mc/world/Minecraft.h"
#include "mc/world/level/Level.h"
#include "mc/world/systems/NetworkSystem.h"

#include "mc/network/ConnectionRequest.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/ServerNetworkHandler.h"

#include "mc/locale/I18n.h"
#include "mc/locale/Localization.h"

#include "liteloader/api/GlobalServiceAPI.h"


optional_ref<NetworkIdentifier> Player::getNetworkIdentifier() const {
    auto* ueic = const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>();
    if (ueic) {
        return ueic->mNetworkId;
    }
    return nullptr;
}

optional_ref<Certificate> Player::getCertificate() const {
    auto* ueic = const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>();
    if (ueic) {
        return ueic->mCertificate.get();
    }
    return nullptr;
}

std::string Player::getRealName() const {
    if (isSimulatedPlayer()) {
        return getName();
    }

    auto certificate = getCertificate();
    if (!certificate) {
        return getName();
    }

    return ExtendedCertificate::getIdentityName(*certificate);
}

std::string Player::getUuid() const {
    auto ueic = const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>();
    if (!ueic) {
        return "";
    }
    return ueic->mClientUUID.asString();
}

std::optional<std::string> Player::getIPAndPort() const {

    if (isSimulatedPlayer()) {
        return std::nullopt;
    }

    auto networkIdentifier = getNetworkIdentifier();
    if (!networkIdentifier) {
        return std::nullopt;
    }

    return networkIdentifier->getIPAndPort();
}

std::optional<std::string> Player::getDeviceId() const {
    if (isSimulatedPlayer()) {
        return std::nullopt;
    }

    auto networkIdentifier = getNetworkIdentifier();
    if (!networkIdentifier) {
        return std::nullopt;
    }

    return Global<ServerNetworkHandler>->fetchConnectionRequest(*networkIdentifier).getDeviceId();
}

std::optional<SubClientId> Player::getClientSubId() const {
    auto ueic = const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>();
    if (!ueic) {
        return std::nullopt;
    }
    return ueic->mClientSubId;
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    if (isSimulatedPlayer()) {
        return std::nullopt;
    }

    auto networkIdentifier = getNetworkIdentifier();
    if (!networkIdentifier) {
        return std::nullopt;
    }

    auto peer = Global<Minecraft>->getNetworkSystem().getPeerForUser(*networkIdentifier);
    if (!peer) {
        return std::nullopt;
    }

    return peer->getNetworkStatus();
}
