#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"

namespace cereal {

class JsonLoader : public ::cereal::BasicLoader {

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
