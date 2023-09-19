#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IJsonDefinitionSerializer {
public:
    // prevent constructor by default
    IJsonDefinitionSerializer& operator=(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer();
};
