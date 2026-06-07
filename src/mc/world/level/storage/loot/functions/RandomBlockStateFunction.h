#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class RandomBlockStateFunction : public ::LootItemFunction {
public:
    // RandomBlockStateFunction inner types define
    enum class RemapComplexAliasBlockResult : int {
        NotComplexAlias = 0,
        Succeed         = 1,
        Fail            = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mValues;
    ::ll::TypedStorage<8, 32, ::std::string>      mBlockStateName;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBlockStateFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomBlockStateFunction() /*override*/;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomBlockStateFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::RandomValueBounds&                                   values,
        ::std::string const&                                   blockStateName
    );

    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _remapComplexAliasBlock(int randomInt, ::Block const*& inOutItemBlock, ::std::string const& originalNameStr);

    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult _tryRemapComplexAliasBlock(
        ::ItemInstance&      item,
        int                  randomInt,
        ::Block const*&      inOutItemBlock,
        ::std::string const& originalName
    );

    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult _tryRemapComplexAliasBlock(
        ::ItemStack&         item,
        int                  randomInt,
        ::Block const*&      inOutItemBlock,
        ::std::string const& originalName
    );

    MCFOLD ::std::string const& getBlockStateName() const;

    MCFOLD ::RandomValueBounds getValues() const;
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
        ::RandomValueBounds&                                   values,
        ::std::string const&                                   blockStateName
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
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
