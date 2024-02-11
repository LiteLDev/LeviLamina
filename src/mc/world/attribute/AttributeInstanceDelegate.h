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
    // vIndex: 0, symbol: __gen_??1AttributeInstanceDelegate@@UEAA@XZ
    virtual ~AttributeInstanceDelegate() = default;

    // vIndex: 1, symbol: ?tick@AttributeInstanceDelegate@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: ?notify@AttributeInstanceDelegate@@UEAAX_J@Z
    virtual void notify(int64 type);

    // vIndex: 3, symbol: ?willChange@AttributeInstanceDelegate@@UEAA_NMMAEBVAttributeBuff@@@Z
    virtual bool willChange(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 4, symbol: ?change@AttributeInstanceDelegate@@UEAAMMMAEBVAttributeBuff@@@Z
    virtual float change(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 5, symbol: ?getBuffValueWithModifiers@AttributeInstanceDelegate@@UEBAMAEBVAttributeBuff@@@Z
    virtual float getBuffValueWithModifiers(class AttributeBuff const& buff) const;

    // NOLINTEND
};
