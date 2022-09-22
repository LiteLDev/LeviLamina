/**
 * @file  ToastRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ToastRequestPacket.
 *
 */
class ToastRequestPacket : public Packet {

#define AFTER_EXTRA
public:
    string mTitle;
    string mMessage;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOASTREQUESTPACKET
public:
    class ToastRequestPacket& operator=(class ToastRequestPacket const &) = delete;
    ToastRequestPacket(class ToastRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ToastRequestPacket();
    /**
     * @hash   -1917846690
     * @vftbl  1
     * @symbol ?getId@ToastRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -548779509
     * @vftbl  2
     * @symbol ?getName@ToastRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1149851884
     * @vftbl  3
     * @symbol ?write@ToastRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1660027108
     * @vftbl  6
     * @symbol ?_read@ToastRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   281163308
     * @symbol ??0ToastRequestPacket@@QEAA@XZ
     */
    MCAPI ToastRequestPacket();
    /**
     * @hash   1302501587
     * @symbol ??0ToastRequestPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI ToastRequestPacket(std::string const &, std::string const &);

};