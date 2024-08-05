#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace BlockPropertyToStateConverter {
// NOLINTBEGIN
MCAPI void _convertPropertyToStateInBoneVisibility(class Json::Value&);

MCAPI void _convertPropertyToStateInDescription(class Json::Value&);

MCAPI void _convertPropertyToStateInEventSequence(class Json::Value&);

MCAPI void _convertPropertyToStateInEvents(class Json::Value&);

MCAPI void _convertPropertyToStateInObjectContainsConditionObject(class Json::Value&);

MCAPI void _convertPropertyToStateInObjectContainsSetBlockStateObject(class Json::Value&);

MCAPI void _copyMembers(class Json::Value&, class Json::Value&);

MCAPI void checkAndConvertInBlock(class SemVersion const&, class Json::Value&);
// NOLINTEND

}; // namespace BlockPropertyToStateConverter
