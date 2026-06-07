#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/VanillaBlockData.h"
#include "mc/world/level/block/definition/BlockMenuCategory.h"

// auto generated forward declare list
// clang-format off
struct BlockStateDefinition;
namespace BlockTrait { class ITrait; }
// clang-format on

struct BlockDescription {
public:
    // BlockDescription inner types declare
    // clang-format off
    struct BlockTraits;
    // clang-format on

    // BlockDescription inner types define
    struct BlockTraits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::BlockTrait::ITrait>>> mMap;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mIdentifier;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_20::BlockDefinition::VanillaBlockData> mVanillaBlockData;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateDefinition>>                      mStates;
    ::ll::TypedStorage<8, 40, ::BlockMenuCategory>                                        mMenuCategory;
    ::ll::TypedStorage<8, 64, ::BlockDescription::BlockTraits>                            mTraits;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsBaseGameBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDescription(::BlockDescription&&);

    MCAPI BlockDescription(::BlockDescription const&);

    MCAPI ::BlockDescription& operator=(::BlockDescription&&);

    MCAPI ::BlockDescription& operator=(::BlockDescription const&);

    MCAPI ~BlockDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockDescription&&);

    MCAPI void* $ctor(::BlockDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
