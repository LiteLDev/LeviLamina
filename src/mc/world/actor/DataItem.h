#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DataItemType.h"

class DataItem {
public:
    // DataItem inner types define
    using ID = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DataItemType const> mType;
    ::ll::TypedStorage<2, 2, ushort const>         mId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataItem();

    // vIndex: 1
    virtual bool isDataEqual(::DataItem const& rhs) const;

    // vIndex: 2
    virtual ::std::unique_ptr<::DataItem> clone() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isDataEqual(::DataItem const& rhs) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
