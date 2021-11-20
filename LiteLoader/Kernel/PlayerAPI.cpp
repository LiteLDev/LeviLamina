#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>

#include <MC/ServerPlayer.hpp>
#include <MC/Certificate.hpp>
#include <MC/ExtendedCertificate.hpp>

LIAPI UserEntityIdentifierComponent* Player::getUserEntityIdentifierComponent() {
    return ((Mob*)(Mob*)this)->getUserEntityIdentifierComponent();
}

LIAPI NetworkIdentifier* Player::getNetworkIdentifier(){
    return (NetworkIdentifier*)(this->getUserEntityIdentifierComponent());
}

LIAPI Certificate* Player::getCert() {
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return dAccess<Certificate*, 184>(ueic);
    }
    return nullptr;
}


LIAPI std::string Player::getRealName() {
    return ExtendedCertificate::getIdentityName(*this->getCert());
}
