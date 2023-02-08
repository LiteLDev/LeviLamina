/**
 * @file  HashedString.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   804126954
     * @symbol  ??0HashedString\@\@QEAA\@_KPEBD\@Z
     */
    MCAPI HashedString(unsigned __int64, char const *);
    /**
     * @hash   -1216323938
     * @symbol  ??0HashedString\@\@QEAA\@PEBD\@Z
     */
    MCAPI HashedString(char const *);
    /**
     * @hash   645837031
     * @symbol  ??0HashedString\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI HashedString(std::string const &);
    /**
     * @hash   1096668481
     * @symbol  ??0HashedString\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI HashedString(class HashedString const &);
    /**
     * @hash   -1245625173
     * @symbol  ??0HashedString\@\@QEAA\@$$T\@Z
     */
    MCAPI HashedString(std::nullptr_t);
    /**
     * @hash   -1249658459
     * @symbol  ??0HashedString\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI HashedString(class HashedString &&);
    /**
     * @hash   801948441
     * @symbol  ?c_str\@HashedString\@\@QEBAPEBDXZ
     */
    MCAPI char const * c_str() const;
    /**
     * @hash   710284899
     * @symbol  ?clear\@HashedString\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   -2069957282
     * @symbol  ?empty\@HashedString\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @hash   -212033001
     * @symbol  ?getHash\@HashedString\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   -581658084
     * @symbol  ?getString\@HashedString\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getString() const;
    /**
     * @hash   -615752182
     * @symbol  ?isEmpty\@HashedString\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   1300813296
     * @symbol  ??BHashedString\@\@QEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    MCAPI operator class gsl::basic_string_span<char const, -1>() const;
    /**
     * @hash   532963500
     * @symbol  ??9HashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class HashedString const &) const;
    /**
     * @hash   1534132272
     * @symbol  ??MHashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class HashedString const &) const;
    /**
     * @hash   966324644
     * @symbol  ??4HashedString\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class HashedString & operator=(class HashedString const &);
    /**
     * @hash   1293215368
     * @symbol  ??4HashedString\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HashedString & operator=(class HashedString &&);
    /**
     * @hash   -398176343
     * @symbol  ??8HashedString\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class HashedString const &) const;
    /**
     * @hash   1757266072
     * @symbol  ??1HashedString\@\@QEAA\@XZ
     */
    MCAPI ~HashedString();
    /**
     * @hash   -792832573
     * @symbol  ?bindType\@HashedString\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1233155762
     * @symbol  ?computeHash\@HashedString\@\@SA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static unsigned __int64 computeHash(std::string const &);
    /**
     * @hash   728302305
     * @symbol  ?computeHash\@HashedString\@\@SA_KPEBD\@Z
     */
    MCAPI static unsigned __int64 computeHash(char const *);
    /**
     * @hash   114310710
     * @symbol  ?defaultErrorValue\@HashedString\@\@2V1\@A
     */
    MCAPI static class HashedString defaultErrorValue;
    /**
     * @hash   -1334499301
     * @symbol  ?getEmptyString\@HashedString\@\@SAAEBV1\@XZ
     */
    MCAPI static class HashedString const & getEmptyString();

};