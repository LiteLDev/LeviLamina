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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 18
     * @symbol ?startOpen\@EnderChestContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@EnderChestContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player &);
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
     * @symbol ??0EnderChestContainer\@\@QEAA\@XZ
     */
    MCAPI EnderChestContainer();
    /**
     * @symbol ?ITEMS_SIZE\@EnderChestContainer\@\@2HB
     */
    MCAPI static int const ITEMS_SIZE;

};
