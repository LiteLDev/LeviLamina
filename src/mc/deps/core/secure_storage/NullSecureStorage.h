#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NullSecureStorage {

public:
    // prevent constructor by default
    NullSecureStorage& operator=(NullSecureStorage const&) = delete;
    NullSecureStorage(NullSecureStorage const&)            = delete;
    NullSecureStorage()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSECURESTORAGE
    /**
     * @symbol
     * ?add\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI bool add(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?addOrUpdate\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI bool addOrUpdate(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?get\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    MCVAPI bool get(std::string const&, std::string&); // NOLINT
    /**
     * @symbol
     * ?remove\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool remove(std::string const&); // NOLINT
#endif
};
