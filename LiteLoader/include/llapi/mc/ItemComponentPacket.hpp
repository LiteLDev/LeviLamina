/**
 * @file  ItemComponentPacket.hpp
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
 * @brief MC class ItemComponentPacket.
 *
 */
class ItemComponentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENTPACKET
public:
    class ItemComponentPacket& operator=(class ItemComponentPacket const &) = delete;
    ItemComponentPacket(class ItemComponentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ItemComponentPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ItemComponentPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ItemComponentPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ItemComponentPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMCOMPONENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemComponentPacket();
#endif
    /**
     * @symbol ??0ItemComponentPacket\@\@QEAA\@VItemRegistryRef\@\@\@Z
     */
    MCAPI ItemComponentPacket(class ItemRegistryRef);
    /**
     * @symbol ??0ItemComponentPacket\@\@QEAA\@XZ
     */
    MCAPI ItemComponentPacket();

};
