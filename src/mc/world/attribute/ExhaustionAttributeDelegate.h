#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

class ExhaustionAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // prevent constructor by default
    ExhaustionAttributeDelegate& operator=(ExhaustionAttributeDelegate const&);
    ExhaustionAttributeDelegate(ExhaustionAttributeDelegate const&);
    ExhaustionAttributeDelegate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@ExhaustionAttributeDelegate@@UEAAXXZ
    virtual void tick();

    // symbol: ??0ExhaustionAttributeDelegate@@QEAA@AEBVAttributeInstance@@@Z
    MCAPI explicit ExhaustionAttributeDelegate(class AttributeInstance const&);

    // NOLINTEND
};
