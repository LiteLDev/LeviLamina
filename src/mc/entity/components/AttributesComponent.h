#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttributesComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTESCOMPONENT
public:
    AttributesComponent& operator=(AttributesComponent const&) = delete;
    AttributesComponent()                                      = delete;
#endif

public:
    /**
     * @symbol ??0AttributesComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI AttributesComponent(struct AttributesComponent&&);
    /**
     * @symbol ??0AttributesComponent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI AttributesComponent(struct AttributesComponent const&);
    /**
     * @symbol ??4AttributesComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct AttributesComponent& operator=(struct AttributesComponent&&);
    /**
     * @symbol ??1AttributesComponent\@\@QEAA\@XZ
     */
    MCAPI ~AttributesComponent();
};
