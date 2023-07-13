/**
 * @file  BlockPropertyToStateConverter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace BlockPropertyToStateConverter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_convertPropertyToStateInDescription\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _convertPropertyToStateInDescription(class Json::Value &);
    /**
     * @symbol ?_copyMembers\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@0\@Z
     */
    MCAPI void _copyMembers(class Json::Value &, class Json::Value &);
    /**
     * @symbol ?checkAndConvert\@BlockPropertyToStateConverter\@\@YAXAEBVSemVersion\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI void checkAndConvert(class SemVersion const &, class Json::Value &);

};