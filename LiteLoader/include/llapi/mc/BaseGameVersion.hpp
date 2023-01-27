/**
 * @file  BaseGameVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../SemVersion.hpp"

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
     * @hash   -221160559
     * @symbol  ??0BaseGameVersion\@\@QEAA\@XZ
     */
    MCAPI BaseGameVersion();
    /**
     * @hash   1380142937
     * @symbol  ??0BaseGameVersion\@\@QEAA\@GII\@Z
     */
    MCAPI BaseGameVersion(unsigned short, unsigned int, unsigned int);
    /**
     * @hash   -452846260
     * @symbol  ??0BaseGameVersion\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI BaseGameVersion(class SemVersion const &);
    /**
     * @hash   338972305
     * @symbol  ??0BaseGameVersion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   1925724744
     * @symbol  ?asSemVersion\@BaseGameVersion\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const & asSemVersion() const;
    /**
     * @hash   -1489163246
     * @symbol  ?asString\@BaseGameVersion\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & asString() const;
    /**
     * @hash   1623825147
     * @symbol  ?getMajor\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getMajor() const;
    /**
     * @hash   504437251
     * @symbol  ?getMinor\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getMinor() const;
    /**
     * @hash   1852892153
     * @symbol  ?getPatch\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getPatch() const;
    /**
     * @hash   -2055123274
     * @symbol  ?isAnyVersion\@BaseGameVersion\@\@QEBA_NXZ
     */
    MCAPI bool isAnyVersion() const;
    /**
     * @hash   -398861867
     * @symbol  ?isCompatibleWith\@BaseGameVersion\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isCompatibleWith(class BaseGameVersion const &) const;
    /**
     * @hash   2044437828
     * @symbol  ?isValid\@BaseGameVersion\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -1470519481
     * @symbol  ??9BaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class BaseGameVersion const &) const;
    /**
     * @hash   -1419554205
     * @symbol  ??MBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class BaseGameVersion const &) const;
    /**
     * @hash   -1890222201
     * @symbol  ??NBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<=(class BaseGameVersion const &) const;
    /**
     * @hash   -1673456964
     * @symbol  ??4BaseGameVersion\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class BaseGameVersion & operator=(class BaseGameVersion const &);
    /**
     * @hash   -206574014
     * @symbol  ??8BaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BaseGameVersion const &) const;
    /**
     * @hash   -1434651709
     * @symbol  ??OBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>(class BaseGameVersion const &) const;
    /**
     * @hash   -187570645
     * @symbol  ??PBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>=(class BaseGameVersion const &) const;
    /**
     * @hash   2063389537
     * @symbol  ??1BaseGameVersion\@\@QEAA\@XZ
     */
    MCAPI ~BaseGameVersion();
    /**
     * @hash   1532420997
     * @symbol  ?ANY\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const ANY;
    /**
     * @hash   -1819852409
     * @symbol  ?EMPTY\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const EMPTY;
    /**
     * @hash   -982476355
     * @symbol  ?INCOMPATIBLE\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const INCOMPATIBLE;
    /**
     * @hash   -1897410490
     * @symbol  ?fromString\@BaseGameVersion\@\@SA?AW4MatchType\@SemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV1\@\@Z
     */
    MCAPI static enum class SemVersion::MatchType fromString(std::string const &, class BaseGameVersion &);

};