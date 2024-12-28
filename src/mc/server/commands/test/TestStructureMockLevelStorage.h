#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/MockLevelStorage.h"
#include "mc/world/level/storage/db_helpers/Category.h"

class TestStructureMockLevelStorage : public ::MockLevelStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6ce6a4;
    ::ll::UntypedStorage<8, 8>  mUnkdf7559;
    ::ll::UntypedStorage<8, 32> mUnkb0d095;
    ::ll::UntypedStorage<8, 8>  mUnke9bbc0;
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
    virtual ~TestStructureMockLevelStorage() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $forEachKeyWithPrefix(::std::string_view, ::DBHelpers::Category, ::std::function<void(::std::string_view, ::std::string_view)> const&)
        const;
    // NOLINTEND
};
