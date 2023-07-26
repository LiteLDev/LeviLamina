#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeInstanceDelegate {

public:
    // prevent constructor by default
    AttributeInstanceDelegate& operator=(AttributeInstanceDelegate const&) = delete;
    AttributeInstanceDelegate(AttributeInstanceDelegate const&)            = delete;
    AttributeInstanceDelegate()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@AttributeInstanceDelegate\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?notify\@AttributeInstanceDelegate\@\@UEAAX_J\@Z
     */
    virtual void notify(__int64); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?willChange\@AttributeInstanceDelegate\@\@UEAA_NMMAEBVAttributeBuff\@\@\@Z
     */
    virtual bool willChange(float, float, class AttributeBuff const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?change\@AttributeInstanceDelegate\@\@UEAAMMMAEBVAttributeBuff\@\@\@Z
     */
    virtual float change(float, float, class AttributeBuff const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getBuffValueWithModifiers\@AttributeInstanceDelegate\@\@UEBAMAEBVAttributeBuff\@\@\@Z
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const&) const; // NOLINT
};
