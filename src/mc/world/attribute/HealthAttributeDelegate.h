#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HealthAttributeDelegate {

public:
    // prevent constructor by default
    HealthAttributeDelegate& operator=(HealthAttributeDelegate const&) = delete;
    HealthAttributeDelegate(HealthAttributeDelegate const&)            = delete;
    HealthAttributeDelegate()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@HealthAttributeDelegate\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?willChange\@HealthAttributeDelegate\@\@UEAA_NMMAEBVAttributeBuff\@\@\@Z
     */
    virtual bool willChange(float, float, class AttributeBuff const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?change\@HealthAttributeDelegate\@\@UEAAMMMAEBVAttributeBuff\@\@\@Z
     */
    virtual float change(float, float, class AttributeBuff const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getBuffValueWithModifiers\@HealthAttributeDelegate\@\@UEBAMAEBVAttributeBuff\@\@\@Z
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const&) const; // NOLINT
    /**
     * @symbol ??0HealthAttributeDelegate\@\@QEAA\@AEBVAttributeInstance\@\@PEAVMob\@\@\@Z
     */
    MCAPI HealthAttributeDelegate(class AttributeInstance const&, class Mob*); // NOLINT
};
