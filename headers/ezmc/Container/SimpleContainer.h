#pragma once

#include "Container.h"

#include "../dll.h"

class SimpleContainer : public Container {
public:
    int                    size;
    std::vector<ItemStack> data;
    MCAPI                  SimpleContainer(std::string const&, bool, int);
    MCAPI ~SimpleContainer() override;
    virtual void                   serverInitItemStackIds(int, int, std::function<void(int, ItemStack const&)>) override;
    MCAPI virtual ItemStack const& getItem(int) const override;
    MCAPI virtual void             setItem(int, ItemStack const&) override;
    MCAPI virtual int              getContainerSize() const override;
    MCAPI virtual int              getMaxStackSize() const override;
    MCAPI virtual void             startOpen(Player&) override;
    MCAPI virtual void             stopOpen(Player&) override;
};