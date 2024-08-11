#include "ll/api/io/StdoutRedirector.h"

#include "ll/api/utils/RandomUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "Windows.h"

#include "fcntl.h"
#include "io.h"

namespace ll::io {

static void createWinPipe(HANDLE& hRead, HANDLE& hWrite) {
    std::wstring pipeName           = LR"(\\.\pipe\stdoutredirector-levilamina-)";
    pipeName                       += string_utils::str2wstr(string_utils::intToHexStr(random_utils::rand<uint64>()));
    SECURITY_ATTRIBUTES attributes  = {sizeof(SECURITY_ATTRIBUTES), 0, false};
    hRead                           = ::CreateNamedPipe(
        pipeName.c_str(),
        PIPE_ACCESS_INBOUND | FILE_FLAG_OVERLAPPED,
        PIPE_TYPE_BYTE | PIPE_WAIT,
        1,
        0,
        1024 * 1024,
        0,
        &attributes
    );
    SECURITY_ATTRIBUTES attributes2 = {sizeof(SECURITY_ATTRIBUTES), 0, true};
    hWrite = ::CreateFile(pipeName.c_str(), GENERIC_WRITE, 0, &attributes2, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, NULL);

    ::ConnectNamedPipe(hRead, NULL);
}

StdoutRedirector::StdoutRedirector(ProcessChannel channels) : m_channels(channels) {
    createWinPipe(hRead, hWrite);
    if (m_channels & StandardOutput) {
        setvbuf(stdout, NULL, _IONBF, 0);
        ::SetStdHandle(STD_OUTPUT_HANDLE, hWrite);
    }
    if (m_channels & StandardError) {
        setvbuf(stderr, NULL, _IONBF, 0);
        ::SetStdHandle(STD_ERROR_HANDLE, hWrite);
    }

    int fd = _open_osfhandle((intptr_t)hWrite, _O_WRONLY | _O_U8TEXT);
    if (m_channels & StandardOutput) _dup2(fd, 1);
    if (m_channels & StandardError) _dup2(fd, 2);
    _close(fd);
}

StdoutRedirector::~StdoutRedirector() {
    ::DisconnectNamedPipe(hRead);
    if (m_channels & StandardOutput) {
        FILE* s;
        freopen_s(&s, "CONOUT$", "w+t", stdout);
    }
    if (m_channels & StandardError) {
        FILE* s;
        freopen_s(&s, "CONOUT$", "w+t", stderr);
    }
}

std::string StdoutRedirector::read() {
    std::string result;
    BOOL        fSuccess;
    do {
        // Read from the pipe.

        char  buf[4096];
        DWORD cbRead{0};

        fSuccess = ReadFile(hRead, buf, sizeof(buf), &cbRead, NULL);

        result.append(buf, cbRead);

        if (!fSuccess && GetLastError() != ERROR_MORE_DATA) break;
    } while (!fSuccess); // repeat loop if ERROR_MORE_DATA
    return result;
}
} // namespace ll::io
