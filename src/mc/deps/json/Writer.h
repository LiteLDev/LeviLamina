#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

namespace Json {

class Writer {

public:
    virtual ~Writer() {}
    virtual std::string write(Json::Value const& root) = 0;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JSON_WRITER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Writer();
#endif
    // NOLINTEND
};

}; // namespace Json
