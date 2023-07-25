#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICerealDefinitionSerializer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICEREALDEFINITIONSERIALIZER
public:
    ICerealDefinitionSerializer& operator=(ICerealDefinitionSerializer const&) = delete;
    ICerealDefinitionSerializer(ICerealDefinitionSerializer const&)            = delete;
    ICerealDefinitionSerializer()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICEREALDEFINITIONSERIALIZER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ICerealDefinitionSerializer();
#endif
};
