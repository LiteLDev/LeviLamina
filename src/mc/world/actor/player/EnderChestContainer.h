#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/FillingContainer.h"

class EnderChestContainer : public ::FillingContainer {

public:
    // prevent constructor by default
    EnderChestContainer& operator=(EnderChestContainer const&) = delete;
    EnderChestContainer(EnderChestContainer const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?startOpen\@EnderChestContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@EnderChestContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player&); // NOLINT
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25(); // NOLINT
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26(); // NOLINT
    /**
     * @symbol ??0EnderChestContainer\@\@QEAA\@XZ
     */
    MCAPI EnderChestContainer(); // NOLINT
    /**
     * @symbol ?ITEMS_SIZE\@EnderChestContainer\@\@2HB
     */
    MCAPI static int const ITEMS_SIZE; // NOLINT
};
