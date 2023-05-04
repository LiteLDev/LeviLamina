/**
 * @file  IDefinitionInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IDefinitionInstance.
 *
 */
class IDefinitionInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDEFINITIONINSTANCE
public:
    class IDefinitionInstance& operator=(class IDefinitionInstance const &) = delete;
    IDefinitionInstance(class IDefinitionInstance const &) = delete;
    IDefinitionInstance() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
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
     * @symbol ?getDefinitionTypeId\@?$DefinitionInstance\@UWaterMovementDescription\@\@\@\@UEBAGXZ
     */
    virtual unsigned short getDefinitionTypeId() const = 0;
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

};
