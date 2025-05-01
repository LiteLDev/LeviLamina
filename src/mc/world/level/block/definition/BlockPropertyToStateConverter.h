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
MCNAPI void _convertPropertyToStateInBoneVisibility(::Json::Value& obj);

MCNAPI void _convertPropertyToStateInDescription(::Json::Value& root);

MCNAPI void _convertPropertyToStateInEventSequence(::Json::Value& obj);

MCNAPI void _convertPropertyToStateInEvents(::Json::Value& root);

MCNAPI void _convertPropertyToStateInObjectContainsConditionObject(::Json::Value& obj);

MCNAPI void _convertPropertyToStateInObjectContainsSetBlockStateObject(::Json::Value& obj);

MCNAPI void _convertPropertyToStateInPermutation(::Json::Value& root);

MCNAPI void _copyMembers(::Json::Value& from, ::Json::Value& to);

MCNAPI void checkAndConvertInBlock(::SemVersion const& version, ::Json::Value& root);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::SemVersionConstant const& BLOCK_PROPERTY_RENAMED_TO_STATE_1_20_20();
// NOLINTEND

} // namespace BlockPropertyToStateConverter
