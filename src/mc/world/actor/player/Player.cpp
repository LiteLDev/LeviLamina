#include "mc/world/actor/player/Player.h"

#include "ll/api/memory/Memory.h"

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


std::string Player::getRealName() const {
    return getEntityContext()
        .tryGetComponent<UserEntityIdentifierComponent>()
        .and_then([&](auto& identifier) { return optional_ref{identifier.mCertificate.get()}; })
        .transform([](auto& certificate) { return ExtendedCertificate::getIdentityName(certificate); })
        .value_or(getName());
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
