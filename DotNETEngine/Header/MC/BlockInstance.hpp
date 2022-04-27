#pragma once
#include <MC/BlockInstance.hpp>
#include "Types.hpp"
#include "Block.hpp"
#include "BlockActor.hpp"
#include "Container.hpp"

namespace MC
{
ref class BlockSource;
ref class BlockPos;
ref class Vec3;
ref class ItemStack;
ref class Container;
ref class BlockActor;
}

namespace MC
{
public
ref class BlockInstance : ClassTemplate<BlockInstance, ::BlockInstance>
{
public:
    __ctor_all(BlockInstance, ::BlockInstance);

    inline static BlockInstance ^ CreateBlockinstance(Block ^ block, BlockPos ^ pos, int dimId);

    inline bool BreakNaturally(bool isCreativeMode);
    inline bool BreakNaturally();
    inline bool BreakNaturally(ItemStack ^ tool, bool isCreativeMode);
    inline bool BreakNaturally(ItemStack ^ tool);

    property Block ^ Block { MC::Block ^ get(); };
    property BlockPos ^ Position { BlockPos ^ get(); };
    property BlockSource ^ BlockSource { MC::BlockSource ^ get(); };
    property BlockActor ^ BlockEntity { BlockActor ^ get(); };
    property Container ^ Container { MC::Container ^ get(); };
    property ItemStack ^ BlockDrops { ItemStack ^ get(); };

    property int DimensionId
    {
        int get();
    }

    property bool HasBlockEntity
    {
        bool get();
    }
    property bool IsNull
    {
        bool get();
    }
    property bool HasContainer
    {
        bool get();
    }

    static bool operator==(BlockInstance^ a,BlockInstance ^ b);
};
} // namespace MC