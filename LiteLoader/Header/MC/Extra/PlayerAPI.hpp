#ifdef EXTRA_INCLUDE_PART_PLAYER
// Add include headers & pre-declares
    class ServerPlayer;
    class Player;
    class NetworkIdentifier;
    class UserEntityIdentifierComponent;
    class Certificate;
#else
// Add new members to class
public:
    LIAPI std::string getName();
    LIAPI std::string getRealName();
    //LIAPI std::string getXuid();
    LIAPI std::string getUuid();
    //LIAPI int getCommandPermissionLevel();
    //LIAPI xx setPermissions(int);
    //LIAPI int getPlayerGameType(); setPlayerGameType();
    //LIAPI bool isSneaking();
    //LIAPI bool kill();

    LIAPI void kick(string msg);
    
    LIAPI string getDeviceName();
    LIAPI int getAvgPing();
    LIAPI int getLastPing();
    LIAPI string getLanguageCode();
    
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI Certificate* getCert();

    //Packet
    LIAPI void sendTextPacket(string text, TextType Type = TextType::RAW);
    LIAPI void sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration);
    LIAPI void sendNotePacket(unsigned int tone);
    LIAPI void sendSpawnParticleEffectPacket(Vec3 spawnpos, int dimid, string ParticleName, int64_t EntityUniqueID = -1);
    /*bad*/ LIAPI void sendPlaySoundPacket(string Soundname, Vec3 Position, float Volume, float Pitch);
    LIAPI void sendAddItemEntityPacket(unsigned long long runtimeid, int itemid, int stacksize, short aux, Vec3 pos, vector<FakeDataItem> DataItem = {});
    LIAPI void sendAddEntityPacket(unsigned long long runtimeid, string entitytype, Vec3 pos, Vec3 rotation, vector<FakeDataItem> DataItem = {});
    LIAPI void sendUpdateBlockPacket(BlockPos vec3, int blockid, UpdateBlockFlags UpdateBlockType = UpdateBlockFlags::BlockUpdateNetwork, int Layer = 0);
    LIAPI void sendBlockActorDataPacket(BlockPos blockpos, CompoundTag* nametag);
    LIAPI void sendContainerOpenPacket(BlockPos blockpos, unsigned char windowsid, ContainerType type, int64_t ContainerEntityUniqueID);
    template <typename T>
    inline bool runcmd(T&& str) {
        return Level::runcmdAs(this, std::forward<T>(str));
    }
    template <typename... T>
    inline bool runcmdA(T&&... a) {
        return Level::runcmdAsA(*this, std::forward<T>(a)...);
    }
#endif