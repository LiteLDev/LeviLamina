/**
 * @file  EnderChestContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderChestContainer.
 *
 */
class EnderChestContainer : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCHESTCONTAINER
public:
    class EnderChestContainer& operator=(class EnderChestContainer const &) = delete;
    EnderChestContainer(class EnderChestContainer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EnderChestContainer();
    /**
     * @vftbl  16
     * @symbol  ?startOpen\@EnderChestContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @vftbl  17
     * @symbol  ?stopOpen\@EnderChestContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player &);
    /**
     * @vftbl  22
     * @symbol  __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol  __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @symbol  ??0EnderChestContainer\@\@QEAA\@XZ
     */
    MCAPI EnderChestContainer();
    /**
     * @symbol  ?ITEMS_SIZE\@EnderChestContainer\@\@2HB
     */
    MCAPI static int const ITEMS_SIZE;

};