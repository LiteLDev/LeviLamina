#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class JsonLoader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_JSONLOADER
public:
    JsonLoader& operator=(JsonLoader const&) = delete;
    JsonLoader(JsonLoader const&)            = delete;
    JsonLoader()                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_JSONLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JsonLoader();
#endif
};

}; // namespace cereal
