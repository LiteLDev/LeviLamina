/**
 * @file  NetworkSettingsPacket.hpp
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
 * @brief MC class NetworkSettingsPacket.
 *
 */
class NetworkSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSETTINGSPACKET
public:
    class NetworkSettingsPacket& operator=(class NetworkSettingsPacket const &) = delete;
    NetworkSettingsPacket(class NetworkSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@NetworkSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@NetworkSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@NetworkSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@NetworkSettingsPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKSETTINGSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkSettingsPacket();
#endif
    /**
     * @symbol ??0NetworkSettingsPacket\@\@QEAA\@AEBUNetworkSettingOptions\@\@\@Z
     */
    MCAPI NetworkSettingsPacket(struct NetworkSettingOptions const &);
    /**
     * @symbol ??0NetworkSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI NetworkSettingsPacket();

};
