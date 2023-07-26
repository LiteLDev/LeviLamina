#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlSkipDescription : public ::MoveControlDescription {

public:
    // prevent constructor by default
    MoveControlSkipDescription& operator=(MoveControlSkipDescription const&) = delete;
    MoveControlSkipDescription(MoveControlSkipDescription const&)            = delete;
    MoveControlSkipDescription()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MoveControlSkipDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLSKIPDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveControlSkipDescription(); // NOLINT
#endif
};
