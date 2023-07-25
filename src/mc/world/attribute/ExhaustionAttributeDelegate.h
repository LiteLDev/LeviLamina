#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

class ExhaustionAttributeDelegate : public ::AttributeInstanceDelegate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONATTRIBUTEDELEGATE
public:
    ExhaustionAttributeDelegate& operator=(ExhaustionAttributeDelegate const&) = delete;
    ExhaustionAttributeDelegate(ExhaustionAttributeDelegate const&)            = delete;
    ExhaustionAttributeDelegate()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@ExhaustionAttributeDelegate\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @symbol ??0ExhaustionAttributeDelegate\@\@QEAA\@AEBVAttributeInstance\@\@\@Z
     */
    MCAPI ExhaustionAttributeDelegate(class AttributeInstance const&);
};
