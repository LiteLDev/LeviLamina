#pragma once

#include "ll/api/Expected.h"

namespace Json {
class Value;
}

namespace ll::protocol::detail {

Expected<> addClientDiscoveryMarker(Json::Value& root);

} // namespace ll::protocol::detail
