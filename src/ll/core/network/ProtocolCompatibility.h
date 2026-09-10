#pragma once

#include <string>

namespace ll::protocol_compatibility {

bool rewriteHandshake(std::string& data, int targetProtocol);

} // namespace ll::protocol_compatibility
