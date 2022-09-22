/**
 * @file  EditorNetworkPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EditorNetworkPacket.
 *
 */
class EditorNetworkPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORNETWORKPACKET
public:
    class EditorNetworkPacket& operator=(class EditorNetworkPacket const &) = delete;
    EditorNetworkPacket(class EditorNetworkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EditorNetworkPacket();
    /**
     * @hash   -451318571
     * @vftbl  1
     * @symbol ?getId@EditorNetworkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -65452158
     * @vftbl  2
     * @symbol ?getName@EditorNetworkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1705724315
     * @vftbl  3
     * @symbol ?write@EditorNetworkPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -803130123
     * @vftbl  6
     * @symbol ?_read@EditorNetworkPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1194968949
     * @symbol ??0EditorNetworkPacket@@QEAA@XZ
     */
    MCAPI EditorNetworkPacket();

};