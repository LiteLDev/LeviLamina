#pragma once

#include "BlockLegacy.h"

class ActorBlock : public BlockLegacy {
public:
    MCAPI virtual class ItemInstance getEntityResourceItem(class Random&, class BlockActor const&, int) const;
};