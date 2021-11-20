#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
    class ServerPlayer;
    class Player;
    class NetworkIdentifier;
    class UserEntityIdentifierComponent;
    class Certificate;
#else
// Add new members to class
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI Certificate* getCert();
    //LIAPI xuid_t       getXuid();
    LIAPI std::string getRealName();
#endif