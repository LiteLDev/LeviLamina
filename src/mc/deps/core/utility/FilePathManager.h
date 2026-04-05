#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { struct FilePathManagerPaths; }
// clang-format on

namespace Core {

class FilePathManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mRoot;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mHome;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mWorlds;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mSharedWorlds;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mLevelArchive;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mUserData;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mSharedData;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mPersonaPiecePack;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mPackagePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mDataUrl;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mExternalFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mTemporaryFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mCacheFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mSettingsPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mResourcePacks;
    ::ll::TypedStorage<1, 1, bool const>                               mIsDedicatedServer;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePathManager& operator=(FilePathManager const&);
    FilePathManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilePathManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilePathManager(::Core::FilePathManager const&);

    MCAPI explicit FilePathManager(::Core::FilePathManagerPaths&& paths);

#ifdef LL_PLAT_C
    MCAPI ::Core::PathView getUserDataPath() const;

    MCAPI ::Core::PathView getWorldsPath() const;
#endif

    MCAPI void setRootPath(::Core::PathView path);
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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::FilePathManager const&);

    MCAPI void* $ctor(::Core::FilePathManagerPaths&& paths);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
