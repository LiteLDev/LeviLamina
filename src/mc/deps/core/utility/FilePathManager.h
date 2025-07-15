#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { struct FilePathManagerPaths; }
// clang-format on

namespace Core {

class FilePathManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk572541;
    ::ll::UntypedStorage<8, 32> mUnk4e130e;
    ::ll::UntypedStorage<8, 32> mUnk48591c;
    ::ll::UntypedStorage<8, 32> mUnk6c2c6e;
    ::ll::UntypedStorage<8, 32> mUnkf9b714;
    ::ll::UntypedStorage<8, 32> mUnk3ea53f;
    ::ll::UntypedStorage<8, 32> mUnk4e27dc;
    ::ll::UntypedStorage<8, 32> mUnka3fac4;
    ::ll::UntypedStorage<8, 32> mUnk6aabe0;
    ::ll::UntypedStorage<8, 32> mUnkdaf65b;
    ::ll::UntypedStorage<8, 32> mUnk725ea5;
    ::ll::UntypedStorage<8, 32> mUnkbefcf7;
    ::ll::UntypedStorage<8, 32> mUnk235a6a;
    ::ll::UntypedStorage<1, 1>  mUnk577587;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePathManager& operator=(FilePathManager const&);
    FilePathManager(FilePathManager const&);
    FilePathManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FilePathManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FilePathManager(::Core::FilePathManagerPaths&& paths);

    MCNAPI void setRootPath(::Core::Path const& path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& ARCHIVE_DIR();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_DIR();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& PERSONA_TEST_DIR();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& REALM_WORLDS_DIR();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& RESOURCE_PACKS_DIR();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& WORLDS_DIR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FilePathManagerPaths&& paths);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
