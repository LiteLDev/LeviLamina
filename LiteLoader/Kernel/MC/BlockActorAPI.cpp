#include <MC/CompoundTag.hpp>
#include <MC/Block.hpp>
#include <MC/StructureBlockActor.hpp>
#include <MC/StructureBlockPalette.hpp>
#include <MC/StructureEditorData.hpp>

unsigned int BlockActor::getBlockEntityType(Block* block) {
    return block->getBlockEntityType(); //IDA Block::getBlockEntityType
}

bool BlockActor::refreshData() {
    setChanged();
    return true;
}

std::unique_ptr<CompoundTag> BlockActor::getNbt() {
    return CompoundTag::fromBlockActor(this);
}

bool BlockActor::setNbt(CompoundTag* nbt) {
    return nbt->setBlockActor(this);
}