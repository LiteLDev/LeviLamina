#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class IContentKeyProvider : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IContentKeyProvider& operator=(IContentKeyProvider const&) = delete;
    IContentKeyProvider(IContentKeyProvider const&)            = delete;
    IContentKeyProvider()                                      = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
