#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
    class Actor;
    class ActorDamageSource;
    class ItemStack;
    class ItemActor;
    class Block;
    class Tag;
    class Player;
    class BlockSource;
#else
// Add new members to class
static void dummy() {
}
struct ServerCommandOrigin {
    void* myVTBL;
    void* UUID[2];
    ServerLevel* lvl;
    string Name;
    unsigned char Perm;
    static void* fake_vtbl[26];
    ServerCommandOrigin() {
        if (fake_vtbl[1] == nullptr) {
            memcpy(fake_vtbl, (void**)(SYM("??_7ServerCommandOrigin@@6B@")) - 1,
                   sizeof(fake_vtbl));
            fake_vtbl[1] = (void*)dummy;
        }
        myVTBL = fake_vtbl + 1;
        Name = "Server";
        Perm = 5;
        lvl = GlobalImpl<ServerLevel>::_srv;
    }
};

public:
    LIAPI static BlockSource* getBlockSource(int dimid);
    LIAPI static BlockSource* getBlockSource(Actor* actor);
    LIAPI static Actor* getDamageSourceEntity(ActorDamageSource* ads);
    
    LIAPI static bool setBlock(IntVec4 pos, Block* block);
    LIAPI static bool setBlock(IntVec4 pos, const string &name, unsigned short tileData);
    LIAPI static bool setBlock(IntVec4 pos, Tag* nbt);

    LIAPI static bool spawnParticle(FloatVec4 pos, const string& type);

    LIAPI static bool runcmdAs(Player* pl, const string& cmd);
    LIAPI static std::pair<bool, string> runcmdEx(const string& cmd);
    LIAPI static bool runcmd(const string& cmd);
    LIAPI std::vector<Player*> getAllPlayers();
    template <typename... T>
    static inline bool runcmdA(T&&... a) {
        string s;
        (APPEND(s, std::forward<T>(a)), ...);
        return runcmd(s);
    }
    template <typename N, typename... T>
    static inline bool runcmdAsA(N p, T&&... a) {
        string s;
        (APPEND(s, std::forward<T>(a)), ...);
        return runcmdAs(p, s);
    }

#endif
