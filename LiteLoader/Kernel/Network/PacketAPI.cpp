#include <MC/Packet.hpp>
#include <MC/MinecraftPackets.hpp>
#include <LoggerAPI.h>

#define INCLUDE_ALL_PACKET
#define SIZE_STATIC_ASSERT_IF_DEFINE
//#define SIZE_STATIC_ASSERT
#define GENERATE_PACKET
//#define FILL_PACKET

extern Logger logger;

#ifdef INCLUDE_ALL_PACKET

#include <MC/LoginPacket.hpp>
#include <MC/PlayStatusPacket.hpp>
#include <MC/ServerToClientHandshakePacket.hpp>
#include <MC/ClientToServerHandshakePacket.hpp>
#include <MC/DisconnectPacket.hpp>
#include <MC/ResourcePacksInfoPacket.hpp>
#include <MC/ResourcePackStackPacket.hpp>
#include <MC/ResourcePackClientResponsePacket.hpp>
#include <MC/TextPacket.hpp>
#include <MC/SetTimePacket.hpp>
#include <MC/StartGamePacket.hpp>
#include <MC/AddPlayerPacket.hpp>
#include <MC/AddActorPacket.hpp>
#include <MC/RemoveActorPacket.hpp>
#include <MC/AddItemActorPacket.hpp>
#include <MC/TakeItemActorPacket.hpp>
#include <MC/MoveActorAbsolutePacket.hpp>
#include <MC/MovePlayerPacket.hpp>
#include <MC/PassengerJumpPacket.hpp>
#include <MC/UpdateBlockPacket.hpp>
#include <MC/AddPaintingPacket.hpp>
#include <MC/TickSyncPacket.hpp>
#include <MC/LevelSoundEventPacketV1.hpp>
#include <MC/LevelEventPacket.hpp>
#include <MC/BlockEventPacket.hpp>
#include <MC/ActorEventPacket.hpp>
#include <MC/MobEffectPacket.hpp>
#include <MC/UpdateAttributesPacket.hpp>
#include <MC/InventoryTransactionPacket.hpp>
#include <MC/MobEquipmentPacket.hpp>
#include <MC/MobArmorEquipmentPacket.hpp>
#include <MC/InteractPacket.hpp>
#include <MC/BlockPickRequestPacket.hpp>
#include <MC/ActorPickRequestPacket.hpp>
#include <MC/PlayerActionPacket.hpp>
#include <MC/HurtArmorPacket.hpp>
#include <MC/SetActorDataPacket.hpp>
#include <MC/SetActorMotionPacket.hpp>
#include <MC/SetActorLinkPacket.hpp>
#include <MC/SetHealthPacket.hpp>
#include <MC/SetSpawnPositionPacket.hpp>
#include <MC/AnimatePacket.hpp>
#include <MC/RespawnPacket.hpp>
#include <MC/ContainerOpenPacket.hpp>
#include <MC/ContainerClosePacket.hpp>
#include <MC/PlayerHotbarPacket.hpp>
#include <MC/InventoryContentPacket.hpp>
#include <MC/InventorySlotPacket.hpp>
#include <MC/ContainerSetDataPacket.hpp>
#include <MC/CraftingDataPacket.hpp>
#include <MC/CraftingEventPacket.hpp>
#include <MC/GuiDataPickItemPacket.hpp>
#include <MC/AdventureSettingsPacket.hpp>
#include <MC/BlockActorDataPacket.hpp>
#include <MC/PlayerInputPacket.hpp>
#include <MC/LevelChunkPacket.hpp>
#include <MC/SetCommandsEnabledPacket.hpp>
#include <MC/SetDifficultyPacket.hpp>
#include <MC/ChangeDimensionPacket.hpp>
#include <MC/SetPlayerGameTypePacket.hpp>
#include <MC/PlayerListPacket.hpp>
#include <MC/SimpleEventPacket.hpp>
#include <MC/EventPacket.hpp>
#include <MC/SpawnExperienceOrbPacket.hpp>
#include <MC/ClientboundMapItemDataPacket.hpp>
#include <MC/MapInfoRequestPacket.hpp>
#include <MC/RequestChunkRadiusPacket.hpp>
#include <MC/ChunkRadiusUpdatedPacket.hpp>
#include <MC/ItemFrameDropItemPacket.hpp>
#include <MC/GameRulesChangedPacket.hpp>
#include <MC/CameraPacket.hpp>
#include <MC/BossEventPacket.hpp>
#include <MC/ShowCreditsPacket.hpp>
#include <MC/AvailableCommandsPacket.hpp>
#include <MC/CommandRequestPacket.hpp>
#include <MC/CommandBlockUpdatePacket.hpp>
#include <MC/CommandOutputPacket.hpp>
#include <MC/UpdateTradePacket.hpp>
#include <MC/UpdateEquipPacket.hpp>
#include <MC/ResourcePackDataInfoPacket.hpp>
#include <MC/ResourcePackChunkDataPacket.hpp>
#include <MC/ResourcePackChunkRequestPacket.hpp>
#include <MC/TransferPacket.hpp>
#include <MC/PlaySoundPacket.hpp>
#include <MC/StopSoundPacket.hpp>
#include <MC/SetTitlePacket.hpp>
#include <MC/AddBehaviorTreePacket.hpp>
#include <MC/StructureBlockUpdatePacket.hpp>
#include <MC/ShowStoreOfferPacket.hpp>
#include <MC/PurchaseReceiptPacket.hpp>
#include <MC/PlayerSkinPacket.hpp>
#include <MC/SubClientLoginPacket.hpp>
#include <MC/AutomationClientConnectPacket.hpp>
#include <MC/SetLastHurtByPacket.hpp>
#include <MC/BookEditPacket.hpp>
#include <MC/NpcRequestPacket.hpp>
#include <MC/PhotoTransferPacket.hpp>
#include <MC/ModalFormRequestPacket.hpp>
#include <MC/ModalFormResponsePacket.hpp>
#include <MC/ServerSettingsRequestPacket.hpp>
#include <MC/ServerSettingsResponsePacket.hpp>
#include <MC/ShowProfilePacket.hpp>
#include <MC/SetDefaultGameTypePacket.hpp>
#include <MC/RemoveObjectivePacket.hpp>
#include <MC/SetDisplayObjectivePacket.hpp>
#include <MC/SetScorePacket.hpp>
#include <MC/LabTablePacket.hpp>
#include <MC/UpdateBlockSyncedPacket.hpp>
#include <MC/MoveActorDeltaPacket.hpp>
#include <MC/SetScoreboardIdentityPacket.hpp>
#include <MC/SetLocalPlayerAsInitializedPacket.hpp>
#include <MC/UpdateSoftEnumPacket.hpp>
#include <MC/NetworkStackLatencyPacket.hpp>
#include <MC/ScriptCustomEventPacket.hpp>
#include <MC/SpawnParticleEffectPacket.hpp>
#include <MC/AvailableActorIdentifiersPacket.hpp>
#include <MC/LevelSoundEventPacketV2.hpp>
#include <MC/NetworkChunkPublisherUpdatePacket.hpp>
#include <MC/BiomeDefinitionListPacket.hpp>
#include <MC/LevelSoundEventPacket.hpp>
#include <MC/LevelEventGenericPacket.hpp>
#include <MC/LecternUpdatePacket.hpp>
#include <MC/AddEntityPacket.hpp>
#include <MC/RemoveEntityPacket.hpp>
#include <MC/ClientCacheStatusPacket.hpp>
#include <MC/OnScreenTextureAnimationPacket.hpp>
#include <MC/MapCreateLockedCopyPacket.hpp>
#include <MC/StructureTemplateDataRequestPacket.hpp>
#include <MC/StructureTemplateDataResponsePacket.hpp>
#include <MC/ClientCacheBlobStatusPacket.hpp>
#include <MC/ClientCacheMissResponsePacket.hpp>
#include <MC/EducationSettingsPacket.hpp>
#include <MC/EmotePacket.hpp>
#include <MC/MultiplayerSettingsPacket.hpp>
#include <MC/SettingsCommandPacket.hpp>
#include <MC/AnvilDamagePacket.hpp>
#include <MC/CompletedUsingItemPacket.hpp>
#include <MC/NetworkSettingsPacket.hpp>
#include <MC/PlayerAuthInputPacket.hpp>
#include <MC/CreativeContentPacket.hpp>
#include <MC/PlayerEnchantOptionsPacket.hpp>
#include <MC/ItemStackRequestPacket.hpp>
#include <MC/ItemStackResponsePacket.hpp>
#include <MC/PlayerArmorDamagePacket.hpp>
#include <MC/CodeBuilderPacket.hpp>
#include <MC/UpdatePlayerGameTypePacket.hpp>
#include <MC/EmoteListPacket.hpp>
#include <MC/PositionTrackingDBServerBroadcastPacket.hpp>
#include <MC/PositionTrackingDBClientRequestPacket.hpp>
#include <MC/DebugInfoPacket.hpp>
#include <MC/PacketViolationWarningPacket.hpp>
#include <MC/MotionPredictionHintsPacket.hpp>
#include <MC/AnimateEntityPacket.hpp>
#include <MC/CameraShakePacket.hpp>
#include <MC/PlayerFogPacket.hpp>
#include <MC/CorrectPlayerMovePredictionPacket.hpp>
#include <MC/ItemComponentPacket.hpp>
#include <MC/FilterTextPacket.hpp>
#include <MC/ClientboundDebugRendererPacket.hpp>
#include <MC/SyncActorPropertyPacket.hpp>
#include <MC/AddVolumeEntityPacket.hpp>
#include <MC/RemoveVolumeEntityPacket.hpp>
#include <MC/SimulationTypePacket.hpp>
#include <MC/NpcDialoguePacket.hpp>
#include <MC/EduUriResourcePacket.hpp>
#include <MC/CreatePhotoPacket.hpp>
#include <MC/UpdateSubChunkBlocksPacket.hpp>
#include <MC/SubChunkPacket.hpp>
#include <MC/SubChunkRequestPacket.hpp>
#include <MC/PlayerStartItemCooldownPacket.hpp>
#include <MC/ScriptMessagePacket.hpp>
#include <MC/CodeBuilderSourcePacket.hpp>
#include <MC/TickingAreasLoadStatusPacket.hpp>
#include <MC/DimensionDataPacket.hpp>
#include <MC/AgentActionEventPacket.hpp>
#include <MC/ChangeMobPropertyPacket.hpp>
#include <MC/LessonProgressPacket.hpp>
#include <MC/RequestAbilityPacket.hpp>
#include <MC/RequestPermissionsPacket.hpp>
#include <MC/ToastRequestPacket.hpp>

#endif INCLUDE_ALL_PACKET

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
    Func(AdventureSettingsPacket);                 \
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
    Func(ToastRequestPacket);      

#define DeclearClass(packet) class packet;

ForEachPacket(DeclearClass);

#pragma endregion

#ifdef GENERATE_PACKET

template <typename T>
inline void* VFTABLE_ADDR;
template <typename T>
inline size_t PACKET_SIZE;

inline void __initPacketVftable()
{
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define INIT_ADDR(type) \
    VFTABLE_ADDR<type> = dlsym_real("??_7" #type "@@6B@");

    ForEachPacket(INIT_ADDR);

#undef INIT_ADDR
}

template <typename T>
inline void* getVftableAddr()
{
    __initPacketVftable();
    return VFTABLE_ADDR<T>;
}

void __initPacketSize()
{
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define SET_PACKET_SIZE(type)                            \
    if (getVftableAddr<type>() == *(void**)packet.get()) \
    {                                                    \
        PACKET_SIZE<type> = size - 16;                   \
        continue;                                        \
    }
    int packetId = -1;
    while (packetId < 200)
    {
        auto packet = MinecraftPackets::createPacket(++packetId);
        if (packet)
        {
            auto size = _msize((void**)packet.get() - 2);

            ForEachPacket(SET_PACKET_SIZE);
            __debugbreak();
        }
    }
#undef SET_PACKET_SIZE
}

std::string getClassName(Packet* packet)
{
#define RETURN_IF_FIND(type)                             \
    if (getVftableAddr<class type>() == *(void**)packet) \
        return #type;
    ForEachPacket(RETURN_IF_FIND);
    __debugbreak();
    return fmt::format("Unknown({})", packet->getId());
#undef RETURN_IF_FIND
}

inline void forEachPacket(std::function<void(Packet const& packet, std::string className, size_t size)> callback)
{
    int packetId = 0;
    while (packetId < 200)
    {
        auto packet = MinecraftPackets::createPacket(packetId);
        if (packet)
        {
            auto size = _msize((void**)packet.get() - 2);
            //logger.warn("Packet: {},{},{},{},{}", magic_enum::enum_name((MinecraftPacketIds)packetId), packet->getName(), getClassName(packet.get()), packetId, size);

            auto className = getClassName(packet.get());
            callback(*packet, className, size - 16);
        }
        packetId++;
    }
}

template <typename T>
inline size_t getPacketSize()
{
    __initPacketSize();
    return PACKET_SIZE<T>;
}

#pragma region Packet Command

#include <DynamicCommandAPI.h>
#include <MC/Minecraft.hpp>
#include <filesystem>
#include <Utils/FileHelper.h>
using Param = DynamicCommand::ParameterData;
using ParamType = DynamicCommand::ParameterType;
using ParamIndex = DynamicCommandInstance::ParameterIndex;
using Result = DynamicCommand::Result;

inline bool replaceString(std::string& content, std::string const& start, std::string const& end, std::string const& str, size_t offset = 0, bool exclude = true)
{
    auto startOffset = content.find(start, offset);
    if (startOffset == content.npos)
        return false;
    if (exclude)
        startOffset += start.size();
    auto endOffset = end.empty() ? content.npos : content.find(end, startOffset);

    if (endOffset != content.npos && !exclude)
    {
        endOffset += sizeof(end);
    }
    content.replace(startOffset, endOffset - startOffset, str);
    return true;

}

void autoGenerate()
{
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
        oss << fmt::format("#include <MC/{}.hpp>\n", className);
    });
    oss << std::endl;
    replaceString(content, "#ifdef INCLUDE_ALL_PACKET\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    WriteAllFile(__FILE__, content, false);
}
template <typename T>
void __autoFill(std::string const& className)
{
    if (sizeof(T) == getPacketSize<T>())
        return;

    std::filesystem::path McDir = std::filesystem::path(__FILEW__).parent_path().parent_path().parent_path().append("Header").append("MC");

    std::filesystem::path filePath = McDir.append(fmt::format("{}.hpp", className));
    auto file = ReadAllFile(filePath.string());
    if (!file)
    {
        __debugbreak();
        return;
    }
    auto& content = file.value();
    size_t fillerSize = getPacketSize<T>() - sizeof(T);
    std::string filler = fmt::format("    char filler[{}];\n", getPacketSize<T>() - 48);

    auto startOffset = content.find("// Add Member There");
    if (startOffset == content.npos)
    {
        startOffset = content.find("#define AFTER_EXTRA");
        if (startOffset == content.npos)
        {
            __debugbreak();
            return;
        }
        filler = "// Add Member There\n" + filler;
    }

    startOffset += std::string("// Add Member There").size()+1;
    auto endOffset = content.find("#undef", startOffset);

    if (sizeof(T) != 48)
    {
        replaceString(content, "filler[", "]", std::to_string(getPacketSize<T>()-48));
    }
    else
    {
        if (content.substr(startOffset, endOffset - startOffset) != "\n")
        {
            startOffset = content.find("\n\n", startOffset)+1;
            __debugbreak();
        }
        content.insert(startOffset, filler);
    }
    logger.warn("add or change filler in file {}, size: {} ", filePath.filename().string(), getPacketSize<T>() - 48);
    WriteAllFile(filePath.string(), content);
    return;
}
void autoFill()
{
#ifdef FILL_PACKET

#define AUTO_FILL(type)\
    __autoFill<type>(#type);
    ForEachPacket(AUTO_FILL);
#undef AUTO_FILL;

#endif // FILL_PACKET
}

void onExecute(DynamicCommand const& cmd, CommandOrigin const& origin, CommandOutput& output,
               std::unordered_map<std::string, Result>& results)
{
    autoGenerate();
    autoFill();
    output.success("Generate finished");
}

TClasslessInstanceHook2("SetupPacketCommand_startServerThread", void, "?startServerThread@ServerInstance@@QEAAXXZ")
{
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
static_assert(sizeof(StartGamePacket) == 0x508, "size of StartGamePacket should be 1288");
static_assert(sizeof(AddPlayerPacket) == 0x378, "size of AddPlayerPacket should be 888");
static_assert(sizeof(AddActorPacket) == 0x180, "size of AddActorPacket should be 384");
static_assert(sizeof(RemoveActorPacket) == 0x38, "size of RemoveActorPacket should be 56");
static_assert(sizeof(AddItemActorPacket) == 0x118, "size of AddItemActorPacket should be 280");
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
static_assert(sizeof(MobEquipmentPacket) == 0xE0, "size of MobEquipmentPacket should be 224");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x298, "size of MobArmorEquipmentPacket should be 664");
static_assert(sizeof(InteractPacket) == 0x50, "size of InteractPacket should be 80");
static_assert(sizeof(BlockPickRequestPacket) == 0x40, "size of BlockPickRequestPacket should be 64");
static_assert(sizeof(ActorPickRequestPacket) == 0x40, "size of ActorPickRequestPacket should be 64");
static_assert(sizeof(PlayerActionPacket) == 0x58, "size of PlayerActionPacket should be 88");
static_assert(sizeof(HurtArmorPacket) == 0x40, "size of HurtArmorPacket should be 64");
static_assert(sizeof(SetActorDataPacket) == 0x58, "size of SetActorDataPacket should be 88");
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
static_assert(sizeof(InventorySlotPacket) == 0xD0, "size of InventorySlotPacket should be 208");
static_assert(sizeof(ContainerSetDataPacket) == 0x40, "size of ContainerSetDataPacket should be 64");
static_assert(sizeof(CraftingDataPacket) == 0x98, "size of CraftingDataPacket should be 152");
static_assert(sizeof(CraftingEventPacket) == 0x78, "size of CraftingEventPacket should be 120");
static_assert(sizeof(GuiDataPickItemPacket) == 0x78, "size of GuiDataPickItemPacket should be 120");
static_assert(sizeof(AdventureSettingsPacket) == 0x50, "size of AdventureSettingsPacket should be 80");
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
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xB8, "size of ClientboundMapItemDataPacket should be 184");
static_assert(sizeof(MapInfoRequestPacket) == 0x38, "size of MapInfoRequestPacket should be 56");
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
static_assert(sizeof(PlayerSkinPacket) == 0x2E8, "size of PlayerSkinPacket should be 744");
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
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x40, "size of NetworkChunkPublisherUpdatePacket should be 64");
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
static_assert(sizeof(NetworkSettingsPacket) == 0x38, "size of NetworkSettingsPacket should be 56");
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
static_assert(sizeof(StartGamePacket) == 0x508 || sizeof(StartGamePacket) == 48, "size of StartGamePacket should be 1288 or 48(default)");
static_assert(sizeof(AddPlayerPacket) == 0x378 || sizeof(AddPlayerPacket) == 48, "size of AddPlayerPacket should be 888 or 48(default)");
static_assert(sizeof(AddActorPacket) == 0x180 || sizeof(AddActorPacket) == 48, "size of AddActorPacket should be 384 or 48(default)");
static_assert(sizeof(RemoveActorPacket) == 0x38 || sizeof(RemoveActorPacket) == 48, "size of RemoveActorPacket should be 56 or 48(default)");
static_assert(sizeof(AddItemActorPacket) == 0x118 || sizeof(AddItemActorPacket) == 48, "size of AddItemActorPacket should be 280 or 48(default)");
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
static_assert(sizeof(MobEquipmentPacket) == 0xE0 || sizeof(MobEquipmentPacket) == 48, "size of MobEquipmentPacket should be 224 or 48(default)");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x298 || sizeof(MobArmorEquipmentPacket) == 48, "size of MobArmorEquipmentPacket should be 664 or 48(default)");
static_assert(sizeof(InteractPacket) == 0x50 || sizeof(InteractPacket) == 48, "size of InteractPacket should be 80 or 48(default)");
static_assert(sizeof(BlockPickRequestPacket) == 0x40 || sizeof(BlockPickRequestPacket) == 48, "size of BlockPickRequestPacket should be 64 or 48(default)");
static_assert(sizeof(ActorPickRequestPacket) == 0x40 || sizeof(ActorPickRequestPacket) == 48, "size of ActorPickRequestPacket should be 64 or 48(default)");
static_assert(sizeof(PlayerActionPacket) == 0x58 || sizeof(PlayerActionPacket) == 48, "size of PlayerActionPacket should be 88 or 48(default)");
static_assert(sizeof(HurtArmorPacket) == 0x40 || sizeof(HurtArmorPacket) == 48, "size of HurtArmorPacket should be 64 or 48(default)");
static_assert(sizeof(SetActorDataPacket) == 0x58 || sizeof(SetActorDataPacket) == 48, "size of SetActorDataPacket should be 88 or 48(default)");
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
static_assert(sizeof(InventorySlotPacket) == 0xD0 || sizeof(InventorySlotPacket) == 48, "size of InventorySlotPacket should be 208 or 48(default)");
static_assert(sizeof(ContainerSetDataPacket) == 0x40 || sizeof(ContainerSetDataPacket) == 48, "size of ContainerSetDataPacket should be 64 or 48(default)");
static_assert(sizeof(CraftingDataPacket) == 0x98 || sizeof(CraftingDataPacket) == 48, "size of CraftingDataPacket should be 152 or 48(default)");
static_assert(sizeof(CraftingEventPacket) == 0x78 || sizeof(CraftingEventPacket) == 48, "size of CraftingEventPacket should be 120 or 48(default)");
static_assert(sizeof(GuiDataPickItemPacket) == 0x78 || sizeof(GuiDataPickItemPacket) == 48, "size of GuiDataPickItemPacket should be 120 or 48(default)");
static_assert(sizeof(AdventureSettingsPacket) == 0x50 || sizeof(AdventureSettingsPacket) == 48, "size of AdventureSettingsPacket should be 80 or 48(default)");
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
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xB8 || sizeof(ClientboundMapItemDataPacket) == 48, "size of ClientboundMapItemDataPacket should be 184 or 48(default)");
static_assert(sizeof(MapInfoRequestPacket) == 0x38 || sizeof(MapInfoRequestPacket) == 48, "size of MapInfoRequestPacket should be 56 or 48(default)");
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
static_assert(sizeof(PlayerSkinPacket) == 0x2E8 || sizeof(PlayerSkinPacket) == 48, "size of PlayerSkinPacket should be 744 or 48(default)");
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
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x40 || sizeof(NetworkChunkPublisherUpdatePacket) == 48, "size of NetworkChunkPublisherUpdatePacket should be 64 or 48(default)");
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
static_assert(sizeof(NetworkSettingsPacket) == 0x38 || sizeof(NetworkSettingsPacket) == 48, "size of NetworkSettingsPacket should be 56 or 48(default)");
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

#endif // SIZE_STATIC_ASSERT_IF_DEFINE
