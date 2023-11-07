#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class IconItemComponent {
public:
    // prevent constructor by default
    IconItemComponent& operator=(IconItemComponent const&);
    IconItemComponent(IconItemComponent const&);
    IconItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IconItemComponent@@UEAA@XZ
    virtual ~IconItemComponent() = default;

    // symbol:
    // ?setTexturePath@IconItemComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setTexturePath(std::string const&);

    // symbol:
    // ?bindType@IconItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@IconItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
