#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct EnchantableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EnchantableItemComponent : public ::NetworkedItemComponent<::EnchantableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>          mEnchantValue;
    ::ll::TypedStorage<8, 32, ::std::string> mEnchantSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantableItemComponent& operator=(EnchantableItemComponent const&);
    EnchantableItemComponent(EnchantableItemComponent const&);
    EnchantableItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    // vIndex: 0
    virtual ~EnchantableItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EnchantableItemComponent(::SharedTypes::v1_20_50::EnchantableItemComponent component);

    MCFOLD ::EnchantableItemComponent& operator=(::EnchantableItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::EnchantableItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent(::ComponentItem& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
