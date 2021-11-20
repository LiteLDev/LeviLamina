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
#endif