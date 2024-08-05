#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeInstanceDelegate {
public:
    // prevent constructor by default
    AttributeInstanceDelegate& operator=(AttributeInstanceDelegate const&);
    AttributeInstanceDelegate(AttributeInstanceDelegate const&);
    AttributeInstanceDelegate();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttributeInstanceDelegate() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 2
    virtual void notify(int64 type);

    // vIndex: 3
    virtual bool willChange(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 4
    virtual float change(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 5
    virtual float getBuffValueWithModifiers(class AttributeBuff const& buff) const;

    // NOLINTEND
};
