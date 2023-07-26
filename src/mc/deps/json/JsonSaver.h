#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class JsonSaver {

public:
    // prevent constructor by default
    JsonSaver& operator=(JsonSaver const&) = delete;
    JsonSaver(JsonSaver const&)            = delete;
    JsonSaver()                            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_JSONSAVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JsonSaver(); // NOLINT
#endif
    /**
     * @symbol
     * ?toString\@JsonSaver\@cereal\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString(); // NOLINT
};

}; // namespace cereal
