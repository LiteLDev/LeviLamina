// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NpcRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCREQUESTPACKET
public:
    class NpcRequestPacket& operator=(class NpcRequestPacket const &) = delete;
    NpcRequestPacket(class NpcRequestPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~NpcRequestPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI NpcRequestPacket();
    MCAPI std::string const & getInteractText() const;
    MCAPI std::string const & getNpcName() const;
    MCAPI std::string const & getSceneName() const;
    MCAPI int getSkin() const;
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string);
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string);
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int);

protected:

private:
    MCAPI NpcRequestPacket(class ActorRuntimeID, enum NpcRequestPacket::RequestType, std::string, unsigned char);

};