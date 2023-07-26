#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

class BaseGameVersion {

public:
    /**
     * @symbol ??0BaseGameVersion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BaseGameVersion(class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ??0BaseGameVersion\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI BaseGameVersion(class SemVersion const&); // NOLINT
    /**
     * @symbol ??0BaseGameVersion\@\@QEAA\@XZ
     */
    MCAPI BaseGameVersion(); // NOLINT
    /**
     * @symbol ??0BaseGameVersion\@\@QEAA\@GII\@Z
     */
    MCAPI BaseGameVersion(unsigned short, unsigned int, unsigned int); // NOLINT
    /**
     * @symbol ?asSemVersion\@BaseGameVersion\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& asSemVersion() const; // NOLINT
    /**
     * @symbol
     * ?asString\@BaseGameVersion\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& asString() const; // NOLINT
    /**
     * @symbol ?getMajor\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getMajor() const; // NOLINT
    /**
     * @symbol ?getMinor\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getMinor() const; // NOLINT
    /**
     * @symbol ?getPatch\@BaseGameVersion\@\@QEBAGXZ
     */
    MCAPI unsigned short getPatch() const; // NOLINT
    /**
     * @symbol ?isAnyVersion\@BaseGameVersion\@\@QEBA_NXZ
     */
    MCAPI bool isAnyVersion() const; // NOLINT
    /**
     * @symbol ?isCompatibleWith\@BaseGameVersion\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isCompatibleWith(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ?isNeverCompatible\@BaseGameVersion\@\@QEBA_NXZ
     */
    MCAPI bool isNeverCompatible() const; // NOLINT
    /**
     * @symbol ?isValid\@BaseGameVersion\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??9BaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ??MBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ??NBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<=(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ??4BaseGameVersion\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class BaseGameVersion& operator=(class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ??8BaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ??OBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ??PBaseGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>=(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ??1BaseGameVersion\@\@QEAA\@XZ
     */
    MCAPI ~BaseGameVersion(); // NOLINT
    /**
     * @symbol
     * ?fromString\@BaseGameVersion\@\@SA?AW4MatchType\@SemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV1\@\@Z
     */
    MCAPI static enum class SemVersion::MatchType fromString(std::string const&, class BaseGameVersion&); // NOLINT
    /**
     * @symbol ?ANY\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const ANY; // NOLINT
    /**
     * @symbol ?EMPTY\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const EMPTY; // NOLINT
    /**
     * @symbol ?INCOMPATIBLE\@BaseGameVersion\@\@2V1\@B
     */
    MCAPI static class BaseGameVersion const INCOMPATIBLE; // NOLINT
};
