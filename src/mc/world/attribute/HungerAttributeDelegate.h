#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

class HungerAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // prevent constructor by default
    HungerAttributeDelegate& operator=(HungerAttributeDelegate const&);
    HungerAttributeDelegate(HungerAttributeDelegate const&);
    HungerAttributeDelegate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HungerAttributeDelegate@@UEAA@XZ
    virtual ~HungerAttributeDelegate() = default;

    // vIndex: 1, symbol: ?tick@HungerAttributeDelegate@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: ?notify@HungerAttributeDelegate@@UEAAX_J@Z
    virtual void notify(int64 type);

    // symbol: ??0HungerAttributeDelegate@@QEAA@AEBVAttributeInstance@@PEAVPlayer@@@Z
    MCAPI HungerAttributeDelegate(class AttributeInstance const& attribute, class Player* player);

    // NOLINTEND
};
