#include "ll/api/io/Pipe.h"

#include "ll/api/utils/RandomUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "Windows.h"

namespace ll::io {

static void createWinPipe(HANDLE& hRead, HANDLE& hWrite, size_t size, bool nowait) {
    std::wstring pipeName           = LR"(\\.\pipe\LOCAL\levilamina-pipe-)";
    pipeName                       += string_utils::str2wstr(string_utils::intToHexStr(random_utils::rand<uint64>()));
    SECURITY_ATTRIBUTES attributes  = {sizeof(SECURITY_ATTRIBUTES), 0, false};
    hRead                           = ::CreateNamedPipe(
        pipeName.c_str(),
        PIPE_ACCESS_INBOUND | FILE_FLAG_OVERLAPPED,
        PIPE_TYPE_BYTE | (PIPE_NOWAIT & nowait),
        1,
        0,
        (DWORD)size,
        0,
        &attributes
    );
    SECURITY_ATTRIBUTES attributes2 = {sizeof(SECURITY_ATTRIBUTES), 0, true};
    hWrite = ::CreateFile(pipeName.c_str(), GENERIC_WRITE, 0, &attributes2, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, NULL);

    ::ConnectNamedPipe(hRead, NULL);
}

Pipe::Pipe(size_t size, bool nowait) { createWinPipe(hRead, hWrite, size, nowait); }

Pipe::~Pipe() { ::DisconnectNamedPipe(hRead); }

std::string Pipe::read() {
    std::string result;
    BOOL        fSuccess;
    do {
        char  buf[4096];
        DWORD cbRead{0};

        // Read from the pipe.
        fSuccess = ReadFile(hRead, buf, sizeof(buf), &cbRead, NULL);

        if (cbRead > 0) result.append(buf, cbRead);

    } while (GetLastError() == ERROR_MORE_DATA); // repeat loop if ERROR_MORE_DATA
    return result;
}
void Pipe::write(std::string_view data) {
    DWORD written;
    WriteFile(hWrite, data.data(), (DWORD)data.size(), &written, nullptr);
}
} // namespace ll::io
