#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICerealDefinitionSerializer {
public:
    // prevent constructor by default
    ICerealDefinitionSerializer& operator=(ICerealDefinitionSerializer const&);
    ICerealDefinitionSerializer(ICerealDefinitionSerializer const&);
    ICerealDefinitionSerializer();

public:
    // NOLINTBEGIN
    MCVAPI ~ICerealDefinitionSerializer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
