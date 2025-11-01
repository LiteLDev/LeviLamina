#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackWriteStrategy.h"

class DirectoryPackWriteStrategy : public ::PackWriteStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk824a6d;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackWriteStrategy& operator=(DirectoryPackWriteStrategy const&);
    DirectoryPackWriteStrategy(DirectoryPackWriteStrategy const&);
    DirectoryPackWriteStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent) /*override*/;

    // vIndex: 0
    virtual ~DirectoryPackWriteStrategy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
