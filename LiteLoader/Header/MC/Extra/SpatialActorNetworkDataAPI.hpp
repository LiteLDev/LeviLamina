//Extra Part For SpatialActorNetworkData.hpp
#ifdef EXTRA_INCLUDE_PART_SPATIALACTORNETWORKDATA
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct DebugSpatialPacketModifiers {
    DebugSpatialPacketModifiers() = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&) = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&&) = delete;
};
struct DebugSendRateModifiers {
    DebugSendRateModifiers() = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&) = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&&) = delete;
};

#endif
