#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace BlockPropertyToStateConverter {
// NOLINTBEGIN
// symbol: ?_convertPropertyToStateInBoneVisibility@BlockPropertyToStateConverter@@YAXAEAVValue@Json@@@Z
MCAPI void _convertPropertyToStateInBoneVisibility(class Json::Value&);

// symbol: ?_convertPropertyToStateInDescription@BlockPropertyToStateConverter@@YAXAEAVValue@Json@@@Z
MCAPI void _convertPropertyToStateInDescription(class Json::Value&);

// symbol: ?_convertPropertyToStateInEventSequence@BlockPropertyToStateConverter@@YAXAEAVValue@Json@@@Z
MCAPI void _convertPropertyToStateInEventSequence(class Json::Value&);

// symbol: ?_convertPropertyToStateInEvents@BlockPropertyToStateConverter@@YAXAEAVValue@Json@@@Z
MCAPI void _convertPropertyToStateInEvents(class Json::Value&);

// symbol: ?_convertPropertyToStateInObjectContainsConditionObject@BlockPropertyToStateConverter@@YAXAEAVValue@Json@@@Z
MCAPI void _convertPropertyToStateInObjectContainsConditionObject(class Json::Value&);

// symbol:
// ?_convertPropertyToStateInObjectContainsSetBlockStateObject@BlockPropertyToStateConverter@@YAXAEAVValue@Json@@@Z
MCAPI void _convertPropertyToStateInObjectContainsSetBlockStateObject(class Json::Value&);

// symbol: ?_copyMembers@BlockPropertyToStateConverter@@YAXAEAVValue@Json@@0@Z
MCAPI void _copyMembers(class Json::Value&, class Json::Value&);

// symbol: ?checkAndConvertInBlock@BlockPropertyToStateConverter@@YAXAEBVSemVersion@@AEAVValue@Json@@@Z
MCAPI void checkAndConvertInBlock(class SemVersion const&, class Json::Value&);
// NOLINTEND

}; // namespace BlockPropertyToStateConverter
