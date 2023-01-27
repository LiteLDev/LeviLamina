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
    ActorUniqueID uid;
    mce::UUID uuid;
    std::string name, xuid, platform_online_id;
    enum class BuildPlatform platform;
    SerializedSkin skin;
    bool teacher, host;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTENTRY
public:
    class PlayerListEntry& operator=(class PlayerListEntry const &) = delete;
    PlayerListEntry(class PlayerListEntry const &) = delete;
    PlayerListEntry() = delete;
#endif

public:
    /**
     * @hash   1880217726
     * @symbol  ??0PlayerListEntry\@\@QEAA\@VUUID\@mce\@\@\@Z
     */
    MCAPI PlayerListEntry(class mce::UUID);
    /**
     * @hash   -448246926
     * @symbol  ??0PlayerListEntry\@\@QEAA\@AEBVPlayer\@\@\@Z
     */
    MCAPI PlayerListEntry(class Player const &);
    /**
     * @hash   1074436216
     * @symbol  ?clone\@PlayerListEntry\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerListEntry clone() const;
    /**
     * @hash   2056433665
     * @symbol  ?read\@PlayerListEntry\@\@QEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI bool read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1269113346
     * @symbol  ?write\@PlayerListEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @hash   -1810011473
     * @symbol  ??1PlayerListEntry\@\@QEAA\@XZ
     */
    MCAPI ~PlayerListEntry();

};