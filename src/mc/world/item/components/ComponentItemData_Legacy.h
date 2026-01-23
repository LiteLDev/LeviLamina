#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class HashedString;
// clang-format on

struct ComponentItemData_Legacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>>                         mBlockType;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                       mTags;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mCreativeGroup;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mHoverTextColorFormat;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                               mSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mMaxUseDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mDamage;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mEnchantValue;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mFrameCount;
    ::ll::TypedStorage<4, 8, ::std::optional<::CreativeItemCategory>>              mCreativeCategory;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::UseAnimation>> mUseAnim;
    ::ll::TypedStorage<4, 8, ::std::optional<::Enchant::Slot>>                     mEnchantSlot;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                               mMaxStackSize;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mIsStackedByData;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mHandEquipped;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mIsLiquidClipped;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mIsGlint;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mAllowOffhand;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mCanDestroyInCreative;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mAnimatesInToolbar;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mShouldDespawn;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mRequiresInteract;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_Legacy& operator=(ComponentItemData_Legacy const&);
    ComponentItemData_Legacy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_Legacy(::ComponentItemData_Legacy&&);

    MCAPI ComponentItemData_Legacy(::ComponentItemData_Legacy const&);

    MCAPI ::ComponentItemData_Legacy& operator=(::ComponentItemData_Legacy&&);

    MCAPI ~ComponentItemData_Legacy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemData_Legacy&&);

    MCAPI void* $ctor(::ComponentItemData_Legacy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
