#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Core {

class FilePathManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4812b0;
    ::ll::UntypedStorage<8, 32> mUnk572541;
    ::ll::UntypedStorage<8, 32> mUnk9af116;
    ::ll::UntypedStorage<8, 32> mUnkc1dc72;
    ::ll::UntypedStorage<8, 32> mUnkbde984;
    ::ll::UntypedStorage<8, 32> mUnkcf4814;
    ::ll::UntypedStorage<8, 32> mUnk72fd26;
    ::ll::UntypedStorage<8, 32> mUnke53a36;
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
    MCNAPI ::Core::PathBuffer<::std::string> getUserDataPath() const;

    MCNAPI ::Core::PathBuffer<::std::string> getWorldsPath() const;
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
