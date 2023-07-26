/**
 * @file  NullSecureStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NullSecureStorage.
 *
 */
class NullSecureStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSECURESTORAGE
public:
    class NullSecureStorage& operator=(class NullSecureStorage const &) = delete;
    NullSecureStorage(class NullSecureStorage const &) = delete;
    NullSecureStorage() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSECURESTORAGE
    /**
     * @symbol  ?add\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI bool add(std::string const &, std::string const &);
    /**
     * @symbol  ?addOrUpdate\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI bool addOrUpdate(std::string const &, std::string const &);
    /**
     * @symbol  ?get\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    MCVAPI bool get(std::string const &, std::string &);
    /**
     * @symbol  ?remove\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool remove(std::string const &);
#endif

};