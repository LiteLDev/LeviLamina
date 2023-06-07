/**
 * @file  CommandOutputPacket.hpp
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
 * @brief MC class CommandOutputPacket.
 *
 */
class CommandOutputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTPACKET
public:
    class CommandOutputPacket& operator=(class CommandOutputPacket const &) = delete;
    CommandOutputPacket(class CommandOutputPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CommandOutputPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CommandOutputPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CommandOutputPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@CommandOutputPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDOUTPUTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandOutputPacket();
#endif
    /**
     * @symbol ??0CommandOutputPacket\@\@QEAA\@AEBVCommandOrigin\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI CommandOutputPacket(class CommandOrigin const &, class CommandOutput const &);
    /**
     * @symbol ??0CommandOutputPacket\@\@QEAA\@XZ
     */
    MCAPI CommandOutputPacket();

};
