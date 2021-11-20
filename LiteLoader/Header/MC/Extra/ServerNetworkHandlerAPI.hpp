//Extra Part For ServerNetworkHandler.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here


#else
// Add Member There
public:
inline class ServerPlayer* getServerPlayer(class NetworkIdentifier const& a0) {
        return _getServerPlayer(a0, 0);
    }

#endif
