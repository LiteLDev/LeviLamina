#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct FloatRange {

public:
    // prevent constructor by default
    FloatRange& operator=(FloatRange const&) = delete;
    FloatRange(FloatRange const&)            = delete;
    FloatRange()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getValue\@FloatRange\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float getValue(class Random&) const;
    /**
     * @symbol ?parseJson\@FloatRange\@\@QEAA_NAEBVValue\@Json\@\@MM\@Z
     */
    MCAPI bool parseJson(class Json::Value const&, float, float);
    // NOLINTEND
};
