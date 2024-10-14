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
    // vIndex: 0
    virtual ~CustomComponentsItemComponent() = default;

    MCAPI explicit CustomComponentsItemComponent(struct Puv::v1_20_80::CustomComponentsItemComponent component);

    MCAPI std::vector<std::string> const& getComponentNames() const;

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
