#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace BlockPropertyToStateConverter {
/**
 * @symbol ?_convertPropertyToStateInDescription\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@\@Z
 */
MCAPI void _convertPropertyToStateInDescription(class Json::Value&);
/**
 * @symbol ?_copyMembers\@BlockPropertyToStateConverter\@\@YAXAEAVValue\@Json\@\@0\@Z
 */
MCAPI void _copyMembers(class Json::Value&, class Json::Value&);
/**
 * @symbol ?checkAndConvert\@BlockPropertyToStateConverter\@\@YAXAEBVSemVersion\@\@AEAVValue\@Json\@\@\@Z
 */
MCAPI void checkAndConvert(class SemVersion const&, class Json::Value&);

}; // namespace BlockPropertyToStateConverter
