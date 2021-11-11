#include <PlayerAPI.h>
#include <MCApi/Actor.hpp>
#include <MCApi/ServerPlayer.hpp>
#include <MCApi/Certificate.hpp>
#include <MCApi/ExtendedCertificate.hpp>

LIAPI UserEntityIdentifierComponent* PlayerObj::getUserEntityIdentifierComponent() {
    return ((MobObj*)(Mob*)this)->getUserEntityIdentifierComponent();
}

LIAPI NetworkIdentifier* PlayerObj::getNetworkIdentifier(){
    return (NetworkIdentifier*)(this->getUserEntityIdentifierComponent());
}

LIAPI Certificate* PlayerObj::getCert() {
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return dAccess<Certificate*, 184>(ueic);
    }
    return nullptr;
}

LIAPI xuid_t PlayerObj::getXUID() {
    std::string xuidstr = ExtendedCertificate::getXuid(*this->getCert());
    if (xuidstr != "") {
        return std::stoull(xuidstr);
    } else {
        return 0;
    }
}

LIAPI std::string PlayerObj::getStringXUID() {
    return ExtendedCertificate::getXuid(*this->getCert());
}

LIAPI std::string PlayerObj::getRealName() {
    return ExtendedCertificate::getIdentityName(*this->getCert());
}