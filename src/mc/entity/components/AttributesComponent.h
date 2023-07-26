#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttributesComponent {

public:
    // prevent constructor by default
    AttributesComponent& operator=(AttributesComponent const&) = delete;
    AttributesComponent()                                      = delete;

public:
    /**
     * @symbol ??0AttributesComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI AttributesComponent(struct AttributesComponent&&); // NOLINT
    /**
     * @symbol ??0AttributesComponent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI AttributesComponent(struct AttributesComponent const&); // NOLINT
    /**
     * @symbol ??4AttributesComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct AttributesComponent& operator=(struct AttributesComponent&&); // NOLINT
    /**
     * @symbol ??1AttributesComponent\@\@QEAA\@XZ
     */
    MCAPI ~AttributesComponent(); // NOLINT
};
