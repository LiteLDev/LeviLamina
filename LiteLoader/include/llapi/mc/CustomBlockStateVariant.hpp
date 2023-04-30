/**
 * @file  CustomBlockStateVariant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CustomBlockStateVariant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CUSTOMBLOCKSTATEVARIANT
public:
    class CustomBlockStateVariant& operator=(class CustomBlockStateVariant const &) = delete;
    CustomBlockStateVariant(class CustomBlockStateVariant const &) = delete;
    CustomBlockStateVariant() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?toNBT\@CustomBlockStateVariant\@\@UEBAXAEAVCompoundTag\@\@H\@Z
     */
    virtual void toNBT(class CompoundTag &, int) const;
    /**
     * @vftbl 2
     * @symbol ?fromNBT\@CustomBlockStateVariant\@\@UEBA_NAEBVCompoundTag\@\@AEAH\@Z
     */
    virtual bool fromNBT(class CompoundTag const &, int &) const;

};
