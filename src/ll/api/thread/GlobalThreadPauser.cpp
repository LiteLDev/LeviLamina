#include "ll/api/thread/GlobalThreadPauser.h"

#include "ll/api/base/ErrorInfo.h"

#include "windows.h"

#include "tlhelp32.h"

namespace ll::thread {
GlobalThreadPauser::GlobalThreadPauser() {
    HANDLE h = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (h == INVALID_HANDLE_VALUE) {
        throw error_info::getWinLastError();
    }
    static auto processId = GetCurrentProcessId();
    auto        threadId  = GetCurrentThreadId();

    THREADENTRY32 te;
    te.dwSize = sizeof(te);
    if (Thread32First(h, &te)) {
        do {
            if (te.dwSize >= offsetof(THREADENTRY32, th32OwnerProcessID) + sizeof(te.th32OwnerProcessID)) {
                // Suspend all threads EXCEPT the one we want to keep running
                if (te.th32OwnerProcessID == processId && te.th32ThreadID != threadId) {
                    HANDLE thread = OpenThread(THREAD_ALL_ACCESS, false, te.th32ThreadID);
                    if (thread != nullptr) {
                        SuspendThread(thread);
                        CloseHandle(thread);
                        pausedIds.emplace_back(te.th32ThreadID);
                    }
                }
            }
            te.dwSize = sizeof(te);
        } while (Thread32Next(h, &te));
    }
    CloseHandle(h);
}
GlobalThreadPauser::~GlobalThreadPauser() {
    for (auto id : pausedIds) {
        HANDLE thread = OpenThread(THREAD_ALL_ACCESS, false, id);
        if (thread != nullptr) {
            ResumeThread(thread);
            CloseHandle(thread);
        }
    }
}

} // namespace ll::thread
