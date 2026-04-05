#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class IDataStorageResponse {
public:
    // IDataStorageResponse inner types define
    enum class Status : int {
        Success = 0,
        Failure = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataStorageResponse() = default;

    virtual void* GetSpace(uint64) = 0;

    virtual void Finish(::cohtml::IDataStorageResponse::Status) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
