#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PlayerListEntry {
public:
    ActorUniqueID  mId;               // this+0x0
    mce::UUID      mUuid;             // this+0x8
    std::string    mName;             // this+0x18
    std::string    mXuid;             // this+0x38
    std::string    mPlatformOnlineId; // this+0x58
    BuildPlatform  mBuildPlatform;    // this+0x78
    SerializedSkin mSkin;             // this+0x80
    bool           mIsTeacher;        // this+0x2E8
    bool           mIsHost;           // this+0x2E9


public:
    // NOLINTBEGIN
    MCAPI PlayerListEntry();

    MCAPI explicit PlayerListEntry(class Player const& player);

    MCAPI explicit PlayerListEntry(class mce::UUID uuid);

    MCAPI class PlayerListEntry clone() const;

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI class Bedrock::Result<void> readRemove(class ReadOnlyBinaryStream& stream);

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI void writeRemove(class BinaryStream& stream) const;

    MCAPI ~PlayerListEntry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class Player const& player);

    MCAPI void* ctor$(class mce::UUID uuid);

    MCAPI void dtor$();

    // NOLINTEND
};
