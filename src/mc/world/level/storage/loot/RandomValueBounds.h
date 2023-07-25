#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RandomValueBounds {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMVALUEBOUNDS
public:
    RandomValueBounds& operator=(RandomValueBounds const&) = delete;
    RandomValueBounds(RandomValueBounds const&)            = delete;
    RandomValueBounds()                                    = delete;
#endif

public:
    /**
     * @symbol ?deserialize\@RandomValueBounds\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void deserialize(class Json::Value const&);
    /**
     * @symbol ?getFloat\@RandomValueBounds\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float getFloat(class Random&) const;
    /**
     * @symbol ?getInt\@RandomValueBounds\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getInt(class Random&) const;
    /**
     * @symbol ?getMax\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMax() const;
    /**
     * @symbol ?getMin\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMin() const;
};
