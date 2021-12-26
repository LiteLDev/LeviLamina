// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Inventory : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORY
public:
    class Inventory& operator=(class Inventory const&) = delete;
    Inventory(class Inventory const&) = delete;
    Inventory() = delete;
#endif

public:
    /*0*/ virtual ~Inventory();
    /*1*/ virtual void init();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void setItemWithForceBalance(int, class ItemStack const&, bool);
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual void startOpen(class Player&);
    /*7*/ virtual void stopOpen(class Player&);
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual void __unk_vfn_4();
    /*10*/ virtual void __unk_vfn_5();
    /*11*/ virtual bool add(class ItemStack&);
    /*12*/ virtual bool canAdd(class ItemStack const&) const;
    /*13*/ virtual int getEmptySlotsCount() const;
    /*14*/ virtual int getFirstEmptySlot() const;
    /*15*/ virtual void setContainerSize(int);
    /*
    inline void setItem(int a0, class ItemStack const& a1){
        void (Inventory::*rv)(int, class ItemStack const&);
        *((void**)&rv) = dlsym("?setItem@Inventory@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1));
    }
    */
    MCAPI void dropSlot(int, bool, bool, bool);
    MCAPI void setupDefault();
    MCAPI void tick(int);

protected:

private:

};