#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFilePicker {

public:
    // prevent constructor by default
    IFilePicker& operator=(IFilePicker const&) = delete;
    IFilePicker(IFilePicker const&)            = delete;
    IFilePicker()                              = delete;
};
