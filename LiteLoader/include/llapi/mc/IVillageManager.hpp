/**
 * @file  IVillageManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class IVillageManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IVILLAGEMANAGER
public:
    class IVillageManager& operator=(class IVillageManager const &) = delete;
    IVillageManager(class IVillageManager const &) = delete;
    IVillageManager() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fetchClosestVillage\@VillageManager\@\@UEBA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVBlockPos\@\@HI\@Z
     */
    virtual class std::weak_ptr<class Village> fetchClosestVillage(class BlockPos const &, int, unsigned int) const = 0;
    /**
     * @vftbl 2
     * @symbol ?getVillageByID\@VillageManager\@\@UEBA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    virtual class std::weak_ptr<class Village> getVillageByID(class mce::UUID const &) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IVILLAGEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IVillageManager();
#endif

};
