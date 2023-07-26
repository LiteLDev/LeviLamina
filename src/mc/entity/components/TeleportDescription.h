#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportDescription {

public:
    // prevent constructor by default
    TeleportDescription& operator=(TeleportDescription const&) = delete;
    TeleportDescription(TeleportDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TeleportDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TeleportDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TeleportDescription(); // NOLINT
#endif
    /**
     * @symbol ??0TeleportDescription\@\@QEAA\@XZ
     */
    MCAPI TeleportDescription(); // NOLINT
};
