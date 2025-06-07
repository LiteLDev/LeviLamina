#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"
#include "mc/world/level/storage/MockLevelStorage.h"
#include "mc/world/level/storage/db_helpers/Category.h"

class TestStructureMockLevelStorage : public ::MockLevelStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>        mStructureSaveId;
    ::ll::TypedStorage<8, 104, ::StructureSettings const> mStructureSettings;
    ::ll::TypedStorage<8, 32, ::std::string const>        mStructureName;
    ::ll::TypedStorage<4, 12, ::BlockPos const>           mPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void forEachKeyWithPrefix(
        ::std::string_view,
        ::DBHelpers::Category,
        ::std::function<void(::std::string_view, ::std::string_view)> const&
    ) const /*override*/;

    // vIndex: 0
    virtual ~TestStructureMockLevelStorage() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
