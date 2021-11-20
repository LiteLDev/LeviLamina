#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>

#include <MC/ServerPlayer.hpp>
#include <MC/Certificate.hpp>
#include <MC/ExtendedCertificate.hpp>

UserEntityIdentifierComponent* Player::getUserEntityIdentifierComponent() {
    return ((Mob*)(Mob*)this)->getUserEntityIdentifierComponent();
}

NetworkIdentifier* Player::getNetworkIdentifier(){
    return (NetworkIdentifier*)(this->getUserEntityIdentifierComponent());
}

Certificate* Player::getCert() {
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return dAccess<Certificate*, 184>(ueic);
    }
    return nullptr;
}


std::string Player::getRealName() {
    return ExtendedCertificate::getIdentityName(*this->getCert());
}

#include <MC/NetworkIdentifier.hpp>
#include <MC/NetworkPeer.hpp>
#include <MC/NetworkHandler.hpp>
#include <MC/Minecraft.hpp>
int Player::getAvgPing() {
    return Global<Minecraft>()->getNetworkHandler().getPeerForUser(*this->getNetworkIdentifier())->getNetworkStatus().avgping;
}
int Player::getLastPing() {
    return Global<Minecraft>()->getNetworkHandler().getPeerForUser(*this->getNetworkIdentifier())->getNetworkStatus().ping;
}