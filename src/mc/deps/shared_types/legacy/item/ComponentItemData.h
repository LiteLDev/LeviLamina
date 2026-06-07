#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/deps/shared_types/item/EnchantSlot.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::Legacy {

struct ComponentItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mBlockType;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                       mTags;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mCreativeGroup;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                      mHoverTextColorFormat;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                               mSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mMaxUseDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mDamage;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mEnchantValue;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mFrameCount;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::CreativeItemCategory>> mCreativeCategory;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::UseAnimation>> mUseAnim;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::EnchantSlot>>          mEnchantSlot;
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
    ComponentItemData(ComponentItemData const&);
    ComponentItemData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::Legacy::ComponentItemData& operator=(::SharedTypes::Legacy::ComponentItemData const&);

    MCAPI ~ComponentItemData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
