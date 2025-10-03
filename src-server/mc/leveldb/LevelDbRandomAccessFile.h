#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
// clang-format on

class LevelDbRandomAccessFile : public ::leveldb::RandomAccessFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk52ec66;
    ::ll::UntypedStorage<8, 80> mUnk2ca349;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::leveldb::Status Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const /*override*/;

    // vIndex: 0
    virtual ~LevelDbRandomAccessFile() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelDbRandomAccessFile(::Core::File&& file);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::File&& file);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
