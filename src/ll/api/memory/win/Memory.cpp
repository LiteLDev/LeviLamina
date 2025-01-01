#include "ll/api/memory/Memory.h"

#include <optional>
#include <vector>

#include "ll/api/io/Logger.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "pl/SymbolProvider.h"

#include "Windows.h"

namespace ll::memory {

void modify(void* ptr, size_t len, brstd::function_ref<void()> callback) {
    std::optional<thread::GlobalThreadPauser> pauser;
    if (getGamingStatus() != GamingStatus::Default) {
        pauser.emplace();
    }
    DWORD oldProtect;
    VirtualProtect(ptr, len, PAGE_EXECUTE_READWRITE, &oldProtect);
    callback();
    VirtualProtect(ptr, len, oldProtect, &oldProtect);
}
} // namespace ll::memory
