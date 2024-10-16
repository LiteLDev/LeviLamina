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
    // vIndex: 0
    virtual ~IFilePicker() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
