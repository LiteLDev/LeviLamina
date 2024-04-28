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

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt) {
    if (!ll::service::getLevel()) {
        return nullptr;
    }
    DefaultDataLoadHelper dataLoadHelper{};
    return loadStatic(ll::service::getLevel(), nbt, dataLoadHelper);
}

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt, class BlockPos const& pos) {
    auto b = create(nbt);
    if (b != nullptr) {
        b->moveTo(pos);
    }
    return b;
}
