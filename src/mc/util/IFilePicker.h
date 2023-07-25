#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFilePicker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILEPICKER
public:
    IFilePicker& operator=(IFilePicker const&) = delete;
    IFilePicker(IFilePicker const&)            = delete;
    IFilePicker()                              = delete;
#endif

public:
};
