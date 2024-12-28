#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IExternalServerFile {
public:
    // prevent constructor by default
    IExternalServerFile& operator=(IExternalServerFile const&);
    IExternalServerFile(IExternalServerFile const&);
    IExternalServerFile();
};
