#pragma once

#include "FillingContainer.h"
#include "RandomizableBlockActorContainerBase.h"

class RandomizableBlockActorFillingContainer : public RandomizableBlockActorContainerBase, public FillingContainer {
public:
    MCAPI RandomizableBlockActorFillingContainer(enum BlockActorType, std::string const&, class BlockPos const&, int, enum ContainerType);

    virtual ~RandomizableBlockActorFillingContainer();
    virtual void setContainerChanged(int) override;
    virtual void startOpen(class Player&) override;
    virtual void dropContents(class BlockSource&, class Vec3 const&, bool) override;
    virtual void initializeContainerContents(class BlockSource&) override;
};