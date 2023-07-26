#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

class BlockSourceHandle : public ::BlockSourceListener {

public:
    // prevent constructor by default
    BlockSourceHandle& operator=(BlockSourceHandle const&) = delete;
    BlockSourceHandle(BlockSourceHandle const&)            = delete;
    BlockSourceHandle()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?onSourceDestroyed\@BlockSourceHandle\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSourceDestroyed(class BlockSource&); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
};
