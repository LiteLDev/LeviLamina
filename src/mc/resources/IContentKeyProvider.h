#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentKeyProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONTENTKEYPROVIDER
public:
    IContentKeyProvider& operator=(IContentKeyProvider const&) = delete;
    IContentKeyProvider(IContentKeyProvider const&)            = delete;
    IContentKeyProvider()                                      = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTENTKEYPROVIDER
    /**
     * @symbol
     * ?getAlternateContentKey\@IContentKeyProvider\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@\@Z
     */
    MCVAPI std::string getAlternateContentKey(class ContentIdentity const&) const;
    /**
     * @symbol ?requireEncryptedReads\@IContentKeyProvider\@\@UEBA_NXZ
     */
    MCVAPI bool requireEncryptedReads() const;
#endif
};
