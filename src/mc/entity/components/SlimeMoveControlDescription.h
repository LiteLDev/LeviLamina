#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class SlimeMoveControlDescription : public ::MoveControlDescription {

public:
    // prevent constructor by default
    SlimeMoveControlDescription& operator=(SlimeMoveControlDescription const&) = delete;
    SlimeMoveControlDescription(SlimeMoveControlDescription const&)            = delete;
    SlimeMoveControlDescription()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@SlimeMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@SlimeMoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMEMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SlimeMoveControlDescription();
#endif
    // NOLINTEND
};
