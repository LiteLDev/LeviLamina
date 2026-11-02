#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetItemNameFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    // NOLINTEND

public:
    // prevent constructor by default
    SetItemNameFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SetItemNameFunction(::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates, ::std::string const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates, ::std::string const& name);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;

    MCNAPI void $applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
