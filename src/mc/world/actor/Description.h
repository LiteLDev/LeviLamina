#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Description {

public:
    // prevent constructor by default
    Description& operator=(Description const&) = delete;
    Description(Description const&)            = delete;
    Description()                              = delete;

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
     * @symbol ?deserializeData\@Description\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @symbol ?parseDescription\@Description\@\@QEAAPEAU1\@UDeserializeDataParams\@\@\@Z
     */
    MCAPI struct Description* parseDescription(struct DeserializeDataParams);
    // NOLINTEND
};
