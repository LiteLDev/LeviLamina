#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/MockLevelStorage.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class StructureSettings;
// clang-format on

class TestStructureMockLevelStorage : public ::MockLevelStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>       mStructureSaveId;
    ::ll::TypedStorage<8, 8, ::StructureSettings const&> mStructureSettings;
    ::ll::TypedStorage<8, 32, ::std::string const>       mStructureName;
    ::ll::TypedStorage<8, 8, ::BlockPos const&>          mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    TestStructureMockLevelStorage& operator=(TestStructureMockLevelStorage const&);
    TestStructureMockLevelStorage(TestStructureMockLevelStorage const&);
    TestStructureMockLevelStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void
    forEachKeyWithPrefix(::std::string_view, ::DBHelpers::Category, ::std::function<void(::std::string_view, ::std::string_view)> const&)
        const /*override*/;

    // vIndex: 0
    virtual ~TestStructureMockLevelStorage() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
