#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConnectionDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTIONDEFINITION
public:
    ConnectionDefinition& operator=(ConnectionDefinition const&) = delete;
    ConnectionDefinition(ConnectionDefinition const&)            = delete;
    ConnectionDefinition()                                       = delete;
#endif

public:
};
