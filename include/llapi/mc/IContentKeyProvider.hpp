/**
 * @file  IContentKeyProvider.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IContentKeyProvider.
 *
 */
class IContentKeyProvider {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONTENTKEYPROVIDER
public:
    class IContentKeyProvider& operator=(class IContentKeyProvider const &) = delete;
    IContentKeyProvider(class IContentKeyProvider const &) = delete;
    IContentKeyProvider() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTENTKEYPROVIDER
    /**
     * @symbol  ?getAlternateContentKey\@IContentKeyProvider\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@\@Z
     */
    MCVAPI std::string getAlternateContentKey(class ContentIdentity const &) const;
    /**
     * @symbol  ?requireEncryptedReads\@IContentKeyProvider\@\@UEBA_NXZ
     */
    MCVAPI bool requireEncryptedReads() const;
#endif

};