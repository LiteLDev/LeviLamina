#include <MC/CompoundTag.hpp>
#include <MC/StructureBlockActor.hpp>
#include <MC/StructureBlockPalette.hpp>
#include <MC/StructureEditorData.hpp>

unsigned int BlockActor::getBlockEntityType(Block* block) {
    return dAccess<unsigned int>(block, 188); //IDA Block::getBlockEntityType
}

bool BlockActor::refreshData() {
    setChanged();
    return true;
}

CompoundTag* BlockActor::getNbt() {
    return CompoundTag::fromBlockActor(this);
}

bool BlockActor::setNbt(CompoundTag* nbt) {
    return nbt->setBlockActor(this);
}