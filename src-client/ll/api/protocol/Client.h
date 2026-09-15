#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/protocol/Session.h"

namespace ll::protocol::client {

LLNDAPI Expected<Session> currentSession();

} // namespace ll::protocol::client
