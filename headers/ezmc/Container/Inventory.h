#pragma once

#include "FillingContainer.h"

class Inventory : public FillingContainer {
public:
    Inventory(Player*);
    virtual ~Inventory();
    virtual void init() override;
    virtual void setItem(int, class ItemStack const&) override;
    virtual bool add(ItemStack&) override;
    virtual bool canAdd(ItemStack const&) const override;
    virtual int  getEmptySlotsCount() const override;
    virtual int  getFirstEmptySlot() const;
    virtual void setContainerSize(int);
    MCAPI void   tick();

private:
    MCAPI void setupDefault();
};