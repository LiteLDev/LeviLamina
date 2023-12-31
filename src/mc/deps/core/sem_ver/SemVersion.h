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
    // symbol: ??0SemVersion@@QEAA@XZ
    MCAPI SemVersion();

    // symbol: ??0SemVersion@@QEAA@AEBV0@@Z
    MCAPI SemVersion(class SemVersion const&);

    // symbol: ??0SemVersion@@QEAA@Uany_version_constructor@0@@Z
    MCAPI explicit SemVersion(struct SemVersion::any_version_constructor);

    // symbol: ??0SemVersion@@QEAA@GGGAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI
    SemVersion(ushort major, ushort minor, ushort patch, std::string const& preRelease, std::string const& buildMeta);

    // symbol: ?asString@SemVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& asString() const;

    // symbol: ?getMajor@SemVersion@@QEBAGXZ
    MCAPI ushort getMajor() const;

    // symbol: ?getMinor@SemVersion@@QEBAGXZ
    MCAPI ushort getMinor() const;

    // symbol: ?getPatch@SemVersion@@QEBAGXZ
    MCAPI ushort getPatch() const;

    // symbol: ?getPreRelease@SemVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getPreRelease() const;

    // symbol: ?isAnyVersion@SemVersion@@QEBA_NXZ
    MCAPI bool isAnyVersion() const;

    // symbol: ?isValid@SemVersion@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??9SemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class SemVersion const& rhs) const;

    // symbol: ??MSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator<(class SemVersion const& rhs) const;

    // symbol: ??NSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator<=(class SemVersion const& rhs) const;

    // symbol: ??4SemVersion@@QEAAAEAV0@AEBV0@@Z
    MCAPI class SemVersion& operator=(class SemVersion const&);

    // symbol: ??8SemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class SemVersion const& rhs) const;

    // symbol: ??OSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator>(class SemVersion const& rhs) const;

    // symbol: ??PSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator>=(class SemVersion const& rhs) const;

    // symbol: ?satisfies@SemVersion@@QEBA_NAEBV1@@Z
    MCAPI bool satisfies(class SemVersion const& neededVersion) const;

    // symbol: ??1SemVersion@@QEAA@XZ
    MCAPI ~SemVersion();

    // symbol: ?fromJson@SemVersion@@SA?AW4MatchType@1@AEBVValue@Json@@AEAV1@W4ParseOption@1@@Z
    MCAPI static ::SemVersion::MatchType
    fromJson(class Json::Value const& json, class SemVersion& output, ::SemVersion::ParseOption parseOption);

    // symbol: ?fromJsonArray@SemVersion@@SA?AW4MatchType@1@AEBVValue@Json@@AEAV1@@Z
    MCAPI static ::SemVersion::MatchType fromJsonArray(class Json::Value const& jsonArray, class SemVersion& output);

    // symbol:
    // ?fromString@SemVersion@@SA?AW4MatchType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV1@W4ParseOption@1@@Z
    MCAPI static ::SemVersion::MatchType
    fromString(std::string const& src, class SemVersion& output, ::SemVersion::ParseOption parseOption);

    // symbol: ?AnyVersionConstructor@SemVersion@@2Uany_version_constructor@1@B
    MCAPI static struct any_version_constructor const AnyVersionConstructor;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_parseVersionToString@SemVersion@@AEAAXXZ
    MCAPI void _parseVersionToString();

    // NOLINTEND
};
