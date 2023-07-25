#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SerializerTraits; }
// clang-format on

namespace cereal {

struct SchemaReader {
public:
    // SchemaReader inner types declare
    // clang-format off
    struct ScopedPop;
    // clang-format on

    // SchemaReader inner types define
    struct ScopedPop {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_SCHEMAREADER_SCOPEDPOP
    public:
        ScopedPop& operator=(ScopedPop const&) = delete;
        ScopedPop(ScopedPop const&)            = delete;
        ScopedPop()                            = delete;
#endif

    public:
        /**
         * @symbol ??1ScopedPop\@SchemaReader\@cereal\@\@QEAA\@XZ
         */
        MCAPI ~ScopedPop();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_SCHEMAREADER
public:
    SchemaReader& operator=(SchemaReader const&) = delete;
    SchemaReader(SchemaReader const&)            = delete;
    SchemaReader()                               = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_SCHEMAREADER
    /**
     * @symbol ?isSequenceReader\@SchemaReader\@cereal\@\@UEBA_NXZ
     */
    MCVAPI bool isSequenceReader() const;
#endif
    /**
     * @symbol ?scopedPop\@SchemaReader\@cereal\@\@QEAA?AUScopedPop\@12\@AEBUSerializerTraits\@2\@\@Z
     */
    MCAPI struct cereal::SchemaReader::ScopedPop scopedPop(struct cereal::SerializerTraits const&);
};

}; // namespace cereal
