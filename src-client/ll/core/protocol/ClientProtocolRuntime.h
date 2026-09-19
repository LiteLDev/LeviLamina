#pragma once

#include "ll/api/Expected.h"

namespace ll::protocol::client {

[[nodiscard]] Expected<> initialize();
void                     shutdown();

} // namespace ll::protocol::client
