#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SchemaWriter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_SCHEMAWRITER
public:
    SchemaWriter& operator=(SchemaWriter const&) = delete;
    SchemaWriter(SchemaWriter const&)            = delete;
    SchemaWriter()                               = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_SCHEMAWRITER
    /**
     * @symbol ?isSequenceWriter\@SchemaWriter\@cereal\@\@UEBA_NXZ
     */
    MCVAPI bool isSequenceWriter() const;
#endif
};

}; // namespace cereal
