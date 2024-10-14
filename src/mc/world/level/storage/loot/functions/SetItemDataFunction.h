#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetItemDataFunction : public ::LootItemFunction {
public:
    // SetItemDataFunction inner types define
    enum class ApplyForComplexAliasBlockResult {};

    enum class ApplyForItemResult {};

public:
    // prevent constructor by default
    SetItemDataFunction& operator=(SetItemDataFunction const&);
    SetItemDataFunction(SetItemDataFunction const&);
    SetItemDataFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetItemDataFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::SetItemDataFunction::ApplyForComplexAliasBlockResult _applyImplForComplexAliasBlock(
        class Item const*& inOutItemDef,
        std::string const& originalItemName,
        class Random&      random,
        int&               outResultAux
    );

    MCAPI ::SetItemDataFunction::ApplyForItemResult _applyImplForItem(
        std::string const&         originalItemName,
        std::string const&         itemRawNameId,
        class Random&              random,
        int&                       outAux,
        class WeakPtr<class Item>& outItem
    );

    MCAPI void _applyImplForNormalBlock(class Block const*& inOutBlock, class Random& random);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
