/**
 * @file  BaseGameVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SemVersion.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseGameVersion.
 *
 */
class BaseGameVersion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @hash   -504447983
     * @symbol ??0BaseGameVersion@@QEAA@XZ
     */
    MCAPI BaseGameVersion();
    /**
     * @hash   1096778633
     * @symbol ??0BaseGameVersion@@QEAA@GII@Z
     */
    MCAPI BaseGameVersion(unsigned short, unsigned int, unsigned int);
    /**
     * @hash   -736256692
     * @symbol ??0BaseGameVersion@@QEAA@AEBVSemVersion@@@Z
     */
    MCAPI BaseGameVersion(class SemVersion const &);
    /**
     * @hash   55561873
     * @symbol ??0BaseGameVersion@@QEAA@AEBV0@@Z
     */
    MCAPI BaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   1829101960
     * @symbol ?asSemVersion@BaseGameVersion@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & asSemVersion() const;
    /**
     * @hash   -1772450670
     * @symbol ?asString@BaseGameVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & asString() const;
    /**
     * @hash   1340568475
     * @symbol ?getMajor@BaseGameVersion@@QEBAGXZ
     */
    MCAPI unsigned short getMajor() const;
    /**
     * @hash   221180579
     * @symbol ?getMinor@BaseGameVersion@@QEBAGXZ
     */
    MCAPI unsigned short getMinor() const;
    /**
     * @hash   1569635481
     * @symbol ?getPatch@BaseGameVersion@@QEBAGXZ
     */
    MCAPI unsigned short getPatch() const;
    /**
     * @hash   1956587350
     * @symbol ?isAnyVersion@BaseGameVersion@@QEBA_NXZ
     */
    MCAPI bool isAnyVersion() const;
    /**
     * @hash   -682118539
     * @symbol ?isCompatibleWith@BaseGameVersion@@QEBA_NAEBV1@@Z
     */
    MCAPI bool isCompatibleWith(class BaseGameVersion const &) const;
    /**
     * @hash   1761181156
     * @symbol ?isValid@BaseGameVersion@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -1753806905
     * @symbol ??9BaseGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class BaseGameVersion const &) const;
    /**
     * @hash   -1702841629
     * @symbol ??MBaseGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator<(class BaseGameVersion const &) const;
    /**
     * @hash   2121457671
     * @symbol ??NBaseGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator<=(class BaseGameVersion const &) const;
    /**
     * @hash   -1777798500
     * @symbol ??4BaseGameVersion@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class BaseGameVersion & operator=(class BaseGameVersion const &);
    /**
     * @hash   -489861438
     * @symbol ??8BaseGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class BaseGameVersion const &) const;
    /**
     * @hash   -1717939133
     * @symbol ??OBaseGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator>(class BaseGameVersion const &) const;
    /**
     * @hash   -470858069
     * @symbol ??PBaseGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator>=(class BaseGameVersion const &) const;
    /**
     * @hash   1970595377
     * @symbol ??1BaseGameVersion@@QEAA@XZ
     */
    MCAPI ~BaseGameVersion();
    /**
     * @hash   422027781
     * @symbol ?ANY@BaseGameVersion@@2V1@B
     */
    MCAPI static class BaseGameVersion const ANY;
    /**
     * @hash   1364721671
     * @symbol ?EMPTY@BaseGameVersion@@2V1@B
     */
    MCAPI static class BaseGameVersion const EMPTY;
    /**
     * @hash   -2092869571
     * @symbol ?INCOMPATIBLE@BaseGameVersion@@2V1@B
     */
    MCAPI static class BaseGameVersion const INCOMPATIBLE;
    /**
     * @hash   2114269382
     * @symbol ?fromString@BaseGameVersion@@SA?AW4MatchType@SemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV1@@Z
     */
    MCAPI static enum SemVersion::MatchType fromString(std::string const &, class BaseGameVersion &);

};