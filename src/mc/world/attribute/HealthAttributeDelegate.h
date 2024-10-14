#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

class HealthAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // prevent constructor by default
    HealthAttributeDelegate& operator=(HealthAttributeDelegate const&);
    HealthAttributeDelegate(HealthAttributeDelegate const&);
    HealthAttributeDelegate();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HealthAttributeDelegate() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 3
    virtual bool willChange(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 4
    virtual float change(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 5
    virtual float getBuffValueWithModifiers(class AttributeBuff const& buff) const;

    MCAPI HealthAttributeDelegate(class AttributeInstance const& attribute, class Mob* mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI float change$(float oldValue, float newValue, class AttributeBuff const& buff);

    MCAPI float getBuffValueWithModifiers$(class AttributeBuff const& buff) const;

    MCAPI void tick$();

    MCAPI bool willChange$(float oldValue, float newValue, class AttributeBuff const& buff);

    // NOLINTEND
};
