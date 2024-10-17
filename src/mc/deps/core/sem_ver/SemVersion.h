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
    enum class MatchType : int {
        Full    = 0x0,
        Partial = 0x1,
        None    = 0x2,
    };

    enum class ParseOption : int {
        AllowWildcards = 0x0,
        NoWildcards    = 0x1,
    };

    struct any_version_constructor {
    public:
        // prevent constructor by default
        any_version_constructor& operator=(any_version_constructor const&);
        any_version_constructor(any_version_constructor const&);
        any_version_constructor();
    };

    ushort      mMajor;
    ushort      mMinor;
    ushort      mPatch;
    std::string mPreRelease;
    std::string mBuildMeta;
    std::string mFullVersionString;
    bool        mValidVersion;
    bool        mAnyVersion;

public:
    // NOLINTBEGIN
    MCAPI SemVersion();

    MCAPI SemVersion(class SemVersion const&);

    MCAPI explicit SemVersion(struct SemVersion::any_version_constructor);

    MCAPI
    SemVersion(ushort major, ushort minor, ushort patch, std::string const& preRelease, std::string const& buildMeta);

    MCAPI std::string const& asString() const;

    MCAPI ushort getMajor() const;

    MCAPI ushort getMinor() const;

    MCAPI ushort getPatch() const;

    MCAPI std::string const& getPreRelease() const;

    MCAPI bool isAnyVersion() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(class SemVersion const& rhs) const;

    MCAPI bool operator<(class SemVersion const& rhs) const;

    MCAPI bool operator<=(class SemVersion const& rhs) const;

    MCAPI class SemVersion& operator=(class SemVersion const&);

    MCAPI bool operator==(class SemVersion const& rhs) const;

    MCAPI bool operator>(class SemVersion const& rhs) const;

    MCAPI bool operator>=(class SemVersion const& rhs) const;

    MCAPI bool satisfies(class SemVersion const& neededVersion) const;

    MCAPI ~SemVersion();

    MCAPI static ::SemVersion::MatchType
    fromJson(class Json::Value const& json, class SemVersion& output, ::SemVersion::ParseOption parseOption);

    MCAPI static ::SemVersion::MatchType fromJsonArray(class Json::Value const& jsonArray, class SemVersion& output);

    MCAPI static ::SemVersion::MatchType
    fromString(std::string const& src, class SemVersion& output, ::SemVersion::ParseOption parseOption);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _parseVersionToString();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void*
    ctor$(ushort major, ushort minor, ushort patch, std::string const& preRelease, std::string const& buildMeta);

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct SemVersion::any_version_constructor);

    MCAPI void* ctor$(class SemVersion const&);

    MCAPI void dtor$();

    MCAPI static struct SemVersion::any_version_constructor const& AnyVersionConstructor();

    // NOLINTEND
};
