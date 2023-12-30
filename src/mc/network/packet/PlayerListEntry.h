#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

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
    // symbol: ??0PlayerListEntry@@QEAA@XZ
    MCAPI PlayerListEntry();

    // symbol: ??0PlayerListEntry@@QEAA@AEBVPlayer@@@Z
    MCAPI explicit PlayerListEntry(class Player const& player);

    // symbol: ??0PlayerListEntry@@QEAA@VUUID@mce@@@Z
    MCAPI explicit PlayerListEntry(class mce::UUID uuid);

    // symbol: ?clone@PlayerListEntry@@QEBA?AV1@XZ
    MCAPI class PlayerListEntry clone() const;

    // symbol: ?read@PlayerListEntry@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // symbol: ?readRemove@PlayerListEntry@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> readRemove(class ReadOnlyBinaryStream& stream);

    // symbol: ?write@PlayerListEntry@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream& stream) const;

    // symbol: ?writeRemove@PlayerListEntry@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void writeRemove(class BinaryStream& stream) const;

    // symbol: ??1PlayerListEntry@@QEAA@XZ
    MCAPI ~PlayerListEntry();

    // NOLINTEND
};
