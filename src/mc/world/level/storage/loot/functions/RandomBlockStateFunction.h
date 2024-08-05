#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RandomBlockStateFunction : public ::LootItemFunction {
public:
    // RandomBlockStateFunction inner types define
    enum class RemapComplexAliasBlockResult {};

public:
    // prevent constructor by default
    RandomBlockStateFunction& operator=(RandomBlockStateFunction const&);
    RandomBlockStateFunction(RandomBlockStateFunction const&);
    RandomBlockStateFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomBlockStateFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _remapComplexAliasBlock(int, class Block const*&, std::string const&);

    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _tryRemapComplexAliasBlock(class ItemInstance& item, int, class Block const*&, std::string const& originalName);

    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _tryRemapComplexAliasBlock(class ItemStack& item, int, class Block const*&, std::string const& originalName);

    // NOLINTEND
};
