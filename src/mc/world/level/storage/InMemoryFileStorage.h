#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
namespace Core { class Path; }
// clang-format on

class InMemoryFileStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcc7879;
    ::ll::UntypedStorage<8, 80> mUnk54a9a8;
    ::ll::UntypedStorage<8, 24> mUnk57e077;
    ::ll::UntypedStorage<8, 24> mUnkaf8bcd;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryFileStorage& operator=(InMemoryFileStorage const&);
    InMemoryFileStorage(InMemoryFileStorage const&);
    InMemoryFileStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::InMemoryFile> createFile(::Core::Path const& fileName);

    MCAPI bool deleteFile(::Core::Path const& fileName);

    MCAPI void flushToDisk();

    MCAPI void populateFileList(::std::vector<::std::string>& fileList);
    // NOLINTEND
};
