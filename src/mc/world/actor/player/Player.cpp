#include "mc/world/actor/player/Player.h"

#include "ll/api/service/Bedrock.h"

#include "mc/certificates/WebToken.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
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
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/actor/player/PlayerInventory.h"
#include "mc/world/actor/provider/SynchedActorDataAccess.h"
#include "mc/world/level/storage/AdventureSettings.h"

UserEntityIdentifierComponent const& Player::getUserEntityIdentifier() const {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

UserEntityIdentifierComponent& Player::getUserEntityIdentifier() {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

optional_ref<ConnectionRequest const> Player::getConnectionRequest() const {
    if (isSimulated()) {
        return std::nullopt;
    }
    auto handler = ll::service::getServerNetworkHandler();
    if (!handler) {
        return std::nullopt;
    }
    auto& clients = *handler->mClients;
    auto  pos     = clients.find(getNetworkIdentifier());
    if (pos != clients.end()) {
        return pos->second->mPrimaryRequest.get();
    }
    return std::nullopt;
}

NetworkIdentifier const& Player::getNetworkIdentifier() const { return getUserEntityIdentifier().mNetworkId; }

optional_ref<Certificate const> Player::getCertificate() const {
    return getUserEntityIdentifier().mGameServerToken->mCertificate.get();
}

SubClientId const& Player::getClientSubId() const { return getUserEntityIdentifier().mClientSubId; }

int Player::getSelectedItemSlot() const { return mInventory->mSelected; }

mce::UUID const& Player::getUuid() const { return getUserEntityIdentifier().mClientUUID; }

std::string Player::getIPAndPort() const { return getNetworkIdentifier().getIPAndPort(); }

std::string Player::getLocaleCode() const {
    if (auto request = getConnectionRequest()) {
        return std::as_const(request->mRawToken->mDataInfo)["LanguageCode"].asString({});
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
        .and_then([&](UserEntityIdentifierComponent const& identifier) {
            return optional_ref{identifier.mGameServerToken};
        })
        .transform([](GameServerToken const& token) { return token.getIdentityName(); })
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
    auto  flying    = abilities.getAbility(AbilitiesIndex::Flying).mValue->mBoolVal;
    if (index == AbilitiesIndex::Flying && value && isOnGround()) {
        abilities.setAbility(AbilitiesIndex::MayFly, value);
    }
    if (index == AbilitiesIndex::MayFly && !value && flying) {
        abilities.setAbility(AbilitiesIndex::Flying, false);
    }
    abilities.setAbility(index, value);
    auto mayfly = abilities.getAbility(AbilitiesIndex::MayFly).mValue->mBoolVal;
    auto noclip = abilities.getAbility(AbilitiesIndex::NoClip).mValue->mBoolVal;
    SynchedActorDataAccess::setActorFlag(getEntityContext(), ActorFlags::Canfly, mayfly || noclip);
    if (index == AbilitiesIndex::NoClip) {
        abilities.setAbility(AbilitiesIndex::Flying, value);
    }
    flying = abilities.getAbility(AbilitiesIndex::Flying).mValue->mBoolVal;
    abilities.getAbility(AbilitiesLayer::Base, AbilitiesIndex::Flying).mValue->mBoolVal = flying;
    UpdateAbilitiesPacket{getOrCreateUniqueID(), abilities}.sendTo(*this);
    abilities.setAbility(AbilitiesIndex::Flying, flying);
    UpdateAdventureSettingsPacket{getLevel().getAdventureSettings()}.sendTo(*this);
}

bool Player::isOperator() const {
    return getAbilities().mPermissions->mPlayerPermissions == PlayerPermissionLevel::Operator;
}

bool Player::addAndRefresh(class ItemStack& item) {
    auto rtn = add(item);
    refreshInventory();
    return rtn;
}

optional_ref<EnderChestContainer> Player::getEnderChestContainer() const { return mEnderChestInventory.get(); }
