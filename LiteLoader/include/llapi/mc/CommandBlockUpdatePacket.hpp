/**
 * @file  CommandBlockUpdatePacket.hpp
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
 * @brief MC class CommandBlockUpdatePacket.
 *
 */
class CommandBlockUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKUPDATEPACKET
public:
    class CommandBlockUpdatePacket& operator=(class CommandBlockUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CommandBlockUpdatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CommandBlockUpdatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CommandBlockUpdatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@CommandBlockUpdatePacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKUPDATEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandBlockUpdatePacket();
#endif
    /**
     * @symbol ??0CommandBlockUpdatePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const &);
    /**
     * @symbol ??0CommandBlockUpdatePacket\@\@QEAA\@XZ
     */
    MCAPI CommandBlockUpdatePacket();

};
