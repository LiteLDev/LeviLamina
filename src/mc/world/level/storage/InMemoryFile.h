#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk7ae000;
    ::ll::UntypedStorage<8, 24> mUnk64039c;
    ::ll::UntypedStorage<8, 32> mUnkea3443;
    ::ll::UntypedStorage<1, 1>  mUnk2c24f7;
    ::ll::UntypedStorage<4, 4>  mUnk722073;
    ::ll::UntypedStorage<1, 1>  mUnk5894c2;
    ::ll::UntypedStorage<1, 1>  mUnkaa2208;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryFile& operator=(InMemoryFile const&);
    InMemoryFile(InMemoryFile const&);
    InMemoryFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InMemoryFile(::Core::Path const& fileName);

    MCNAPI ::leveldb::Status append(::leveldb::Slice const& data);

    MCNAPI ::leveldb::Status flushToDisk(::leveldb::Env* env);

    MCNAPI ::Core::PathBuffer<::std::string> getFilename() const;

    MCNAPI void rename(::Core::Path const& newFilename);

    MCNAPI ~InMemoryFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const& fileName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
