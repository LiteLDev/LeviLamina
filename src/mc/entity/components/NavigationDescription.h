#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NavigationDescription {

public:
    // prevent constructor by default
    NavigationDescription& operator=(NavigationDescription const&) = delete;
    NavigationDescription(NavigationDescription const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@NavigationFlyDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@NavigationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationDescription();
#endif
    /**
     * @symbol ??0NavigationDescription\@\@QEAA\@XZ
     */
    MCAPI NavigationDescription();
    // NOLINTEND
};
