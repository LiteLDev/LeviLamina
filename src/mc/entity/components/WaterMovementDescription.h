#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterMovementDescription {

public:
    // prevent constructor by default
    WaterMovementDescription& operator=(WaterMovementDescription const&) = delete;
    WaterMovementDescription(WaterMovementDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@WaterMovementDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@WaterMovementDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
    /**
     * @symbol ??0WaterMovementDescription\@\@QEAA\@XZ
     */
    MCAPI WaterMovementDescription(); // NOLINT
};
