#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/volume/VolumeEntityManager.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeEntityManagerServer : public ::VolumeEntityManager {
public:
    // VolumeEntityManagerServer inner types define
    enum class CreateVolumeResult {};

public:
    // prevent constructor by default
    VolumeEntityManagerServer& operator=(VolumeEntityManagerServer const&);
    VolumeEntityManagerServer(VolumeEntityManagerServer const&);
    VolumeEntityManagerServer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeEntityManagerServer() = default;

    MCAPI VolumeEntityManagerServer(class StackRefResult<class EntityRegistry>, struct cereal::ReflectionCtx&);

    MCAPI std::pair<::VolumeEntityManagerServer::CreateVolumeResult, class StackRefResult<class EntityContext>>
    createVolume(class LevelStorage& levelStorage, class PacketSender& packetSender, std::string const&, class BlockPos const&, class BlockPos const&, DimensionType dimensionType, std::string const&);

    MCAPI std::vector<class WeakRef<class EntityContext>>
          getAllVolumesOverlappingChunkPosition(class ChunkPos const& pos, DimensionType) const;

    MCAPI void loadVolumeFiles(class ResourcePackManager const& resourcePackManager, bool isExperimentalEnabled);

    MCAPI void loadVolumeInstances(class LevelStorage const& levelStorage, bool isExperimentalEnabled);

    MCAPI std::vector<class OwnerPtr<class EntityContext>>
    removeAllVolumes(class LevelStorage& levelStorage, DimensionType dimensionId, class PacketSender& packetSender);

    MCAPI std::vector<class OwnerPtr<class EntityContext>> removeVolumes(
        class LevelStorage&   levelStorage,
        class BlockPos const& pos,
        DimensionType         dimensionId,
        class PacketSender&   packetSender
    );

    MCAPI std::vector<class OwnerPtr<class EntityContext>> removeVolumes(
        class LevelStorage& levelStorage,
        std::string const&  name,
        DimensionType       dimensionId,
        class PacketSender& packetSender
    );

    MCAPI void sendAllVolumesToClient(
        class UserEntityIdentifierComponent const&,
        class NetworkIdentifier const& source,
        class PacketSender&            packetSender
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _findUsableName(DimensionType) const;

    // NOLINTEND
};
