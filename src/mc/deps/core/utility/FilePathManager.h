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
    MCAPI ::Core::PathBuffer<::std::string> getUserDataPath() const;

    MCAPI ::Core::PathBuffer<::std::string> getWorldsPath() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& ARCHIVE_DIR();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_DIR();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& PERSONA_TEST_DIR();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& REALM_WORLDS_DIR();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& RESOURCE_PACKS_DIR();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& WORLDS_DIR();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
