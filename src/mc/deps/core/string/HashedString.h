#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {

public:
    // prevent constructor by default
    HashedString() = delete;

public:
    /**
     * @symbol ??0HashedString\@\@QEAA\@$$T\@Z
     */
    MCAPI HashedString(std::nullptr_t); // NOLINT
    /**
     * @symbol ??0HashedString\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI HashedString(class HashedString const&); // NOLINT
    /**
     * @symbol ??0HashedString\@\@QEAA\@_KPEBD\@Z
     */
    MCAPI HashedString(unsigned __int64, char const*); // NOLINT
    /**
     * @symbol ??0HashedString\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI HashedString(class HashedString&&); // NOLINT
    /**
     * @symbol ??0HashedString\@\@QEAA\@PEBD\@Z
     */
    MCAPI HashedString(char const*); // NOLINT
    /**
     * @symbol ??0HashedString\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI HashedString(std::string const&); // NOLINT
    /**
     * @symbol ?c_str\@HashedString\@\@QEBAPEBDXZ
     */
    MCAPI char const* c_str() const; // NOLINT
    /**
     * @symbol ?clear\@HashedString\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?empty\@HashedString\@\@QEBA_NXZ
     */
    MCAPI bool empty() const; // NOLINT
    /**
     * @symbol ?getHash\@HashedString\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const; // NOLINT
    /**
     * @symbol
     * ?getString\@HashedString\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getString() const; // NOLINT
    /**
     * @symbol ?isEmpty\@HashedString\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ??BHashedString\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI operator class std::basic_string_view<char, struct std::char_traits<char>>() const; // NOLINT
    /**
     * @symbol ??9HashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class HashedString const&) const; // NOLINT
    /**
     * @symbol ??MHashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class HashedString const&) const; // NOLINT
    /**
     * @symbol ??4HashedString\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class HashedString& operator=(class HashedString const&); // NOLINT
    /**
     * @symbol ??4HashedString\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HashedString& operator=(class HashedString&&); // NOLINT
    /**
     * @symbol ??8HashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class HashedString const&) const; // NOLINT
    /**
     * @symbol ??1HashedString\@\@QEAA\@XZ
     */
    MCAPI ~HashedString(); // NOLINT
    /**
     * @symbol ?bindType\@HashedString\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?computeHash\@HashedString\@\@SA_KPEBD\@Z
     */
    MCAPI static unsigned __int64 computeHash(char const*); // NOLINT
    /**
     * @symbol
     * ?computeHash\@HashedString\@\@SA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static unsigned __int64 computeHash(std::string const&); // NOLINT
    /**
     * @symbol ?getEmptyString\@HashedString\@\@SAAEBV1\@XZ
     */
    MCAPI static class HashedString const& getEmptyString(); // NOLINT
    /**
     * @symbol ?defaultErrorValue\@HashedString\@\@2V1\@A
     */
    MCAPI static class HashedString defaultErrorValue; // NOLINT
};
