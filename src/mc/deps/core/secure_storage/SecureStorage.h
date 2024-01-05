#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorage {
public:
    // prevent constructor by default
    SecureStorage& operator=(SecureStorage const&);
    SecureStorage(SecureStorage const&);
    SecureStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SecureStorage@@UEAA@XZ
    virtual ~SecureStorage();

    // vIndex: 1, symbol:
    // ?add@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool add(std::string const& key, std::string const& value) = 0;

    // vIndex: 2, symbol:
    // ?addOrUpdate@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool addOrUpdate(std::string const& key, std::string const& value) = 0;

    // vIndex: 3, symbol:
    // ?remove@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool remove(std::string const& key) = 0;

    // vIndex: 4, symbol:
    // ?get@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
    virtual bool get(std::string const& key, std::string& outValue) = 0;

    // NOLINTEND
};
