#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_80 { struct CustomComponentsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CustomComponentsItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    CustomComponentsItemComponent& operator=(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CustomComponentsItemComponent@@UEAA@XZ
    virtual ~CustomComponentsItemComponent() = default;

    // symbol: ??0CustomComponentsItemComponent@@QEAA@U0v1_20_80@Puv@@@Z
    MCAPI explicit CustomComponentsItemComponent(struct Puv::v1_20_80::CustomComponentsItemComponent);

    // symbol:
    // ?getComponentNames@CustomComponentsItemComponent@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getComponentNames() const;

    // symbol: ?getIdentifier@CustomComponentsItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
