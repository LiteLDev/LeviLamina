#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct DataMessage {

public:
    // prevent constructor by default
    DataMessage& operator=(DataMessage const&) = delete;
    DataMessage(DataMessage const&)            = delete;
    DataMessage()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1DataMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~DataMessage();
    // NOLINTEND
};

}; // namespace CodeBuilder
