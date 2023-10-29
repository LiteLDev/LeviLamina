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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isDataEqual@DataItem@@UEBA_NAEBV1@@Z
    virtual bool isDataEqual(class DataItem const&) const;

    // vIndex: 2, symbol:
    // ?clone@?$DataItem2@M@@UEBA?AV?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@XZ
    virtual std::unique_ptr<class DataItem> clone() const = 0;

    // symbol: ??1DataItem@@UEAA@XZ
    MCVAPI ~DataItem();

    // NOLINTEND
};
