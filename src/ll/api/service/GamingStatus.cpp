#include "ll/api/service/GamingStatus.h"

namespace ll {
static std::atomic<GamingStatus> status;
void                             setGamingStatus(GamingStatus value) { status = value; }
GamingStatus                     getGamingStatus() { return status.load(); }
} // namespace ll
