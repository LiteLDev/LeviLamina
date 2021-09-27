#pragma once

#include "../BlockActor/BlockActor.h"

class RandomizableBlockActorContainerBase : public BlockActor {
public:
    std::string lootTable;
    int         lootTableSeed;

    virtual ~RandomizableBlockActorContainerBase(void);
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&) override;
    virtual bool save(class CompoundTag&) const override;
};

static_assert(offsetof(RandomizableBlockActorContainerBase, lootTable) == 208);
static_assert(offsetof(RandomizableBlockActorContainerBase, lootTableSeed) == 240);

static_assert(sizeof(RandomizableBlockActorContainerBase) == 248);