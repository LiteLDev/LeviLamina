#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData {

public:
    // prevent constructor by default
    SavedData& operator=(SavedData const&) = delete;
    SavedData(SavedData const&)            = delete;
    SavedData()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?deserialize\@PortalForcer\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void deserialize(class CompoundTag const&) = 0;
    /**
     * @vftbl 2
     * @symbol ?serialize\@PortalForcer\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag&) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVEDDATA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SavedData();
#endif
    // NOLINTEND
};
