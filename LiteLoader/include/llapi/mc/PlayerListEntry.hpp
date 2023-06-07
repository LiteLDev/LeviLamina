/**
 * @file  PlayerListEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "SerializedSkin.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerListEntry.
 *
 */
class PlayerListEntry {

#define AFTER_EXTRA
// Add Member There
public:
    ActorUniqueID mId;
    mce::UUID mUUID;
    std::string mName, mXUID, mPlatformOnlineId;
    BuildPlatform mBuildPlatform;
    char filler[4];
    SerializedSkin mSkin;
    bool mIsTeacher, mIsHost;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTENTRY
public:
    class PlayerListEntry& operator=(class PlayerListEntry const &) = delete;
    PlayerListEntry(class PlayerListEntry const &) = delete;
#endif

public:
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
    MCAPI PlayerListEntry(class Player const &);
    /**
     * @symbol ?clone\@PlayerListEntry\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerListEntry clone() const;
    /**
     * @symbol ?read\@PlayerListEntry\@\@QEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI bool read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?readRemove\@PlayerListEntry\@\@QEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void readRemove(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?write\@PlayerListEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol ?writeRemove\@PlayerListEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void writeRemove(class BinaryStream &) const;
    /**
     * @symbol ??1PlayerListEntry\@\@QEAA\@XZ
     */
    MCAPI ~PlayerListEntry();

};
