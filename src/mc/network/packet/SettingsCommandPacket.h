#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SettingsCommandPacket : public ::Packet {
public:
    std::string mCommandString; // this+0x30
    bool        mSupressOutput; // this+0x50

    // prevent constructor by default
    SettingsCommandPacket& operator=(SettingsCommandPacket const&);
    SettingsCommandPacket(SettingsCommandPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SettingsCommandPacket@@UEAA@XZ
    virtual ~SettingsCommandPacket() = default;

    // vIndex: 1, symbol: ?getId@SettingsCommandPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SettingsCommandPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SettingsCommandPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SettingsCommandPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SettingsCommandPacket@@QEAA@XZ
    MCAPI SettingsCommandPacket();

    // symbol:
    // ?getCommandString@SettingsCommandPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCommandString() const;

    // symbol: ?getSupressOutput@SettingsCommandPacket@@QEBA_NXZ
    MCAPI bool getSupressOutput() const;

    // NOLINTEND
};
