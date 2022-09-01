#pragma once
#include "APIHelp.h"
#include <MC/BlockInstance.hpp>
#include <Global.hpp>
#include <string>
#include <MC/BinaryStream.hpp>


//////////////////// Classes ////////////////////
class Packet;
class BinaryStream;

class PacketClass : public ScriptClass {
private:
    std::shared_ptr<Packet> packet;


public:
    explicit PacketClass(std::shared_ptr<Packet> p);
    static std::shared_ptr<Packet> extract(Local<Value> v);

    std::shared_ptr<Packet> get() {
        return packet;
    }
	
    void set(std::shared_ptr<Packet> pkt) {
        packet = pkt;
    };

    static Local<Object> newPacket(std::shared_ptr<Packet> pkt);
	
    Local<Value> asPointer(const Arguments& args);
    Local<Value> getId();
    Local<Value> getName();

};
extern ClassDefine<PacketClass> PacketClassBuilder;

class BinaryStreamClass : public ScriptClass {
private:
    BinaryStream* bs;

public:
    explicit BinaryStreamClass(BinaryStream* p);

    BinaryStreamClass(const Local<Object>& scriptObj)
    : ScriptClass(scriptObj)
    , bs(new BinaryStream) {
    }

    BinaryStream* get() {
        return bs;
    }
    void set(BinaryStream* pkt) {
        bs = pkt;
    };

	static Local<Object> newBinaryStream();
    static BinaryStreamClass* constructor(const Arguments& args);
	
    Local<Value> getAndReleaseData();
    Local<Value> reset();
	
	Local<Value> reserve(const Arguments& args);
    Local<Value> writeBool(const Arguments& args);
    Local<Value> writeByte(const Arguments& args);
    Local<Value> writeDouble(const Arguments& args);
    Local<Value> writeFloat(const Arguments& args);
    Local<Value> writeSignedBigEndianInt(const Arguments& args);
    Local<Value> writeSignedInt(const Arguments& args);
    Local<Value> writeSignedInt64(const Arguments& args);
    Local<Value> writeSignedShort(const Arguments& args);
    Local<Value> writeString(const Arguments& args);
    Local<Value> writeUnsignedChar(const Arguments& args);
    Local<Value> writeUnsignedInt(const Arguments& args);
    Local<Value> writeUnsignedInt64(const Arguments& args);
    Local<Value> writeUnsignedShort(const Arguments& args);
    Local<Value> writeUnsignedVarInt(const Arguments& args);
    Local<Value> writeUnsignedVarInt64(const Arguments& args);
    Local<Value> writeVarInt(const Arguments& args);
    Local<Value> writeVarInt64(const Arguments& args);
    Local<Value> writeVec3(const Arguments& args);
    Local<Value> writeCompoundTag(const Arguments& args);
    
    Local<Value> createPacket(const Arguments& args);
};
extern ClassDefine<BinaryStreamClass> BinaryStreamClassBuilder;