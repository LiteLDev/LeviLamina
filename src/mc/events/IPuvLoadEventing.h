#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PuvLoadData { struct TelemetryEventData; }
// clang-format on

class IPuvLoadEventing {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPuvLoadEventing() = default;

    virtual void
    fireEventPUVLoad(::std::string const& resourceCategory, ::PuvLoadData::TelemetryEventData&& loadData) = 0;
    // NOLINTEND
};
