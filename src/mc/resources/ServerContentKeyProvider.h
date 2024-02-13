#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentAccessibilityProvider.h"

class ServerContentKeyProvider : public ::IContentAccessibilityProvider {
public:
    // prevent constructor by default
    ServerContentKeyProvider& operator=(ServerContentKeyProvider const&);
    ServerContentKeyProvider(ServerContentKeyProvider const&);
    ServerContentKeyProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerContentKeyProvider@@UEAA@XZ
    virtual ~ServerContentKeyProvider() = default;

    // vIndex: 1, symbol:
    // ?getContentKey@ServerContentKeyProvider@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@@Z
    virtual std::string getContentKey(class ContentIdentity const&) const;

    // vIndex: 2, symbol:
    // ?getAlternateContentKey@IContentKeyProvider@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@@Z
    virtual std::string getAlternateContentKey(class ContentIdentity const&) const;

    // vIndex: 3, symbol: ?requireEncryptedReads@IContentKeyProvider@@UEBA_NXZ
    virtual bool requireEncryptedReads() const;

    // vIndex: 4, symbol:
    // ?setTempContentKeys@ServerContentKeyProvider@@UEAAXAEBV?$unordered_map@VContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VContentIdentity@@@3@U?$equal_to@VContentIdentity@@@3@V?$allocator@U?$pair@$$CBVContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void setTempContentKeys(std::unordered_map<class ContentIdentity, std::string> const&);

    // vIndex: 5, symbol: ?clearTempContentKeys@ServerContentKeyProvider@@UEAAXXZ
    virtual void clearTempContentKeys();

    // vIndex: 6, symbol: ?canAccess@ServerContentKeyProvider@@UEBA_NAEBVContentIdentity@@@Z
    virtual bool canAccess(class ContentIdentity const& contentIdentity) const;

    // NOLINTEND
};
