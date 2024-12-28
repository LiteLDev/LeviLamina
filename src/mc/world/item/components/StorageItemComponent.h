#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IDynamicContainerSerialization;
class ItemDescriptor;
class ItemStack;
class ListTag;
class Player;
class SaveContext;
class SemVersion;
struct FullContainerName;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageItemComponent : public ::NetworkedItemComponent<::StorageItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk45037d;
    ::ll::UntypedStorage<4, 4>  mUnkace282;
    ::ll::UntypedStorage<4, 4>  mUnk2bce8c;
    ::ll::UntypedStorage<1, 1>  mUnk2e38d3;
    ::ll::UntypedStorage<8, 24> mUnk4527c9;
    ::ll::UntypedStorage<8, 24> mUnkcfe413;
    ::ll::UntypedStorage<8, 16> mUnke98af7;
    ::ll::UntypedStorage<8, 16> mUnkef69e6;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemComponent& operator=(StorageItemComponent const&);
    StorageItemComponent(StorageItemComponent const&);
    StorageItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~StorageItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getAllowNestedStorageItem() const;

    MCAPI ::std::vector<::ItemDescriptor> const& getAllowedItems() const;

    MCAPI ::std::vector<::ItemDescriptor> const& getBannedItems() const;

    MCAPI int getNumSlot() const;

    MCAPI int getWeightInStorageItem() const;

    MCAPI int getWeightLimit() const;

    MCAPI ::std::unique_ptr<::ListTag>
    serializeStorageItem(::FullContainerName const& name, ::SaveContext const& saveContext) const;

    MCAPI void setSerializationHandler(::WeakRef<::IDynamicContainerSerialization> serialization);
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

    MCAPI static void use(bool& result, ::ItemStack const& item, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
