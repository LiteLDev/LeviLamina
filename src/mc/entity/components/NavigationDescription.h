#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NavigationDescription {

public:
    // prevent constructor by default
    NavigationDescription& operator=(NavigationDescription const&) = delete;
    NavigationDescription(NavigationDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationFlyDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@NavigationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationDescription(); // NOLINT
#endif
    /**
     * @symbol ??0NavigationDescription\@\@QEAA\@XZ
     */
    MCAPI NavigationDescription(); // NOLINT
};
