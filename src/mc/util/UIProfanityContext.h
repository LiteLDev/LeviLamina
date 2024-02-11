#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class UIProfanityContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    UIProfanityContext& operator=(UIProfanityContext const&);
    UIProfanityContext(UIProfanityContext const&);
    UIProfanityContext();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UIProfanityContext@@UEAA@XZ
    virtual ~UIProfanityContext() = default;

    // symbol:
    // ?filterProfanityFromString@UIProfanityContext@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ProfanityFilterContext@@AEBV23@_N@Z
    MCAPI std::string
    filterProfanityFromString(::ProfanityFilterContext stringContext, std::string const& str, bool allowFilterOverride)
        const;

    // NOLINTEND
};
