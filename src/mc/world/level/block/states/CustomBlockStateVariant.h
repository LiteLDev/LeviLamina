#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/states/BlockState.h"

class CustomBlockStateVariant : public ::BlockState {

public:
    // prevent constructor by default
    CustomBlockStateVariant& operator=(CustomBlockStateVariant const&) = delete;
    CustomBlockStateVariant(CustomBlockStateVariant const&)            = delete;
    CustomBlockStateVariant()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_destructor_-1
     */
    virtual ~CustomBlockStateVariant();
    /**
     * @vftbl 1
     * @symbol ?toNBT\@CustomBlockStateVariant\@\@UEBAXAEAVCompoundTag\@\@H\@Z
     */
    virtual void toNBT(class CompoundTag&, int) const;
    /**
     * @vftbl 2
     * @symbol ?fromNBT\@CustomBlockStateVariant\@\@UEBA_NAEBVCompoundTag\@\@AEAH\@Z
     */
    virtual bool fromNBT(class CompoundTag const&, int&) const;
    // NOLINTEND
};
