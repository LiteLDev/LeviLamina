/**
 * @file  ServerContentKeyProvider.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerContentKeyProvider.
 *
 */
class ServerContentKeyProvider {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCONTENTKEYPROVIDER
public:
    class ServerContentKeyProvider& operator=(class ServerContentKeyProvider const &) = delete;
    ServerContentKeyProvider(class ServerContentKeyProvider const &) = delete;
    ServerContentKeyProvider() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerContentKeyProvider();
    /**
     * @vftbl  1
     * @symbol  ?getContentKey\@ServerContentKeyProvider\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@\@Z
     */
    virtual std::string getContentKey(class ContentIdentity const &) const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  ?canAccess\@ServerContentKeyProvider\@\@UEBA_NAEBVContentIdentity\@\@\@Z
     */
    virtual bool canAccess(class ContentIdentity const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCONTENTKEYPROVIDER
    /**
     * @symbol  ?clearTempContentKeys\@ServerContentKeyProvider\@\@UEAAXXZ
     */
    MCVAPI void clearTempContentKeys();
    /**
     * @symbol  ?setTempContentKeys\@ServerContentKeyProvider\@\@UEAAXAEBV?$unordered_map\@VContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VContentIdentity\@\@\@3\@U?$equal_to\@VContentIdentity\@\@\@3\@V?$allocator\@U?$pair\@$$CBVContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCVAPI void setTempContentKeys(class std::unordered_map<class ContentIdentity, std::string, struct std::hash<class ContentIdentity>, struct std::equal_to<class ContentIdentity>, class std::allocator<struct std::pair<class ContentIdentity const, std::string>>> const &);
#endif

};