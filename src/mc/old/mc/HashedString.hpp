/**
 * @file  HashedString.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HashedString.
 *
 */
class HashedString {

#define AFTER_EXTRA
// Add Member There
    uint64_t hash;
    std::string str;
    int64_t unk;

public:
    //HashedString(HashedString const& hstr)
    //    : str(hstr.getString())
    //    , unk(0)
    //    , hash(computeHash(str)) {
    //}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASHEDSTRING
public:
    HashedString() = delete;
#endif

public:
    /**
     * @symbol  ??0HashedString\@\@QEAA\@_KPEBD\@Z
     */
    MCAPI HashedString(unsigned __int64, char const *);
    /**
     * @symbol  ??0HashedString\@\@QEAA\@PEBD\@Z
     */
    MCAPI HashedString(char const *);
    /**
     * @symbol  ??0HashedString\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI HashedString(std::string const &);
    /**
     * @symbol  ??0HashedString\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI HashedString(class HashedString const &);
    /**
     * @symbol  ??0HashedString\@\@QEAA\@$$T\@Z
     */
    MCAPI HashedString(std::nullptr_t);
    /**
     * @symbol  ??0HashedString\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI HashedString(class HashedString &&);
    /**
     * @symbol  ?c_str\@HashedString\@\@QEBAPEBDXZ
     */
    MCAPI char const * c_str() const;
    /**
     * @symbol  ?clear\@HashedString\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?empty\@HashedString\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol  ?getHash\@HashedString\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol  ?getString\@HashedString\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getString() const;
    /**
     * @symbol  ?isEmpty\@HashedString\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ??BHashedString\@\@QEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    MCAPI operator class gsl::basic_string_span<char const, -1>() const;
    /**
     * @symbol  ??9HashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class HashedString const &) const;
    /**
     * @symbol  ??MHashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class HashedString const &) const;
    /**
     * @symbol  ??4HashedString\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class HashedString & operator=(class HashedString const &);
    /**
     * @symbol  ??4HashedString\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HashedString & operator=(class HashedString &&);
    /**
     * @symbol  ??8HashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class HashedString const &) const;
    /**
     * @symbol  ??1HashedString\@\@QEAA\@XZ
     */
    MCAPI ~HashedString();
    /**
     * @symbol  ?bindType\@HashedString\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?computeHash\@HashedString\@\@SA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static unsigned __int64 computeHash(std::string const &);
    /**
     * @symbol  ?computeHash\@HashedString\@\@SA_KPEBD\@Z
     */
    MCAPI static unsigned __int64 computeHash(char const *);
    /**
     * @symbol  ?defaultErrorValue\@HashedString\@\@2V1\@A
     */
    MCAPI static class HashedString defaultErrorValue;
    /**
     * @symbol  ?getEmptyString\@HashedString\@\@SAAEBV1\@XZ
     */
    MCAPI static class HashedString const & getEmptyString();

};