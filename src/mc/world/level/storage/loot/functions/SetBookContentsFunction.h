#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetBookContentsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                mAuthor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPages;
    // NOLINTEND

public:
    // prevent constructor by default
    SetBookContentsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetBookContentsFunction() /*override*/;

    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetBookContentsFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::std::string const&                                   title,
        ::std::string const&                                   author,
        ::std::vector<::std::string> const&                    pages
    );

    MCAPI void _fillUserData(::CompoundTag& tag);

    MCFOLD ::std::string const& getAuthor() const;

    MCFOLD ::std::vector<::std::string> const& getPages() const;

    MCFOLD ::std::string const& getTitle() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::std::string const&                                   title,
        ::std::string const&                                   author,
        ::std::vector<::std::string> const&                    pages
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random&, ::LootTableContext&);

    MCFOLD void $apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext&);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
