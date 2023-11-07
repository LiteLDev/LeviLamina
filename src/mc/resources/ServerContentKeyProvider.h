#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerContentKeyProvider {
public:
    // prevent constructor by default
    ServerContentKeyProvider& operator=(ServerContentKeyProvider const&);
    ServerContentKeyProvider(ServerContentKeyProvider const&);
    ServerContentKeyProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ServerContentKeyProvider() = default;

    // vIndex: 1, symbol:
    // ?getContentKey@ServerContentKeyProvider@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@@Z
    virtual std::string getContentKey(class ContentIdentity const&) const;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?canAccess@ServerContentKeyProvider@@UEBA_NAEBVContentIdentity@@@Z
    virtual bool canAccess(class ContentIdentity const&) const;

    // symbol: ?clearTempContentKeys@ServerContentKeyProvider@@UEAAXXZ
    MCVAPI void clearTempContentKeys();

    // symbol:
    // ?setTempContentKeys@ServerContentKeyProvider@@UEAAXAEBV?$unordered_map@VContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VContentIdentity@@@3@U?$equal_to@VContentIdentity@@@3@V?$allocator@U?$pair@$$CBVContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    MCVAPI void setTempContentKeys(std::unordered_map<class ContentIdentity, std::string> const&);

    // NOLINTEND
};
