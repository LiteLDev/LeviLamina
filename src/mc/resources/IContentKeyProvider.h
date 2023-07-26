#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentKeyProvider {

public:
    // prevent constructor by default
    IContentKeyProvider& operator=(IContentKeyProvider const&) = delete;
    IContentKeyProvider(IContentKeyProvider const&)            = delete;
    IContentKeyProvider()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTENTKEYPROVIDER
    /**
     * @symbol
     * ?getAlternateContentKey\@IContentKeyProvider\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@\@Z
     */
    MCVAPI std::string getAlternateContentKey(class ContentIdentity const&) const; // NOLINT
    /**
     * @symbol ?requireEncryptedReads\@IContentKeyProvider\@\@UEBA_NXZ
     */
    MCVAPI bool requireEncryptedReads() const; // NOLINT
#endif
};
