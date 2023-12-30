#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {
public:
    // prevent constructor by default
    NullSecureStorage& operator=(NullSecureStorage const&);
    NullSecureStorage(NullSecureStorage const&);
    NullSecureStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NullSecureStorage@@UEAA@XZ
    virtual ~NullSecureStorage() = default;

    // vIndex: 1, symbol:
    // ?add@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool add(std::string const& key, std::string const& value);

    // vIndex: 2, symbol:
    // ?addOrUpdate@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool addOrUpdate(std::string const& key, std::string const& value);

    // vIndex: 3, symbol:
    // ?remove@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool remove(std::string const& key);

    // vIndex: 4, symbol:
    // ?get@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
    virtual bool get(std::string const& key, std::string& outValue);

    // NOLINTEND
};
