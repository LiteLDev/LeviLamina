#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickWorldDescription {

public:
    // prevent constructor by default
    TickWorldDescription& operator=(TickWorldDescription const&) = delete;
    TickWorldDescription(TickWorldDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TickWorldDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TickWorldDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKWORLDDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickWorldDescription(); // NOLINT
#endif
    /**
     * @symbol ??0TickWorldDescription\@\@QEAA\@XZ
     */
    MCAPI TickWorldDescription(); // NOLINT
};
