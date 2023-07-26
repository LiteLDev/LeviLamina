#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Description {

public:
    // prevent constructor by default
    Description& operator=(Description const&) = delete;
    Description(Description const&)            = delete;
    Description()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@BehaviorTreeDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@Description\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
    /**
     * @symbol ?parseDescription\@Description\@\@QEAAPEAU1\@UDeserializeDataParams\@\@\@Z
     */
    MCAPI struct Description* parseDescription(struct DeserializeDataParams); // NOLINT
};
