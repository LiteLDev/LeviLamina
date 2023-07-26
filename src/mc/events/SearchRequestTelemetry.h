#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SearchRequestTelemetry {

public:
    // prevent constructor by default
    SearchRequestTelemetry& operator=(SearchRequestTelemetry const&) = delete;
    SearchRequestTelemetry(SearchRequestTelemetry const&)            = delete;
    SearchRequestTelemetry()                                         = delete;
};
