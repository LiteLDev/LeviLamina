#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct DataMessage {
public:
    // prevent constructor by default
    DataMessage& operator=(DataMessage const&);
    DataMessage(DataMessage const&);
    DataMessage();

public:
    // NOLINTBEGIN
    MCAPI ~DataMessage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
