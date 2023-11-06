#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFilePicker {
public:
    // prevent constructor by default
    IFilePicker& operator=(IFilePicker const&);
    IFilePicker(IFilePicker const&);
    IFilePicker();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IFilePicker();

    // NOLINTEND
};
