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
     * @symbol ?_convertPropertyToStateInBoneVisibility\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _convertPropertyToStateInBoneVisibility(class Json::Value &);
    /**
     * @symbol ?_convertPropertyToStateInDescription\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _convertPropertyToStateInDescription(class Json::Value &);
    /**
     * @symbol ?_convertPropertyToStateInEventSequence\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _convertPropertyToStateInEventSequence(class Json::Value &);
    /**
     * @symbol ?_convertPropertyToStateInEvents\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _convertPropertyToStateInEvents(class Json::Value &);
    /**
     * @symbol ?_convertPropertyToStateInObjectContainsConditionObject\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _convertPropertyToStateInObjectContainsConditionObject(class Json::Value &);
    /**
     * @symbol ?_convertPropertyToStateInObjectContainsSetBlockStateObject\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _convertPropertyToStateInObjectContainsSetBlockStateObject(class Json::Value &);
    /**
     * @symbol ?_copyMembers\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@0\@Z
     */
    MCAPI void _copyMembers(class Json::Value &, class Json::Value &);
    /**
     * @symbol ?checkAndConvertInBlock\@BlockPropertyToStateConverter\@\@YAXAEBVSemVersion\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI void checkAndConvertInBlock(class SemVersion const &, class Json::Value &);

};