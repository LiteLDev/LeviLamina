#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDefinitionInstance {

public:
    // prevent constructor by default
    IDefinitionInstance& operator=(IDefinitionInstance const&) = delete;
    IDefinitionInstance(IDefinitionInstance const&)            = delete;
    IDefinitionInstance()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3() = 0;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5() = 0;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6() = 0;
    /**
     * @vftbl 7
     * @symbol ?getRuntimeTypeId\@IDefinitionInstance\@\@UEBAGXZ
     */
    virtual unsigned short getRuntimeTypeId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDEFINITIONINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IDefinitionInstance();
#endif
    // NOLINTEND
};
