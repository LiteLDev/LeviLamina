#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    RandomBlockStateFunction();

#else // LL_PLAT_C
#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomBlockStateFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI RandomBlockStateFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::RandomValueBounds&                                   values,
        ::std::string const&                                   blockStateName
    );
#endif

    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _remapComplexAliasBlock(int randomInt, ::Block const*& inOutItemBlock, ::std::string const& originalNameStr);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::RandomValueBounds&                                   values,
        ::std::string const&                                   blockStateName
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND
};
