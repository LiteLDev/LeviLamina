#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/Result.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class PlayerListEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>   mId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>      mUUID;
    ::ll::TypedStorage<8, 32, ::std::string>    mName;
    ::ll::TypedStorage<8, 32, ::std::string>    mXUID;
    ::ll::TypedStorage<8, 32, ::std::string>    mPlatformOnlineId;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>   mBuildPlatform;
    ::ll::TypedStorage<8, 16, ::SerializedSkin> mSkin;
    ::ll::TypedStorage<4, 16, ::mce::Color>     mColor;
    ::ll::TypedStorage<1, 1, bool>              mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>              mIsHost;
    ::ll::TypedStorage<1, 1, bool>              mIsSubClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerListEntry& operator=(PlayerListEntry const&);
    PlayerListEntry(PlayerListEntry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerListEntry();

    MCAPI explicit PlayerListEntry(::Player const& player);

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

    MCAPI void* $ctor(::Player const& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
