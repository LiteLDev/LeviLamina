#pragma once

#include "../Core/NBT.h"
#include "../Core/WeakPtr.h"
#include "../dll.h"
#include "BlockLegacy.h"

#include "../Core/HashedString.h"

class Block {

public:
    unsigned short aux;
    BlockLegacy*   legacy;
    CompoundTag    definition;
    int            runtime_id;
    bool           has_runtime_id;

    MCAPI virtual ~Block();
    MCAPI virtual enum BlockRenderLayer getRenderLayer() const;

    MCAPI HashedString const& getName(void) const;
    template <typename T>
    MCAPI class Block const* setState(class ItemState const&, T) const;
    template <typename T>
    MCAPI T                         getState(class ItemState const&) const;
    MCAPI bool                      isSlabBlock(void) const;
    MCAPI bool                      isSolidBlockingBlock(void) const;
    MCAPI bool                      hasState(class ItemState const&) const;
    MCAPI class Block const&        keepState(class ItemState const&) const;
    inline class BlockLegacy const& getLegacyBlock(void) const {
        return *legacy;
    }
    MCAPI class Block const& copyState(class Block const&, class ItemState const&) const;
    MCAPI bool               isSolidBlockingBlockAndNotSignalSource(void) const;
    MCAPI void               spawnResources(class BlockSource&, class BlockPos const&, float, int) const;
    MCAPI std::string  toDebugString(void) const;
    MCAPI unsigned int getStateMask(class ItemState const&) const;
    //AS_FIELD(class BlockLegacy const&, LegacyBlock, getLegacyBlock);
    //BUILD_ACCESS(unsigned short, DataID, 8);
};