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
    LIAPI void sendText(string text, TextType Type);
    LIAPI void sendTitle(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration);
    LIAPI void sendNote(unsigned int tone);
    template <typename T>
    inline bool runcmd(T&& str) {
        return Level::runcmdAs(this, std::forward<T>(str));
    }
    template <typename... T>
    inline bool runcmdA(T&&... a) {
        return Level::runcmdAsA(*this, std::forward<T>(a)...);
    }
#endif