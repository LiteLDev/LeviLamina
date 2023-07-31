#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class FastWriter {

public:
    // prevent constructor by default
    FastWriter& operator=(FastWriter const&) = delete;
    FastWriter(FastWriter const&)            = delete;

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
    virtual std::string write(class Json::Value const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JSON_FASTWRITER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FastWriter();
#endif
    /**
     * @symbol ??0FastWriter\@Json\@\@QEAA\@XZ
     */
    MCAPI FastWriter();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?writeValue\@FastWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeValue(class Json::Value const&);
    // NOLINTEND
};

}; // namespace Json
