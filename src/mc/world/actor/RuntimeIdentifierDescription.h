#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RuntimeIdentifierDescription {

public:
    // prevent constructor by default
    RuntimeIdentifierDescription& operator=(RuntimeIdentifierDescription const&) = delete;
    RuntimeIdentifierDescription(RuntimeIdentifierDescription const&)            = delete;
    RuntimeIdentifierDescription()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@RuntimeIdentifierDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RUNTIMEIDENTIFIERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RuntimeIdentifierDescription(); // NOLINT
#endif
    /**
     * @symbol ?parse\@RuntimeIdentifierDescription\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void parse(class Json::Value const&); // NOLINT
};
