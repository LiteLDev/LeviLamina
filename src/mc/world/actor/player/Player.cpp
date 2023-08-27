#include "mc/world/actor/player/Player.h"

#include "mc/server/volume/UserEntityIdentifierComponent.h"

#include "mc/certificates/ExtendedCertificate.h"
#include "mc/certificates/WebToken.h"

#include "mc/world/Minecraft.h"
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

int Player::getAvgPing() const {
    if (isSimulatedPlayer()) {
        return -1;
    }
    auto networkIdentifier = getNetworkIdentifier();

    if (!networkIdentifier) {
        return -1;
    }

    return Global<Minecraft>->getNetworkSystem().getPeerForUser(*networkIdentifier)->getNetworkStatus().mAveragePing;
}

int Player::getLastPing() const {
    if (isSimulatedPlayer()) {
        return -1;
    }
    auto networkIdentifier = getNetworkIdentifier();

    if (!networkIdentifier) {
        return -1;
    }

    return Global<Minecraft>->getNetworkSystem().getPeerForUser(*networkIdentifier)->getNetworkStatus().mCurrentPing;
}

std::string Player::getIPAndPort() const {
    if (isSimulatedPlayer()) {
        return "127.0.0.1:0";
    }
    auto networkIdentifier = getNetworkIdentifier();

    if (!networkIdentifier) {
        return "127.0.0.1:0";
    }
    return networkIdentifier->getIPAndPort();
}
