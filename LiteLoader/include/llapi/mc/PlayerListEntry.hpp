/**
 * @file  MC/PlayerListEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol ??0PlayerListEntry@@QEAA@VUUID@mce@@@Z
     */
    MCAPI PlayerListEntry(class mce::UUID);
    /**
     * @hash   567460882
     * @symbol ??0PlayerListEntry@@QEAA@AEBVPlayer@@@Z
     */
    MCAPI PlayerListEntry(class Player const &);
    /**
     * @hash   2090113272
     * @symbol ?clone@PlayerListEntry@@QEBA?AV1@XZ
     */
    MCAPI class PlayerListEntry clone() const;
    /**
     * @hash   -1222856575
     * @symbol ?read@PlayerListEntry@@QEAA_NAEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI bool read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -253574674
     * @symbol ?write@PlayerListEntry@@QEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @hash   -794196033
     * @symbol ??1PlayerListEntry@@QEAA@XZ
     */
    MCAPI ~PlayerListEntry();

};