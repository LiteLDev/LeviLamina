#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
class SemVersionConstant;
// clang-format on

class LootPoolEntry {
public:
    // LootPoolEntry inner types define
    enum class EntryType : int {
        LootItem           = 0,
        EmptyLootItem      = 1,
        LootTableEntry     = 2,
        LootTableReference = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                    mWeight;
    ::ll::TypedStorage<4, 4, int>                                                    mQuality;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemCondition>>> mConditions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootPoolEntry>>                     mSubTable;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                          mJsonVersion;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const = 0;

#ifdef LL_PLAT_S
    virtual ~LootPoolEntry() = default;
#else // LL_PLAT_C
    virtual ~LootPoolEntry();
#endif

    virtual ::LootPoolEntry::EntryType getEntryType() const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& START_VERSIONING_VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
