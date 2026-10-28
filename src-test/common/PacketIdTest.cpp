#include "gtest/gtest.h"

#include <string_view>

#include "ll/api/network/packet/Packet.h"
#include "ll/api/reflection/TypeName.h"

namespace ll::network::test {

struct DefaultIdPacket : Packet {};

struct CustomIdPacket : Packet {
    static constexpr std::string_view CustomPacketId{"test:custom_id"};
};

static_assert(getPacketId<DefaultIdPacket> == reflection::type_unprefix_name_v<DefaultIdPacket>);
static_assert(getPacketId<CustomIdPacket> == "test:custom_id");
static_assert(getPacketId<CustomIdPacket const&> == "test:custom_id");

static_assert(makePacketRuntimeId("test:custom_id") == hash_utils::doHash("test:custom_id"));
static_assert(makePacketRuntimeId("test:custom_id", 1) != makePacketRuntimeId("test:custom_id"));
static_assert(makePacketRuntimeId("test:custom_id", 1) != makePacketRuntimeId("test:custom_id", 2));

TEST(PacketIdTest, CustomIdIsAvailableAtRuntime) {
    EXPECT_EQ(getPacketId<CustomIdPacket>, "test:custom_id");
    EXPECT_NE(getPacketId<DefaultIdPacket>, getPacketId<CustomIdPacket>);
}

} // namespace ll::network::test
