#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentAccessibilityProvider.h"

class ServerContentKeyProvider : public ::IContentAccessibilityProvider {

public:
    // prevent constructor by default
    ServerContentKeyProvider& operator=(ServerContentKeyProvider const&) = delete;
    ServerContentKeyProvider(ServerContentKeyProvider const&)            = delete;
    ServerContentKeyProvider()                                           = delete;

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
     * ?getContentKey\@ServerContentKeyProvider\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@\@Z
     */
    virtual std::string getContentKey(class ContentIdentity const&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?getAlternateContentKey\@IContentKeyProvider\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@\@Z
     */
    virtual std::string getAlternateContentKey(class ContentIdentity const&) const;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?canAccess\@ServerContentKeyProvider\@\@UEBA_NAEBVContentIdentity\@\@\@Z
     */
    virtual bool canAccess(class ContentIdentity const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCONTENTKEYPROVIDER
    /**
     * @symbol ?clearTempContentKeys\@ServerContentKeyProvider\@\@UEAAXXZ
     */
    MCVAPI void clearTempContentKeys();
    /**
     * @symbol
     * ?setTempContentKeys\@ServerContentKeyProvider\@\@UEAAXAEBV?$unordered_map\@VContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VContentIdentity\@\@\@3\@U?$equal_to\@VContentIdentity\@\@\@3\@V?$allocator\@U?$pair\@$$CBVContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCVAPI void setTempContentKeys(std::unordered_map<class ContentIdentity, std::string> const&);
#endif
    // NOLINTEND
};
