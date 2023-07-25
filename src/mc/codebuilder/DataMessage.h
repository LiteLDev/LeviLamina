#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct DataMessage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_DATAMESSAGE
public:
    DataMessage& operator=(DataMessage const&) = delete;
    DataMessage(DataMessage const&)            = delete;
    DataMessage()                              = delete;
#endif

public:
    /**
     * @symbol ??1DataMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~DataMessage();
};

}; // namespace CodeBuilder
