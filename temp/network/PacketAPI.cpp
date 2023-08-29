#include "mc/Packet.hpp"
#include "mc/MinecraftPackets.hpp"
#include "liteloader/api/LoggerAPI.h"
#include "liteloader/core/LiteLoader.h"

#define INCLUDE_ALL_PACKET
#define SIZE_STATIC_ASSERT_IF_DEFINE
//#define SIZE_STATIC_ASSERT
//#define GENERATE_PACKET
//#define FILL_PACKET

using ll::logger;

#ifdef INCLUDE_ALL_PACKET

#include "mc/LoginPacket.hpp"
#include "mc/PlayStatusPacket.hpp"
#include "mc/ServerToClientHandshakePacket.hpp"
#include "mc/ClientToServerHandshakePacket.hpp"
#include "mc/DisconnectPacket.hpp"
#include "mc/ResourcePacksInfoPacket.hpp"
#include "mc/ResourcePackStackPacket.hpp"
#include "mc/ResourcePackClientResponsePacket.hpp"
#include "mc/TextPacket.hpp"
#include "mc/SetTimePacket.hpp"
#include "mc/StartGamePacket.hpp"
#include "mc/AddPlayerPacket.hpp"
#include "mc/AddActorPacket.hpp"
#include "mc/RemoveActorPacket.hpp"
#include "mc/AddItemActorPacket.hpp"
#include "mc/TakeItemActorPacket.hpp"
#include "mc/MoveActorAbsolutePacket.hpp"
#include "mc/MovePlayerPacket.hpp"
#include "mc/PassengerJumpPacket.hpp"
#include "mc/UpdateBlockPacket.hpp"
#include "mc/AddPaintingPacket.hpp"
#include "mc/TickSyncPacket.hpp"
#include "mc/LevelSoundEventPacketV1.hpp"
#include "mc/LevelEventPacket.hpp"
#include "mc/BlockEventPacket.hpp"
#include "mc/ActorEventPacket.hpp"
#include "mc/MobEffectPacket.hpp"
#include "mc/UpdateAttributesPacket.hpp"
#include "mc/InventoryTransactionPacket.hpp"
#include "mc/MobEquipmentPacket.hpp"
#include "mc/MobArmorEquipmentPacket.hpp"
#include "mc/InteractPacket.hpp"
#include "mc/BlockPickRequestPacket.hpp"
#include "mc/ActorPickRequestPacket.hpp"
#include "mc/PlayerActionPacket.hpp"
#include "mc/HurtArmorPacket.hpp"
#include "mc/SetActorDataPacket.hpp"
#include "mc/SetActorMotionPacket.hpp"
#include "mc/SetActorLinkPacket.hpp"
#include "mc/SetHealthPacket.hpp"
#include "mc/SetSpawnPositionPacket.hpp"
#include "mc/AnimatePacket.hpp"
#include "mc/RespawnPacket.hpp"
#include "mc/ContainerOpenPacket.hpp"
#include "mc/ContainerClosePacket.hpp"
#include "mc/PlayerHotbarPacket.hpp"
#include "mc/InventoryContentPacket.hpp"
#include "mc/InventorySlotPacket.hpp"
#include "mc/ContainerSetDataPacket.hpp"
#include "mc/CraftingDataPacket.hpp"
#include "mc/CraftingEventPacket.hpp"
#include "mc/GuiDataPickItemPacket.hpp"
#include "mc/BlockActorDataPacket.hpp"
#include "mc/PlayerInputPacket.hpp"
#include "mc/LevelChunkPacket.hpp"
#include "mc/SetCommandsEnabledPacket.hpp"
#include "mc/SetDifficultyPacket.hpp"
#include "mc/ChangeDimensionPacket.hpp"
#include "mc/SetPlayerGameTypePacket.hpp"
#include "mc/PlayerListPacket.hpp"
#include "mc/SimpleEventPacket.hpp"
#include "mc/EventPacket.hpp"
#include "mc/SpawnExperienceOrbPacket.hpp"
#include "mc/ClientboundMapItemDataPacket.hpp"
#include "mc/MapInfoRequestPacket.hpp"
#include "mc/RequestChunkRadiusPacket.hpp"
#include "mc/ChunkRadiusUpdatedPacket.hpp"
#include "mc/ItemFrameDropItemPacket.hpp"
#include "mc/GameRulesChangedPacket.hpp"
#include "mc/CameraPacket.hpp"
#include "mc/BossEventPacket.hpp"
#include "mc/ShowCreditsPacket.hpp"
#include "mc/AvailableCommandsPacket.hpp"
#include "mc/CommandRequestPacket.hpp"
#include "mc/CommandBlockUpdatePacket.hpp"
#include "mc/CommandOutputPacket.hpp"
#include "mc/UpdateTradePacket.hpp"
#include "mc/UpdateEquipPacket.hpp"
#include "mc/ResourcePackDataInfoPacket.hpp"
#include "mc/ResourcePackChunkDataPacket.hpp"
#include "mc/ResourcePackChunkRequestPacket.hpp"
#include "mc/TransferPacket.hpp"
#include "mc/PlaySoundPacket.hpp"
#include "mc/StopSoundPacket.hpp"
#include "mc/SetTitlePacket.hpp"
#include "mc/AddBehaviorTreePacket.hpp"
#include "mc/StructureBlockUpdatePacket.hpp"
#include "mc/ShowStoreOfferPacket.hpp"
#include "mc/PurchaseReceiptPacket.hpp"
#include "mc/PlayerSkinPacket.hpp"
#include "mc/SubClientLoginPacket.hpp"
#include "mc/AutomationClientConnectPacket.hpp"
#include "mc/SetLastHurtByPacket.hpp"
#include "mc/BookEditPacket.hpp"
#include "mc/NpcRequestPacket.hpp"
#include "mc/PhotoTransferPacket.hpp"
#include "mc/ModalFormRequestPacket.hpp"
#include "mc/ModalFormResponsePacket.hpp"
#include "mc/ServerSettingsRequestPacket.hpp"
#include "mc/ServerSettingsResponsePacket.hpp"
#include "mc/ShowProfilePacket.hpp"
#include "mc/SetDefaultGameTypePacket.hpp"
#include "mc/RemoveObjectivePacket.hpp"
#include "mc/SetDisplayObjectivePacket.hpp"
#include "mc/SetScorePacket.hpp"
#include "mc/LabTablePacket.hpp"
#include "mc/UpdateBlockSyncedPacket.hpp"
#include "mc/MoveActorDeltaPacket.hpp"
#include "mc/SetScoreboardIdentityPacket.hpp"
#include "mc/SetLocalPlayerAsInitializedPacket.hpp"
#include "mc/UpdateSoftEnumPacket.hpp"
#include "mc/NetworkStackLatencyPacket.hpp"
#include "mc/ScriptCustomEventPacket.hpp"
#include "mc/SpawnParticleEffectPacket.hpp"
#include "mc/AvailableActorIdentifiersPacket.hpp"
#include "mc/LevelSoundEventPacketV2.hpp"
#include "mc/NetworkChunkPublisherUpdatePacket.hpp"
#include "mc/BiomeDefinitionListPacket.hpp"
#include "mc/LevelSoundEventPacket.hpp"
#include "mc/LevelEventGenericPacket.hpp"
#include "mc/LecternUpdatePacket.hpp"
#include "mc/AddEntityPacket.hpp"
#include "mc/RemoveEntityPacket.hpp"
#include "mc/ClientCacheStatusPacket.hpp"
#include "mc/OnScreenTextureAnimationPacket.hpp"
#include "mc/MapCreateLockedCopyPacket.hpp"
#include "mc/StructureTemplateDataRequestPacket.hpp"
#include "mc/StructureTemplateDataResponsePacket.hpp"
#include "mc/ClientCacheBlobStatusPacket.hpp"
#include "mc/ClientCacheMissResponsePacket.hpp"
#include "mc/EducationSettingsPacket.hpp"
#include "mc/EmotePacket.hpp"
#include "mc/MultiplayerSettingsPacket.hpp"
#include "mc/SettingsCommandPacket.hpp"
#include "mc/AnvilDamagePacket.hpp"
#include "mc/CompletedUsingItemPacket.hpp"
#include "mc/NetworkSettingsPacket.hpp"
#include "mc/PlayerAuthInputPacket.hpp"
#include "mc/CreativeContentPacket.hpp"
#include "mc/PlayerEnchantOptionsPacket.hpp"
#include "mc/ItemStackRequestPacket.hpp"
#include "mc/ItemStackResponsePacket.hpp"
#include "mc/PlayerArmorDamagePacket.hpp"
#include "mc/CodeBuilderPacket.hpp"
#include "mc/UpdatePlayerGameTypePacket.hpp"
#include "mc/EmoteListPacket.hpp"
#include "mc/PositionTrackingDBServerBroadcastPacket.hpp"
#include "mc/PositionTrackingDBClientRequestPacket.hpp"
#include "mc/DebugInfoPacket.hpp"
#include "mc/PacketViolationWarningPacket.hpp"
#include "mc/MotionPredictionHintsPacket.hpp"
#include "mc/AnimateEntityPacket.hpp"
#include "mc/CameraShakePacket.hpp"
#include "mc/PlayerFogPacket.hpp"
#include "mc/CorrectPlayerMovePredictionPacket.hpp"
#include "mc/ItemComponentPacket.hpp"
#include "mc/FilterTextPacket.hpp"
#include "mc/ClientboundDebugRendererPacket.hpp"
#include "mc/SyncActorPropertyPacket.hpp"
#include "mc/AddVolumeEntityPacket.hpp"
#include "mc/RemoveVolumeEntityPacket.hpp"
#include "mc/SimulationTypePacket.hpp"
#include "mc/NpcDialoguePacket.hpp"
#include "mc/EduUriResourcePacket.hpp"
#include "mc/CreatePhotoPacket.hpp"
#include "mc/UpdateSubChunkBlocksPacket.hpp"
#include "mc/SubChunkPacket.hpp"
#include "mc/SubChunkRequestPacket.hpp"
#include "mc/PlayerStartItemCooldownPacket.hpp"
#include "mc/ScriptMessagePacket.hpp"
#include "mc/CodeBuilderSourcePacket.hpp"
#include "mc/TickingAreasLoadStatusPacket.hpp"
#include "mc/DimensionDataPacket.hpp"
#include "mc/AgentActionEventPacket.hpp"
#include "mc/ChangeMobPropertyPacket.hpp"
#include "mc/LessonProgressPacket.hpp"
#include "mc/RequestAbilityPacket.hpp"
#include "mc/RequestPermissionsPacket.hpp"
#include "mc/ToastRequestPacket.hpp"
#include "mc/UpdateAbilitiesPacket.hpp"
#include "mc/UpdateAdventureSettingsPacket.hpp"
#include "mc/DeathInfoPacket.hpp"
#include "mc/EditorNetworkPacket.hpp"
#include "mc/FeatureRegistryPacket.hpp"
#include "mc/ServerStatsPacket.hpp"
#include "mc/RequestNetworkSettingsPacket.hpp"
#include "mc/GameTestRequestPacket.hpp"
#include "mc/GameTestResultsPacket.hpp"
#include "mc/UpdateClientInputLocksPacket.hpp"
#include "mc/ClientCheatAbilityPacket.hpp"

#endif // INCLUDE_ALL_PACKET

#pragma region ForEachPacketMacro


#define ForEachPacket(Func)                        \
    Func(ShowProfilePacket);                       \
    Func(SetDefaultGameTypePacket);                \
    Func(RemoveObjectivePacket);                   \
    Func(RemoveVolumeEntityPacket);                \
    Func(SyncActorPropertyPacket);                 \
    Func(FilterTextPacket);                        \
    Func(CodeBuilderPacket);                       \
    Func(NetworkSettingsPacket);                   \
    Func(MultiplayerSettingsPacket);               \
    Func(SettingsCommandPacket);                   \
    Func(MapCreateLockedCopyPacket);               \
    Func(AddEntityPacket);                         \
    Func(RemoveEntityPacket);                      \
    Func(LevelSoundEventPacketV2);                 \
    Func(ModalFormRequestPacket);                  \
    Func(ModalFormResponsePacket);                 \
    Func(ServerSettingsRequestPacket);             \
    Func(ClientToServerHandshakePacket);           \
    Func(ServerToClientHandshakePacket);           \
    Func(SetTimePacket);                           \
    Func(RemoveActorPacket);                       \
    Func(PassengerJumpPacket);                     \
    Func(LevelSoundEventPacketV1);                 \
    Func(SetCommandsEnabledPacket);                \
    Func(SetPlayerGameTypePacket);                 \
    Func(RequestChunkRadiusPacket);                \
    Func(ChunkRadiusUpdatedPacket);                \
    Func(SetLastHurtByPacket);                     \
    Func(AutomationClientConnectPacket);           \
    Func(StopSoundPacket);                         \
    Func(PlayerArmorDamagePacket);                 \
    Func(ActorPickRequestPacket);                  \
    Func(AddPaintingPacket);                       \
    Func(StructureTemplateDataResponsePacket);     \
    Func(TransferPacket);                          \
    Func(UpdateEquipPacket);                       \
    Func(UpdateSoftEnumPacket);                    \
    Func(UpdateTradePacket);                       \
    Func(CameraPacket);                            \
    Func(MobArmorEquipmentPacket);                 \
    Func(MobEffectPacket);                         \
    Func(MoveActorAbsolutePacket);                 \
    Func(NetworkStackLatencyPacket);               \
    Func(NpcRequestPacket);                        \
    Func(OnScreenTextureAnimationPacket);          \
    Func(PacketViolationWarningPacket);            \
    Func(PhotoTransferPacket);                     \
    Func(PlaySoundPacket);                         \
    Func(AnvilDamagePacket);                       \
    Func(BlockEventPacket);                        \
    Func(BookEditPacket);                          \
    Func(BossEventPacket);                         \
    Func(ClientboundMapItemDataPacket);            \
    Func(CommandBlockUpdatePacket);                \
    Func(CompletedUsingItemPacket);                \
    Func(ContainerSetDataPacket);                  \
    Func(CraftingEventPacket);                     \
    Func(DebugInfoPacket);                         \
    Func(EducationSettingsPacket);                 \
    Func(EmoteListPacket);                         \
    Func(EmotePacket);                             \
    Func(HurtArmorPacket);                         \
    Func(ItemFrameDropItemPacket);                 \
    Func(LabTablePacket);                          \
    Func(LecternUpdatePacket);                     \
    Func(LevelEventGenericPacket);                 \
    Func(PlayerEnchantOptionsPacket);              \
    Func(PlayerInputPacket);                       \
    Func(PlayerSkinPacket);                        \
    Func(PositionTrackingDBClientRequestPacket);   \
    Func(PositionTrackingDBServerBroadcastPacket); \
    Func(PurchaseReceiptPacket);                   \
    Func(ResourcePackChunkDataPacket);             \
    Func(ResourcePackChunkRequestPacket);          \
    Func(ResourcePackDataInfoPacket);              \
    Func(ScriptCustomEventPacket);                 \
    Func(CreatePhotoPacket);                       \
    Func(EduUriResourcePacket);                    \
    Func(NpcDialoguePacket);                       \
    Func(SimulationTypePacket);                    \
    Func(AddVolumeEntityPacket);                   \
    Func(AnimateEntityPacket);                     \
    Func(CameraShakePacket);                       \
    Func(CodeBuilderSourcePacket);                 \
    Func(ClientboundDebugRendererPacket);          \
    Func(CorrectPlayerMovePredictionPacket);       \
    Func(PlayerStartItemCooldownPacket);           \
    Func(ScriptMessagePacket);                     \
    Func(SetDisplayObjectivePacket);               \
    Func(SetScorePacket);                          \
    Func(SetScoreboardIdentityPacket);             \
    Func(SetTitlePacket);                          \
    Func(ShowCreditsPacket);                       \
    Func(ShowStoreOfferPacket);                    \
    Func(SpawnExperienceOrbPacket);                \
    Func(SpawnParticleEffectPacket);               \
    Func(StructureBlockUpdatePacket);              \
    Func(StructureTemplateDataRequestPacket);      \
    Func(SubClientLoginPacket);                    \
    Func(SimpleEventPacket);                       \
    Func(AddBehaviorTreePacket);                   \
    Func(AvailableActorIdentifiersPacket);         \
    Func(AvailableCommandsPacket);                 \
    Func(BiomeDefinitionListPacket);               \
    Func(CraftingDataPacket);                      \
    Func(CreativeContentPacket);                   \
    Func(GameRulesChangedPacket);                  \
    Func(ResourcePackStackPacket);                 \
    Func(ResourcePacksInfoPacket);                 \
    Func(ItemComponentPacket);                     \
    Func(SetSpawnPositionPacket);                  \
    Func(StartGamePacket);                         \
    Func(PlayerFogPacket);                         \
    Func(AddPlayerPacket);                         \
    Func(LoginPacket);                             \
    Func(BlockPickRequestPacket);                  \
    Func(DisconnectPacket);                        \
    Func(GuiDataPickItemPacket);                   \
    Func(SetLocalPlayerAsInitializedPacket);       \
    Func(TextPacket);                              \
    Func(PlayerListPacket);                        \
    Func(PlayStatusPacket);                        \
    Func(ClientCacheStatusPacket);                 \
    Func(SetDifficultyPacket);                     \
    Func(ChangeDimensionPacket);                   \
    Func(ResourcePackClientResponsePacket);        \
    Func(SetActorLinkPacket);                      \
    Func(UpdatePlayerGameTypePacket);              \
    Func(RespawnPacket);                           \
    Func(TakeItemActorPacket);                     \
    Func(PlayerHotbarPacket);                      \
    Func(CommandOutputPacket);                     \
    Func(TickSyncPacket);                          \
    Func(CommandRequestPacket);                    \
    Func(ContainerOpenPacket);                     \
    Func(ContainerClosePacket);                    \
    Func(InventoryContentPacket);                  \
    Func(ServerSettingsResponsePacket);            \
    Func(InventorySlotPacket);                     \
    Func(UpdateBlockSyncedPacket);                 \
    Func(PlayerActionPacket);                      \
    Func(ItemStackRequestPacket);                  \
    Func(ItemStackResponsePacket);                 \
    Func(BlockActorDataPacket);                    \
    Func(EventPacket);                             \
    Func(SetHealthPacket);                         \
    Func(MobEquipmentPacket);                      \
    Func(MotionPredictionHintsPacket);             \
    Func(AddItemActorPacket);                      \
    Func(UpdateAttributesPacket);                  \
    Func(InteractPacket);                          \
    Func(ActorEventPacket);                        \
    Func(LevelEventPacket);                        \
    Func(NetworkChunkPublisherUpdatePacket);       \
    Func(AnimatePacket);                           \
    Func(InventoryTransactionPacket);              \
    Func(AddActorPacket);                          \
    Func(MapInfoRequestPacket);                    \
    Func(UpdateSubChunkBlocksPacket);              \
    Func(SetActorMotionPacket);                    \
    Func(LevelSoundEventPacket);                   \
    Func(SubChunkPacket);                          \
    Func(SubChunkRequestPacket);                   \
    Func(ClientCacheMissResponsePacket);           \
    Func(ClientCacheBlobStatusPacket);             \
    Func(LevelChunkPacket);                        \
    Func(SetActorDataPacket);                      \
    Func(UpdateBlockPacket);                       \
    Func(MoveActorDeltaPacket);                    \
    Func(MovePlayerPacket);                        \
    Func(PlayerAuthInputPacket);                   \
    Func(TickingAreasLoadStatusPacket);            \
    Func(DimensionDataPacket);                     \
    Func(AgentActionEventPacket);                  \
    Func(ChangeMobPropertyPacket);                 \
    Func(ChangeMobPropertyPacket);                 \
    Func(LessonProgressPacket);                    \
    Func(RequestAbilityPacket);                    \
    Func(RequestPermissionsPacket);                \
    Func(ToastRequestPacket);                      \
    Func(UpdateAbilitiesPacket);                   \
    Func(UpdateAdventureSettingsPacket);           \
    Func(EditorNetworkPacket);                     \
    Func(DeathInfoPacket);                         \
    Func(FeatureRegistryPacket);                   \
    Func(ServerStatsPacket);                       \
    Func(RequestNetworkSettingsPacket);            \
    Func(GameTestRequestPacket);                   \
    Func(GameTestResultsPacket);                   \
    Func(UpdateClientInputLocksPacket);            \
    Func(ClientCheatAbilityPacket);

#define DeclearClass(packet) class packet;

ForEachPacket(DeclearClass);

#pragma endregion

#ifdef GENERATE_PACKET

template <typename T>
inline void* VFTABLE_ADDR;
template <typename T>
inline size_t PACKET_SIZE;

inline void __initPacketVftable() {
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define INIT_ADDR(type) \
    VFTABLE_ADDR<type> = ll::memory::resolveSymbol("??_7" #type "@@6B@");

    ForEachPacket(INIT_ADDR);

#undef INIT_ADDR
}

template <typename T>
inline void* getVftableAddr() {
    __initPacketVftable();
    return VFTABLE_ADDR<T>;
}

void __initPacketSize() {
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define SET_PACKET_SIZE(type)                              \
    if (getVftableAddr<type>() == *(void**)packet.get()) { \
        PACKET_SIZE<type> = size - 16;                     \
        continue;                                          \
    }
    int packetId = -1;
    while (packetId < 200) {
        auto packet = MinecraftPackets::createPacket(++packetId);
        if (packet) {
            auto size = _msize((void**)packet.get() - 2);

            ForEachPacket(SET_PACKET_SIZE);
            __debugbreak();
        }
    }
#undef SET_PACKET_SIZE
}

std::string getClassName(Packet* packet) {
#define RETURN_IF_FIND(type)                             \
    if (getVftableAddr<class type>() == *(void**)packet) \
        return #type;
    ForEachPacket(RETURN_IF_FIND);
    __debugbreak();
    return fmt::format("Unknown({})", packet->getId());
#undef RETURN_IF_FIND
}

inline void forEachPacket(std::function<void(Packet const& packet, std::string className, size_t size)> callback) {
    int packetId = 0;
    while (packetId < 200) {
        auto packet = MinecraftPackets::createPacket(packetId);
        if (packet) {
            auto size = _msize((void**)packet.get() - 2);
            // logger.warn("Packet: {},{},{},{},{}", magic_enum::enum_name((MinecraftPacketIds)packetId), packet->getName(), getClassName(packet.get()), packetId, size);

            auto className = getClassName(packet.get());
            callback(*packet, className, size - 16);
        }
        packetId++;
    }
}

template <typename T>
inline size_t getPacketSize() {
    __initPacketSize();
    return PACKET_SIZE<T>;
}

#pragma region Packet Command

#include "liteloader/api/DynamicCommandAPI.h"
#include "mc/Minecraft.hpp"
#include <filesystem>
#include "liteloader/api/utils/FileHelper.h"
using Param = DynamicCommand::ParameterData;
using ParamType = DynamicCommand::ParameterType;
using ParamIndex = DynamicCommandInstance::ParameterIndex;
using Result = DynamicCommand::Result;

inline bool replaceString(std::string& content, std::string const& start, std::string const& end, std::string const& str, size_t offset = 0, bool exclude = true) {
    auto startOffset = content.find(start, offset);
    if (startOffset == content.npos)
        return false;
    if (exclude)
        startOffset += start.size();
    auto endOffset = end.empty() ? content.npos : content.find(end, startOffset);

    if (endOffset != content.npos && !exclude) {
        endOffset += sizeof(end);
    }
    content.replace(startOffset, endOffset - startOffset, str);
    return true;
}

void autoGenerate() {
    auto file = ReadAllFile(__FILE__, false);
    if (!file)
        __debugbreak();
    auto& content = file.value();

    std::ostringstream oss;

    // add static assert
    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("static_assert(sizeof({}) == 0x{:X}, \"size of {} should be {}\");\n", className, size, className, size);
    });
    oss << std::endl;
    replaceString(content, "#ifdef SIZE_STATIC_ASSERT\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("static_assert(sizeof({}) == 0x{:X} || sizeof({}) == 48, \"size of {} should be {} or 48(default)\");\n", className, size, className, className, size);
    });
    oss << std::endl;
    replaceString(content, "#ifdef SIZE_STATIC_ASSERT_IF_DEFINE\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    // add include
    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("#include \"llapi/mc/{}.hpp\"\n", className);
    });
    oss << std::endl;
    replaceString(content, "#ifdef INCLUDE_ALL_PACKET\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    WriteAllFile(__FILE__, content, false);
}
template <typename T>
void __autoFill(std::string const& className) {
    if (sizeof(T) == getPacketSize<T>())
        return;

    std::filesystem::path McDir = std::filesystem::path(__FILEW__).parent_path().parent_path().parent_path().append("Header").append("MC");

    std::filesystem::path filePath = McDir.append(fmt::format("{}.hpp", className));
    auto file = ReadAllFile(filePath.string());
    if (!file) {
        __debugbreak();
        return;
    }
    auto& content = file.value();
    size_t fillerSize = getPacketSize<T>() - sizeof(T);
    std::string filler = fmt::format("    char filler[{}];\n", getPacketSize<T>() - 48);

    auto startOffset = content.find("// Add Member There");
    if (startOffset == content.npos) {
        startOffset = content.find("#define AFTER_EXTRA");
        if (startOffset == content.npos) {
            __debugbreak();
            return;
        }
        filler = "// Add Member There\n" + filler;
    }

    startOffset += std::string("// Add Member There").size() + 1;
    auto endOffset = content.find("#undef", startOffset);

    if (sizeof(T) != 48) {
        replaceString(content, "filler[", "]", std::to_string(getPacketSize<T>() - 48));
    } else {
        if (content.substr(startOffset, endOffset - startOffset) != "\n") {
            startOffset = content.find("\n\n", startOffset) + 1;
            __debugbreak();
        }
        content.insert(startOffset, filler);
    }
    logger.warn("add or change filler in file {}, size: {} ", filePath.filename().string(), getPacketSize<T>() - 48);
    WriteAllFile(filePath.string(), content);
    return;
}
void autoFill() {
#ifdef FILL_PACKET

#define AUTO_FILL(type) \
    __autoFill<type>(#type);
    ForEachPacket(AUTO_FILL);
#undef AUTO_FILL;

#endif // FILL_PACKET
}

void onExecute(DynamicCommand const& cmd, CommandOrigin const& origin, CommandOutput& output,
               std::unordered_map<std::string, Result>& results) {
    autoGenerate();
    autoFill();
    output.success("Generate finished");
}

TClasslessInstanceHook2("SetupPacketCommand_startServerThread", void, "?startServerThread@ServerInstance@@QEAAXXZ") {
    original(this);
    Global<Level> = Global<Minecraft>->getLevel();
    autoGenerate();
    autoFill();

    auto command = DynamicCommand::createCommand("pkt", "packet");
    command->addOverload();
    command->setCallback(onExecute);
    DynamicCommand::setup(std::move(command));
}

#pragma endregion

#endif // GENERATE_PACKET

#ifdef SIZE_STATIC_ASSERT

static_assert(sizeof(LoginPacket) == 0x40, "size of LoginPacket should be 64");
static_assert(sizeof(PlayStatusPacket) == 0x38, "size of PlayStatusPacket should be 56");
static_assert(sizeof(ServerToClientHandshakePacket) == 0x50, "size of ServerToClientHandshakePacket should be 80");
static_assert(sizeof(ClientToServerHandshakePacket) == 0x30, "size of ClientToServerHandshakePacket should be 48");
static_assert(sizeof(DisconnectPacket) == 0x58, "size of DisconnectPacket should be 88");
static_assert(sizeof(ResourcePacksInfoPacket) == 0x68, "size of ResourcePacksInfoPacket should be 104");
static_assert(sizeof(ResourcePackStackPacket) == 0x128, "size of ResourcePackStackPacket should be 296");
static_assert(sizeof(ResourcePackClientResponsePacket) == 0x48, "size of ResourcePackClientResponsePacket should be 72");
static_assert(sizeof(TextPacket) == 0xD8, "size of TextPacket should be 216");
static_assert(sizeof(SetTimePacket) == 0x38, "size of SetTimePacket should be 56");
static_assert(sizeof(StartGamePacket) == 0x520, "size of StartGamePacket should be 1312");
static_assert(sizeof(AddPlayerPacket) == 0x5E8, "size of AddPlayerPacket should be 1512");
static_assert(sizeof(AddActorPacket) == 0x1B0, "size of AddActorPacket should be 432");
static_assert(sizeof(RemoveActorPacket) == 0x38, "size of RemoveActorPacket should be 56");
static_assert(sizeof(AddItemActorPacket) == 0xE0, "size of AddItemActorPacket should be 224");
static_assert(sizeof(TakeItemActorPacket) == 0x40, "size of TakeItemActorPacket should be 64");
static_assert(sizeof(MoveActorAbsolutePacket) == 0x50, "size of MoveActorAbsolutePacket should be 80");
static_assert(sizeof(MovePlayerPacket) == 0x70, "size of MovePlayerPacket should be 112");
static_assert(sizeof(PassengerJumpPacket) == 0x38, "size of PassengerJumpPacket should be 56");
static_assert(sizeof(UpdateBlockPacket) == 0x48, "size of UpdateBlockPacket should be 72");
static_assert(sizeof(AddPaintingPacket) == 0x70, "size of AddPaintingPacket should be 112");
static_assert(sizeof(TickSyncPacket) == 0x40, "size of TickSyncPacket should be 64");
static_assert(sizeof(LevelSoundEventPacketV1) == 0x50, "size of LevelSoundEventPacketV1 should be 80");
static_assert(sizeof(LevelEventPacket) == 0x48, "size of LevelEventPacket should be 72");
static_assert(sizeof(BlockEventPacket) == 0x48, "size of BlockEventPacket should be 72");
static_assert(sizeof(ActorEventPacket) == 0x40, "size of ActorEventPacket should be 64");
static_assert(sizeof(MobEffectPacket) == 0x50, "size of MobEffectPacket should be 80");
static_assert(sizeof(UpdateAttributesPacket) == 0x58, "size of UpdateAttributesPacket should be 88");
static_assert(sizeof(InventoryTransactionPacket) == 0x68, "size of InventoryTransactionPacket should be 104");
static_assert(sizeof(MobEquipmentPacket) == 0xA8, "size of MobEquipmentPacket should be 168");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x1B8, "size of MobArmorEquipmentPacket should be 440");
static_assert(sizeof(InteractPacket) == 0x50, "size of InteractPacket should be 80");
static_assert(sizeof(BlockPickRequestPacket) == 0x40, "size of BlockPickRequestPacket should be 64");
static_assert(sizeof(ActorPickRequestPacket) == 0x40, "size of ActorPickRequestPacket should be 64");
static_assert(sizeof(PlayerActionPacket) == 0x58, "size of PlayerActionPacket should be 88");
static_assert(sizeof(HurtArmorPacket) == 0x40, "size of HurtArmorPacket should be 64");
static_assert(sizeof(SetActorDataPacket) == 0x88, "size of SetActorDataPacket should be 136");
static_assert(sizeof(SetActorMotionPacket) == 0x48, "size of SetActorMotionPacket should be 72");
static_assert(sizeof(SetActorLinkPacket) == 0x50, "size of SetActorLinkPacket should be 80");
static_assert(sizeof(SetHealthPacket) == 0x38, "size of SetHealthPacket should be 56");
static_assert(sizeof(SetSpawnPositionPacket) == 0x50, "size of SetSpawnPositionPacket should be 80");
static_assert(sizeof(AnimatePacket) == 0x40, "size of AnimatePacket should be 64");
static_assert(sizeof(RespawnPacket) == 0x48, "size of RespawnPacket should be 72");
static_assert(sizeof(ContainerOpenPacket) == 0x48, "size of ContainerOpenPacket should be 72");
static_assert(sizeof(ContainerClosePacket) == 0x38, "size of ContainerClosePacket should be 56");
static_assert(sizeof(PlayerHotbarPacket) == 0x38, "size of PlayerHotbarPacket should be 56");
static_assert(sizeof(InventoryContentPacket) == 0x50, "size of InventoryContentPacket should be 80");
static_assert(sizeof(InventorySlotPacket) == 0x98, "size of InventorySlotPacket should be 152");
static_assert(sizeof(ContainerSetDataPacket) == 0x40, "size of ContainerSetDataPacket should be 64");
static_assert(sizeof(CraftingDataPacket) == 0x98, "size of CraftingDataPacket should be 152");
static_assert(sizeof(CraftingEventPacket) == 0x78, "size of CraftingEventPacket should be 120");
static_assert(sizeof(GuiDataPickItemPacket) == 0x78, "size of GuiDataPickItemPacket should be 120");
static_assert(sizeof(BlockActorDataPacket) == 0x58, "size of BlockActorDataPacket should be 88");
static_assert(sizeof(PlayerInputPacket) == 0x40, "size of PlayerInputPacket should be 64");
static_assert(sizeof(LevelChunkPacket) == 0x88, "size of LevelChunkPacket should be 136");
static_assert(sizeof(SetCommandsEnabledPacket) == 0x38, "size of SetCommandsEnabledPacket should be 56");
static_assert(sizeof(SetDifficultyPacket) == 0x38, "size of SetDifficultyPacket should be 56");
static_assert(sizeof(ChangeDimensionPacket) == 0x48, "size of ChangeDimensionPacket should be 72");
static_assert(sizeof(SetPlayerGameTypePacket) == 0x38, "size of SetPlayerGameTypePacket should be 56");
static_assert(sizeof(PlayerListPacket) == 0x50, "size of PlayerListPacket should be 80");
static_assert(sizeof(SimpleEventPacket) == 0x38, "size of SimpleEventPacket should be 56");
static_assert(sizeof(EventPacket) == 0x140, "size of EventPacket should be 320");
static_assert(sizeof(SpawnExperienceOrbPacket) == 0x40, "size of SpawnExperienceOrbPacket should be 64");
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xC8, "size of ClientboundMapItemDataPacket should be 200");
static_assert(sizeof(MapInfoRequestPacket) == 0x50, "size of MapInfoRequestPacket should be 80");
static_assert(sizeof(RequestChunkRadiusPacket) == 0x38, "size of RequestChunkRadiusPacket should be 56");
static_assert(sizeof(ChunkRadiusUpdatedPacket) == 0x38, "size of ChunkRadiusUpdatedPacket should be 56");
static_assert(sizeof(ItemFrameDropItemPacket) == 0x40, "size of ItemFrameDropItemPacket should be 64");
static_assert(sizeof(GameRulesChangedPacket) == 0x48, "size of GameRulesChangedPacket should be 72");
static_assert(sizeof(CameraPacket) == 0x40, "size of CameraPacket should be 64");
static_assert(sizeof(BossEventPacket) == 0x80, "size of BossEventPacket should be 128");
static_assert(sizeof(ShowCreditsPacket) == 0x40, "size of ShowCreditsPacket should be 64");
static_assert(sizeof(AvailableCommandsPacket) == 0xC0, "size of AvailableCommandsPacket should be 192");
static_assert(sizeof(CommandRequestPacket) == 0x98, "size of CommandRequestPacket should be 152");
static_assert(sizeof(CommandBlockUpdatePacket) == 0xB0, "size of CommandBlockUpdatePacket should be 176");
static_assert(sizeof(CommandOutputPacket) == 0xA0, "size of CommandOutputPacket should be 160");
static_assert(sizeof(UpdateTradePacket) == 0x90, "size of UpdateTradePacket should be 144");
static_assert(sizeof(UpdateEquipPacket) == 0x58, "size of UpdateEquipPacket should be 88");
static_assert(sizeof(ResourcePackDataInfoPacket) == 0x88, "size of ResourcePackDataInfoPacket should be 136");
static_assert(sizeof(ResourcePackChunkDataPacket) == 0x78, "size of ResourcePackChunkDataPacket should be 120");
static_assert(sizeof(ResourcePackChunkRequestPacket) == 0x58, "size of ResourcePackChunkRequestPacket should be 88");
static_assert(sizeof(TransferPacket) == 0x58, "size of TransferPacket should be 88");
static_assert(sizeof(PlaySoundPacket) == 0x68, "size of PlaySoundPacket should be 104");
static_assert(sizeof(StopSoundPacket) == 0x58, "size of StopSoundPacket should be 88");
static_assert(sizeof(SetTitlePacket) == 0xA8, "size of SetTitlePacket should be 168");
static_assert(sizeof(AddBehaviorTreePacket) == 0x50, "size of AddBehaviorTreePacket should be 80");
static_assert(sizeof(StructureBlockUpdatePacket) == 0xF8, "size of StructureBlockUpdatePacket should be 248");
static_assert(sizeof(ShowStoreOfferPacket) == 0x78, "size of ShowStoreOfferPacket should be 120");
static_assert(sizeof(PurchaseReceiptPacket) == 0x48, "size of PurchaseReceiptPacket should be 72");
static_assert(sizeof(PlayerSkinPacket) == 0x2D0, "size of PlayerSkinPacket should be 720");
static_assert(sizeof(SubClientLoginPacket) == 0x38, "size of SubClientLoginPacket should be 56");
static_assert(sizeof(AutomationClientConnectPacket) == 0x50, "size of AutomationClientConnectPacket should be 80");
static_assert(sizeof(SetLastHurtByPacket) == 0x38, "size of SetLastHurtByPacket should be 56");
static_assert(sizeof(BookEditPacket) == 0xA0, "size of BookEditPacket should be 160");
static_assert(sizeof(NpcRequestPacket) == 0x88, "size of NpcRequestPacket should be 136");
static_assert(sizeof(PhotoTransferPacket) == 0xC0, "size of PhotoTransferPacket should be 192");
static_assert(sizeof(ModalFormRequestPacket) == 0x58, "size of ModalFormRequestPacket should be 88");
static_assert(sizeof(ModalFormResponsePacket) == 0x58, "size of ModalFormResponsePacket should be 88");
static_assert(sizeof(ServerSettingsRequestPacket) == 0x30, "size of ServerSettingsRequestPacket should be 48");
static_assert(sizeof(ServerSettingsResponsePacket) == 0x58, "size of ServerSettingsResponsePacket should be 88");
static_assert(sizeof(ShowProfilePacket) == 0x50, "size of ShowProfilePacket should be 80");
static_assert(sizeof(SetDefaultGameTypePacket) == 0x38, "size of SetDefaultGameTypePacket should be 56");
static_assert(sizeof(RemoveObjectivePacket) == 0x50, "size of RemoveObjectivePacket should be 80");
static_assert(sizeof(SetDisplayObjectivePacket) == 0xB8, "size of SetDisplayObjectivePacket should be 184");
static_assert(sizeof(SetScorePacket) == 0x50, "size of SetScorePacket should be 80");
static_assert(sizeof(LabTablePacket) == 0x48, "size of LabTablePacket should be 72");
static_assert(sizeof(UpdateBlockSyncedPacket) == 0x58, "size of UpdateBlockSyncedPacket should be 88");
static_assert(sizeof(MoveActorDeltaPacket) == 0x70, "size of MoveActorDeltaPacket should be 112");
static_assert(sizeof(SetScoreboardIdentityPacket) == 0x50, "size of SetScoreboardIdentityPacket should be 80");
static_assert(sizeof(SetLocalPlayerAsInitializedPacket) == 0x38, "size of SetLocalPlayerAsInitializedPacket should be 56");
static_assert(sizeof(UpdateSoftEnumPacket) == 0x70, "size of UpdateSoftEnumPacket should be 112");
static_assert(sizeof(NetworkStackLatencyPacket) == 0x40, "size of NetworkStackLatencyPacket should be 64");
static_assert(sizeof(ScriptCustomEventPacket) == 0x60, "size of ScriptCustomEventPacket should be 96");
static_assert(sizeof(SpawnParticleEffectPacket) == 0xB0, "size of SpawnParticleEffectPacket should be 176");
static_assert(sizeof(AvailableActorIdentifiersPacket) == 0x48, "size of AvailableActorIdentifiersPacket should be 72");
static_assert(sizeof(LevelSoundEventPacketV2) == 0x70, "size of LevelSoundEventPacketV2 should be 112");
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x58, "size of NetworkChunkPublisherUpdatePacket should be 88");
static_assert(sizeof(BiomeDefinitionListPacket) == 0x48, "size of BiomeDefinitionListPacket should be 72");
static_assert(sizeof(LevelSoundEventPacket) == 0x70, "size of LevelSoundEventPacket should be 112");
static_assert(sizeof(LevelEventGenericPacket) == 0x40, "size of LevelEventGenericPacket should be 64");
static_assert(sizeof(LecternUpdatePacket) == 0x48, "size of LecternUpdatePacket should be 72");
static_assert(sizeof(AddEntityPacket) == 0x38, "size of AddEntityPacket should be 56");
static_assert(sizeof(RemoveEntityPacket) == 0x38, "size of RemoveEntityPacket should be 56");
static_assert(sizeof(ClientCacheStatusPacket) == 0x38, "size of ClientCacheStatusPacket should be 56");
static_assert(sizeof(OnScreenTextureAnimationPacket) == 0x38, "size of OnScreenTextureAnimationPacket should be 56");
static_assert(sizeof(MapCreateLockedCopyPacket) == 0x40, "size of MapCreateLockedCopyPacket should be 64");
static_assert(sizeof(StructureTemplateDataRequestPacket) == 0xD0, "size of StructureTemplateDataRequestPacket should be 208");
static_assert(sizeof(StructureTemplateDataResponsePacket) == 0x60, "size of StructureTemplateDataResponsePacket should be 96");
static_assert(sizeof(ClientCacheBlobStatusPacket) == 0x60, "size of ClientCacheBlobStatusPacket should be 96");
static_assert(sizeof(ClientCacheMissResponsePacket) == 0x88, "size of ClientCacheMissResponsePacket should be 136");
static_assert(sizeof(EducationSettingsPacket) == 0x178, "size of EducationSettingsPacket should be 376");
static_assert(sizeof(EmotePacket) == 0x60, "size of EmotePacket should be 96");
static_assert(sizeof(MultiplayerSettingsPacket) == 0x38, "size of MultiplayerSettingsPacket should be 56");
static_assert(sizeof(SettingsCommandPacket) == 0x58, "size of SettingsCommandPacket should be 88");
static_assert(sizeof(AnvilDamagePacket) == 0x40, "size of AnvilDamagePacket should be 64");
static_assert(sizeof(CompletedUsingItemPacket) == 0x38, "size of CompletedUsingItemPacket should be 56");
static_assert(sizeof(NetworkSettingsPacket) == 0x48, "size of NetworkSettingsPacket should be 72");
static_assert(sizeof(PlayerAuthInputPacket) == 0xB0, "size of PlayerAuthInputPacket should be 176");
static_assert(sizeof(CreativeContentPacket) == 0x50, "size of CreativeContentPacket should be 80");
static_assert(sizeof(PlayerEnchantOptionsPacket) == 0x48, "size of PlayerEnchantOptionsPacket should be 72");
static_assert(sizeof(ItemStackRequestPacket) == 0x38, "size of ItemStackRequestPacket should be 56");
static_assert(sizeof(ItemStackResponsePacket) == 0x48, "size of ItemStackResponsePacket should be 72");
static_assert(sizeof(PlayerArmorDamagePacket) == 0x40, "size of PlayerArmorDamagePacket should be 64");
static_assert(sizeof(CodeBuilderPacket) == 0x58, "size of CodeBuilderPacket should be 88");
static_assert(sizeof(UpdatePlayerGameTypePacket) == 0x40, "size of UpdatePlayerGameTypePacket should be 64");
static_assert(sizeof(EmoteListPacket) == 0x50, "size of EmoteListPacket should be 80");
static_assert(sizeof(PositionTrackingDBServerBroadcastPacket) == 0x50, "size of PositionTrackingDBServerBroadcastPacket should be 80");
static_assert(sizeof(PositionTrackingDBClientRequestPacket) == 0x38, "size of PositionTrackingDBClientRequestPacket should be 56");
static_assert(sizeof(DebugInfoPacket) == 0x58, "size of DebugInfoPacket should be 88");
static_assert(sizeof(PacketViolationWarningPacket) == 0x60, "size of PacketViolationWarningPacket should be 96");
static_assert(sizeof(MotionPredictionHintsPacket) == 0x48, "size of MotionPredictionHintsPacket should be 72");
static_assert(sizeof(AnimateEntityPacket) == 0xD8, "size of AnimateEntityPacket should be 216");
static_assert(sizeof(CameraShakePacket) == 0x40, "size of CameraShakePacket should be 64");
static_assert(sizeof(PlayerFogPacket) == 0x48, "size of PlayerFogPacket should be 72");
static_assert(sizeof(CorrectPlayerMovePredictionPacket) == 0x58, "size of CorrectPlayerMovePredictionPacket should be 88");
static_assert(sizeof(ItemComponentPacket) == 0x48, "size of ItemComponentPacket should be 72");
static_assert(sizeof(FilterTextPacket) == 0x58, "size of FilterTextPacket should be 88");
static_assert(sizeof(ClientboundDebugRendererPacket) == 0x88, "size of ClientboundDebugRendererPacket should be 136");
static_assert(sizeof(SyncActorPropertyPacket) == 0x48, "size of SyncActorPropertyPacket should be 72");
static_assert(sizeof(AddVolumeEntityPacket) == 0x120, "size of AddVolumeEntityPacket should be 288");
static_assert(sizeof(RemoveVolumeEntityPacket) == 0x40, "size of RemoveVolumeEntityPacket should be 64");
static_assert(sizeof(SimulationTypePacket) == 0x38, "size of SimulationTypePacket should be 56");
static_assert(sizeof(NpcDialoguePacket) == 0xC0, "size of NpcDialoguePacket should be 192");
static_assert(sizeof(EduUriResourcePacket) == 0x70, "size of EduUriResourcePacket should be 112");
static_assert(sizeof(CreatePhotoPacket) == 0x78, "size of CreatePhotoPacket should be 120");
static_assert(sizeof(UpdateSubChunkBlocksPacket) == 0x70, "size of UpdateSubChunkBlocksPacket should be 112");
static_assert(sizeof(SubChunkPacket) == 0x60, "size of SubChunkPacket should be 96");
static_assert(sizeof(SubChunkRequestPacket) == 0x80, "size of SubChunkRequestPacket should be 128");
static_assert(sizeof(PlayerStartItemCooldownPacket) == 0x58, "size of PlayerStartItemCooldownPacket should be 88");
static_assert(sizeof(ScriptMessagePacket) == 0x70, "size of ScriptMessagePacket should be 112");
static_assert(sizeof(CodeBuilderSourcePacket) == 0x58, "size of CodeBuilderSourcePacket should be 88");
static_assert(sizeof(TickingAreasLoadStatusPacket) == 0x38, "size of TickingAreasLoadStatusPacket should be 56");
static_assert(sizeof(DimensionDataPacket) == 0x40, "size of DimensionDataPacket should be 64");
static_assert(sizeof(AgentActionEventPacket) == 0x68, "size of AgentActionEventPacket should be 104");
static_assert(sizeof(ChangeMobPropertyPacket) == 0x88, "size of ChangeMobPropertyPacket should be 136");
static_assert(sizeof(LessonProgressPacket) == 0x58, "size of LessonProgressPacket should be 88");
static_assert(sizeof(RequestAbilityPacket) == 0x40, "size of RequestAbilityPacket should be 64");
static_assert(sizeof(RequestPermissionsPacket) == 0x40, "size of RequestPermissionsPacket should be 64");
static_assert(sizeof(ToastRequestPacket) == 0x70, "size of ToastRequestPacket should be 112");
static_assert(sizeof(UpdateAbilitiesPacket) == 0x58, "size of UpdateAbilitiesPacket should be 88");
static_assert(sizeof(UpdateAdventureSettingsPacket) == 0x38, "size of UpdateAdventureSettingsPacket should be 56");
static_assert(sizeof(DeathInfoPacket) == 0x68, "size of DeathInfoPacket should be 104");
static_assert(sizeof(EditorNetworkPacket) == 0x48, "size of EditorNetworkPacket should be 72");
static_assert(sizeof(FeatureRegistryPacket) == 0x48, "size of FeatureRegistryPacket should be 72");
static_assert(sizeof(ServerStatsPacket) == 0x38, "size of ServerStatsPacket should be 56");
static_assert(sizeof(RequestNetworkSettingsPacket) == 0x38, "size of RequestNetworkSettingsPacket should be 56");
static_assert(sizeof(GameTestRequestPacket) == 0x90, "size of GameTestRequestPacket should be 144");
static_assert(sizeof(GameTestResultsPacket) == 0x78, "size of GameTestResultsPacket should be 120");
static_assert(sizeof(UpdateClientInputLocksPacket) == 0x40, "size of UpdateClientInputLocksPacket should be 64");
static_assert(sizeof(ClientCheatAbilityPacket) == 0x58, "size of ClientCheatAbilityPacket should be 88");

#endif // SIZE_STATIC_ASSERT

#ifdef SIZE_STATIC_ASSERT_IF_DEFINE

static_assert(sizeof(LoginPacket) == 0x40 || sizeof(LoginPacket) == 48, "size of LoginPacket should be 64 or 48(default)");
static_assert(sizeof(PlayStatusPacket) == 0x38 || sizeof(PlayStatusPacket) == 48, "size of PlayStatusPacket should be 56 or 48(default)");
static_assert(sizeof(ServerToClientHandshakePacket) == 0x50 || sizeof(ServerToClientHandshakePacket) == 48, "size of ServerToClientHandshakePacket should be 80 or 48(default)");
static_assert(sizeof(ClientToServerHandshakePacket) == 0x30 || sizeof(ClientToServerHandshakePacket) == 48, "size of ClientToServerHandshakePacket should be 48 or 48(default)");
static_assert(sizeof(DisconnectPacket) == 0x58 || sizeof(DisconnectPacket) == 48, "size of DisconnectPacket should be 88 or 48(default)");
static_assert(sizeof(ResourcePacksInfoPacket) == 0x68 || sizeof(ResourcePacksInfoPacket) == 48, "size of ResourcePacksInfoPacket should be 104 or 48(default)");
static_assert(sizeof(ResourcePackStackPacket) == 0x128 || sizeof(ResourcePackStackPacket) == 48, "size of ResourcePackStackPacket should be 296 or 48(default)");
static_assert(sizeof(ResourcePackClientResponsePacket) == 0x48 || sizeof(ResourcePackClientResponsePacket) == 48, "size of ResourcePackClientResponsePacket should be 72 or 48(default)");
static_assert(sizeof(TextPacket) == 0xD8 || sizeof(TextPacket) == 48, "size of TextPacket should be 216 or 48(default)");
static_assert(sizeof(SetTimePacket) == 0x38 || sizeof(SetTimePacket) == 48, "size of SetTimePacket should be 56 or 48(default)");
static_assert(sizeof(StartGamePacket) == 0x520 || sizeof(StartGamePacket) == 48, "size of StartGamePacket should be 1312 or 48(default)");
static_assert(sizeof(AddPlayerPacket) == 0x5E8 || sizeof(AddPlayerPacket) == 48, "size of AddPlayerPacket should be 1512 or 48(default)");
static_assert(sizeof(AddActorPacket) == 0x1B0 || sizeof(AddActorPacket) == 48, "size of AddActorPacket should be 432 or 48(default)");
static_assert(sizeof(RemoveActorPacket) == 0x38 || sizeof(RemoveActorPacket) == 48, "size of RemoveActorPacket should be 56 or 48(default)");
static_assert(sizeof(AddItemActorPacket) == 0xE0 || sizeof(AddItemActorPacket) == 48, "size of AddItemActorPacket should be 224 or 48(default)");
static_assert(sizeof(TakeItemActorPacket) == 0x40 || sizeof(TakeItemActorPacket) == 48, "size of TakeItemActorPacket should be 64 or 48(default)");
static_assert(sizeof(MoveActorAbsolutePacket) == 0x50 || sizeof(MoveActorAbsolutePacket) == 48, "size of MoveActorAbsolutePacket should be 80 or 48(default)");
static_assert(sizeof(MovePlayerPacket) == 0x70 || sizeof(MovePlayerPacket) == 48, "size of MovePlayerPacket should be 112 or 48(default)");
static_assert(sizeof(PassengerJumpPacket) == 0x38 || sizeof(PassengerJumpPacket) == 48, "size of PassengerJumpPacket should be 56 or 48(default)");
static_assert(sizeof(UpdateBlockPacket) == 0x48 || sizeof(UpdateBlockPacket) == 48, "size of UpdateBlockPacket should be 72 or 48(default)");
static_assert(sizeof(AddPaintingPacket) == 0x70 || sizeof(AddPaintingPacket) == 48, "size of AddPaintingPacket should be 112 or 48(default)");
static_assert(sizeof(TickSyncPacket) == 0x40 || sizeof(TickSyncPacket) == 48, "size of TickSyncPacket should be 64 or 48(default)");
static_assert(sizeof(LevelSoundEventPacketV1) == 0x50 || sizeof(LevelSoundEventPacketV1) == 48, "size of LevelSoundEventPacketV1 should be 80 or 48(default)");
static_assert(sizeof(LevelEventPacket) == 0x48 || sizeof(LevelEventPacket) == 48, "size of LevelEventPacket should be 72 or 48(default)");
static_assert(sizeof(BlockEventPacket) == 0x48 || sizeof(BlockEventPacket) == 48, "size of BlockEventPacket should be 72 or 48(default)");
static_assert(sizeof(ActorEventPacket) == 0x40 || sizeof(ActorEventPacket) == 48, "size of ActorEventPacket should be 64 or 48(default)");
static_assert(sizeof(MobEffectPacket) == 0x50 || sizeof(MobEffectPacket) == 48, "size of MobEffectPacket should be 80 or 48(default)");
static_assert(sizeof(UpdateAttributesPacket) == 0x58 || sizeof(UpdateAttributesPacket) == 48, "size of UpdateAttributesPacket should be 88 or 48(default)");
static_assert(sizeof(InventoryTransactionPacket) == 0x68 || sizeof(InventoryTransactionPacket) == 48, "size of InventoryTransactionPacket should be 104 or 48(default)");
static_assert(sizeof(MobEquipmentPacket) == 0xA8 || sizeof(MobEquipmentPacket) == 48, "size of MobEquipmentPacket should be 168 or 48(default)");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x1B8 || sizeof(MobArmorEquipmentPacket) == 48, "size of MobArmorEquipmentPacket should be 440 or 48(default)");
static_assert(sizeof(InteractPacket) == 0x50 || sizeof(InteractPacket) == 48, "size of InteractPacket should be 80 or 48(default)");
static_assert(sizeof(BlockPickRequestPacket) == 0x40 || sizeof(BlockPickRequestPacket) == 48, "size of BlockPickRequestPacket should be 64 or 48(default)");
static_assert(sizeof(ActorPickRequestPacket) == 0x40 || sizeof(ActorPickRequestPacket) == 48, "size of ActorPickRequestPacket should be 64 or 48(default)");
static_assert(sizeof(PlayerActionPacket) == 0x58 || sizeof(PlayerActionPacket) == 48, "size of PlayerActionPacket should be 88 or 48(default)");
static_assert(sizeof(HurtArmorPacket) == 0x40 || sizeof(HurtArmorPacket) == 48, "size of HurtArmorPacket should be 64 or 48(default)");
static_assert(sizeof(SetActorDataPacket) == 0x88 || sizeof(SetActorDataPacket) == 48, "size of SetActorDataPacket should be 136 or 48(default)");
static_assert(sizeof(SetActorMotionPacket) == 0x48 || sizeof(SetActorMotionPacket) == 48, "size of SetActorMotionPacket should be 72 or 48(default)");
static_assert(sizeof(SetActorLinkPacket) == 0x50 || sizeof(SetActorLinkPacket) == 48, "size of SetActorLinkPacket should be 80 or 48(default)");
static_assert(sizeof(SetHealthPacket) == 0x38 || sizeof(SetHealthPacket) == 48, "size of SetHealthPacket should be 56 or 48(default)");
static_assert(sizeof(SetSpawnPositionPacket) == 0x50 || sizeof(SetSpawnPositionPacket) == 48, "size of SetSpawnPositionPacket should be 80 or 48(default)");
static_assert(sizeof(AnimatePacket) == 0x40 || sizeof(AnimatePacket) == 48, "size of AnimatePacket should be 64 or 48(default)");
static_assert(sizeof(RespawnPacket) == 0x48 || sizeof(RespawnPacket) == 48, "size of RespawnPacket should be 72 or 48(default)");
static_assert(sizeof(ContainerOpenPacket) == 0x48 || sizeof(ContainerOpenPacket) == 48, "size of ContainerOpenPacket should be 72 or 48(default)");
static_assert(sizeof(ContainerClosePacket) == 0x38 || sizeof(ContainerClosePacket) == 48, "size of ContainerClosePacket should be 56 or 48(default)");
static_assert(sizeof(PlayerHotbarPacket) == 0x38 || sizeof(PlayerHotbarPacket) == 48, "size of PlayerHotbarPacket should be 56 or 48(default)");
static_assert(sizeof(InventoryContentPacket) == 0x50 || sizeof(InventoryContentPacket) == 48, "size of InventoryContentPacket should be 80 or 48(default)");
static_assert(sizeof(InventorySlotPacket) == 0x98 || sizeof(InventorySlotPacket) == 48, "size of InventorySlotPacket should be 152 or 48(default)");
static_assert(sizeof(ContainerSetDataPacket) == 0x40 || sizeof(ContainerSetDataPacket) == 48, "size of ContainerSetDataPacket should be 64 or 48(default)");
static_assert(sizeof(CraftingDataPacket) == 0x98 || sizeof(CraftingDataPacket) == 48, "size of CraftingDataPacket should be 152 or 48(default)");
static_assert(sizeof(CraftingEventPacket) == 0x78 || sizeof(CraftingEventPacket) == 48, "size of CraftingEventPacket should be 120 or 48(default)");
static_assert(sizeof(GuiDataPickItemPacket) == 0x78 || sizeof(GuiDataPickItemPacket) == 48, "size of GuiDataPickItemPacket should be 120 or 48(default)");
static_assert(sizeof(BlockActorDataPacket) == 0x58 || sizeof(BlockActorDataPacket) == 48, "size of BlockActorDataPacket should be 88 or 48(default)");
static_assert(sizeof(PlayerInputPacket) == 0x40 || sizeof(PlayerInputPacket) == 48, "size of PlayerInputPacket should be 64 or 48(default)");
static_assert(sizeof(LevelChunkPacket) == 0x88 || sizeof(LevelChunkPacket) == 48, "size of LevelChunkPacket should be 136 or 48(default)");
static_assert(sizeof(SetCommandsEnabledPacket) == 0x38 || sizeof(SetCommandsEnabledPacket) == 48, "size of SetCommandsEnabledPacket should be 56 or 48(default)");
static_assert(sizeof(SetDifficultyPacket) == 0x38 || sizeof(SetDifficultyPacket) == 48, "size of SetDifficultyPacket should be 56 or 48(default)");
static_assert(sizeof(ChangeDimensionPacket) == 0x48 || sizeof(ChangeDimensionPacket) == 48, "size of ChangeDimensionPacket should be 72 or 48(default)");
static_assert(sizeof(SetPlayerGameTypePacket) == 0x38 || sizeof(SetPlayerGameTypePacket) == 48, "size of SetPlayerGameTypePacket should be 56 or 48(default)");
static_assert(sizeof(PlayerListPacket) == 0x50 || sizeof(PlayerListPacket) == 48, "size of PlayerListPacket should be 80 or 48(default)");
static_assert(sizeof(SimpleEventPacket) == 0x38 || sizeof(SimpleEventPacket) == 48, "size of SimpleEventPacket should be 56 or 48(default)");
static_assert(sizeof(EventPacket) == 0x140 || sizeof(EventPacket) == 48, "size of EventPacket should be 320 or 48(default)");
static_assert(sizeof(SpawnExperienceOrbPacket) == 0x40 || sizeof(SpawnExperienceOrbPacket) == 48, "size of SpawnExperienceOrbPacket should be 64 or 48(default)");
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xC8 || sizeof(ClientboundMapItemDataPacket) == 48, "size of ClientboundMapItemDataPacket should be 200 or 48(default)");
static_assert(sizeof(MapInfoRequestPacket) == 0x50 || sizeof(MapInfoRequestPacket) == 48, "size of MapInfoRequestPacket should be 80 or 48(default)");
static_assert(sizeof(RequestChunkRadiusPacket) == 0x38 || sizeof(RequestChunkRadiusPacket) == 48, "size of RequestChunkRadiusPacket should be 56 or 48(default)");
static_assert(sizeof(ChunkRadiusUpdatedPacket) == 0x38 || sizeof(ChunkRadiusUpdatedPacket) == 48, "size of ChunkRadiusUpdatedPacket should be 56 or 48(default)");
static_assert(sizeof(ItemFrameDropItemPacket) == 0x40 || sizeof(ItemFrameDropItemPacket) == 48, "size of ItemFrameDropItemPacket should be 64 or 48(default)");
static_assert(sizeof(GameRulesChangedPacket) == 0x48 || sizeof(GameRulesChangedPacket) == 48, "size of GameRulesChangedPacket should be 72 or 48(default)");
static_assert(sizeof(CameraPacket) == 0x40 || sizeof(CameraPacket) == 48, "size of CameraPacket should be 64 or 48(default)");
static_assert(sizeof(BossEventPacket) == 0x80 || sizeof(BossEventPacket) == 48, "size of BossEventPacket should be 128 or 48(default)");
static_assert(sizeof(ShowCreditsPacket) == 0x40 || sizeof(ShowCreditsPacket) == 48, "size of ShowCreditsPacket should be 64 or 48(default)");
static_assert(sizeof(AvailableCommandsPacket) == 0xC0 || sizeof(AvailableCommandsPacket) == 48, "size of AvailableCommandsPacket should be 192 or 48(default)");
static_assert(sizeof(CommandRequestPacket) == 0x98 || sizeof(CommandRequestPacket) == 48, "size of CommandRequestPacket should be 152 or 48(default)");
static_assert(sizeof(CommandBlockUpdatePacket) == 0xB0 || sizeof(CommandBlockUpdatePacket) == 48, "size of CommandBlockUpdatePacket should be 176 or 48(default)");
static_assert(sizeof(CommandOutputPacket) == 0xA0 || sizeof(CommandOutputPacket) == 48, "size of CommandOutputPacket should be 160 or 48(default)");
static_assert(sizeof(UpdateTradePacket) == 0x90 || sizeof(UpdateTradePacket) == 48, "size of UpdateTradePacket should be 144 or 48(default)");
static_assert(sizeof(UpdateEquipPacket) == 0x58 || sizeof(UpdateEquipPacket) == 48, "size of UpdateEquipPacket should be 88 or 48(default)");
static_assert(sizeof(ResourcePackDataInfoPacket) == 0x88 || sizeof(ResourcePackDataInfoPacket) == 48, "size of ResourcePackDataInfoPacket should be 136 or 48(default)");
static_assert(sizeof(ResourcePackChunkDataPacket) == 0x78 || sizeof(ResourcePackChunkDataPacket) == 48, "size of ResourcePackChunkDataPacket should be 120 or 48(default)");
static_assert(sizeof(ResourcePackChunkRequestPacket) == 0x58 || sizeof(ResourcePackChunkRequestPacket) == 48, "size of ResourcePackChunkRequestPacket should be 88 or 48(default)");
static_assert(sizeof(TransferPacket) == 0x58 || sizeof(TransferPacket) == 48, "size of TransferPacket should be 88 or 48(default)");
static_assert(sizeof(PlaySoundPacket) == 0x68 || sizeof(PlaySoundPacket) == 48, "size of PlaySoundPacket should be 104 or 48(default)");
static_assert(sizeof(StopSoundPacket) == 0x58 || sizeof(StopSoundPacket) == 48, "size of StopSoundPacket should be 88 or 48(default)");
static_assert(sizeof(SetTitlePacket) == 0xA8 || sizeof(SetTitlePacket) == 48, "size of SetTitlePacket should be 168 or 48(default)");
static_assert(sizeof(AddBehaviorTreePacket) == 0x50 || sizeof(AddBehaviorTreePacket) == 48, "size of AddBehaviorTreePacket should be 80 or 48(default)");
static_assert(sizeof(StructureBlockUpdatePacket) == 0xF8 || sizeof(StructureBlockUpdatePacket) == 48, "size of StructureBlockUpdatePacket should be 248 or 48(default)");
static_assert(sizeof(ShowStoreOfferPacket) == 0x78 || sizeof(ShowStoreOfferPacket) == 48, "size of ShowStoreOfferPacket should be 120 or 48(default)");
static_assert(sizeof(PurchaseReceiptPacket) == 0x48 || sizeof(PurchaseReceiptPacket) == 48, "size of PurchaseReceiptPacket should be 72 or 48(default)");
static_assert(sizeof(PlayerSkinPacket) == 0x2D0 || sizeof(PlayerSkinPacket) == 48, "size of PlayerSkinPacket should be 720 or 48(default)");
static_assert(sizeof(SubClientLoginPacket) == 0x38 || sizeof(SubClientLoginPacket) == 48, "size of SubClientLoginPacket should be 56 or 48(default)");
static_assert(sizeof(AutomationClientConnectPacket) == 0x50 || sizeof(AutomationClientConnectPacket) == 48, "size of AutomationClientConnectPacket should be 80 or 48(default)");
static_assert(sizeof(SetLastHurtByPacket) == 0x38 || sizeof(SetLastHurtByPacket) == 48, "size of SetLastHurtByPacket should be 56 or 48(default)");
static_assert(sizeof(BookEditPacket) == 0xA0 || sizeof(BookEditPacket) == 48, "size of BookEditPacket should be 160 or 48(default)");
static_assert(sizeof(NpcRequestPacket) == 0x88 || sizeof(NpcRequestPacket) == 48, "size of NpcRequestPacket should be 136 or 48(default)");
static_assert(sizeof(PhotoTransferPacket) == 0xC0 || sizeof(PhotoTransferPacket) == 48, "size of PhotoTransferPacket should be 192 or 48(default)");
static_assert(sizeof(ModalFormRequestPacket) == 0x58 || sizeof(ModalFormRequestPacket) == 48, "size of ModalFormRequestPacket should be 88 or 48(default)");
static_assert(sizeof(ModalFormResponsePacket) == 0x58 || sizeof(ModalFormResponsePacket) == 48, "size of ModalFormResponsePacket should be 88 or 48(default)");
static_assert(sizeof(ServerSettingsRequestPacket) == 0x30 || sizeof(ServerSettingsRequestPacket) == 48, "size of ServerSettingsRequestPacket should be 48 or 48(default)");
static_assert(sizeof(ServerSettingsResponsePacket) == 0x58 || sizeof(ServerSettingsResponsePacket) == 48, "size of ServerSettingsResponsePacket should be 88 or 48(default)");
static_assert(sizeof(ShowProfilePacket) == 0x50 || sizeof(ShowProfilePacket) == 48, "size of ShowProfilePacket should be 80 or 48(default)");
static_assert(sizeof(SetDefaultGameTypePacket) == 0x38 || sizeof(SetDefaultGameTypePacket) == 48, "size of SetDefaultGameTypePacket should be 56 or 48(default)");
static_assert(sizeof(RemoveObjectivePacket) == 0x50 || sizeof(RemoveObjectivePacket) == 48, "size of RemoveObjectivePacket should be 80 or 48(default)");
static_assert(sizeof(SetDisplayObjectivePacket) == 0xB8 || sizeof(SetDisplayObjectivePacket) == 48, "size of SetDisplayObjectivePacket should be 184 or 48(default)");
static_assert(sizeof(SetScorePacket) == 0x50 || sizeof(SetScorePacket) == 48, "size of SetScorePacket should be 80 or 48(default)");
static_assert(sizeof(LabTablePacket) == 0x48 || sizeof(LabTablePacket) == 48, "size of LabTablePacket should be 72 or 48(default)");
static_assert(sizeof(UpdateBlockSyncedPacket) == 0x58 || sizeof(UpdateBlockSyncedPacket) == 48, "size of UpdateBlockSyncedPacket should be 88 or 48(default)");
static_assert(sizeof(MoveActorDeltaPacket) == 0x70 || sizeof(MoveActorDeltaPacket) == 48, "size of MoveActorDeltaPacket should be 112 or 48(default)");
static_assert(sizeof(SetScoreboardIdentityPacket) == 0x50 || sizeof(SetScoreboardIdentityPacket) == 48, "size of SetScoreboardIdentityPacket should be 80 or 48(default)");
static_assert(sizeof(SetLocalPlayerAsInitializedPacket) == 0x38 || sizeof(SetLocalPlayerAsInitializedPacket) == 48, "size of SetLocalPlayerAsInitializedPacket should be 56 or 48(default)");
static_assert(sizeof(UpdateSoftEnumPacket) == 0x70 || sizeof(UpdateSoftEnumPacket) == 48, "size of UpdateSoftEnumPacket should be 112 or 48(default)");
static_assert(sizeof(NetworkStackLatencyPacket) == 0x40 || sizeof(NetworkStackLatencyPacket) == 48, "size of NetworkStackLatencyPacket should be 64 or 48(default)");
static_assert(sizeof(ScriptCustomEventPacket) == 0x60 || sizeof(ScriptCustomEventPacket) == 48, "size of ScriptCustomEventPacket should be 96 or 48(default)");
static_assert(sizeof(SpawnParticleEffectPacket) == 0xB0 || sizeof(SpawnParticleEffectPacket) == 48, "size of SpawnParticleEffectPacket should be 176 or 48(default)");
static_assert(sizeof(AvailableActorIdentifiersPacket) == 0x48 || sizeof(AvailableActorIdentifiersPacket) == 48, "size of AvailableActorIdentifiersPacket should be 72 or 48(default)");
static_assert(sizeof(LevelSoundEventPacketV2) == 0x70 || sizeof(LevelSoundEventPacketV2) == 48, "size of LevelSoundEventPacketV2 should be 112 or 48(default)");
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x58 || sizeof(NetworkChunkPublisherUpdatePacket) == 48, "size of NetworkChunkPublisherUpdatePacket should be 88 or 48(default)");
static_assert(sizeof(BiomeDefinitionListPacket) == 0x48 || sizeof(BiomeDefinitionListPacket) == 48, "size of BiomeDefinitionListPacket should be 72 or 48(default)");
static_assert(sizeof(LevelSoundEventPacket) == 0x70 || sizeof(LevelSoundEventPacket) == 48, "size of LevelSoundEventPacket should be 112 or 48(default)");
static_assert(sizeof(LevelEventGenericPacket) == 0x40 || sizeof(LevelEventGenericPacket) == 48, "size of LevelEventGenericPacket should be 64 or 48(default)");
static_assert(sizeof(LecternUpdatePacket) == 0x48 || sizeof(LecternUpdatePacket) == 48, "size of LecternUpdatePacket should be 72 or 48(default)");
static_assert(sizeof(AddEntityPacket) == 0x38 || sizeof(AddEntityPacket) == 48, "size of AddEntityPacket should be 56 or 48(default)");
static_assert(sizeof(RemoveEntityPacket) == 0x38 || sizeof(RemoveEntityPacket) == 48, "size of RemoveEntityPacket should be 56 or 48(default)");
static_assert(sizeof(ClientCacheStatusPacket) == 0x38 || sizeof(ClientCacheStatusPacket) == 48, "size of ClientCacheStatusPacket should be 56 or 48(default)");
static_assert(sizeof(OnScreenTextureAnimationPacket) == 0x38 || sizeof(OnScreenTextureAnimationPacket) == 48, "size of OnScreenTextureAnimationPacket should be 56 or 48(default)");
static_assert(sizeof(MapCreateLockedCopyPacket) == 0x40 || sizeof(MapCreateLockedCopyPacket) == 48, "size of MapCreateLockedCopyPacket should be 64 or 48(default)");
static_assert(sizeof(StructureTemplateDataRequestPacket) == 0xD0 || sizeof(StructureTemplateDataRequestPacket) == 48, "size of StructureTemplateDataRequestPacket should be 208 or 48(default)");
static_assert(sizeof(StructureTemplateDataResponsePacket) == 0x60 || sizeof(StructureTemplateDataResponsePacket) == 48, "size of StructureTemplateDataResponsePacket should be 96 or 48(default)");
static_assert(sizeof(ClientCacheBlobStatusPacket) == 0x60 || sizeof(ClientCacheBlobStatusPacket) == 48, "size of ClientCacheBlobStatusPacket should be 96 or 48(default)");
static_assert(sizeof(ClientCacheMissResponsePacket) == 0x88 || sizeof(ClientCacheMissResponsePacket) == 48, "size of ClientCacheMissResponsePacket should be 136 or 48(default)");
static_assert(sizeof(EducationSettingsPacket) == 0x178 || sizeof(EducationSettingsPacket) == 48, "size of EducationSettingsPacket should be 376 or 48(default)");
static_assert(sizeof(EmotePacket) == 0x60 || sizeof(EmotePacket) == 48, "size of EmotePacket should be 96 or 48(default)");
static_assert(sizeof(MultiplayerSettingsPacket) == 0x38 || sizeof(MultiplayerSettingsPacket) == 48, "size of MultiplayerSettingsPacket should be 56 or 48(default)");
static_assert(sizeof(SettingsCommandPacket) == 0x58 || sizeof(SettingsCommandPacket) == 48, "size of SettingsCommandPacket should be 88 or 48(default)");
static_assert(sizeof(AnvilDamagePacket) == 0x40 || sizeof(AnvilDamagePacket) == 48, "size of AnvilDamagePacket should be 64 or 48(default)");
static_assert(sizeof(CompletedUsingItemPacket) == 0x38 || sizeof(CompletedUsingItemPacket) == 48, "size of CompletedUsingItemPacket should be 56 or 48(default)");
static_assert(sizeof(NetworkSettingsPacket) == 0x48 || sizeof(NetworkSettingsPacket) == 48, "size of NetworkSettingsPacket should be 72 or 48(default)");
static_assert(sizeof(PlayerAuthInputPacket) == 0xB0 || sizeof(PlayerAuthInputPacket) == 48, "size of PlayerAuthInputPacket should be 176 or 48(default)");
static_assert(sizeof(CreativeContentPacket) == 0x50 || sizeof(CreativeContentPacket) == 48, "size of CreativeContentPacket should be 80 or 48(default)");
static_assert(sizeof(PlayerEnchantOptionsPacket) == 0x48 || sizeof(PlayerEnchantOptionsPacket) == 48, "size of PlayerEnchantOptionsPacket should be 72 or 48(default)");
static_assert(sizeof(ItemStackRequestPacket) == 0x38 || sizeof(ItemStackRequestPacket) == 48, "size of ItemStackRequestPacket should be 56 or 48(default)");
static_assert(sizeof(ItemStackResponsePacket) == 0x48 || sizeof(ItemStackResponsePacket) == 48, "size of ItemStackResponsePacket should be 72 or 48(default)");
static_assert(sizeof(PlayerArmorDamagePacket) == 0x40 || sizeof(PlayerArmorDamagePacket) == 48, "size of PlayerArmorDamagePacket should be 64 or 48(default)");
static_assert(sizeof(CodeBuilderPacket) == 0x58 || sizeof(CodeBuilderPacket) == 48, "size of CodeBuilderPacket should be 88 or 48(default)");
static_assert(sizeof(UpdatePlayerGameTypePacket) == 0x40 || sizeof(UpdatePlayerGameTypePacket) == 48, "size of UpdatePlayerGameTypePacket should be 64 or 48(default)");
static_assert(sizeof(EmoteListPacket) == 0x50 || sizeof(EmoteListPacket) == 48, "size of EmoteListPacket should be 80 or 48(default)");
static_assert(sizeof(PositionTrackingDBServerBroadcastPacket) == 0x50 || sizeof(PositionTrackingDBServerBroadcastPacket) == 48, "size of PositionTrackingDBServerBroadcastPacket should be 80 or 48(default)");
static_assert(sizeof(PositionTrackingDBClientRequestPacket) == 0x38 || sizeof(PositionTrackingDBClientRequestPacket) == 48, "size of PositionTrackingDBClientRequestPacket should be 56 or 48(default)");
static_assert(sizeof(DebugInfoPacket) == 0x58 || sizeof(DebugInfoPacket) == 48, "size of DebugInfoPacket should be 88 or 48(default)");
static_assert(sizeof(PacketViolationWarningPacket) == 0x60 || sizeof(PacketViolationWarningPacket) == 48, "size of PacketViolationWarningPacket should be 96 or 48(default)");
static_assert(sizeof(MotionPredictionHintsPacket) == 0x48 || sizeof(MotionPredictionHintsPacket) == 48, "size of MotionPredictionHintsPacket should be 72 or 48(default)");
static_assert(sizeof(AnimateEntityPacket) == 0xD8 || sizeof(AnimateEntityPacket) == 48, "size of AnimateEntityPacket should be 216 or 48(default)");
static_assert(sizeof(CameraShakePacket) == 0x40 || sizeof(CameraShakePacket) == 48, "size of CameraShakePacket should be 64 or 48(default)");
static_assert(sizeof(PlayerFogPacket) == 0x48 || sizeof(PlayerFogPacket) == 48, "size of PlayerFogPacket should be 72 or 48(default)");
static_assert(sizeof(CorrectPlayerMovePredictionPacket) == 0x58 || sizeof(CorrectPlayerMovePredictionPacket) == 48, "size of CorrectPlayerMovePredictionPacket should be 88 or 48(default)");
static_assert(sizeof(ItemComponentPacket) == 0x48 || sizeof(ItemComponentPacket) == 48, "size of ItemComponentPacket should be 72 or 48(default)");
static_assert(sizeof(FilterTextPacket) == 0x58 || sizeof(FilterTextPacket) == 48, "size of FilterTextPacket should be 88 or 48(default)");
static_assert(sizeof(ClientboundDebugRendererPacket) == 0x88 || sizeof(ClientboundDebugRendererPacket) == 48, "size of ClientboundDebugRendererPacket should be 136 or 48(default)");
static_assert(sizeof(SyncActorPropertyPacket) == 0x48 || sizeof(SyncActorPropertyPacket) == 48, "size of SyncActorPropertyPacket should be 72 or 48(default)");
static_assert(sizeof(AddVolumeEntityPacket) == 0x120 || sizeof(AddVolumeEntityPacket) == 48, "size of AddVolumeEntityPacket should be 288 or 48(default)");
static_assert(sizeof(RemoveVolumeEntityPacket) == 0x40 || sizeof(RemoveVolumeEntityPacket) == 48, "size of RemoveVolumeEntityPacket should be 64 or 48(default)");
static_assert(sizeof(SimulationTypePacket) == 0x38 || sizeof(SimulationTypePacket) == 48, "size of SimulationTypePacket should be 56 or 48(default)");
static_assert(sizeof(NpcDialoguePacket) == 0xC0 || sizeof(NpcDialoguePacket) == 48, "size of NpcDialoguePacket should be 192 or 48(default)");
static_assert(sizeof(EduUriResourcePacket) == 0x70 || sizeof(EduUriResourcePacket) == 48, "size of EduUriResourcePacket should be 112 or 48(default)");
static_assert(sizeof(CreatePhotoPacket) == 0x78 || sizeof(CreatePhotoPacket) == 48, "size of CreatePhotoPacket should be 120 or 48(default)");
static_assert(sizeof(UpdateSubChunkBlocksPacket) == 0x70 || sizeof(UpdateSubChunkBlocksPacket) == 48, "size of UpdateSubChunkBlocksPacket should be 112 or 48(default)");
static_assert(sizeof(SubChunkPacket) == 0x60 || sizeof(SubChunkPacket) == 48, "size of SubChunkPacket should be 96 or 48(default)");
static_assert(sizeof(SubChunkRequestPacket) == 0x80 || sizeof(SubChunkRequestPacket) == 48, "size of SubChunkRequestPacket should be 128 or 48(default)");
static_assert(sizeof(PlayerStartItemCooldownPacket) == 0x58 || sizeof(PlayerStartItemCooldownPacket) == 48, "size of PlayerStartItemCooldownPacket should be 88 or 48(default)");
static_assert(sizeof(ScriptMessagePacket) == 0x70 || sizeof(ScriptMessagePacket) == 48, "size of ScriptMessagePacket should be 112 or 48(default)");
static_assert(sizeof(CodeBuilderSourcePacket) == 0x58 || sizeof(CodeBuilderSourcePacket) == 48, "size of CodeBuilderSourcePacket should be 88 or 48(default)");
static_assert(sizeof(TickingAreasLoadStatusPacket) == 0x38 || sizeof(TickingAreasLoadStatusPacket) == 48, "size of TickingAreasLoadStatusPacket should be 56 or 48(default)");
static_assert(sizeof(DimensionDataPacket) == 0x40 || sizeof(DimensionDataPacket) == 48, "size of DimensionDataPacket should be 64 or 48(default)");
static_assert(sizeof(AgentActionEventPacket) == 0x68 || sizeof(AgentActionEventPacket) == 48, "size of AgentActionEventPacket should be 104 or 48(default)");
static_assert(sizeof(ChangeMobPropertyPacket) == 0x88 || sizeof(ChangeMobPropertyPacket) == 48, "size of ChangeMobPropertyPacket should be 136 or 48(default)");
static_assert(sizeof(LessonProgressPacket) == 0x58 || sizeof(LessonProgressPacket) == 48, "size of LessonProgressPacket should be 88 or 48(default)");
static_assert(sizeof(RequestAbilityPacket) == 0x40 || sizeof(RequestAbilityPacket) == 48, "size of RequestAbilityPacket should be 64 or 48(default)");
static_assert(sizeof(RequestPermissionsPacket) == 0x40 || sizeof(RequestPermissionsPacket) == 48, "size of RequestPermissionsPacket should be 64 or 48(default)");
static_assert(sizeof(ToastRequestPacket) == 0x70 || sizeof(ToastRequestPacket) == 48, "size of ToastRequestPacket should be 112 or 48(default)");
static_assert(sizeof(UpdateAbilitiesPacket) == 0x58 || sizeof(UpdateAbilitiesPacket) == 48, "size of UpdateAbilitiesPacket should be 88 or 48(default)");
static_assert(sizeof(UpdateAdventureSettingsPacket) == 0x38 || sizeof(UpdateAdventureSettingsPacket) == 48, "size of UpdateAdventureSettingsPacket should be 56 or 48(default)");
static_assert(sizeof(DeathInfoPacket) == 0x68 || sizeof(DeathInfoPacket) == 48, "size of DeathInfoPacket should be 104 or 48(default)");
static_assert(sizeof(EditorNetworkPacket) == 0x48 || sizeof(EditorNetworkPacket) == 48, "size of EditorNetworkPacket should be 72 or 48(default)");
static_assert(sizeof(FeatureRegistryPacket) == 0x48 || sizeof(FeatureRegistryPacket) == 48, "size of FeatureRegistryPacket should be 72 or 48(default)");
static_assert(sizeof(ServerStatsPacket) == 0x38 || sizeof(ServerStatsPacket) == 48, "size of ServerStatsPacket should be 56 or 48(default)");
static_assert(sizeof(RequestNetworkSettingsPacket) == 0x38 || sizeof(RequestNetworkSettingsPacket) == 48, "size of RequestNetworkSettingsPacket should be 56 or 48(default)");
static_assert(sizeof(GameTestRequestPacket) == 0x90 || sizeof(GameTestRequestPacket) == 48, "size of GameTestRequestPacket should be 144 or 48(default)");
static_assert(sizeof(GameTestResultsPacket) == 0x78 || sizeof(GameTestResultsPacket) == 48, "size of GameTestResultsPacket should be 120 or 48(default)");
static_assert(sizeof(UpdateClientInputLocksPacket) == 0x40 || sizeof(UpdateClientInputLocksPacket) == 48, "size of UpdateClientInputLocksPacket should be 64 or 48(default)");
static_assert(sizeof(ClientCheatAbilityPacket) == 0x58 || sizeof(ClientCheatAbilityPacket) == 48, "size of ClientCheatAbilityPacket should be 88 or 48(default)");

#endif // SIZE_STATIC_ASSERT_IF_DEFINE
