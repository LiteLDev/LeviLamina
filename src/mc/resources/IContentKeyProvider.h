#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IContentKeyProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IContentKeyProvider& operator=(IContentKeyProvider const&);
    IContentKeyProvider(IContentKeyProvider const&);
    IContentKeyProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IContentKeyProvider@@UEAA@XZ
    virtual ~IContentKeyProvider() = default;

    // symbol:
    // ?getAlternateContentKey@IContentKeyProvider@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@@Z
    MCVAPI std::string getAlternateContentKey(class ContentIdentity const&) const;

    // symbol: ?requireEncryptedReads@IContentKeyProvider@@UEBA_NXZ
    MCVAPI bool requireEncryptedReads() const;

    // NOLINTEND
};
