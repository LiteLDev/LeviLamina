#pragma once

#include <functional>
#include <iostream>
#include <mutex>
#include <string>
#include <unordered_map>

#include "ll/api/base/StdInt.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/math/Vec3.h"
#include "mc/network/packet/Packet.h"

class ServerPlayer;

namespace ll::dimension {

class FakeDimensionId {
    struct CustomDimensionIdSetting {
        bool                  needRemovePacket      = false;
        std::function<void()> backDimensionCallback = nullptr;
    };
    std::mutex mMapMutex;

    std::unordered_map<mce::UUID, CustomDimensionIdSetting> mSettingMap; // save in more dimension player
public:
    static constexpr int fakeDim        = 0; // Overworld, Make the client think of the dimension
    static constexpr int temporaryDimId = 1; // Dimensions of transit

    FakeDimensionId();
    ~FakeDimensionId();
    static Packet&        changePacketDimension(Packet& packet);
    void                  setNeedRemove(mce::UUID uuid, bool needRemove);
    bool                  isNeedRemove(mce::UUID uuid);
    void                  onPlayerGoCustomDimension(mce::UUID uuid, std::function<void()> backDimCallback = nullptr);
    void                  onPlayerLeftCustomDimension(mce::UUID uuid, bool isRespawn);
    std::function<void()> getBackDimensionCallback(mce::UUID uuid);

    bool teleportToCustomDimension(ServerPlayer* player, DimensionType dimensionType, Vec3& pos);
};
} // namespace ll::dimension
