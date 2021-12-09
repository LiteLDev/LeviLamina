#include <MC/StructureBlockActor.hpp>
#include <MC/StructureBlockPalette.hpp>
#include <MC/StructureEditorData.hpp>
#include <MC/CompoundTag.hpp>

unsigned int BlockActor::getBlockEntityType(Block* block)
{
    return dAccess<unsigned int>(block, 188);		//IDA Block::getBlockEntityType
}

void BlockActor::refreshData()
{
    setChanged();
}

CompoundTag* BlockActor::getNbt()
{
    return CompoundTag::fromBlockActor(this);
}

bool BlockActor::setNbt(CompoundTag* nbt)
{
    return nbt->setBlockActor(this);
}