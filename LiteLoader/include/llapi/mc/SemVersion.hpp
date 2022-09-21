/**
 * @file  MC/SemVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SemVersion.
 *
 */
class SemVersion {

#define AFTER_EXTRA
// Add Member There
public:
enum class MatchType : int {
    Full = 0x0,
    Partial = 0x1,
    None = 0x2,
};
enum class ParseOption : int {
    AllowWildcards = 0x0,
    NoWildcards = 0x1,
};
struct any_version_constructor {
    any_version_constructor() = delete;
    any_version_constructor(any_version_constructor const&) = delete;
    any_version_constructor(any_version_constructor const&&) = delete;
};
unsigned short mMajor, mMinor, mPatch;              // 0, 2, 4
std::string mPreRelease, mBuildMeta, mFullVersionString; // 8, 40, 72
bool mValidVersion, mAnyVersion;                      // 104, 105

#undef AFTER_EXTRA
public:
    /**
     * @hash   -1816203479
     * @symbol ??0SemVersion@@QEAA@XZ
     */
    MCAPI SemVersion();
    /**
     * @hash   641176249
     * @symbol ??0SemVersion@@QEAA@Uany_version_constructor@0@@Z
     */
    MCAPI SemVersion(struct SemVersion::any_version_constructor);
    /**
     * @hash   -1532776240
     * @symbol ??0SemVersion@@QEAA@GGGAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI SemVersion(unsigned short, unsigned short, unsigned short, std::string const &, std::string const &);
    /**
     * @hash   1417384833
     * @symbol ??0SemVersion@@QEAA@AEBV0@@Z
     */
    MCAPI SemVersion(class SemVersion const &);
    /**
     * @hash   -754893298
     * @symbol ?asString@SemVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & asString() const;
    /**
     * @hash   -280867721
     * @symbol ?getMajor@SemVersion@@QEBAGXZ
     */
    MCAPI unsigned short getMajor() const;
    /**
     * @hash   -402825177
     * @symbol ?getMinor@SemVersion@@QEBAGXZ
     */
    MCAPI unsigned short getMinor() const;
    /**
     * @hash   -1115576089
     * @symbol ?getPatch@SemVersion@@QEBAGXZ
     */
    MCAPI unsigned short getPatch() const;
    /**
     * @hash   1956960476
     * @symbol ?getPreRelease@SemVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getPreRelease() const;
    /**
     * @hash   -477675408
     * @symbol ?isAnyVersion@SemVersion@@QEBA_NXZ
     */
    MCAPI bool isAnyVersion() const;
    /**
     * @hash   -196654182
     * @symbol ?isValid@SemVersion@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -1275198927
     * @symbol ??MSemVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator<(class SemVersion const &) const;
    /**
     * @hash   183996019
     * @symbol ??NSemVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator<=(class SemVersion const &) const;
    /**
     * @hash   -1319771068
     * @symbol ??4SemVersion@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class SemVersion & operator=(class SemVersion const &);
    /**
     * @hash   -1915599366
     * @symbol ??8SemVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class SemVersion const &) const;
    /**
     * @hash   -1726398899
     * @symbol ??OSemVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator>(class SemVersion const &) const;
    /**
     * @hash   1449684051
     * @symbol ??PSemVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator>=(class SemVersion const &) const;
    /**
     * @hash   784607621
     * @symbol ?satisfies@SemVersion@@QEBA_NAEBV1@@Z
     */
    MCAPI bool satisfies(class SemVersion const &) const;
    /**
     * @hash   1051062711
     * @symbol ??1SemVersion@@QEAA@XZ
     */
    MCAPI ~SemVersion();
    /**
     * @hash   1057394435
     * @symbol ?AnyVersionConstructor@SemVersion@@2Uany_version_constructor@1@B
     */
    MCAPI static struct SemVersion::any_version_constructor const AnyVersionConstructor;
    /**
     * @hash   504310661
     * @symbol ?fromJson@SemVersion@@SA?AW4MatchType@1@AEBVValue@Json@@AEAV1@W4ParseOption@1@@Z
     */
    MCAPI static enum SemVersion::MatchType fromJson(class Json::Value const &, class SemVersion &, enum SemVersion::ParseOption);
    /**
     * @hash   -1384560622
     * @symbol ?fromJsonArray@SemVersion@@SA?AW4MatchType@1@AEBVValue@Json@@AEAV1@@Z
     */
    MCAPI static enum SemVersion::MatchType fromJsonArray(class Json::Value const &, class SemVersion &);
    /**
     * @hash   1249078065
     * @symbol ?fromString@SemVersion@@SA?AW4MatchType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV1@W4ParseOption@1@@Z
     */
    MCAPI static enum SemVersion::MatchType fromString(std::string const &, class SemVersion &, enum SemVersion::ParseOption);

//private:
    /**
     * @hash   243706639
     * @symbol ?_parseVersionToString@SemVersion@@AEAAXXZ
     */
    MCAPI void _parseVersionToString();

private:

};