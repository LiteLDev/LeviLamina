#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class JsonLoader {

public:
    // prevent constructor by default
    JsonLoader& operator=(JsonLoader const&) = delete;
    JsonLoader(JsonLoader const&)            = delete;
    JsonLoader()                             = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_JSONLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JsonLoader();
#endif
    // NOLINTEND
};

}; // namespace cereal
