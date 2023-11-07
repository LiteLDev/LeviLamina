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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AttributeInstanceDelegate() = default;

    // vIndex: 1, symbol: ?tick@AttributeInstanceDelegate@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: ?notify@AttributeInstanceDelegate@@UEAAX_J@Z
    virtual void notify(int64);

    // vIndex: 3, symbol: ?willChange@AttributeInstanceDelegate@@UEAA_NMMAEBVAttributeBuff@@@Z
    virtual bool willChange(float, float, class AttributeBuff const&);

    // vIndex: 4, symbol: ?change@AttributeInstanceDelegate@@UEAAMMMAEBVAttributeBuff@@@Z
    virtual float change(float, float, class AttributeBuff const&);

    // vIndex: 5, symbol: ?getBuffValueWithModifiers@AttributeInstanceDelegate@@UEBAMAEBVAttributeBuff@@@Z
    virtual float getBuffValueWithModifiers(class AttributeBuff const&) const;

    // NOLINTEND
};
