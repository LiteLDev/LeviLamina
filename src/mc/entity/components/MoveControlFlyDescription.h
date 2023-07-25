#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlFlyDescription : public ::MoveControlDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLFLYDESCRIPTION
public:
    MoveControlFlyDescription& operator=(MoveControlFlyDescription const&) = delete;
    MoveControlFlyDescription(MoveControlFlyDescription const&)            = delete;
    MoveControlFlyDescription()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MoveControlFlyDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLFLYDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveControlFlyDescription();
#endif
};
