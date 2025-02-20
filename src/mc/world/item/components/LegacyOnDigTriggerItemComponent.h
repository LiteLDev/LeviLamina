#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class HashedString;
class ItemStack;
class SemVersion;
struct LegacyOnDigTriggerItemComponentData;
// clang-format on

class LegacyOnDigTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk203b19;
    ::ll::UntypedStorage<8, 16>  mUnk97ea7b;
    ::ll::UntypedStorage<8, 264> mUnkc36d97;
    ::ll::UntypedStorage<8, 24>  mUnk76eee2;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponent& operator=(LegacyOnDigTriggerItemComponent const&);
    LegacyOnDigTriggerItemComponent(LegacyOnDigTriggerItemComponent const&);
    LegacyOnDigTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnDigTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnDigTriggerItemComponent(::LegacyOnDigTriggerItemComponentData&& componentData);

    MCAPI void _onMineBlock(bool& result, ::ItemStack& item, ::Block const& block, int x, int y, int z, ::Actor& owner);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyOnDigTriggerItemComponentData&& componentData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
