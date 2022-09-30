/**
 * @file  SettingsCommandPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SettingsCommandPacket.
 *
 */
class SettingsCommandPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTINGSCOMMANDPACKET
public:
    class SettingsCommandPacket& operator=(class SettingsCommandPacket const &) = delete;
    SettingsCommandPacket(class SettingsCommandPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SettingsCommandPacket();
    /**
     * @hash   929158702
     * @vftbl  1
     * @symbol ?getId@SettingsCommandPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -589967141
     * @vftbl  2
     * @symbol ?getName@SettingsCommandPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -620493476
     * @vftbl  3
     * @symbol ?write@SettingsCommandPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1948736236
     * @vftbl  6
     * @symbol ?_read@SettingsCommandPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1091958844
     * @symbol ??0SettingsCommandPacket@@QEAA@XZ
     */
    MCAPI SettingsCommandPacket();
    /**
     * @hash   2126287736
     * @symbol ?getCommandString@SettingsCommandPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getCommandString() const;
    /**
     * @hash   71196416
     * @symbol ?getSupressOutput@SettingsCommandPacket@@QEBA_NXZ
     */
    MCAPI bool getSupressOutput() const;

};