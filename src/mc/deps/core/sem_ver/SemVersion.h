#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SemVersion {
public:
    // SemVersion inner types declare
    // clang-format off
    struct any_version_constructor;
    // clang-format on

    // SemVersion inner types define
    enum class ParseOption : int {
        AllowWildcards = 0,
        NoWildcards    = 1,
    };

    struct any_version_constructor {};

    enum class MatchType : int {
        Full    = 0,
        Partial = 1,
        None    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>         mMajor;
    ::ll::TypedStorage<2, 2, ushort>         mMinor;
    ::ll::TypedStorage<2, 2, ushort>         mPatch;
    ::ll::TypedStorage<8, 32, ::std::string> mPreRelease;
    ::ll::TypedStorage<8, 32, ::std::string> mBuildMeta;
    ::ll::TypedStorage<8, 32, ::std::string> mFullVersionString;
    ::ll::TypedStorage<1, 1, bool>           mValidVersion;
    ::ll::TypedStorage<1, 1, bool>           mAnyVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SemVersion();

    MCAPI SemVersion(::SemVersion const&);

    MCAPI explicit SemVersion(::SemVersion::any_version_constructor);

    MCAPI SemVersion(
        ushort               major,
        ushort               minor,
        ushort               patch,
        ::std::string const& preRelease,
        ::std::string const& buildMeta
    );

    MCAPI void _parseVersionToString();

    MCAPI ::std::string const& asString() const;

    MCAPI ::std::string const& getBuildMeta() const;

    MCAPI ushort getMajor() const;

    MCAPI ushort getMinor() const;

    MCAPI ushort getPatch() const;

    MCAPI ::std::string const& getPreRelease() const;

    MCAPI bool isAnyVersion() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(::SemVersion const& rhs) const;

    MCAPI bool operator<(::SemVersion const& rhs) const;

    MCAPI bool operator<=(::SemVersion const& rhs) const;

    MCAPI ::SemVersion& operator=(::SemVersion const&);

    MCAPI bool operator==(::SemVersion const& rhs) const;

    MCAPI bool operator>(::SemVersion const& rhs) const;

    MCAPI bool operator>=(::SemVersion const& rhs) const;

    MCAPI bool satisfies(::SemVersion const& neededVersion) const;

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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersion::any_version_constructor const& AnyVersionConstructor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SemVersion const&);

    MCAPI void* $ctor(::SemVersion::any_version_constructor);

    MCAPI void*
    $ctor(ushort major, ushort minor, ushort patch, ::std::string const& preRelease, ::std::string const& buildMeta);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
