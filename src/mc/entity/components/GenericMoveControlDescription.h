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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@GenericMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GENERICMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GenericMoveControlDescription();
#endif
    // NOLINTEND
};
