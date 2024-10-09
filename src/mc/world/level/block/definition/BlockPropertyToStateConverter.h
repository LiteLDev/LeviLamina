#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace BlockPropertyToStateConverter {
// NOLINTBEGIN
MCAPI void _convertPropertyToStateInBoneVisibility(class Json::Value& obj);

MCAPI void _convertPropertyToStateInDescription(class Json::Value& root);

MCAPI void _convertPropertyToStateInEventSequence(class Json::Value& obj);

MCAPI void _convertPropertyToStateInEvents(class Json::Value& root);

MCAPI void _convertPropertyToStateInObjectContainsConditionObject(class Json::Value& obj);

MCAPI void _convertPropertyToStateInObjectContainsSetBlockStateObject(class Json::Value& obj);

MCAPI void _copyMembers(class Json::Value& from, class Json::Value& to);

MCAPI void checkAndConvertInBlock(class SemVersion const& version, class Json::Value& root);
// NOLINTEND

}; // namespace BlockPropertyToStateConverter
