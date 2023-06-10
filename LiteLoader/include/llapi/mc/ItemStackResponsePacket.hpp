/**
 * @file  ItemStackResponsePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackResponsePacket.
 *
 */
class ItemStackResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKRESPONSEPACKET
public:
    class ItemStackResponsePacket& operator=(class ItemStackResponsePacket const &) = delete;
    ItemStackResponsePacket(class ItemStackResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ItemStackResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ItemStackResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ItemStackResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ItemStackResponsePacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKRESPONSEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackResponsePacket();
#endif
    /**
     * @symbol ??0ItemStackResponsePacket\@\@QEAA\@XZ
     */
    MCAPI ItemStackResponsePacket();
    /**
     * @symbol ??0ItemStackResponsePacket\@\@QEAA\@$$QEAV?$vector\@UItemStackResponseInfo\@\@V?$allocator\@UItemStackResponseInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ItemStackResponsePacket(std::vector<struct ItemStackResponseInfo> &&);
    /**
     * @symbol ?getResponses\@ItemStackResponsePacket\@\@QEBAAEBV?$vector\@UItemStackResponseInfo\@\@V?$allocator\@UItemStackResponseInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ItemStackResponseInfo> const & getResponses() const;

};
