#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerDescription {

public:
    // prevent constructor by default
    ContainerDescription& operator=(ContainerDescription const&) = delete;
    ContainerDescription(ContainerDescription const&)            = delete;
    ContainerDescription()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@ContainerDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@ContainerDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerDescription();
#endif
    // NOLINTEND
};
