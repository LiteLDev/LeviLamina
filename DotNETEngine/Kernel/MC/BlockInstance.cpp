#include "../../Header/MC/BlockInstance.hpp"

#include "../../Header/MC/Block.hpp"
#include "../../Header/MC/BlockSource.hpp"
#include "../../Header/MC/BlockActor.hpp"
#include "../../Header/MC/Container.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/ItemStack.hpp"

namespace MC
{

inline BlockInstance ^ BlockInstance::CreateBlockinstance(MC::Block ^ block, BlockPos ^ pos, int dimId)
{
    return gcnew BlockInstance(
        ::BlockInstance::createBlockInstance(block, *pos, dimId));
}


inline Block ^ BlockInstance::Block::get()
{
    return gcnew MC::Block(NativePtr->getBlock());
}

inline BlockPos ^ BlockInstance::Position::get()
{
    return gcnew BlockPos(NativePtr->getPosition());
}

inline BlockSource ^ BlockInstance::BlockSource::get()
{
    return gcnew MC::BlockSource(NativePtr->getBlockSource());
}

inline int BlockInstance::DimensionId::get()
{
    return NativePtr->getDimensionId();
}

inline bool BlockInstance::HasBlockEntity::get()
{
    return NativePtr->hasBlockEntity();
}

inline BlockActor ^ BlockInstance::BlockEntity::get()
{
    if (!HasBlockEntity)
        return nullptr;
    return gcnew BlockActor(NativePtr->getBlockEntity());
}

inline bool BlockInstance::HasContainer::get()
{
    return NativePtr->hasContainer();
}

inline Container ^ BlockInstance::Container::get()
{
    if (!HasContainer)
        return nullptr;
    return gcnew MC::Container(NativePtr->getContainer());
}

inline bool BlockInstance::BreakNaturally(bool isCreativeMode)
{
    return NativePtr->breakNaturally(isCreativeMode);
}

inline bool BlockInstance::BreakNaturally()
{
    return NativePtr->breakNaturally(false);
}

inline bool BlockInstance::BreakNaturally(ItemStack ^ tool, bool isCreativeMode)
{
    return NativePtr->breakNaturally(tool->NativePtr, isCreativeMode);
}

inline bool BlockInstance::BreakNaturally(ItemStack ^ tool)
{
    return NativePtr->breakNaturally(tool->NativePtr, false);
}

inline ItemStack ^ BlockInstance::BlockDrops::get()
{
    return gcnew ItemStack(new ::ItemStack(NativePtr->getBlockDrops()), true);
}

inline bool BlockInstance::IsNull::get()
{
    return NativePtr->isNull();
}

inline bool BlockInstance::operator==(BlockInstance ^ a, BlockInstance ^ b)
{
    return *a->NativePtr == *b->NativePtr;
}
} // namespace MC