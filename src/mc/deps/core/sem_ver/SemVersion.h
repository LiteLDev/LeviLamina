#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/string/StaticOptimizedString.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace Json { class Value; }
// clang-format on

class SemVersion : public ::SemVersionBase<::Bedrock::StaticOptimizedString> {
public:
    // SemVersion inner types define
    enum class MatchType : int {
        Full    = 0,
        Partial = 1,
        None    = 2,
    };

    enum class ParseOption : int {
        AllowWildcards = 0,
        NoWildcards    = 1,
    };

public:
    // prevent constructor by default
    SemVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SemVersion(::SemVersion&&);

    MCAPI SemVersion(::SemVersion const&);

    MCAPI explicit SemVersion(::SemVersionConstant const& other);

    MCAPI SemVersion(
        ushort                           major,
        ushort                           minor,
        ushort                           patch,
        ::Bedrock::StaticOptimizedString preRelease,
        ::Bedrock::StaticOptimizedString buildMeta
    );

    MCAPI ::SemVersion& operator=(::SemVersion&&);

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
    MCAPI void* $ctor(::SemVersion&&);

    MCAPI void* $ctor(::SemVersion const&);

    MCAPI void* $ctor(::SemVersionConstant const& other);

    MCAPI void* $ctor(
        ushort                           major,
        ushort                           minor,
        ushort                           patch,
        ::Bedrock::StaticOptimizedString preRelease,
        ::Bedrock::StaticOptimizedString buildMeta
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
