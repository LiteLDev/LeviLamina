#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
    class ServerPlayer;
    class Player;
    class NetworkIdentifier;
    class UserEntityIdentifierComponent;
    class Certificate;
#else
// Add new members to class
public:
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI Certificate* getCert();
    LIAPI std::string getRealName();
    LIAPI int getAvgPing();
    LIAPI int getLastPing();
    LIAPI string getLanguageCode();
    LIAPI string getDeviceName();
    LIAPI void forceKick(string);
    LIAPI void setItemLore(vector<string>&);
    template <typename T>
    inline  bool runcmd(T&& str) {
        return Level::runcmdAs(this, std::forward<T>(str));
    }
    template <typename... T>
    inline bool runcmdA(T&&... a) {
        return Level::runcmdAsA(*this, std::forward<T>(a)...);
    }
#endif