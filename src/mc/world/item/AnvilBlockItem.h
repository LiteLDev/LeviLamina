#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AuxDataBlockItem.h"

class AnvilBlockItem : public ::AuxDataBlockItem {
public:
    // prevent constructor by default
    AnvilBlockItem& operator=(AnvilBlockItem const&);
    AnvilBlockItem(AnvilBlockItem const&);
    AnvilBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 33
    virtual int getLevelDataForAuxValue(int) const /*override*/;

    // vIndex: 0
    virtual ~AnvilBlockItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getLevelDataForAuxValue(int) const;
    // NOLINTEND
};
