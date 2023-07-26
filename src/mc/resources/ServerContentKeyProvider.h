#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerContentKeyProvider {

public:
    // prevent constructor by default
    ServerContentKeyProvider& operator=(ServerContentKeyProvider const&) = delete;
    ServerContentKeyProvider(ServerContentKeyProvider const&)            = delete;
    ServerContentKeyProvider()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getContentKey\@ServerContentKeyProvider\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@\@Z
     */
    virtual std::string getContentKey(class ContentIdentity const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?canAccess\@ServerContentKeyProvider\@\@UEBA_NAEBVContentIdentity\@\@\@Z
     */
    virtual bool canAccess(class ContentIdentity const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCONTENTKEYPROVIDER
    /**
     * @symbol ?clearTempContentKeys\@ServerContentKeyProvider\@\@UEAAXXZ
     */
    MCVAPI void clearTempContentKeys(); // NOLINT
    /**
     * @symbol
     * ?setTempContentKeys\@ServerContentKeyProvider\@\@UEAAXAEBV?$unordered_map\@VContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VContentIdentity\@\@\@3\@U?$equal_to\@VContentIdentity\@\@\@3\@V?$allocator\@U?$pair\@$$CBVContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCVAPI void setTempContentKeys(class std::unordered_map<
                                   class ContentIdentity,
                                   std::string,
                                   struct std::hash<class ContentIdentity>,
                                   struct std::equal_to<class ContentIdentity>,
                                   class std::allocator<
                                       struct std::pair<class ContentIdentity const, std::string>>> const&); // NOLINT
#endif
};
