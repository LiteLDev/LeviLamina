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
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*this->getNetworkIdentifier())->getNetworkStatus().avgping;
}

int Player::getLastPing() {
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*this->getNetworkIdentifier())->getNetworkStatus().ping;
}

#include<EventAPI.h>
string Player::getLanguageCode() {
    for (auto& [i, j] : PlayerJoinData) {
        if (i == this->getRealName())
            if (j.first == "LanguageCode") {
                return j.second;
            }
    }
    return "unkown";
}

string Player::getDeviceName() {
    switch ((int)this->getPlatform()) {
        case -1:
            return u8"§2unkown";
        case 1:
            return u8"§b安卓";
        case 2:
            return u8"§diOS";
        case 3:
            return u8"§eOSX";
        case 4:
            return u8"§eAmazon";
        case 5:
            return u8"§eGearVR";
        case 6:
            return u8"§eHololens";
        case 7:
            return u8"§eWin10";
        case 8:
            return u8"§eWIN32";
        case 9:
            return u8"§eDedicated";
        case 10:
            return u8"§eTVOS";
        case 11:
            return u8"§ePlayStation";
        case 12:
            return u8"§eNintendo";
        case 13:
            return u8"§eXbox";
        case 14:
            return u8"§eWwindowsPhone";
        default:
            return u8"§2unkown";
    }
}

