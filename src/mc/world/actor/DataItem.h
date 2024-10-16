#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DataItem {
public:
    // prevent constructor by default
    DataItem& operator=(DataItem const&);
    DataItem(DataItem const&);
    DataItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataItem();

    // vIndex: 1
    virtual bool isDataEqual(class DataItem const&) const;

    // vIndex: 2
    virtual std::unique_ptr<class DataItem> clone() const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool isDataEqual$(class DataItem const&) const;

    // NOLINTEND
};
