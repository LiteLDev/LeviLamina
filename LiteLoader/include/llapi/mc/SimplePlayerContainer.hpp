/**
 * @file  MC/SimplePlayerContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SimpleContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimplePlayerContainer.
 *
 */
class SimplePlayerContainer : public SimpleContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEPLAYERCONTAINER
public:
    class SimplePlayerContainer& operator=(class SimplePlayerContainer const &) = delete;
    SimplePlayerContainer(class SimplePlayerContainer const &) = delete;
    SimplePlayerContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SimplePlayerContainer();
    /**
     * @hash   976099
     * @vftbl  9
     * @symbol ?setItem@SimplePlayerContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
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
     * @hash   600875203
     * @symbol ??0SimplePlayerContainer@@QEAA@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHW4ContainerType@@@Z
     */
    MCAPI SimplePlayerContainer(class Player &, std::string const &, bool, int, enum ContainerType);

};