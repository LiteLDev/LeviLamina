#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class Writer {

public:
    // prevent constructor by default
    Writer& operator=(Writer const&) = delete;
    Writer(Writer const&)            = delete;
    Writer()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?write\@FastWriter\@Json\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@2\@\@Z
     */
    virtual std::string write(class Json::Value const&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JSON_WRITER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Writer();
#endif
    // NOLINTEND
};

}; // namespace Json
