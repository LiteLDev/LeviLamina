#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
class SemVersionConstant;
namespace Json { class Value; }
// clang-format on

namespace BlockPropertyToStateConverter {
// functions
// NOLINTBEGIN
MCAPI void _convertPropertyToStateInBoneVisibility(::Json::Value& obj);

MCAPI void _convertPropertyToStateInDescription(::Json::Value& root);

MCAPI void _convertPropertyToStateInEventSequence(::Json::Value& obj);

MCAPI void _convertPropertyToStateInEvents(::Json::Value& root);

MCAPI void _convertPropertyToStateInObjectContainsConditionObject(::Json::Value& obj);

MCAPI void _convertPropertyToStateInObjectContainsSetBlockStateObject(::Json::Value& obj);

MCAPI void _copyMembers(::Json::Value& from, ::Json::Value& to);

MCAPI void checkAndConvertInBlock(::SemVersion const& version, ::Json::Value& root);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::SemVersionConstant const& BLOCK_PROPERTY_RENAMED_TO_STATE_1_20_20();
// NOLINTEND

}
