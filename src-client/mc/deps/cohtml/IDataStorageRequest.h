#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class IDataStorageRequest {
public:
    // IDataStorageRequest inner types define
    enum class RequestType : int {
        Key   = 0,
        Value = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataStorageRequest() = default;

    virtual ::cohtml::IDataStorageRequest::RequestType GetRequestType() const = 0;

    virtual char const* GetId() const = 0;

    virtual char const* GetKey() const = 0;

    virtual ulong GetIndex() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
