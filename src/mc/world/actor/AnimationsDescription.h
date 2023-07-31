#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationsDescription {

public:
    // prevent constructor by default
    AnimationsDescription& operator=(AnimationsDescription const&) = delete;
    AnimationsDescription(AnimationsDescription const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@AnimationsDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@AnimationsDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATIONSDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AnimationsDescription();
#endif
    /**
     * @symbol ??0AnimationsDescription\@\@QEAA\@XZ
     */
    MCAPI AnimationsDescription();
    // NOLINTEND
};
