#include "ll/api/thread/ThreadName.h"
#include "ll/api/utils/StringUtils.h"

#include "Windows.h"

namespace ll::thread {
std::optional<std::string> getThreadName(std::thread::id id) {
    std::optional<std::string> res;

    auto tid = id._Get_underlying_id();

    HANDLE thread =
        tid == GetCurrentThreadId() ? GetCurrentThread() : OpenThread(THREAD_SET_LIMITED_INFORMATION, FALSE, tid);
    if (!thread) {
        return res;
    }
    PWSTR   data;
    HRESULT hr = GetThreadDescription(thread, &data);
    if (SUCCEEDED(hr)) {
        res = string_utils::wstr2str(data);
        LocalFree(data);
    }
    if (tid != GetCurrentThreadId()) {
        CloseHandle(thread);
    }
    return res;
}
bool setThreadName(std::string_view name, std::thread::id id) {

    auto tid = id._Get_underlying_id();

    HANDLE thread =
        tid == GetCurrentThreadId() ? GetCurrentThread() : OpenThread(THREAD_SET_LIMITED_INFORMATION, FALSE, tid);
    if (!thread) {
        return false;
    }
    auto res = SetThreadDescription(thread, string_utils::str2wstr(name).c_str());

    if (tid != GetCurrentThreadId()) {
        CloseHandle(thread);
    }
    return SUCCEEDED(res);
}
} // namespace ll::thread
