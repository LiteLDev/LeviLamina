/**
 * @file  SecureStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SecureStorage.
 *
 */
class SecureStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SECURESTORAGE
public:
    class SecureStorage& operator=(class SecureStorage const &) = delete;
    SecureStorage(class SecureStorage const &) = delete;
    SecureStorage() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?add\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool add(std::string const &, std::string const &) = 0;
    /**
     * @vftbl 2
     * @symbol ?addOrUpdate\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool addOrUpdate(std::string const &, std::string const &) = 0;
    /**
     * @vftbl 3
     * @symbol ?remove\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool remove(std::string const &) = 0;
    /**
     * @vftbl 4
     * @symbol ?get\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    virtual bool get(std::string const &, std::string &) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SECURESTORAGE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SecureStorage();
#endif

};
