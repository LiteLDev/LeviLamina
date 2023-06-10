/**
 * @file  SimplePlayerContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 10
     * @symbol ?setItem\@SimplePlayerContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @symbol ??0SimplePlayerContainer\@\@QEAA\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NHW4ContainerType\@\@\@Z
     */
    MCAPI SimplePlayerContainer(class Player &, std::string const &, bool, int, enum class ContainerType);

};
