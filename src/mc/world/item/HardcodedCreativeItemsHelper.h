#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class CreativeItemInitializer;
class ItemInstance;
// clang-format on

class HardcodedCreativeItemsHelper {
public:
    // HardcodedCreativeItemsHelper inner types declare
    // clang-format off
    class GroupScope;
    // clang-format on

    // HardcodedCreativeItemsHelper inner types define
    class GroupScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3417b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        GroupScope& operator=(GroupScope const&);
        GroupScope(GroupScope const&);
        GroupScope();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI GroupScope(
            ::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper,
            ::std::string const&            name,
            ::Block const&                  block
        );

        MCAPI GroupScope(
            ::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper,
            ::std::string const&            name,
            ::ItemInstance const&           itemInstance
        );

        MCAPI ~GroupScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper,
            ::std::string const&            name,
            ::Block const&                  block
        );

        MCAPI void* $ctor(
            ::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper,
            ::std::string const&            name,
            ::ItemInstance const&           itemInstance
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka6835e;
    ::ll::UntypedStorage<8, 8> mUnk24f7d6;
    ::ll::UntypedStorage<8, 8> mUnkda01e6;
    // NOLINTEND

public:
    // prevent constructor by default
    HardcodedCreativeItemsHelper& operator=(HardcodedCreativeItemsHelper const&);
    HardcodedCreativeItemsHelper(HardcodedCreativeItemsHelper const&);
    HardcodedCreativeItemsHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HardcodedCreativeItemsHelper(::CreativeItemInitializer& creativeItemInitializer);

    MCAPI void addCreativeItem(::Block const& block);

    MCAPI void addCreativeItem(::ItemInstance const& itemInstance);

    MCAPI ~HardcodedCreativeItemsHelper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CreativeItemInitializer& creativeItemInitializer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
