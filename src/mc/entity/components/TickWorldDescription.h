#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickWorldDescription {

public:
    // prevent constructor by default
    TickWorldDescription& operator=(TickWorldDescription const&) = delete;
    TickWorldDescription(TickWorldDescription const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TickWorldDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TickWorldDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKWORLDDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickWorldDescription();
#endif
    /**
     * @symbol ??0TickWorldDescription\@\@QEAA\@XZ
     */
    MCAPI TickWorldDescription();
    // NOLINTEND
};
