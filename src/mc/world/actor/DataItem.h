#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DataItemType.h"

class DataItem {
public:
    // DataItem inner types define
    using ID = ushort;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataItem() = default;

    virtual ushort getId() const = 0;

    virtual ::DataItemType getType() const = 0;

    virtual bool isDataEqual(::DataItem const&) const = 0;

    virtual ::std::unique_ptr<::DataItem> clone() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
