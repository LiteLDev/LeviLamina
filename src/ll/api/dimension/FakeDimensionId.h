#pragma once

#include <iostream>
#include <string>
#include <functional>
#include <unordered_map>
#include <mutex>

#include "ll/api/base/StdInt.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/math/Vec3.h"
#include "mc/network/packet/Packet.h"


class ServerPlayer;

class FakeDimensionId {

    struct MoreDimensionIdSetting {
        bool needRemovePacket = false;
        std::function<void()> backDimensionCallback = nullptr;
    };
    std::mutex map_mutex_;
    int        fake_dimension_          = 0; // Overworld, Make the client think of the dimension
    int        temporary_id_            = 1; // Dimensions of transit
    std::unordered_map<mce::UUID, MoreDimensionIdSetting> setting_map_; // save in more dimension player
public:
    FakeDimensionId();
    ~FakeDimensionId();
//    static FakeDimensionId& getInstance();
    [[nodiscard]] int getFakeDimensionId() const;
    [[nodiscard]] int getTemporaryId() const;
    Packet& changePacketDimension(Packet& packet);
    void setNeedRemove(mce::UUID uuid, bool needRemove);
    bool isNeedRemove(mce::UUID uuid);
    void onPlayerGoMoreDimension(mce::UUID uuid, std::function<void()> backDimCallback = nullptr);
    void onPlayerLeftMoreDimension(mce::UUID uuid, bool isRespawn);
    std::function<void()> getBackDimensionCallback(mce::UUID uuid);

    LLAPI bool teleportToMoreDimension(ServerPlayer* player, DimensionType dimensionType, Vec3& pos);
};
