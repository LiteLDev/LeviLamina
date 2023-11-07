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
    // vIndex: 0, symbol: __gen_??1IFilePicker@@UEAA@XZ
    virtual ~IFilePicker() = default;

    // NOLINTEND
};
