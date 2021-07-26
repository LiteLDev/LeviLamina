#pragma once

#include "../Actor/Skin/SerializedSkin.h"
#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../dll.h"

enum class CameraShakeType : unsigned char {
    POSITIONAL,
    ROTATIONAL
};

enum class CameraShakeAction : unsigned char {
    ADD,
    STOP
};

class CameraShakePacket : public Packet {
public:
    float             intensity;
    float             duration;
    CameraShakeType   type;
    CameraShakeAction action;

    inline ~CameraShakePacket() {
    }
    MCAPI CameraShakePacket(enum CameraShakeAction);
    MCAPI CameraShakePacket(float, float, enum CameraShakeType);

    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};