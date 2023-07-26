#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlDolphinDescription : public ::MoveControlDescription {

public:
    // prevent constructor by default
    MoveControlDolphinDescription& operator=(MoveControlDolphinDescription const&) = delete;
    MoveControlDolphinDescription(MoveControlDolphinDescription const&)            = delete;
    MoveControlDolphinDescription()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MoveControlDolphinDescription\@\@UEBAPEBDXZ
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLDOLPHINDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveControlDolphinDescription(); // NOLINT
#endif
};
