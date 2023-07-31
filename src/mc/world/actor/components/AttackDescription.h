#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackDescription {

public:
    // prevent constructor by default
    AttackDescription& operator=(AttackDescription const&) = delete;
    AttackDescription(AttackDescription const&)            = delete;
    AttackDescription()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@AttackDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@AttackDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTACKDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AttackDescription();
#endif
    // NOLINTEND
};
