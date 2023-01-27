/**
 * @file  ItemStackRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestPacket.
 *
 */
class ItemStackRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTPACKET
public:
    class ItemStackRequestPacket& operator=(class ItemStackRequestPacket const &) = delete;
    ItemStackRequestPacket(class ItemStackRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackRequestPacket();
    /**
     * @hash   -2093285876
     * @vftbl  1
     * @symbol  ?getId\@ItemStackRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1084420935
     * @vftbl  2
     * @symbol  ?getName\@ItemStackRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   858928574
     * @vftbl  3
     * @symbol  ?write\@ItemStackRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   913941694
     * @vftbl  6
     * @symbol  ?_read\@ItemStackRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1637930418
     * @symbol  ??0ItemStackRequestPacket\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestPacket();
    /**
     * @hash   -427192176
     * @symbol  ?getRequestBatch\@ItemStackRequestPacket\@\@QEBAAEBVItemStackRequestBatch\@\@XZ
     */
    MCAPI class ItemStackRequestBatch const & getRequestBatch() const;

};