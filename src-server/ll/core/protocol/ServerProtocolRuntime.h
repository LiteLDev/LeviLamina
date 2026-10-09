#pragma once

#include "ll/api/Expected.h"

namespace ll::protocol::server {

[[nodiscard]] Expected<> initialize();
void                     shutdown();

} // namespace ll::protocol::server
