#include "mc/world/level/block/actor/BlockActor.h"

#include "mc/dataloadhelper/DefaultDataLoadHelper.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/packet/BlockActorDataPacket.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"
#include "mc/world/level/dimension/Dimension.h"

#include "ll/api/service/Bedrock.h"

void BlockActor::refresh(optional_ref<class BlockSource> blockSource) {
    setChanged();
    if (!blockSource) {
        return;
    }
    auto& dimension = blockSource->getDimension();

    auto mainPacket{getServerUpdatePacket(blockSource)};

    if (mainPacket != nullptr) {
        dimension.sendPacketForPosition(getPosition(), *mainPacket, nullptr);
    }
    if (getType() != BlockActorType::Chest) {
        return;
    }
    auto chest = (ChestBlockActor*)(this);

    if (!chest->isLargeChest()) {
        return;
    }
    auto pairChest = blockSource->getBlockEntity(chest->getPairedChestPosition());

    if (pairChest == nullptr) {
        return;
    }
    auto subPacket{pairChest->getServerUpdatePacket(blockSource)};

    if (subPacket != nullptr) {
        dimension.sendPacketForPosition(pairChest->getPosition(), *subPacket, nullptr);
    }
}

std::unique_ptr<class CompoundTag> BlockActor::saveToNbt() const {
    auto res = std::make_unique<CompoundTag>();
    if (save(*res)) {
        return res;
    }
    return nullptr;
}

void BlockActor::loadFromNbt(class CompoundTag const& nbt, optional_ref<class BlockSource> blockSource) {
    if (!ll::service::getLevel()) {
        return;
    }
    load(ll::service::getLevel(), nbt, defaultDataLoadHelper);
    refresh(blockSource);
}

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt) {
    if (!ll::service::getLevel()) {
        return nullptr;
    }
    return loadStatic(ll::service::getLevel(), nbt, defaultDataLoadHelper);
}

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt, class BlockPos const& pos) {
    auto b = create(nbt);
    if (b != nullptr) {
        b->moveTo(pos);
    }
    return b;
}
