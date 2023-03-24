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
     * @vftbl 9
     * @symbol ?setItem\@SimplePlayerContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl 23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl 38
     * @symbol ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @symbol ??0SimplePlayerContainer\@\@QEAA\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NHW4ContainerType\@\@\@Z
     */
    MCAPI SimplePlayerContainer(class Player &, std::string const &, bool, int, enum class ContainerType);

};
