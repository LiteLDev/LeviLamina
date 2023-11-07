#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EnchantableItemComponent {
public:
    // prevent constructor by default
    EnchantableItemComponent(EnchantableItemComponent const&);
    EnchantableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EnchantableItemComponent@@UEAA@XZ
    virtual ~EnchantableItemComponent();

    // vIndex: 9, symbol: ?_initializeComponent@EnchantableItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ??4EnchantableItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class EnchantableItemComponent& operator=(class EnchantableItemComponent const&);

    // symbol:
    // ?bindType@EnchantableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@EnchantableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
