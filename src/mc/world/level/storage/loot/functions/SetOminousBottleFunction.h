#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetOminousBottleFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual void apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;

    MCNAPI void $applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&);

    MCNAPI void $apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
