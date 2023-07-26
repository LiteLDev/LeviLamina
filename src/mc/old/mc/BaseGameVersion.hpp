/**
 * @file  BaseGameVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ??0BaseGameVersion\@\@QEAA\@XZ
     */
    MCAPI BaseGameVersion();
    /**
     * @symbol  ??0BaseGameVersion\@\@QEAA\@GII\@Z
     */
    MCAPI BaseGameVersion(unsigned short, unsigned int, unsigned int);
    /**
     * @symbol  ??0BaseGameVersion\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI BaseGameVersion(class SemVersion const &);
    /**
     * @symbol  ??0BaseGameVersion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol  ?asSemVersion\@BaseGameVersion\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const & asSemVersion() const;
    /**
     * @symbol  ?asString\@BaseGameVersion\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & asString() const;
    /**
     * @symbol  ?getMajor\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getMajor() const;
    /**
     * @symbol  ?getMinor\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getMinor() const;
    /**
     * @symbol  ?getPatch\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getPatch() const;
    /**
     * @symbol  ?isAnyVersion\@BaseGameVersion\@\@QEBA_NXZ
     */
    MCAPI bool isAnyVersion() const;
    /**
     * @symbol  ?isCompatibleWith\@BaseGameVersion\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isCompatibleWith(class BaseGameVersion const &) const;
    /**
     * @symbol  ?isValid\@BaseGameVersion\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ??9BaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class BaseGameVersion const &) const;
    /**
     * @symbol  ??MBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class BaseGameVersion const &) const;
    /**
     * @symbol  ??NBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<=(class BaseGameVersion const &) const;
    /**
     * @symbol  ??4BaseGameVersion\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class BaseGameVersion & operator=(class BaseGameVersion const &);
    /**
     * @symbol  ??8BaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BaseGameVersion const &) const;
    /**
     * @symbol  ??OBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>(class BaseGameVersion const &) const;
    /**
     * @symbol  ??PBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>=(class BaseGameVersion const &) const;
    /**
     * @symbol  ??1BaseGameVersion\@\@QEAA\@XZ
     */
    MCAPI ~BaseGameVersion();
    /**
     * @symbol  ?ANY\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const ANY;
    /**
     * @symbol  ?EMPTY\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const EMPTY;
    /**
     * @symbol  ?INCOMPATIBLE\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const INCOMPATIBLE;
    /**
     * @symbol  ?fromString\@BaseGameVersion\@\@SA?AW4MatchType\@SemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV1\@\@Z
     */
    MCAPI static enum class SemVersion::MatchType fromString(std::string const &, class BaseGameVersion &);

};