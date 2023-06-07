/**
 * @file  AddPlayerPacket.hpp
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
 * @brief MC class AddPlayerPacket.
 *
 */
class AddPlayerPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDPLAYERPACKET
public:
    class AddPlayerPacket& operator=(class AddPlayerPacket const &) = delete;
    AddPlayerPacket(class AddPlayerPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddPlayerPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@AddPlayerPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AddPlayerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@AddPlayerPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDPLAYERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddPlayerPacket();
#endif
    /**
     * @symbol ??0AddPlayerPacket\@\@QEAA\@AEAVPlayer\@\@\@Z
     */
    MCAPI AddPlayerPacket(class Player &);
    /**
     * @symbol ??0AddPlayerPacket\@\@QEAA\@XZ
     */
    MCAPI AddPlayerPacket();

};
