/**
 * @file  PlayerListPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "PlayerListEntry.hpp"

enum class PlayerListPacketType
{
    Add,
    Remove
};

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerListPacket.
 *
 */
class PlayerListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
public:
    std::vector<class PlayerListEntry> entries;
    enum class PlayerListPacketType type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTPACKET
public:
    class PlayerListPacket& operator=(class PlayerListPacket const &) = delete;
    PlayerListPacket(class PlayerListPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@PlayerListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol ?read\@PlayerListPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl 7
     * @symbol ?_read\@PlayerListPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERLISTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerListPacket();
#endif
    /**
     * @symbol ??0PlayerListPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerListPacket();
    /**
     * @symbol ?emplace\@PlayerListPacket\@\@QEAAX$$QEAVPlayerListEntry\@\@\@Z
     */
    MCAPI void emplace(class PlayerListEntry &&);

};
