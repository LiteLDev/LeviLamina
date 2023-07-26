#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IJsonDefinitionSerializer {

public:
    // prevent constructor by default
    IJsonDefinitionSerializer& operator=(IJsonDefinitionSerializer const&) = delete;
    IJsonDefinitionSerializer(IJsonDefinitionSerializer const&)            = delete;
    IJsonDefinitionSerializer()                                            = delete;
};
