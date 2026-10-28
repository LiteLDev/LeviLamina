#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
class SemVersionConstant;
namespace Json { class Value; }
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

    virtual ~LootPoolEntry() = default;

    virtual ::LootPoolEntry::EntryType getEntryType() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::LootPoolEntry> deserialize(
        ::Json::Value const& entryJson,
        bool                 usingUpcomingCreatorFeaturesExperiment,
        ::SemVersion const&  jsonVersion
    );
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& START_VERSIONING_VERSION();
    // NOLINTEND
};
