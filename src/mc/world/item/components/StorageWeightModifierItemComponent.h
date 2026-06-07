#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_60 { struct StorageWeightModifierItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageWeightModifierItemComponent : public ::NetworkedItemComponent<::StorageWeightModifierItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWeightInStorageItem;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageWeightModifierItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StorageWeightModifierItemComponent(
        ::SharedTypes::v1_21_60::StorageWeightModifierItemComponent const& component
    );

    MCFOLD int getWeightInStorageItem() const;
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
    MCAPI void* $ctor(::SharedTypes::v1_21_60::StorageWeightModifierItemComponent const& component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
