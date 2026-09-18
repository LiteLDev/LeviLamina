#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetSpawnEggFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;

    MCAPI void $applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext& context);


    // NOLINTEND
};
