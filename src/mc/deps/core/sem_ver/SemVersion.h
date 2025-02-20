#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersionBase.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace Bedrock { class StaticOptimizedString; }
namespace Json { class Value; }
// clang-format on

class SemVersion : public ::SemVersionBase<::Bedrock::StaticOptimizedString> {
public:
    // SemVersion inner types define
    enum class ParseOption : int {
        AllowWildcards = 0,
        NoWildcards    = 1,
    };

    enum class MatchType : int {
        Full    = 0,
        Partial = 1,
        None    = 2,
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SemVersion();

    MCAPI SemVersion(::SemVersion const&);

    MCAPI explicit SemVersion(::SemVersionConstant const& other);

    MCAPI SemVersion(ushort, ushort, ushort, ::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString);

    MCAPI ::SemVersion& operator=(::SemVersion const&);

    MCAPI ~SemVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SemVersion::MatchType
    fromJson(::Json::Value const& json, ::SemVersion& output, ::SemVersion::ParseOption parseOption);

    MCAPI static ::SemVersion::MatchType fromJsonArray(::Json::Value const& jsonArray, ::SemVersion& output);

    MCAPI static ::SemVersion::MatchType
    fromString(::std::string const& src, ::SemVersion& output, ::SemVersion::ParseOption parseOption);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::SemVersion const&);

    MCAPI void* $ctor(::SemVersionConstant const& other);

    MCAPI void* $ctor(ushort, ushort, ushort, ::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
