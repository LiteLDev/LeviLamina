#include "ll/api/service/ProcessStatus.h"

namespace ll {
static std::atomic<ProcessStatus> status;
void                              setProcessStatus(ProcessStatus value) { status = value; }
ProcessStatus                     getProcessStatus() { return status.load(); }
} // namespace ll
