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
    // vIndex: 0
    virtual ~DataItem() = default;

    // vIndex: 1
    virtual ushort getId() const = 0;

    // vIndex: 2
    virtual ::DataItemType getType() const = 0;

    // vIndex: 3
    virtual bool isDataEqual(::DataItem const&) const = 0;

    // vIndex: 4
    virtual ::std::unique_ptr<::DataItem> clone() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
