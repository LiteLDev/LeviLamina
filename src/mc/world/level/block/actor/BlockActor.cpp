#include "mc/world/level/block/actor/BlockActor.h"

#include "mc/dataloadhelper/NewUniqueIdsDataLoadHelper.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/packet/BlockActorDataPacket.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"
#include "mc/world/level/dimension/Dimension.h"

#include "ll/api/service/Bedrock.h"

void BlockActor::refresh(optional_ref<class BlockSource> blockSource) {
    mChanged = true;
    if (!blockSource) {
        return;
    }
    auto& dimension = blockSource->getDimension();

    auto mainPacket{_getUpdatePacket(blockSource)};

    if (mainPacket != nullptr) {
        dimension.sendPacketForPosition(mPosition, *mainPacket, nullptr);
    }
    if (mType != BlockActorType::Chest) {
        return;
    }
    auto chest = (ChestBlockActor*)(this);

    if (!chest->mLargeChestPaired) {
        return;
    }
    auto pairChest = blockSource->getBlockEntity(chest->mLargeChestPairedPosition);

    if (pairChest == nullptr) {
        return;
    }
    auto subPacket{pairChest->_getUpdatePacket(blockSource)};

    if (subPacket != nullptr) {
        dimension.sendPacketForPosition(pairChest->mPosition, *subPacket, nullptr);
    }
}

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt) {
    return ll::service::getLevel()
        .transform([&](auto& level) {
            NewUniqueIdsDataLoadHelper dataLoadHelper;
            dataLoadHelper.mLevel = &level;
            return loadStatic(level, nbt, dataLoadHelper);
        })
        .value_or(nullptr);
}

std::shared_ptr<BlockActor> BlockActor::create(class CompoundTag const& nbt, class BlockPos const& pos) {
    auto b = create(nbt);
    if (b != nullptr) {
        b->mPosition = pos;
    }
    return b;
}
