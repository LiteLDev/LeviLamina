#include "mc/world/actor/player/Player.h"

#include "ll/api/service/Bedrock.h"

#include "mc/certificates/WebToken.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/json/Value.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/TextPacket.h"
#include "mc/network/packet/UpdateAbilitiesPacket.h"
#include "mc/network/packet/UpdateAdventureSettingsPacket.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/Minecraft.h"
#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/level/storage/AdventureSettings.h"

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

std::string Player::getLocaleCode() const {
    if (auto request = getConnectionRequest()) {
        return request->mRawToken->mDataInfo["LanguageCode"].asString({});
    }
    return {};
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    return ll::service::getNetworkSystem()
        .transform([&](auto& system) { return system.getPeerForUser(getNetworkIdentifier()); })
        .transform([](auto& peer) { return peer.getNetworkStatus(); });
}

std::string Player::getRealName() const {
    return getEntityContext()
        .tryGetComponent<UserEntityIdentifierComponent>()
        .and_then([&](auto& identifier) { return optional_ref{identifier.mGameServerToken}; })
        .transform([](auto& token) { return token.getIdentityName(); })
        .value_or(*mName);
}

void Player::disconnect(std::string_view reason) const {
    ll::service::getServerNetworkHandler().and_then([&](auto& handler) {
        handler.disconnectClient(
            getNetworkIdentifier(),
            Connection::DisconnectFailReason::Unknown,
            std::string{reason},
            std::nullopt,
            false
        );
        return true;
    });
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

bool Player::isOperator() const { return getPlayerPermissionLevel() == PlayerPermissionLevel::Operator; }

bool Player::addAndRefresh(class ItemStack& item) {
    auto rtn = add(item);
    refreshInventory();
    return rtn;
}

optional_ref<EnderChestContainer> Player::getEnderChestContainer() const { return mEnderChestInventory.get(); }
