//Extra Part For Connector.hpp
#ifdef EXTRA_INCLUDE_PART_CONNECTOR
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class ConnectionStateListener {
public:
    ConnectionStateListener() = delete;
    ConnectionStateListener(ConnectionStateListener const&) = delete;
    ConnectionStateListener(ConnectionStateListener const&&) = delete;
};
struct NatPunchInfo {
    NatPunchInfo() = delete;
    NatPunchInfo(NatPunchInfo const&) = delete;
    NatPunchInfo(NatPunchInfo const&&) = delete;
};

#endif
