#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICerealDefinitionSerializer {

public:
    // prevent constructor by default
    ICerealDefinitionSerializer& operator=(ICerealDefinitionSerializer const&) = delete;
    ICerealDefinitionSerializer(ICerealDefinitionSerializer const&)            = delete;
    ICerealDefinitionSerializer()                                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICEREALDEFINITIONSERIALIZER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ICerealDefinitionSerializer();
#endif
    // NOLINTEND
};
