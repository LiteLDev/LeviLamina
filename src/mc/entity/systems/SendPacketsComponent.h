#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendPacketsComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDPACKETSCOMPONENT
public:
    SendPacketsComponent& operator=(SendPacketsComponent const&) = delete;
    SendPacketsComponent(SendPacketsComponent const&)            = delete;
    SendPacketsComponent()                                       = delete;
#endif

public:
    /**
     * @symbol ??4SendPacketsComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SendPacketsComponent& operator=(struct SendPacketsComponent&&);
};
