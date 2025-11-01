#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskStatus {
public:
    // TaskStatus inner types define
    enum class Value : int {
        WaitingForPredecessor = 0,
        Pending = 1,
        Running = 2,
        CancelPending = 3,
        Canceled = 4,
        Error = 5,
        Done = 6,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TaskStatus::Value> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::error_code toErrorCode() const;
    // NOLINTEND

};
