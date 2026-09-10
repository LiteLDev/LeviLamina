#include "ll/core/network/ProtocolCompatibility.h"

#include <algorithm>

#include "ll/api/Versions.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"
#include "mc/network/NetworkConnection.h"
#include "mc/network/packet/SetScorePacket.h"

namespace ll::protocol_compatibility {

LL_AUTO_TYPE_INSTANCE_HOOK(
    ReceiveCompatibleHandshake,
    HookPriority::Normal,
    NetworkConnection,
    &NetworkConnection::receivePacket,
    NetworkPeer::DataStatus,
    std::string&                                                  data,
    std::shared_ptr<std::chrono::steady_clock::time_point> const& timepoint
) {
    auto status = origin(data, timepoint);
    if (status == NetworkPeer::DataStatus::HasData && mType == NetworkConnection::Type::Remote
        && getLeviConfig().modules.protocolCompatibility) {
        rewriteHandshake(data, getNetworkProtocolVersion());
    }
    return status;
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    WriteCompatibleScores,
    HookPriority::Normal,
    SetScorePacket,
    &SetScorePacket::$writeWithSerializationMode,
    void,
    BinaryStream&                    stream,
    cereal::ReflectionCtx const&     reflectionCtx,
    std::optional<SerializationMode> overrideMode
) {
    if (!getLeviConfig().modules.protocolCompatibility
        || std::none_of(mScoreInfo->begin(), mScoreInfo->end(), [](auto const& info) {
               auto remove = std::get_if<RemoveScore>(&info);
               return remove && remove->mObjectiveName->has_value();
           })) {
        return origin(stream, reflectionCtx, overrideMode);
    }
    // 26.40 在 objective 缺省时只写入一个 false，26.44 和 26.45 均能读取。
    WriteCompatibleScores translated{};
    auto                  scoreInfo = *mScoreInfo;
    translated.mScoreInfo->swap(scoreInfo);
    translated.mSerializationMode = mSerializationMode;
    for (auto& info : *translated.mScoreInfo) {
        if (auto remove = std::get_if<RemoveScore>(&info)) remove->mObjectiveName->reset();
    }
    translated.origin(stream, reflectionCtx, overrideMode);
}

} // namespace ll::protocol_compatibility
