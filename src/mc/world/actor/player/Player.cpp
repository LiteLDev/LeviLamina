#include "mc/world/actor/player/Player.h"

#include "ll/api/service/Bedrock.h"

#include "mc/deps/certificates/WebToken.h"
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/editor/Mode.h"
#include "mc/editor/PlayerHelpers.h"
#include "mc/editor/serviceproviders/ModeServiceProvider.h"
#include "mc/entity/components/AttributesComponent.h"
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
#include "mc/world/actor/player/Inventory.h"
#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/actor/player/PlayerInventory.h"
#include "mc/world/actor/provider/SynchedActorDataAccess.h"
#include "mc/world/attribute/AttributeInstance.h"
#include "mc/world/attribute/AttributeInstanceConstRef.h"


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

SubClientId const& Player::getClientSubId() const { return getUserEntityIdentifier().mClientSubId; }

int Player::getSelectedItemSlot() const { return mInventory->mSelected; }

mce::UUID const& Player::getUuid() const { return getUserEntityIdentifier().mClientUUID; }

std::string Player::getIPAndPort() const { return getNetworkIdentifier().getIPAndPort(); }

std::string Player::getLocaleCode() const {
    return getConnectionRequest().and_then([](auto& request) {
        return std::as_const(request.mRawToken->mDataInfo)["LanguageCode"].asString({});
    });
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    return ll::service::getNetworkSystem()
        .transform([&](auto& system) { return system.getPeerForUser(getNetworkIdentifier()); })
        .transform([](auto& peer) { return peer.getNetworkStatus(); });
}

std::string Player::getRealName() const {
    return isSimulated() ? *mName : *getUserEntityIdentifier().mTrustedPlayerInfo->XboxLiveName;
}

void Player::disconnect(std::string_view reason) const {
    ll::service::getServerNetworkHandler().and_then([&](auto& handler) {
        handler.disconnectClientWithMessage(
            getNetworkIdentifier(),
            getClientSubId(),
            Connection::DisconnectFailReason::Unknown,
            std::string{reason},
            std::nullopt
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
    return getAbilities().mPermissions->mCommandPermissions >= CommandPermissionLevel::GameDirectors;
}

bool Player::addAndRefresh(class ItemStack& item) {
    auto rtn = add(item);
    refreshInventory();
    return rtn;
}

optional_ref<EnderChestContainer> Player::getEnderChestContainer() const { return mEnderChestInventory.get(); }

Inventory& Player::getInventory() const { return *mInventory->mInventory; }

Player* Player::tryGetFromEntity(EntityContext& entity, bool includeRemoved) {
    if (entity.hasComponent<PlayerComponent>()) {
        if (auto* player = static_cast<Player*>(Actor::tryGetFromEntity(entity, includeRemoved))) {
            return player;
        }
    }
    return nullptr;
}

ItemStack const& Player::getSelectedItem() const {
    if (mInventory->mSelectedContainerId != ContainerID::Inventory) {
        return ItemStack::EMPTY_ITEM();
    }
    return mInventory->mInventory->getItem(getSelectedItemSlot());
}

void Player::setSelectedItem(::ItemStack const& item) const {
    if (mInventory->mSelectedContainerId == ContainerID::Inventory) {
        mInventory->mInventory->setItem(getSelectedItemSlot(), item);
    }
}

bool Player::canSleep() const {
    bool editorCanSleep = true;
    if (auto modeProvider = Editor::PlayerHelpers::_getModeServiceConst(*this)) {
        if (modeProvider->getMode() != Editor::Mode::Disabled) {
            editorCanSleep = false;
        }
    }
    return !isSpectator() && isAlive() && editorCanSleep;
}

bool Player::isHungry() const {
    if (auto at = getAttribute(HUNGER()).mPtr) {
        return at->mCurrentMaxValue > at->mCurrentMaxValue;
    }
    return false;
}

int Player::getXpNeededForNextLevel() {
    if (!mPlayerLevelChanged) return mPreviousLevelRequirement;

    auto attr = getAttribute(Player::LEVEL());

    int const level = static_cast<int>(attr.mPtr->mCurrentValue);

    int result;
    if (level < 15) result = 2 * level + 7;
    else if (level < 30) result = 5 * level - 38;
    else result = 9 * level - 158;

    mPlayerLevelChanged       = false;
    mPreviousLevelRequirement = result;

    return result;
}

int Player::getPreviousLevelRequirement() {
    if (mPlayerLevelChanged) {
        int level = static_cast<int>(getAttribute(Player::LEVEL()).mPtr->mCurrentValue);
        if (level >= 30) {
            mPreviousLevelRequirement = 9 * level - 158;
        } else if (level >= 15) {
            mPreviousLevelRequirement = 5 * level - 38;
        } else {
            mPreviousLevelRequirement = 2 * level + 7;
        }
        mPlayerLevelChanged = false;
    }
    return mPreviousLevelRequirement;
}

int Player::getXpEarnedAtCurrentLevel() {
    int  prevLevelReq = getPreviousLevelRequirement();
    auto attribute    = getAttribute(Player::EXPERIENCE());
    return static_cast<int>(roundf(attribute.mPtr->mCurrentValue * static_cast<float>(prevLevelReq)));
}

bool Player::setXpEarnedAtCurrentLevel(int xp) {
    if (auto component = getEntityContext().tryGetComponent<AttributesComponent>()) {
        int prevLevelReq = getPreviousLevelRequirement();
        return component->mAttributes->setCurrentValue(
            Player::EXPERIENCE(),
            static_cast<float>(xp) / static_cast<float>(prevLevelReq)
        );
    }
    return false;
}

long long Player::getXpNeededForLevelRange(int startLevel, int endLevel) {
    long long result = 0;

    for (; startLevel < endLevel; ++startLevel) {
        if (startLevel < 15) {
            result += 2 * startLevel + 7;
        } else if (startLevel < 30) {
            result += 5 * startLevel - 38;
        } else {
            result += 9 * startLevel - 158;
        }
    }

    return result;
}
