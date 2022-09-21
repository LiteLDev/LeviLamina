/**
 * @file  MC/CraftingContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftingContainer.
 *
 */
class CraftingContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGCONTAINER
public:
    class CraftingContainer& operator=(class CraftingContainer const &) = delete;
    CraftingContainer(class CraftingContainer const &) = delete;
    CraftingContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CraftingContainer();
    /**
     * @hash   -277533736
     * @vftbl  2
     * @symbol ?serverInitItemStackIds@CraftingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1037565085
     * @vftbl  5
     * @symbol ?getItem@CraftingContainer@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @hash   -30348366
     * @vftbl  9
     * @symbol ?setItem@CraftingContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @hash   -1521221656
     * @vftbl  14
     * @symbol ?getContainerSize@CraftingContainer@@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @hash   223005591
     * @vftbl  15
     * @symbol ?getMaxStackSize@CraftingContainer@@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @hash   -1064196353
     * @vftbl  16
     * @symbol ?startOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @hash   -1220708449
     * @vftbl  17
     * @symbol ?stopOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void stopOpen(class Player &);
    /**
     * @vftbl  22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @hash   -509296430
     * @vftbl  24
     * @symbol ?setContainerChanged@CraftingContainer@@UEAAXH@Z
     */
    virtual void setContainerChanged(int);
    /**
     * @hash   772203043
     * @symbol ??0CraftingContainer@@QEAA@HH@Z
     */
    MCAPI CraftingContainer(int, int);
    /**
     * @hash   -464070110
     * @symbol ?getItem@CraftingContainer@@QEBAAEBVItemStack@@HH@Z
     */
    MCAPI class ItemStack const & getItem(int, int) const;

};