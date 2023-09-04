#include "mc/world/level/block/actor/BlockActor.h"
#include "liteloader/api/GlobalServiceAPI.h"
#include "mc/dataloadhelper/DefaultDataLoadHelper.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/packet/BlockActorDataPacket.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"
#include "mc/world/level/dimension/Dimension.h"

void BlockActor::refresh(optional_ref<class BlockSource> blockSourceRef) {
    setChanged();
    if (!blockSourceRef.has_value()) {
        return;
    }
    auto& blockSource{blockSourceRef.get()};

    auto& dimension = blockSource.getDimension();

    auto mainPacket{getServerUpdatePacket(blockSource)};

    if (mainPacket != nullptr) {
        dimension.sendPacketForPosition(getPosition(), *mainPacket, nullptr);
    }

    if (getType() != BlockActorType::Chest) {
        return;
    }

    auto chest = dynamic_cast<ChestBlockActor*>(this);

    if (chest == nullptr || !chest->isLargeChest()) {
        return;
    }
    auto pairChest = blockSource.getBlockEntity(chest->getPairedChestPosition());

    if (pairChest == nullptr) {
        return;
    }

    auto subPacket{pairChest->getServerUpdatePacket(blockSource)};

    if (subPacket != nullptr) {
        dimension.sendPacketForPosition(pairChest->getPosition(), *subPacket, nullptr);
    }
}

std::unique_ptr<class CompoundTag> BlockActor::saveToNBT() const {
    auto res = std::make_unique<CompoundTag>();

    bool success = save(*res);

    if (success) {
        return res;
    }
    return nullptr;
}

void BlockActor::loadFromNBT(class CompoundTag const& nbt, optional_ref<class BlockSource> blockSource) {
    load(*Global<Level>, nbt, DefaultDataLoadHelper::globalHelper);
    refresh(blockSource);
}

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt) {
    return loadStatic(*Global<Level>, nbt, DefaultDataLoadHelper::globalHelper);
}

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt, class BlockPos const& pos) {
    auto b = create(nbt);
    if (b != nullptr) {
        b->moveTo(pos);
    }
    return b;
}