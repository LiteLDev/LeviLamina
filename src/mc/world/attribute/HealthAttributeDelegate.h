#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

class HealthAttributeDelegate : public ::AttributeInstanceDelegate {

public:
    // prevent constructor by default
    HealthAttributeDelegate& operator=(HealthAttributeDelegate const&) = delete;
    HealthAttributeDelegate(HealthAttributeDelegate const&)            = delete;
    HealthAttributeDelegate()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@HealthAttributeDelegate\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 3
     * @symbol ?willChange\@HealthAttributeDelegate\@\@UEAA_NMMAEBVAttributeBuff\@\@\@Z
     */
    virtual bool willChange(float, float, class AttributeBuff const&);
    /**
     * @vftbl 4
     * @symbol ?change\@HealthAttributeDelegate\@\@UEAAMMMAEBVAttributeBuff\@\@\@Z
     */
    virtual float change(float, float, class AttributeBuff const&);
    /**
     * @vftbl 5
     * @symbol ?getBuffValueWithModifiers\@HealthAttributeDelegate\@\@UEBAMAEBVAttributeBuff\@\@\@Z
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const&) const;
    /**
     * @symbol ??0HealthAttributeDelegate\@\@QEAA\@AEBVAttributeInstance\@\@PEAVMob\@\@\@Z
     */
    MCAPI HealthAttributeDelegate(class AttributeInstance const&, class Mob*);
    // NOLINTEND
};
