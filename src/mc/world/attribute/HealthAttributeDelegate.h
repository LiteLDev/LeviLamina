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
    // vIndex: 0, symbol: __gen_??1HealthAttributeDelegate@@UEAA@XZ
    virtual ~HealthAttributeDelegate() = default;

    // vIndex: 1, symbol: ?tick@HealthAttributeDelegate@@UEAAXXZ
    virtual void tick();

    // vIndex: 3, symbol: ?willChange@HealthAttributeDelegate@@UEAA_NMMAEBVAttributeBuff@@@Z
    virtual bool willChange(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 4, symbol: ?change@HealthAttributeDelegate@@UEAAMMMAEBVAttributeBuff@@@Z
    virtual float change(float oldValue, float newValue, class AttributeBuff const& buff);

    // vIndex: 5, symbol: ?getBuffValueWithModifiers@HealthAttributeDelegate@@UEBAMAEBVAttributeBuff@@@Z
    virtual float getBuffValueWithModifiers(class AttributeBuff const& buff) const;

    // symbol: ??0HealthAttributeDelegate@@QEAA@AEBVAttributeInstance@@PEAVMob@@@Z
    MCAPI HealthAttributeDelegate(class AttributeInstance const& attribute, class Mob* mob);

    // NOLINTEND
};
