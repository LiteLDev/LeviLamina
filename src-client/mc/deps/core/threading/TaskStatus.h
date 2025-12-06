#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskStatus {
public:
    // TaskStatus inner types define
    enum class Value : uint {};

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
