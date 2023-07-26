#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class GenericMoveControlDescription : public ::MoveControlDescription {

public:
    // prevent constructor by default
    GenericMoveControlDescription& operator=(GenericMoveControlDescription const&) = delete;
    GenericMoveControlDescription(GenericMoveControlDescription const&)            = delete;
    GenericMoveControlDescription()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@GenericMoveControlDescription\@\@UEBAPEBDXZ
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GENERICMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GenericMoveControlDescription(); // NOLINT
#endif
};
