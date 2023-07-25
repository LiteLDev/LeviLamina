#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlBasicDescription : public ::MoveControlDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLBASICDESCRIPTION
public:
    MoveControlBasicDescription& operator=(MoveControlBasicDescription const&) = delete;
    MoveControlBasicDescription(MoveControlBasicDescription const&)            = delete;
    MoveControlBasicDescription()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MoveControlBasicDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLBASICDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveControlBasicDescription();
#endif
};
