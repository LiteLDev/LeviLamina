#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class SerializedSkin;
struct ActorUniqueID;
namespace mce { class UUID; }
// clang-format on

class PlayerListEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>    mId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>       mUUID;
    ::ll::TypedStorage<8, 32, ::std::string>     mName;
    ::ll::TypedStorage<8, 32, ::std::string>     mXUID;
    ::ll::TypedStorage<8, 32, ::std::string>     mPlatformOnlineId;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>    mBuildPlatform;
    ::ll::TypedStorage<8, 528, ::SerializedSkin> mSkin;
    ::ll::TypedStorage<1, 1, bool>               mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>               mIsHost;
    ::ll::TypedStorage<1, 1, bool>               mIsSubClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerListEntry& operator=(PlayerListEntry const&);
    PlayerListEntry(PlayerListEntry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerListEntry();

    MCAPI ::PlayerListEntry& operator=(::PlayerListEntry&&);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI ::Bedrock::Result<void> readRemove(::ReadOnlyBinaryStream& stream);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~PlayerListEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
