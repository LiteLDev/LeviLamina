#include "ll/core/network/ProtocolCompatibility.h"

#include <cstdint>
#include <string_view>

namespace ll::protocol_compatibility {

bool rewriteHandshake(std::string& data, int targetProtocol) {
    if (targetProtocol != 2168 && targetProtocol != 2169) return false;
    std::uint32_t header{};
    std::size_t   offset{};
    for (unsigned shift = 0;; shift += 7) {
        if (offset == data.size() || shift >= 35) return false;
        auto byte = static_cast<unsigned char>(data[offset++]);
        if (shift == 28 && byte > 0x0f) return false;
        header |= std::uint32_t(byte & 0x7f) << shift;
        if ((byte & 0x80) == 0) break;
    }
    auto id = header & 0x3ff;
    if (header > 0x3fff || (id != 1 && id != 193) || data.size() - offset < 4) return false;
    if (id == 193 && data.size() - offset != 4) return false;
    auto version = std::string_view{data}.substr(offset, 4);
    if (version != std::string_view{"\x00\x00\x08\x78", 4} && version != std::string_view{"\x00\x00\x08\x79", 4})
        return false;
    auto value = static_cast<char>(targetProtocol & 0xff);
    if (data[offset + 3] == value) return false;
    // 2168 和 2169 的端协议号仅最后一个字节不同。
    data[offset + 3] = value;
    return true;
}

} // namespace ll::protocol_compatibility
