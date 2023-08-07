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
    ActorUniqueID  mId;
    mce::UUID      mUUID;
    std::string    mName;
    std::string    mXUID;
    std::string    mPlatformOnlineId;
    BuildPlatform  mBuildPlatform;
    SerializedSkin mSkin;
    bool           mIsTeacher;
    bool           mIsHost;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PlayerListEntry\@\@QEAA\@XZ
     */
    MCAPI PlayerListEntry();
    /**
     * @symbol ??0PlayerListEntry\@\@QEAA\@VUUID\@mce\@\@\@Z
     */
    MCAPI PlayerListEntry(class mce::UUID);
    /**
     * @symbol ??0PlayerListEntry\@\@QEAA\@AEBVPlayer\@\@\@Z
     */
    MCAPI PlayerListEntry(class Player const&);
    /**
     * @symbol ?clone\@PlayerListEntry\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerListEntry clone() const;
    /**
     * @symbol
     * ?read\@PlayerListEntry\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @symbol
     * ?readRemove\@PlayerListEntry\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> readRemove(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?write\@PlayerListEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const;
    /**
     * @symbol ?writeRemove\@PlayerListEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void writeRemove(class BinaryStream&) const;
    /**
     * @symbol ??1PlayerListEntry\@\@QEAA\@XZ
     */
    MCAPI ~PlayerListEntry();
    // NOLINTEND
};
