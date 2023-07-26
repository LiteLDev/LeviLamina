#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CustomBlockStateVariant {

public:
    // prevent constructor by default
    CustomBlockStateVariant& operator=(CustomBlockStateVariant const&) = delete;
    CustomBlockStateVariant(CustomBlockStateVariant const&)            = delete;
    CustomBlockStateVariant()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?toNBT\@CustomBlockStateVariant\@\@UEBAXAEAVCompoundTag\@\@H\@Z
     */
    virtual void toNBT(class CompoundTag&, int) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?fromNBT\@CustomBlockStateVariant\@\@UEBA_NAEBVCompoundTag\@\@AEAH\@Z
     */
    virtual bool fromNBT(class CompoundTag const&, int&) const; // NOLINT
};
