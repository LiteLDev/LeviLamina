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
    // vIndex: 0
    virtual ~HungerAttributeDelegate() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 2
    virtual void notify(int64 type);

    MCAPI HungerAttributeDelegate(class AttributeInstance const& attribute, class Player* player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void notify$(int64 type);

    MCAPI void tick$();

    // NOLINTEND
};
