// #define GENERATE_PACKET

#ifdef GENERATE_PACKET

#include "mc/network/MinecraftPackets.h"
#include "mc/network/packet/Packet.h"
#include <filesystem>

#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "magic_enum.hpp"

template <>
struct magic_enum::customize::enum_range<MinecraftPacketIds> {
    static constexpr int min = 0;
    static constexpr int max = 128 + (int)MinecraftPacketIds::EndId;
    // (max - min) must be less than UINT16_MAX.
};

std::string getVTableName(void* vtable) {
    auto res = ll::memory::lookupSymbol(*((void**)vtable));

    if (res.size() == 1) {
        return res[0].substr(4, res[0].size() - 9);
    } else {
        throw std::runtime_error("cannot get symbol");
    }
}

inline void forEachPacket(
    std::function<void(Packet const& packet, std::string className, size_t size)> const& callback,
    bool                                                                                 output = false
) {
    int packetId = magic_enum::customize::enum_range<MinecraftPacketIds>::min;
    while (packetId < magic_enum::customize::enum_range<MinecraftPacketIds>::max) {
        auto packet = MinecraftPackets::createPacket((MinecraftPacketIds)packetId);
        if (packet) {
            auto size = ll::memory::getUsableSize(packet);

            auto className = getVTableName(packet.get());
            if (output) {
                auto enumName = magic_enum::enum_name((MinecraftPacketIds)packetId);

                ll::logger.warn(
                    "Packet: enum: {}, getName: {}, vtable: {}, id: {},size: {}",
                    enumName,
                    packet->getName(),
                    className,
                    packetId,
                    size
                );

                if (packet->getName() != className) {
                    ll::logger.error("intresting, different name, get: {}, typeid: {}", packet->getName(), className);
                }

                if (!className.starts_with(enumName)) {
                    if (className.ends_with("V1") || className.ends_with("V2")) {
                        ll::logger.error("intresting, different enum name, get: {}, typeid: {}", enumName, className);
                    } else {
                        ll::logger.fatal("intresting, different enum name, get: {}, typeid: {}", enumName, className);
                    }
                }
            }
            callback(*packet, className, size);
        }
        packetId++;
    }
}

void autoGenerate() {

    std::string path = __FILE__;

    if (!path.starts_with(LL_WORKSPACE_FOLDER)) {
        path = LL_WORKSPACE_FOLDER + path;
    }

    auto file = ll::file_utils::readFile(path);
    if (!file) {
        ll::logger.error("Couldn't open file {}", path);
        return;
    }
    auto& content = *file;

    std::ostringstream oss;

    // add static assert
    oss << std::endl;
    oss << std::endl;
    forEachPacket(
        [&](Packet const&, std::string className, size_t size) {
            oss << fmt::format("PACKET_SIZE_ASSERT({}, 0x{:X});\n", className, size);
        },
        true
    );
    oss << std::endl;
    ll::string_utils::replaceContent(content, "\n#pragma region PacketSizeAssert", "#pragma endregion", oss.str());

    oss.clear();
    oss.str("");

    // add include
    oss << std::endl;
    oss << std::endl;
    forEachPacket([&](Packet const&, std::string className, size_t) {
        oss << fmt::format("#include \"mc/network/packet/{}.h\"\n", className);
    });
    oss << std::endl;
    ll::string_utils::replaceContent(content, "\n#pragma region PacketInclude", "#pragma endregion", oss.str());
    oss.clear();
    oss.str("");

    if (!ll::file_utils::writeFile(path, content)) {
        ll::logger.error("Couldn't write file {}", path);
    }
}

LL_AUTO_STATIC_HOOK(GeneratePacketHook, HookPriority::Normal, "main", int, int a, char* c) {
    autoGenerate();
    return origin(a, c);
}

#else // GENERATE_PACKET

#pragma region PacketInclude

#include "mc/network/packet/ActorEventPacket.h"
#include "mc/network/packet/ActorPickRequestPacket.h"
#include "mc/network/packet/AddActorPacket.h"
#include "mc/network/packet/AddBehaviorTreePacket.h"
#include "mc/network/packet/AddItemActorPacket.h"
#include "mc/network/packet/AddPaintingPacket.h"
#include "mc/network/packet/AddPlayerPacket.h"
#include "mc/network/packet/AddVolumeEntityPacket.h"
#include "mc/network/packet/AgentActionEventPacket.h"
#include "mc/network/packet/AgentAnimationPacket.h"
#include "mc/network/packet/AnimateEntityPacket.h"
#include "mc/network/packet/AnimatePacket.h"
#include "mc/network/packet/AnvilDamagePacket.h"
#include "mc/network/packet/AutomationClientConnectPacket.h"
#include "mc/network/packet/AvailableActorIdentifiersPacket.h"
#include "mc/network/packet/AvailableCommandsPacket.h"
#include "mc/network/packet/BiomeDefinitionListPacket.h"
#include "mc/network/packet/BlockActorDataPacket.h"
#include "mc/network/packet/BlockEventPacket.h"
#include "mc/network/packet/BlockPickRequestPacket.h"
#include "mc/network/packet/BookEditPacket.h"
#include "mc/network/packet/BossEventPacket.h"
#include "mc/network/packet/CameraInstructionPacket.h"
#include "mc/network/packet/CameraPacket.h"
#include "mc/network/packet/CameraPresetsPacket.h"
#include "mc/network/packet/CameraShakePacket.h"
#include "mc/network/packet/ChangeDimensionPacket.h"
#include "mc/network/packet/ChangeMobPropertyPacket.h"
#include "mc/network/packet/ChunkRadiusUpdatedPacket.h"
#include "mc/network/packet/ClientCacheBlobStatusPacket.h"
#include "mc/network/packet/ClientCacheMissResponsePacket.h"
#include "mc/network/packet/ClientCacheStatusPacket.h"
#include "mc/network/packet/ClientToServerHandshakePacket.h"
#include "mc/network/packet/ClientboundDebugRendererPacket.h"
#include "mc/network/packet/ClientboundMapItemDataPacket.h"
#include "mc/network/packet/CodeBuilderPacket.h"
#include "mc/network/packet/CodeBuilderSourcePacket.h"
#include "mc/network/packet/CommandBlockUpdatePacket.h"
#include "mc/network/packet/CommandOutputPacket.h"
#include "mc/network/packet/CommandRequestPacket.h"
#include "mc/network/packet/CompletedUsingItemPacket.h"
#include "mc/network/packet/CompressedBiomeDefinitionListPacket.h"
#include "mc/network/packet/ContainerClosePacket.h"
#include "mc/network/packet/ContainerOpenPacket.h"
#include "mc/network/packet/ContainerSetDataPacket.h"
#include "mc/network/packet/CorrectPlayerMovePredictionPacket.h"
#include "mc/network/packet/CraftingDataPacket.h"
#include "mc/network/packet/CreatePhotoPacket.h"
#include "mc/network/packet/CreativeContentPacket.h"
#include "mc/network/packet/DeathInfoPacket.h"
#include "mc/network/packet/DebugInfoPacket.h"
#include "mc/network/packet/DimensionDataPacket.h"
#include "mc/network/packet/DisconnectPacket.h"
#include "mc/network/packet/EditorNetworkPacket.h"
#include "mc/network/packet/EduUriResourcePacket.h"
#include "mc/network/packet/EducationSettingsPacket.h"
#include "mc/network/packet/EmoteListPacket.h"
#include "mc/network/packet/EmotePacket.h"
#include "mc/network/packet/FeatureRegistryPacket.h"
#include "mc/network/packet/GameRulesChangedPacket.h"
#include "mc/network/packet/GameTestRequestPacket.h"
#include "mc/network/packet/GameTestResultsPacket.h"
#include "mc/network/packet/GuiDataPickItemPacket.h"
#include "mc/network/packet/HurtArmorPacket.h"
#include "mc/network/packet/InteractPacket.h"
#include "mc/network/packet/InventoryContentPacket.h"
#include "mc/network/packet/InventorySlotPacket.h"
#include "mc/network/packet/InventoryTransactionPacket.h"
#include "mc/network/packet/ItemComponentPacket.h"
#include "mc/network/packet/ItemStackRequestPacket.h"
#include "mc/network/packet/ItemStackResponsePacket.h"
#include "mc/network/packet/LabTablePacket.h"
#include "mc/network/packet/LecternUpdatePacket.h"
#include "mc/network/packet/LegacyTelemetryEventPacket.h"
#include "mc/network/packet/LessonProgressPacket.h"
#include "mc/network/packet/LevelChunkPacket.h"
#include "mc/network/packet/LevelEventGenericPacket.h"
#include "mc/network/packet/LevelEventPacket.h"
#include "mc/network/packet/LevelSoundEventPacket.h"
#include "mc/network/packet/LevelSoundEventPacketV1.h"
#include "mc/network/packet/LevelSoundEventPacketV2.h"
#include "mc/network/packet/LoginPacket.h"
#include "mc/network/packet/MapCreateLockedCopyPacket.h"
#include "mc/network/packet/MapInfoRequestPacket.h"
#include "mc/network/packet/MobArmorEquipmentPacket.h"
#include "mc/network/packet/MobEffectPacket.h"
#include "mc/network/packet/MobEquipmentPacket.h"
#include "mc/network/packet/ModalFormRequestPacket.h"
#include "mc/network/packet/ModalFormResponsePacket.h"
#include "mc/network/packet/MotionPredictionHintsPacket.h"
#include "mc/network/packet/MoveActorAbsolutePacket.h"
#include "mc/network/packet/MoveActorDeltaPacket.h"
#include "mc/network/packet/MovePlayerPacket.h"
#include "mc/network/packet/MultiplayerSettingsPacket.h"
#include "mc/network/packet/NetworkChunkPublisherUpdatePacket.h"
#include "mc/network/packet/NetworkSettingsPacket.h"
#include "mc/network/packet/NetworkStackLatencyPacket.h"
#include "mc/network/packet/NpcDialoguePacket.h"
#include "mc/network/packet/NpcRequestPacket.h"
#include "mc/network/packet/OnScreenTextureAnimationPacket.h"
#include "mc/network/packet/OpenSignPacket.h"
#include "mc/network/packet/PacketViolationWarningPacket.h"
#include "mc/network/packet/PassengerJumpPacket.h"
#include "mc/network/packet/PhotoTransferPacket.h"
#include "mc/network/packet/PlaySoundPacket.h"
#include "mc/network/packet/PlayStatusPacket.h"
#include "mc/network/packet/PlayerActionPacket.h"
#include "mc/network/packet/PlayerArmorDamagePacket.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"
#include "mc/network/packet/PlayerEnchantOptionsPacket.h"
#include "mc/network/packet/PlayerFogPacket.h"
#include "mc/network/packet/PlayerHotbarPacket.h"
#include "mc/network/packet/PlayerInputPacket.h"
#include "mc/network/packet/PlayerListPacket.h"
#include "mc/network/packet/PlayerSkinPacket.h"
#include "mc/network/packet/PlayerStartItemCooldownPacket.h"
#include "mc/network/packet/PlayerToggleCrafterSlotRequestPacket.h"
#include "mc/network/packet/PositionTrackingDBClientRequestPacket.h"
#include "mc/network/packet/PositionTrackingDBServerBroadcastPacket.h"
#include "mc/network/packet/PurchaseReceiptPacket.h"
#include "mc/network/packet/RefreshEntitlementsPacket.h"
#include "mc/network/packet/RemoveActorPacket.h"
#include "mc/network/packet/RemoveObjectivePacket.h"
#include "mc/network/packet/RemoveVolumeEntityPacket.h"
#include "mc/network/packet/RequestAbilityPacket.h"
#include "mc/network/packet/RequestChunkRadiusPacket.h"
#include "mc/network/packet/RequestNetworkSettingsPacket.h"
#include "mc/network/packet/RequestPermissionsPacket.h"
#include "mc/network/packet/ResourcePackChunkDataPacket.h"
#include "mc/network/packet/ResourcePackChunkRequestPacket.h"
#include "mc/network/packet/ResourcePackClientResponsePacket.h"
#include "mc/network/packet/ResourcePackDataInfoPacket.h"
#include "mc/network/packet/ResourcePackStackPacket.h"
#include "mc/network/packet/ResourcePacksInfoPacket.h"
#include "mc/network/packet/RespawnPacket.h"
#include "mc/network/packet/ScriptMessagePacket.h"
#include "mc/network/packet/ServerSettingsRequestPacket.h"
#include "mc/network/packet/ServerSettingsResponsePacket.h"
#include "mc/network/packet/ServerStatsPacket.h"
#include "mc/network/packet/ServerToClientHandshakePacket.h"
#include "mc/network/packet/SetActorDataPacket.h"
#include "mc/network/packet/SetActorLinkPacket.h"
#include "mc/network/packet/SetActorMotionPacket.h"
#include "mc/network/packet/SetCommandsEnabledPacket.h"
#include "mc/network/packet/SetDefaultGameTypePacket.h"
#include "mc/network/packet/SetDifficultyPacket.h"
#include "mc/network/packet/SetDisplayObjectivePacket.h"
#include "mc/network/packet/SetHealthPacket.h"
#include "mc/network/packet/SetHudPacket.h"
#include "mc/network/packet/SetLastHurtByPacket.h"
#include "mc/network/packet/SetLocalPlayerAsInitializedPacket.h"
#include "mc/network/packet/SetPlayerGameTypePacket.h"
#include "mc/network/packet/SetPlayerInventoryOptionsPacket.h"
#include "mc/network/packet/SetScorePacket.h"
#include "mc/network/packet/SetScoreboardIdentityPacket.h"
#include "mc/network/packet/SetSpawnPositionPacket.h"
#include "mc/network/packet/SetTimePacket.h"
#include "mc/network/packet/SetTitlePacket.h"
#include "mc/network/packet/SettingsCommandPacket.h"
#include "mc/network/packet/ShowCreditsPacket.h"
#include "mc/network/packet/ShowProfilePacket.h"
#include "mc/network/packet/ShowStoreOfferPacket.h"
#include "mc/network/packet/SimpleEventPacket.h"
#include "mc/network/packet/SimulationTypePacket.h"
#include "mc/network/packet/SpawnExperienceOrbPacket.h"
#include "mc/network/packet/SpawnParticleEffectPacket.h"
#include "mc/network/packet/StartGamePacket.h"
#include "mc/network/packet/StopSoundPacket.h"
#include "mc/network/packet/StructureBlockUpdatePacket.h"
#include "mc/network/packet/StructureTemplateDataRequestPacket.h"
#include "mc/network/packet/StructureTemplateDataResponsePacket.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/network/packet/SubChunkRequestPacket.h"
#include "mc/network/packet/SubClientLoginPacket.h"
#include "mc/network/packet/SyncActorPropertyPacket.h"
#include "mc/network/packet/TakeItemActorPacket.h"
#include "mc/network/packet/TextPacket.h"
#include "mc/network/packet/TickSyncPacket.h"
#include "mc/network/packet/TickingAreasLoadStatusPacket.h"
#include "mc/network/packet/ToastRequestPacket.h"
#include "mc/network/packet/TransferPacket.h"
#include "mc/network/packet/TrimDataPacket.h"
#include "mc/network/packet/UnlockedRecipesPacket.h"
#include "mc/network/packet/UpdateAbilitiesPacket.h"
#include "mc/network/packet/UpdateAdventureSettingsPacket.h"
#include "mc/network/packet/UpdateAttributesPacket.h"
#include "mc/network/packet/UpdateBlockPacket.h"
#include "mc/network/packet/UpdateBlockSyncedPacket.h"
#include "mc/network/packet/UpdateClientInputLocksPacket.h"
#include "mc/network/packet/UpdateEquipPacket.h"
#include "mc/network/packet/UpdatePlayerGameTypePacket.h"
#include "mc/network/packet/UpdateSoftEnumPacket.h"
#include "mc/network/packet/UpdateSubChunkBlocksPacket.h"
#include "mc/network/packet/UpdateTradePacket.h"

#pragma endregion

#define PACKET_SIZE_ASSERT(packet, size) static_assert(sizeof(packet) == (size), "size of " #packet " should be " #size)

#pragma region PacketSizeAssert

PACKET_SIZE_ASSERT(LoginPacket, 0x40);
PACKET_SIZE_ASSERT(PlayStatusPacket, 0x38);
PACKET_SIZE_ASSERT(ServerToClientHandshakePacket, 0x50);
PACKET_SIZE_ASSERT(ClientToServerHandshakePacket, 0x30);
PACKET_SIZE_ASSERT(DisconnectPacket, 0x60);
PACKET_SIZE_ASSERT(ResourcePacksInfoPacket, 0x80);
PACKET_SIZE_ASSERT(ResourcePackStackPacket, 0x130);
PACKET_SIZE_ASSERT(ResourcePackClientResponsePacket, 0x48);
PACKET_SIZE_ASSERT(TextPacket, 0xD8);
PACKET_SIZE_ASSERT(SetTimePacket, 0x38);
PACKET_SIZE_ASSERT(StartGamePacket, 0x660);
PACKET_SIZE_ASSERT(AddPlayerPacket, 0x620);
PACKET_SIZE_ASSERT(AddActorPacket, 0x1B0);
PACKET_SIZE_ASSERT(RemoveActorPacket, 0x38);
PACKET_SIZE_ASSERT(AddItemActorPacket, 0xE0);
PACKET_SIZE_ASSERT(TakeItemActorPacket, 0x40);
PACKET_SIZE_ASSERT(MoveActorAbsolutePacket, 0x50);
PACKET_SIZE_ASSERT(MovePlayerPacket, 0x70);
PACKET_SIZE_ASSERT(PassengerJumpPacket, 0x38);
PACKET_SIZE_ASSERT(UpdateBlockPacket, 0x48);
PACKET_SIZE_ASSERT(AddPaintingPacket, 0x70);
PACKET_SIZE_ASSERT(TickSyncPacket, 0x40);
PACKET_SIZE_ASSERT(LevelSoundEventPacketV1, 0x50);
PACKET_SIZE_ASSERT(LevelEventPacket, 0x48);
PACKET_SIZE_ASSERT(BlockEventPacket, 0x48);
PACKET_SIZE_ASSERT(ActorEventPacket, 0x40);
PACKET_SIZE_ASSERT(MobEffectPacket, 0x58);
PACKET_SIZE_ASSERT(UpdateAttributesPacket, 0x58);
PACKET_SIZE_ASSERT(InventoryTransactionPacket, 0x68);
PACKET_SIZE_ASSERT(MobEquipmentPacket, 0xA8);
PACKET_SIZE_ASSERT(MobArmorEquipmentPacket, 0x1B8);
PACKET_SIZE_ASSERT(InteractPacket, 0x50);
PACKET_SIZE_ASSERT(BlockPickRequestPacket, 0x40);
PACKET_SIZE_ASSERT(ActorPickRequestPacket, 0x40);
PACKET_SIZE_ASSERT(PlayerActionPacket, 0x60);
PACKET_SIZE_ASSERT(HurtArmorPacket, 0x40);
PACKET_SIZE_ASSERT(SetActorDataPacket, 0x88);
PACKET_SIZE_ASSERT(SetActorMotionPacket, 0x50);
PACKET_SIZE_ASSERT(SetActorLinkPacket, 0x50);
PACKET_SIZE_ASSERT(SetHealthPacket, 0x38);
PACKET_SIZE_ASSERT(SetSpawnPositionPacket, 0x50);
PACKET_SIZE_ASSERT(AnimatePacket, 0x40);
PACKET_SIZE_ASSERT(RespawnPacket, 0x48);
PACKET_SIZE_ASSERT(ContainerOpenPacket, 0x48);
PACKET_SIZE_ASSERT(ContainerClosePacket, 0x38);
PACKET_SIZE_ASSERT(PlayerHotbarPacket, 0x38);
PACKET_SIZE_ASSERT(InventoryContentPacket, 0x50);
PACKET_SIZE_ASSERT(InventorySlotPacket, 0x98);
PACKET_SIZE_ASSERT(ContainerSetDataPacket, 0x40);
PACKET_SIZE_ASSERT(CraftingDataPacket, 0x98);
PACKET_SIZE_ASSERT(GuiDataPickItemPacket, 0x78);
PACKET_SIZE_ASSERT(BlockActorDataPacket, 0x58);
PACKET_SIZE_ASSERT(PlayerInputPacket, 0x40);
PACKET_SIZE_ASSERT(LevelChunkPacket, 0x88);
PACKET_SIZE_ASSERT(SetCommandsEnabledPacket, 0x38);
PACKET_SIZE_ASSERT(SetDifficultyPacket, 0x38);
PACKET_SIZE_ASSERT(ChangeDimensionPacket, 0x48);
PACKET_SIZE_ASSERT(SetPlayerGameTypePacket, 0x38);
PACKET_SIZE_ASSERT(PlayerListPacket, 0x50);
PACKET_SIZE_ASSERT(SimpleEventPacket, 0x38);
PACKET_SIZE_ASSERT(LegacyTelemetryEventPacket, 0x140);
PACKET_SIZE_ASSERT(SpawnExperienceOrbPacket, 0x40);
PACKET_SIZE_ASSERT(ClientboundMapItemDataPacket, 0xC8);
PACKET_SIZE_ASSERT(MapInfoRequestPacket, 0x50);
PACKET_SIZE_ASSERT(RequestChunkRadiusPacket, 0x38);
PACKET_SIZE_ASSERT(ChunkRadiusUpdatedPacket, 0x38);
PACKET_SIZE_ASSERT(GameRulesChangedPacket, 0x48);
PACKET_SIZE_ASSERT(CameraPacket, 0x40);
PACKET_SIZE_ASSERT(BossEventPacket, 0x80);
PACKET_SIZE_ASSERT(ShowCreditsPacket, 0x40);
PACKET_SIZE_ASSERT(AvailableCommandsPacket, 0xF0);
PACKET_SIZE_ASSERT(CommandRequestPacket, 0x98);
PACKET_SIZE_ASSERT(CommandBlockUpdatePacket, 0xB0);
PACKET_SIZE_ASSERT(CommandOutputPacket, 0xA0);
PACKET_SIZE_ASSERT(UpdateTradePacket, 0x90);
PACKET_SIZE_ASSERT(UpdateEquipPacket, 0x58);
PACKET_SIZE_ASSERT(ResourcePackDataInfoPacket, 0x88);
PACKET_SIZE_ASSERT(ResourcePackChunkDataPacket, 0x78);
PACKET_SIZE_ASSERT(ResourcePackChunkRequestPacket, 0x58);
PACKET_SIZE_ASSERT(TransferPacket, 0x58);
PACKET_SIZE_ASSERT(PlaySoundPacket, 0x68);
PACKET_SIZE_ASSERT(StopSoundPacket, 0x58);
PACKET_SIZE_ASSERT(SetTitlePacket, 0xA8);
PACKET_SIZE_ASSERT(AddBehaviorTreePacket, 0x50);
PACKET_SIZE_ASSERT(StructureBlockUpdatePacket, 0xF8);
PACKET_SIZE_ASSERT(ShowStoreOfferPacket, 0x48);
PACKET_SIZE_ASSERT(PurchaseReceiptPacket, 0x48);
PACKET_SIZE_ASSERT(PlayerSkinPacket, 0x2E0);
PACKET_SIZE_ASSERT(SubClientLoginPacket, 0x38);
PACKET_SIZE_ASSERT(AutomationClientConnectPacket, 0x50);
PACKET_SIZE_ASSERT(SetLastHurtByPacket, 0x38);
PACKET_SIZE_ASSERT(BookEditPacket, 0xA0);
PACKET_SIZE_ASSERT(NpcRequestPacket, 0x88);
PACKET_SIZE_ASSERT(PhotoTransferPacket, 0xC0);
PACKET_SIZE_ASSERT(ModalFormRequestPacket, 0x58);
PACKET_SIZE_ASSERT(ModalFormResponsePacket, 0x58);
PACKET_SIZE_ASSERT(ServerSettingsRequestPacket, 0x30);
PACKET_SIZE_ASSERT(ServerSettingsResponsePacket, 0x58);
PACKET_SIZE_ASSERT(ShowProfilePacket, 0x50);
PACKET_SIZE_ASSERT(SetDefaultGameTypePacket, 0x38);
PACKET_SIZE_ASSERT(RemoveObjectivePacket, 0x50);
PACKET_SIZE_ASSERT(SetDisplayObjectivePacket, 0xB8);
PACKET_SIZE_ASSERT(SetScorePacket, 0x50);
PACKET_SIZE_ASSERT(LabTablePacket, 0x48);
PACKET_SIZE_ASSERT(UpdateBlockSyncedPacket, 0x58);
PACKET_SIZE_ASSERT(MoveActorDeltaPacket, 0x70);
PACKET_SIZE_ASSERT(SetScoreboardIdentityPacket, 0x50);
PACKET_SIZE_ASSERT(SetLocalPlayerAsInitializedPacket, 0x38);
PACKET_SIZE_ASSERT(UpdateSoftEnumPacket, 0x70);
PACKET_SIZE_ASSERT(NetworkStackLatencyPacket, 0x40);
PACKET_SIZE_ASSERT(SpawnParticleEffectPacket, 0xB0);
PACKET_SIZE_ASSERT(AvailableActorIdentifiersPacket, 0x48);
PACKET_SIZE_ASSERT(LevelSoundEventPacketV2, 0x70);
PACKET_SIZE_ASSERT(NetworkChunkPublisherUpdatePacket, 0x58);
PACKET_SIZE_ASSERT(BiomeDefinitionListPacket, 0x48);
PACKET_SIZE_ASSERT(LevelSoundEventPacket, 0x70);
PACKET_SIZE_ASSERT(LevelEventGenericPacket, 0x40);
PACKET_SIZE_ASSERT(LecternUpdatePacket, 0x48);
PACKET_SIZE_ASSERT(ClientCacheStatusPacket, 0x38);
PACKET_SIZE_ASSERT(OnScreenTextureAnimationPacket, 0x38);
PACKET_SIZE_ASSERT(MapCreateLockedCopyPacket, 0x40);
PACKET_SIZE_ASSERT(StructureTemplateDataRequestPacket, 0xD0);
PACKET_SIZE_ASSERT(StructureTemplateDataResponsePacket, 0x60);
PACKET_SIZE_ASSERT(ClientCacheBlobStatusPacket, 0x60);
PACKET_SIZE_ASSERT(ClientCacheMissResponsePacket, 0x88);
PACKET_SIZE_ASSERT(EducationSettingsPacket, 0x170);
PACKET_SIZE_ASSERT(EmotePacket, 0xA0);
PACKET_SIZE_ASSERT(MultiplayerSettingsPacket, 0x38);
PACKET_SIZE_ASSERT(SettingsCommandPacket, 0x58);
PACKET_SIZE_ASSERT(AnvilDamagePacket, 0x40);
PACKET_SIZE_ASSERT(CompletedUsingItemPacket, 0x38);
PACKET_SIZE_ASSERT(NetworkSettingsPacket, 0x48);
PACKET_SIZE_ASSERT(PlayerAuthInputPacket, 0xC8);
PACKET_SIZE_ASSERT(CreativeContentPacket, 0x50);
PACKET_SIZE_ASSERT(PlayerEnchantOptionsPacket, 0x48);
PACKET_SIZE_ASSERT(ItemStackRequestPacket, 0x38);
PACKET_SIZE_ASSERT(ItemStackResponsePacket, 0x48);
PACKET_SIZE_ASSERT(PlayerArmorDamagePacket, 0x40);
PACKET_SIZE_ASSERT(CodeBuilderPacket, 0x58);
PACKET_SIZE_ASSERT(UpdatePlayerGameTypePacket, 0x48);
PACKET_SIZE_ASSERT(EmoteListPacket, 0x50);
PACKET_SIZE_ASSERT(PositionTrackingDBServerBroadcastPacket, 0x50);
PACKET_SIZE_ASSERT(PositionTrackingDBClientRequestPacket, 0x38);
PACKET_SIZE_ASSERT(DebugInfoPacket, 0x58);
PACKET_SIZE_ASSERT(PacketViolationWarningPacket, 0x60);
PACKET_SIZE_ASSERT(MotionPredictionHintsPacket, 0x48);
PACKET_SIZE_ASSERT(AnimateEntityPacket, 0xD8);
PACKET_SIZE_ASSERT(CameraShakePacket, 0x40);
PACKET_SIZE_ASSERT(PlayerFogPacket, 0x48);
PACKET_SIZE_ASSERT(CorrectPlayerMovePredictionPacket, 0x60);
PACKET_SIZE_ASSERT(ItemComponentPacket, 0x48);
PACKET_SIZE_ASSERT(ClientboundDebugRendererPacket, 0x88);
PACKET_SIZE_ASSERT(SyncActorPropertyPacket, 0x48);
PACKET_SIZE_ASSERT(AddVolumeEntityPacket, 0x120);
PACKET_SIZE_ASSERT(RemoveVolumeEntityPacket, 0x38);
PACKET_SIZE_ASSERT(SimulationTypePacket, 0x38);
PACKET_SIZE_ASSERT(NpcDialoguePacket, 0xC0);
PACKET_SIZE_ASSERT(EduUriResourcePacket, 0x70);
PACKET_SIZE_ASSERT(CreatePhotoPacket, 0x78);
PACKET_SIZE_ASSERT(UpdateSubChunkBlocksPacket, 0x70);
PACKET_SIZE_ASSERT(SubChunkPacket, 0x60);
PACKET_SIZE_ASSERT(SubChunkRequestPacket, 0x80);
PACKET_SIZE_ASSERT(PlayerStartItemCooldownPacket, 0x58);
PACKET_SIZE_ASSERT(ScriptMessagePacket, 0x70);
PACKET_SIZE_ASSERT(CodeBuilderSourcePacket, 0x58);
PACKET_SIZE_ASSERT(TickingAreasLoadStatusPacket, 0x38);
PACKET_SIZE_ASSERT(DimensionDataPacket, 0x40);
PACKET_SIZE_ASSERT(AgentActionEventPacket, 0x68);
PACKET_SIZE_ASSERT(ChangeMobPropertyPacket, 0x88);
PACKET_SIZE_ASSERT(LessonProgressPacket, 0x58);
PACKET_SIZE_ASSERT(RequestAbilityPacket, 0x40);
PACKET_SIZE_ASSERT(RequestPermissionsPacket, 0x40);
PACKET_SIZE_ASSERT(ToastRequestPacket, 0x70);
PACKET_SIZE_ASSERT(UpdateAbilitiesPacket, 0x58);
PACKET_SIZE_ASSERT(UpdateAdventureSettingsPacket, 0x38);
PACKET_SIZE_ASSERT(DeathInfoPacket, 0x68);
PACKET_SIZE_ASSERT(EditorNetworkPacket, 0x48);
PACKET_SIZE_ASSERT(FeatureRegistryPacket, 0x48);
PACKET_SIZE_ASSERT(ServerStatsPacket, 0x38);
PACKET_SIZE_ASSERT(RequestNetworkSettingsPacket, 0x38);
PACKET_SIZE_ASSERT(GameTestRequestPacket, 0x90);
PACKET_SIZE_ASSERT(GameTestResultsPacket, 0x78);
PACKET_SIZE_ASSERT(UpdateClientInputLocksPacket, 0x40);
PACKET_SIZE_ASSERT(CameraPresetsPacket, 0x68);
PACKET_SIZE_ASSERT(UnlockedRecipesPacket, 0x50);
PACKET_SIZE_ASSERT(CameraInstructionPacket, 0xA0);
PACKET_SIZE_ASSERT(CompressedBiomeDefinitionListPacket, 0x68);
PACKET_SIZE_ASSERT(TrimDataPacket, 0x60);
PACKET_SIZE_ASSERT(OpenSignPacket, 0x40);
PACKET_SIZE_ASSERT(AgentAnimationPacket, 0x40);
PACKET_SIZE_ASSERT(RefreshEntitlementsPacket, 0x30);
PACKET_SIZE_ASSERT(PlayerToggleCrafterSlotRequestPacket, 0x48);
PACKET_SIZE_ASSERT(SetPlayerInventoryOptionsPacket, 0x48);
PACKET_SIZE_ASSERT(SetHudPacket, 0x50);

#pragma endregion

#endif // GENERATE_PACKET
