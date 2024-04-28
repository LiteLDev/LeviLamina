#include "mc/world/actor/player/Player.h"

#include "ll/api/memory/Memory.h"
#include "ll/api/service/Bedrock.h"

#include "mc/certificates/ExtendedCertificate.h"
#include "mc/certificates/WebToken.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/locale/I18n.h"
#include "mc/locale/Localization.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/MinecraftPackets.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/TextPacket.h"
#include "mc/network/packet/UpdateAbilitiesPacket.h"
#include "mc/network/packet/UpdateAdventureSettingsPacket.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/AdventureSettings.h"
#include "mc/world/level/LayeredAbilities.h"


UserEntityIdentifierComponent const& Player::getUserEntityIdentifier() const {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

UserEntityIdentifierComponent& Player::getUserEntityIdentifier() {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

optional_ref<ConnectionRequest const> Player::getConnectionRequest() const {
    if (isSimulatedPlayer()) {
        return std::nullopt;
    }
    return ll::service::getServerNetworkHandler()->fetchConnectionRequest(getNetworkIdentifier());
}

NetworkIdentifier const& Player::getNetworkIdentifier() const { return getUserEntityIdentifier().mNetworkId; }

optional_ref<Certificate const> Player::getCertificate() const { return getUserEntityIdentifier().mCertificate.get(); }

SubClientId const& Player::getClientSubId() const { return getUserEntityIdentifier().mClientSubId; }

mce::UUID const& Player::getUuid() const { return getUserEntityIdentifier().mClientUUID; }

std::string Player::getIPAndPort() const { return getNetworkIdentifier().getIPAndPort(); }

bool Player::isOperator() const { return getPlayerPermissionLevel() == PlayerPermissionLevel::Operator; }

std::string Player::getLocaleName() const {
    if (auto request = getConnectionRequest()) {
        return request->mRawToken->mDataInfo["LanguageCode"].asString({});
    }
    return {};
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    if (!ll::service::getNetworkSystem()) {
        return std::nullopt;
    }
    auto peer = ll::service::getNetworkSystem()->getPeerForUser(getNetworkIdentifier());
    if (!peer) {
        return std::nullopt;
    }
    return peer->getNetworkStatus();
}

std::string Player::getRealName() const {
    std::string res;
    auto        certificate = getCertificate();
    if (certificate) {
        res = ExtendedCertificate::getIdentityName(*certificate);
    }
    if (res.empty()) res = getName();
    return res;
}

void Player::disconnect(std::string_view reason) const {
    if (!ll::service::getServerNetworkHandler()) {
        return;
    }
    ll::service::getServerNetworkHandler()->disconnectClient(
        getNetworkIdentifier(),
        Connection::DisconnectFailReason::Unknown,
        std::string{reason},
        false
    );
}

void Player::sendMessage(std::string_view msg) const { TextPacket::createRawMessage(msg).sendTo(*this); }

LLAPI void Player::setAbility(::AbilitiesIndex index, bool value) {
    auto& abilities = getAbilities();
    auto  flying    = abilities.getAbility(AbilitiesIndex::Flying).getBool();
    if (index == AbilitiesIndex::Flying && value && isOnGround()) {
        abilities.setAbility(AbilitiesIndex::MayFly, value);
    }
    if (index == AbilitiesIndex::MayFly && !value && flying) {
        abilities.setAbility(AbilitiesIndex::Flying, false);
    }
    abilities.setAbility(index, value);
    auto mayfly = abilities.getAbility(AbilitiesIndex::MayFly).getBool();
    auto noclip = abilities.getAbility(AbilitiesIndex::NoClip).getBool();
    setCanFly(mayfly || noclip);
    if (index == AbilitiesIndex::NoClip) {
        abilities.setAbility(AbilitiesIndex::Flying, value);
    }
    flying = abilities.getAbility(AbilitiesIndex::Flying).getBool();
    abilities.getAbility(AbilitiesLayer::Base, AbilitiesIndex::Flying).setBool(flying);
    UpdateAbilitiesPacket{getOrCreateUniqueID(), abilities}.sendTo(*this);
    abilities.setAbility(AbilitiesIndex::Flying, flying);
    UpdateAdventureSettingsPacket{}.sendTo(*this);
}

bool Player::addAndRefresh(class ItemStack& item) {
    auto rtn = add(item);
    refreshInventory();
    return rtn;
}


optional_ref<EnderChestContainer> Player::getEnderChestContainer() {
    return ll::memory::dAccess<EnderChestContainer*>(this, sizeof(Actor) + 2072);
    // ida: Player::Player : EnderChestContainer::EnderChestContainer
}

optional_ref<EnderChestContainer const> Player::getEnderChestContainer() const {
    return const_cast<Player*>(this)->getEnderChestContainer();
}
