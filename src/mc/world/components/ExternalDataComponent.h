#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALDATACOMPONENT
public:
    ExternalDataComponent& operator=(ExternalDataComponent const&) = delete;
    ExternalDataComponent(ExternalDataComponent const&)            = delete;
    ExternalDataComponent()                                        = delete;
#endif

public:
    /**
     * @symbol ??1ExternalDataComponent\@\@QEAA\@XZ
     */
    MCAPI ~ExternalDataComponent();
};
