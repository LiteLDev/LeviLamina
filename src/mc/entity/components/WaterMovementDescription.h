#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterMovementDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEMENTDESCRIPTION
public:
    WaterMovementDescription& operator=(WaterMovementDescription const&) = delete;
    WaterMovementDescription(WaterMovementDescription const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@WaterMovementDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@WaterMovementDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @symbol ??0WaterMovementDescription\@\@QEAA\@XZ
     */
    MCAPI WaterMovementDescription();
};
