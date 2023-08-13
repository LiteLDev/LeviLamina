#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {

public:
    // prevent constructor by default
    NullSecureStorage& operator=(NullSecureStorage const&) = delete;
    NullSecureStorage(NullSecureStorage const&)            = delete;
    NullSecureStorage()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?add\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool add(std::string const&, std::string const&);
    /**
     * @vftbl 2
     * @symbol
     * ?addOrUpdate\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool addOrUpdate(std::string const&, std::string const&);
    /**
     * @vftbl 3
     * @symbol
     * ?remove\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool remove(std::string const&);
    /**
     * @vftbl 4
     * @symbol
     * ?get\@NullSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    virtual bool get(std::string const&, std::string&);
    // NOLINTEND
};
